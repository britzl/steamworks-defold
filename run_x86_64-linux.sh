#!/usr/bin/env bash

cp steamworks/bundle/x86_64-linux/* build/default
cp build/x86_64-linux/dmengine build/default
cp steam_appid.txt build/default
cd build/default
./dmengine
