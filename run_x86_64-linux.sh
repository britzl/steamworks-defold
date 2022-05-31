#!/usr/bin/env bash

cp steamworks/res/x86_64-linux/* build/default
cp build/x86_64-linux/dmengine build/default
cp steam_appid.txt build/default
cd build/default
./dmengine ./game.projectc
