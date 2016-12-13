#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <extension/extension.h>
#include <script/script.h>  // DM_LUA_STACK_CHECK, CheckHashOrString, PushBuffer, Ref, Unref"


#define LIB_NAME "steamworks"
#define MODULE_NAME "steamworks"

#define DLIB_LOG_DOMAIN LIB_NAME

#include "steam_api.h"

static ISteamFriends *steamFriends;
static ISteamUser *steamUser;
static ISteamUserStats *steamUserStats;

static int Init(lua_State* L) {
  SteamAPI_Init();
  return 1;
}

static int Update(lua_State* L) {
  SteamAPI_RunCallbacks();
  return 0;
}

static int Final(lua_State* L) {
  SteamAPI_Shutdown();
  return 0;
}

static int GetAchievementInfo(lua_State* L) {
  bool achieved;
  const char* achievementId = lua_tostring(L, lua_gettop(L));
  steamUserStats->GetAchievement( achievementId, &achieved);
  //lua_pushstring(L, )
  
  return 1;
}

static int GetAchievementNames(lua_State* L) {
  return 1;
}

static int GetUserInfo(lua_State* L) {
  printf("user %f", steamUser->GetSteamID().m_unAccountID);
  return 1;
}

static int GetStatValue(lua_State* L) {
  return 1;
}



static const luaL_reg Module_methods[] = {
    {"init", Init},
    {"update", Update},
    {"final", Final},
    {"get_achievement_info", GetAchievementInfo},
    {"get_achievement_names", GetAchievementNames},
    {"get_user_info", GetUserInfo},
    {"get_stat_value", GetStatValue},
    {0, 0}
};

static void LuaInit(lua_State* L) {
    int top = lua_gettop(L);
    luaL_register(L, MODULE_NAME, Module_methods);

    lua_pop(L, 1);
    assert(top == lua_gettop(L));
}

dmExtension::Result AppInitializeSteamworks(dmExtension::AppParams* params) {
    return dmExtension::RESULT_OK;
}

dmExtension::Result InitializeSteamworks(dmExtension::Params* params) {
    LuaInit(params->m_L);
    printf("Registered %s Extension\n", MODULE_NAME);
    steamFriends = SteamFriends();
    steamUser = SteamUser();
    steamUserStats = SteamUserStats();
    return dmExtension::RESULT_OK;
}

dmExtension::Result AppFinalizeSteamworks(dmExtension::AppParams* params) {
    return dmExtension::RESULT_OK;
}

dmExtension::Result FinalizeSteamworks(dmExtension::Params* params) {
    return dmExtension::RESULT_OK;
}

DM_DECLARE_EXTENSION(steamworks, LIB_NAME, AppInitializeSteamworks, AppFinalizeSteamworks, InitializeSteamworks, 0, 0, FinalizeSteamworks)
