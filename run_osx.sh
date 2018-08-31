#!/usr/bin/env bash

cp steamworks/bundle/osx/Contents/MacOS/* build/default
cp build/x86_64-darwin/dmengine build/default
cp steam_appid.txt build/default
cd build/default
./dmengine
