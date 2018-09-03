#!/usr/bin/env python

import pystache
import re
import json


def to_snake_case(name):
    s1 = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', name)
    return re.sub('([a-z0-9])([A-Z])', r'\1_\2', s1).lower()


def parse_methods(methods):
    m = []
    for method in methods:
        method["classname_lower"] = to_snake_case(method.get("classname").replace("ISteam", "")).lower()
        method["methodname_lower"] = to_snake_case(method.get("methodname")).lower()
        method["paramnames"] = ""
        if method.get("params") is not None:
            method["paramcount"] = len(method.get("params"))
            p = []
            pnames = []
            for param in method.get("params"):
                param["paramindex"] = len(p) + 1
                param["paramtypestring"] = param.get("paramtype").replace(" *", "_ptr").replace("const ", "const_").replace("class ", "class_")
                if "class " in param.get("paramtype"):
                    param["paramtype"] = param.get("paramtype").replace("class ", "") + " *"
                p.append(param)
                pnames.append(param.get("paramname"))
            method["paramnames"] = ",".join(pnames)
        else:
            method["paramcount"] = 0
        m.append(method)
    return m


# ,{"typedef": "uint8","type": "unsigned char"}
# ,{"typedef": "int8","type": "signed char"}
# ,{"typedef": "int16","type": "short"}
# ,{"typedef": "uint16","type": "unsigned short"}
# ,{"typedef": "int32","type": "int"}
# ,{"typedef": "uint32","type": "unsigned int"}
# ,{"typedef": "int64","type": "long long"}
# ,{"typedef": "uint64","type": "unsigned long long"}
# ,{"typedef": "lint64","type": "int64"}
# ,{"typedef": "ulint64","type": "uint64"}
# ,{"typedef": "intp","type": "long long"}
# ,{"typedef": "uintp","type": "unsigned long long"}
# ,{"typedef": "Salt_t","type": "uint8 [8]"}
# ,{"typedef": "GID_t","type": "uint64"}
# ,{"typedef": "JobID_t","type": "uint64"}
# ,{"typedef": "TxnID_t","type": "GID_t"}
# ,{"typedef": "PackageId_t","type": "uint32"}
# ,{"typedef": "BundleId_t","type": "uint32"}
# ,{"typedef": "AppId_t","type": "uint32"}
# ,{"typedef": "AssetClassId_t","type": "uint64"}
# ,{"typedef": "PhysicalItemId_t","type": "uint32"}
# ,{"typedef": "DepotId_t","type": "uint32"}
# ,{"typedef": "RTime32","type": "uint32"}
# ,{"typedef": "CellID_t","type": "uint32"}
# ,{"typedef": "SteamAPICall_t","type": "uint64"}
# ,{"typedef": "AccountID_t","type": "uint32"}
# ,{"typedef": "PartnerId_t","type": "uint32"}
# ,{"typedef": "ManifestId_t","type": "uint64"}
# ,{"typedef": "SiteId_t","type": "uint64"}
# ,{"typedef": "HAuthTicket","type": "uint32"}

NUMBERS = [
    "uint8", "int8", "int16", "uint16", "int32", "uint32"

]


def parse_typedefs(typedefs):
    t = []

    for typedef in typedefs:
        type = typedef.get("type")
        # if type in NUMBERS:
        #     print("type", type, "is a number")
    return t


def generate():
    with open("extension.mtl", 'r') as f:
        extension_mtl = f.read()

        j = json.load(open("steamworks/include/steam_api.json"))

        j["methods"] = parse_methods(j["methods"])
        j["types"] = parse_typedefs(j["typedefs"])

        # j["operations"] = parse_operations(j["operations"].iteritems)
        # j["shapes"] = parse_shapes(j["shapes"].iteritems)
        #
        # out_filename = j["metadata"]["endpointPrefix"].replace(".", "_") + ".lua"
        # print("Writing " + out_filename)

        lua = pystache.render(extension_mtl, j)
        with open("steamworks/src/generated.cpp", 'wb') as f:
            f.write(lua)


if __name__ == "__main__":
    generate()
