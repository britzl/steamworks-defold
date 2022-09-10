#!/usr/bin/env python

import pystache
import re
import json
import codecs
import html

INTEGERS = ["int", "unsigned int", "short", "unsigned short", "unsigned char", "signed char", "uint8", "int8", "int16", "uint16", "int32", "uint32"]
INCLUDED_CLASSES = ["ISteamUser", "ISteamFriends", "ISteamUtils", "ISteamUserStats", "ISteamMatchmaking", "ISteamNetworking", "ISteamApps", "ISteamMusic", "ISteamRemoteStorage", "ISteamInventory", "ISteamUGC", "ISteamGameSearch", "ISteamParties", "ISteamInput"]

def to_snake_case(name):
    s1 = re.sub(r'(.)([A-Z][a-z]+)', r'\1_\2', str(name))
    return re.sub('([a-z])([A-Z])', r'\1_\2', s1).lower()


def paramtype_to_lua(type):
    if "struct" in type and "*" in type:
        return "table"
    elif type.replace(" *", "").replace("const ", "") in INTEGERS:
        return "number"
    elif type.replace(" *", "").endswith("_t"):
        return "number"
    elif ("CSteamID" in type) or ("uint64" in type) or ("int64" in type):
        return "string"
    elif type.replace(" *", "") == "bool":
        return "boolean"
    elif type.replace(" *", "") == "float":
        return "number"
    else:
        return type.replace(" *", "")


def parse_interfaces(interfaces):
    i = []
    for interface in interfaces:
        classname = interface["classname"]
        if classname in INCLUDED_CLASSES:
            i.append(interface)
        else:
            print("Skipping class " + classname)
    return i


def parse_methods(interfaces):
    # DEPRECATED_METHODS = ["TrackAppUsageEvent", "GetUserDataFolder", "InitiateGameConnection", "CommitPublishedFileUpdate", "CreatePublishedFileUpdateRequest", "DeletePublishedFile", "EnumeratePublishedFilesByUserAction", "EnumeratePublishedWorkshopFiles", "EnumerateUserPublishedFiles", "EnumerateUserSharedWorkshopFiles", "EnumerateUserSubscribedFiles", "FileFetch", "FilePersist", "GetFileListFromServer", "GetPublishedFileDetails", "GetPublishedItemVoteDetails", "GetUserPublishedItemVoteDetails", "PublishVideo", "PublishWorkshopFile", "ResetFileRequestState", "SetUserPublishedFileAction", "SubscribePublishedFile", "SynchronizeToClient", "SynchronizeToServer", "UnsubscribePublishedFile", "UpdatePublishedFileDescription", "UpdatePublishedFileFile", "UpdatePublishedFilePreviewFile", "UpdatePublishedFileSetChangeDescription", "UpdatePublishedFileTags", "UpdatePublishedFileTitle", "UpdatePublishedFileVisibility", "UpdateUserPublishedItemVote"]
    SKIP_METHODS = ["GetVoice", "DecompressVoice", "StartVoiceRecording", "StopVoiceRecording", "GetAvailableVoice", "GetVoiceOptimalSampleRate", "SetWarningMessageHook"]
    SKIP_CLASSES = ["ISteamNetworking", "ISteamNetworkingSockets", "ISteamGameSearch", "ISteamInput"]
    m = []
    for interface in interfaces:
        classname = interface["classname"]
        for method in interface["methods"]:
            if classname in SKIP_CLASSES:
                print("Ignoring methods for class " + classname)
                continue;

            # methodname = method.get("methodname_flat").replace("SteamAPI_", "").replace(classname + "_", "")
            methodname = method.get("methodname")
            methodname_flat = method.get("methodname_flat").replace("SteamAPI_", "").replace(classname + "_", "")
            # if methodname.endswith("_DEPRECATED") or methodname in DEPRECATED_METHODS:
            if methodname.endswith("_DEPRECATED"):
                print("Ignoring deprecated method " + methodname + " of class " + classname)
                continue
            
            if methodname in SKIP_METHODS:
                print("Ignoring skipped method " + methodname + " of class " + classname)
                continue

            methodparams = method.get("params")
            method["methodname"] = methodname
            method["methodalias"] = methodname_flat if methodname_flat != methodname else None
            method["classname"] = classname
            method["classname_lower"] = to_snake_case(classname.replace("ISteam", "")).lower()
            method["methodname_lower"] = to_snake_case(methodname).lower()

            if method["methodname_lower"].startswith("b_"):
                method["methodname_lower"] = method["methodname_lower"].replace("b_", "")

            method["params_in"] = []
            method["params_out"] = []
            method["paramnames"] = []
            method["paramnames_in"] = []
            method["paramcount_out"] = 0
            if methodparams is not None:
                method["paramcount"] = len(methodparams)
                p_api = []
                p_doc = []
                normal_params = []
                out_array_call_params = []
                for param in methodparams:
                    p_doc.append(param)
                    paramname = param.get("paramname")
                    paramtype = param.get("paramtype")
                    # A struct that will be populated with data by the method
                    if param.get("out_struct") is not None:
                        param["out_struct"] = True
                        param["paramtype"] = paramtype.replace(" *", "")
                        p_api.append(param)
                        method["paramnames"].append("&" + paramname)
                    # A string that will be populated with data by the method
                    elif param.get("out_string") is not None:
                        param["out_string"] = True
                        param["paramtypestring"] = paramtype.replace(" **", "_ptr").replace("const ", "const_").replace("class ", "class_").replace("struct ", "struct_")
                        p_api.append(param)
                        method["paramnames"].append(paramname)
                        method["paramcount_out"] = method["paramcount_out"] + 1
                    # An array that will be populated with data by the method
                    # The size of the array is specified by another parameter
                    elif param.get("out_array_count") is not None:
                        param["in_param"] = True
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtype"] = paramtype.replace(" *", "").replace("const ", "").replace("class ", "")
                        param["paramtypestring"] = paramtype.replace(" *", "").replace("const ", "const_").replace("class ", "class_").replace("struct ", "")
                        param["paramtypelua"] = paramtype_to_lua(paramtype)
                        p_api.append(param)
                        method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)
                        method["paramcount_out"] = method["paramcount_out"] + 1
                    # An array to be populated by the method
                    # The size of the array is retrieved through a separate function call
                    elif param.get("out_array_call") is not None:
                        counter, function, params = param.get("out_array_call").split(",")
                        out_array_call_params.append(counter)
                        param["out_array_call_counter"] = counter
                        param["out_array_call_function"] = function
                        param["out_array_call_params"] = params
                        param["paramtype"] = paramtype.replace(" *", "").replace("class ", "")
                        p_api.append(param)
                        method["paramnames"].append(paramname)
                    # An array of data with a length specified by another parameter
                    elif param.get("array_count") is not None:
                        param["in_param"] = True
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtype"] = paramtype.replace(" *", "").replace("const ", "").replace("class ", "")
                        param["paramtypelua"] = paramtype_to_lua(paramtype)
                        p_api.insert(0, param)
                        method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)
                    # A "data blob" input parameter
                    elif "const char *" in paramtype or "const void *" in paramtype:
                        param["normal_param"] = True
                        param["in_param"] = True
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtypestring"] = paramtype.replace(" *", "_ptr").replace("const ", "const_")
                        param["paramtypelua"] = "string"
                        p_api.insert(0, param)
                        method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)
                    # A parameter that the method writes a return value to
                    # In this case we treat it as a Defold buffer
                    elif "char *" in paramtype or "void *" in paramtype or "uint8 *" in paramtype:
                        param["buffer_param"] = True
                        param["in_param"] = True
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtypelua"] = "string"
                        p_api.insert(0, param)
                        method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)
                    # A parameter that the method writes a return value to
                    elif "char *" in paramtype or "void *" in paramtype or "uint8 *" in paramtype:
                        param["out_param"] = True
                        param["in_param"] = True
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtypestring"] = paramtype.replace(" *", "_ptr")
                        param["paramtypelua"] = "string"
                        p_api.insert(0, param)
                        method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)
                        method["paramcount_out"] = method["paramcount_out"] + 1
                    # A parameter that the method writes a return value to
                    elif " *" in paramtype and "const" not in paramtype:
                        param["out_param"] = True
                        param["in_param"] = True
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtype"] = paramtype.replace(" *", "").replace("class ", "")
                        param["paramtypestring"] = paramtype.replace(" *", "").replace("const ", "const_").replace("class ", "class_").replace("struct ", "")
                        param["paramtypelua"] = paramtype_to_lua(paramtype)
                        p_api.insert(0, param)
                        method["paramnames"].append("&" + paramname)
                        method["paramnames_in"].append(paramname)
                        method["paramcount_out"] = method["paramcount_out"] + 1
                    # A parameter that an "out_array_call" will write to
                    elif paramname in out_array_call_params:
                        param["out_array_call_param"] = True
                        p_api.insert(0, param)
                        method["paramnames"].append(paramname)
                    else:
                        param["normal_param"] = True
                        param["in_param"] = True
                        param["paramindex"] = len(method["paramnames_in"]) + 1
                        param["paramtypelua"] = paramtype_to_lua(paramtype)
                        p_api.insert(0, param)
                        if "SteamParamStringArray_t" in paramtype:
                            param["paramtype"] = paramtype.replace(" *", "")
                            param["paramtypestring"] = paramtype.replace(" *", "").replace("const ", "").replace("class ", "class_").replace("struct ", "struct_")
                            method["paramnames"].append("&" + paramname)
                        else:
                            param["paramtypestring"] = paramtype.replace(" *", "_ptr").replace("const ", "const_").replace("class ", "class_").replace("struct ", "struct_")
                            method["paramnames"].append(paramname)
                        method["paramnames_in"].append(paramname)

                    if param.get("in_param"):
                        method["params_in"].append(param)
                    if param.get("out_param"):
                        method["params_out"].append(param)
                method["params"] = p_api
                method["params_doc"] = p_doc
            else:
                method["paramcount"] = 0

            method["paramnames"] = ", ".join(method["paramnames"])
            method["paramnames_in"] = ", ".join(method["paramnames_in"])
            method["hasparams"] = methodparams is not None
            method["hasreturntype"] = method.get("returntype") != "void"
            returntype = method.get("returntype")
            if returntype is not None:
                method["returntypestring"] = returntype.replace(" *", "_ptr").replace("const ", "const_").replace("class ", "class_")
                if returntype == "SteamAPICall_t":
                    method["steamapicall"] = True

            m.append(method)
    return m


def parse_enums(enums, callback_structs):
    DEPRECATED_ENUMS = []
    e = []
    for callback_struct in callback_structs:
        callback_struct_enums = callback_struct.get("enums")
        if callback_struct_enums:
            for callback_struct_enum in callback_struct_enums:
                enums.append(callback_struct_enum)

    for enum in enums:
        enumname = enum.get("enumname")
        if "::" not in enumname and enumname not in DEPRECATED_ENUMS:
            v = []
            fqname = enum.get("fqname")
            if fqname:
                enum["fqname"] = fqname
            else:
                enum["fqname"] = enumname

            for value in enum.get("values"):
                value["name"] = to_snake_case(value.get("name").replace("k_E", "").replace("k_e", "").replace("k_n", "")).upper().replace("__", "_")
                v.append(value)
            enum["values"] = v
            e.append(enum)

    return e


def parse_typedefs(typedefs):
    DEPRECATED_TYPEDEFS = [""]
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
        if typedef not in DEPRECATED_TYPEDEFS:
            t["types"].append(typedef)
            type = typedef.get("type")

            if type in INTEGERS:
                int.append(typedef)
            elif type == "ulint64" or type == "unsigned long long":
                if not typedef.get("typedef") == "uint64":
                    uint64.append(typedef)
            elif type == "lint64" or type == "long long":
                if not typedef.get("typedef") == "int64":
                    int64.append(typedef)
            elif type.startswith("struct "):
                struct.append(typedef)
            else:
                print("Unkown type " + type + " for typedef " + typedef.get("typedef"))

    return t


def parse_structs(structs, methods):
    SKIP_STRUCTS = ["CallbackMsg_t", "CCallbackBase", "CCallResult", "CCallback", "CSteamID", "CSteamAPIContext", "CSteamID::SteamID_t", "CSteamID::SteamID_t::SteamIDComponent_t", "CGameID::GameID_t", "CGameID::(anonymous)", "servernetadr_t", "gameserveritem_t", "SteamParamStringArray_t", "SteamInputActionEvent_t", "SteamNetworkingMessage_t", "SteamDatagramHostedAddress", "SteamDatagramGameCoordinatorServerLogin", "SteamNetworkingConfigValue_t", "SteamNetworkingFakeIPResult_t"]
    CALLRESULT_STRUCT = []

    # Include all structs that are used as a CallResult
    for method in methods:
        callresult = method.get("callresult")
        if callresult and callresult not in CALLRESULT_STRUCT:
            CALLRESULT_STRUCT.append(callresult)

    s = []
    for struct in structs:
        structname = struct.get("struct")
        if structname in SKIP_STRUCTS:
            print("Skipping struct " + structname)
            continue

        if structname in CALLRESULT_STRUCT:
            struct["callresult"] = True
        struct["name"] = re.sub(".*::", "", structname.replace("::(anonymous)", ""))
        f = []
        for field in struct.get("fields"):
            fieldtype = field.get("fieldtype").replace("_Bool", "bool")
            fieldtype = re.sub(".*::", "", fieldtype)
            # Is this an array of some kind?
            if " [" in fieldtype:
                field["array"] = True
                field["arraysize"] = re.match(".*\[(.*)\]", fieldtype).group(1)
            
            field["fieldtypestring"] = re.sub("_\[.*\]", "", fieldtype.replace(" *", "_ptr").replace("enum ", "").replace("struct ", "").replace("class ", "").replace("union ", "").replace(" ", "_"))

            if "void (*)" not in fieldtype:
                f.append(field)
        struct["fields"] = f
        s.append(struct)

    return s


def parse_callbacks(methods):
    callbacks = ["PersonaStateChange_t", "GameOverlayActivated_t"]
    for method in methods:
        callback = method.get("callback")
        if callback and callback not in callbacks:
            callbacks.append(callback)

    c = []
    for callback in callbacks:
        c.append({"callback": callback})

    return c


def generate():
    j = json.load(open("steamworks/include/steam_api.json"))
    j["interfaces"] = parse_interfaces(j["interfaces"])
    j["methods"] = parse_methods(j["interfaces"])
    j["typedefs"] = parse_typedefs(j["typedefs"])
    j["structs"] = parse_structs(j["structs"], j["methods"]) + parse_structs(j["callback_structs"], j["methods"])
    j["enums"] = parse_enums(j["enums"], j["callback_structs"])
    j["callbacks"] = parse_callbacks(j["methods"])

    with open("steamworks.cpp.mtl", 'r') as f:
        extension_mtl = f.read()
        result = pystache.render(extension_mtl, j)
        with codecs.open("steamworks/src/steamworks.cpp", "wb", encoding="utf-8") as f:
            f.write(html.unescape(result))

    with open("steamworks.h.mtl", 'r') as f:
        extension_mtl = f.read()
        result = pystache.render(extension_mtl, j)
        with codecs.open("steamworks/include/steamworks.h", "wb", encoding="utf-8") as f:
            f.write(html.unescape(result))

    with open("api_ref.mtl", 'r') as f:
        docs_mtl = f.read()
        result = pystache.render(docs_mtl, j)
        with codecs.open("steamworks/api_ref.md", "wb", encoding="utf-8") as f:
            f.write(html.unescape(result))

    with open("script_api.mtl", 'r') as f:
        docs_mtl = f.read()
        result = pystache.render(docs_mtl, j)
        with codecs.open("steamworks/api/steamworks.script_api", "wb", encoding="utf-8") as f:
            f.write(html.unescape(result))


if __name__ == "__main__":
    generate()
