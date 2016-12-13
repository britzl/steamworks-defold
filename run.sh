#!/usr/bin/env bash

cp steamworks/lib/x86_64-osx/libsteam_api.dylib build/default
cp build/default/x86_64-osx/dmengine build/default
cp steam_appid.txt build/default
cd build/default
./dmengine