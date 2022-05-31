copy %~dp0\steamworks\res\x86_64-win32\steam_api64.dll %~dp0\build\default
copy %~dp0\build\x86_64-win32\dmengine.exe %~dp0\build\default
copy %~dp0\build\x86_64-win32\OpenAL32.dll %~dp0\build\default
copy %~dp0\build\x86_64-win32\wrap_oal.dll %~dp0\build\default
copy %~dp0\steam_appid.txt %~dp0\build\default
cd %~dp0\build\default
dmengine.exe ./game.projectc 
pause
