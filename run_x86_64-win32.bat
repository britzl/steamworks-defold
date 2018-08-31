copy steamworks/bundle/x86_64-win32/steam_api.dll build/default
copy build/x86_64-win32/dmengine.exe build/default
copy steam_appid.txt build/default
cd build/default
dmengine.exe
