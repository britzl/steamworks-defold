#!/usr/bin/env python

import pystache
import re
import json
import codecs
import HTMLParser


def to_snake_case(name):
    s1 = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', name)
    return re.sub('([a-z0-9])([A-Z])', r'\1_\2', s1).lower()


def parse_methods(methods):
    INCLUDED_CLASSES = ["ISteamUser", "ISteamFriends"]
    DEPRECATED_METHODS = ["TrackAppUsageEvent", "GetUserDataFolder", "InitiateGameConnection"]
    SKIP_METHODS = ["GetVoice", "DecompressVoice", "StartVoiceRecording", "StopVoiceRecording", "GetAvailableVoice", "GetVoiceOptimalSampleRate", ""]
    m = []
    for method in methods:
        classname = method.get("classname")
        methodname = method.get("methodname")
        if classname in INCLUDED_CLASSES and methodname not in DEPRECATED_METHODS and methodname not in SKIP_METHODS:
            method["classname_lower"] = to_snake_case(classname.replace("ISteam", "")).lower()
            method["methodname_lower"] = to_snake_case(methodname).lower()
            method["paramnames"] = []
            method["paramnames_in"] = []
            if method.get("params") is not None:
                method["paramcount"] = len(method.get("params"))
                p = []
                out_array_call_params = []
                for param in method.get("params"):
                    paramname = param.get("paramname")
                    paramtype = param.get("paramtype")
                    # A struct that will be populated with data by the method
                    if param.get("out_struct") is not None:
                        param["paramtype"] = paramtype.replace(" *", "")
                        p.append(param)
                        method["paramnames"].append("&" + paramname)
                    # An array to be populated by the method
                    # The size of the array is retrieved through a separate function call
                    elif param.get("out_array_call") is not None:
                        counter, function, params = param.get("out_array_call").split(",")
                        out_array_call_params.append(counter)
                        param["out_array_call_counter"] = counter
                        param["out_array_call_function"] = function
                        param["out_array_call_params"] = params
                        param["paramtype"] = paramtype.replace(" *", "").replace("class ", "")
                        p.append(param)
                        method["paramnames"].append(paramname)
                    # An array of data with a length specified by another parameter
                    elif param.get("array_count") is not None:
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtype"] = paramtype.replace(" *", "").replace("class ", "")
                        p.insert(0, param)
                        method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)
                    # A parameter that the method writes a return value to
                    # In this case we treat it as a Defold buffer
                    elif "void *" in param.get("paramtype"):
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["buffer_param"] = True
                        param["paramtype"] = paramtype.replace("void *", "LuaHBuffer *")
                        p.insert(0, param)
                        method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)
                    # A parameter that the method writes a return value to
                    elif "char *" in param.get("paramtype"):
                        param["normal_param"] = True
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtypestring"] = paramtype.replace(" *", "_ptr").replace("const ", "const_").replace("class ", "class_").replace("struct ", "struct_")
                        p.insert(0, param)
                        method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)
                    # A parameter that the method writes a return value to
                    elif " *" in param.get("paramtype"):
                        param["out_param"] = True
                        param["paramtype"] = paramtype.replace(" *", "").replace("class ", "")
                        p.insert(0, param)
                        method["paramnames"].append("&" + paramname)
                    # A parameter that an "out_array_call" will write to
                    elif paramname in out_array_call_params:
                        param["out_array_call_param"] = True
                        p.insert(0, param)
                        method["paramnames"].append(paramname)
                    else:
                        param["normal_param"] = True
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtypestring"] = paramtype.replace(" *", "_ptr").replace("const ", "const_").replace("class ", "class_").replace("struct ", "struct_")
                        p.insert(0, param)
                        method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)
                method["params"] = p
            else:
                method["paramcount"] = 0

            method["paramnames"] = ",".join(method["paramnames"])
            method["paramnames_in"] = ",".join(method["paramnames_in"])
            method["hasreturntype"] = method.get("returntype") != "void"
            if method.get("returntype") is not None:
                method["returntypestring"] = method.get("returntype").replace(" *", "_ptr").replace("const ", "const_").replace("class ", "class_")
            m.append(method)
    return m


def parse_enums(enums):
    e = []
    for enum in enums:
        if "::" not in enum.get("enumname"):
            v = []
            for value in enum.get("values"):
                value["name"] = value.get("name").replace("k_E", "").replace("k_e", "").replace("k_n", "").upper()
                v.append(value)
            enum["values"] = v
            e.append(enum)
    return e


NUMBERS = [
    "int", "uint8", "int8", "int16", "uint16", "int32", "uint32"
]


def parse_typedefs(typedefs):
    t = {}
    int = []
    int64 = []
    uint64 = []
    struct = []

    t["types"] = []
    t["int"] = int
    t["int64"] = int64
    t["uint64"] = uint64
    t["struct"] = struct

    for typedef in typedefs:
        t["types"].append(typedef)
        type = typedef.get("type")
        if type in NUMBERS:
            int.append(typedef)
        elif type == "uint64" or type == "ulint64":
            uint64.append(typedef)
        elif type == "int64":
            int64.append(typedef)
        elif type.startswith("struct "):
            struct.append(typedef)
    return t


def parse_structs(structs):
    s = []
    for struct in structs:
        if not struct.get("struct").startswith("CSteamID"):
            struct["name"] = re.sub(".*::", "", struct.get("struct").replace("::(anonymous)", ""))
            f = []
            for field in struct.get("fields"):
                field["fieldtypestring"] = re.sub(".*::", "", field.get("fieldtype").replace("enum ", "").replace("struct ", "").replace("union ", "").replace(" ", "_"))
                f.append(field)
            struct["fields"] = f
            s.append(struct)

    return s


def generate():
    with open("extension.mtl", 'r') as f:
        extension_mtl = f.read()

        j = json.load(open("steamworks/include/steam_api.json"))

        j["methods"] = parse_methods(j["methods"])
        j["typedefs"] = parse_typedefs(j["typedefs"])
        j["structs"] = parse_structs(j["structs"])
        j["enums"] = parse_enums(j["enums"])

        result = pystache.render(extension_mtl, j)
        with codecs.open("steamworks/src/generated.cpp", 'wb' "utf-8") as f:
            f.write(HTMLParser.HTMLParser().unescape(result))


if __name__ == "__main__":
    generate()
