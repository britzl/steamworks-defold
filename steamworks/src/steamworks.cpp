// GENERATED CODE - DO NOT MODIFY
// Copyright 2016 Bjorn Ritzl

#define LIB_NAME "Steamworks"
#define MODULE_NAME "steamworks"

#ifndef DLIB_LOG_DOMAIN
#define DLIB_LOG_DOMAIN "steamworks"
#endif

#include <dmsdk/sdk.h>

#if defined(DM_PLATFORM_OSX) || defined(DM_PLATFORM_WINDOWS) || defined(DM_PLATFORM_LINUX)

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "steamworks.h"
#include "steam_api.h"
#include "steam_gameserver.h"
#include "luautils.h"

struct SteamBootstrap {
	SteamBootstrap() {
		SteamAPI_Init();
	}
} g_SteamBootstrap;

#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_INT 0
#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_FLOAT 1
#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_AVERAGERATE 2

static ISteamApps *apps;
static ISteamFriends *friends;
static ISteamMatchmaking *matchmaking;
static ISteamMusic *music;
static ISteamUser *user;
static ISteamUserStats *user_stats;
static ISteamUtils *utils;
static ISteamRemoteStorage *remote_storage;
static ISteamInventory *inventory;
static ISteamUGC *ugc;
static ISteamParties *parties;
static ISteamInput *input;


/*****************************
* PUSH numbers and other primitive types
******************************/
static void push_double(lua_State* L, double n) {
	lua_pushnumber(L, n);
}
static void push_float(lua_State* L, float n) {
	lua_pushnumber(L, n);
}
static void push_float_array(lua_State* L, float arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_float(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_int(lua_State* L, int n) {
	lua_pushinteger(L, n);
}
static void push_int_array(lua_State* L, int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_int(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_unsigned_int(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_unsigned_int_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_unsigned_int(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_bool(lua_State* L, bool b) {
	lua_pushboolean(L, b);
}
static void push_char_array(lua_State* L, char ca[], unsigned int size) {
	lua_pushstring(L, ca);
}
static void push_const_char_ptr(lua_State* L, const char * s) {
	lua_pushstring(L, s);
}
static void push_char_ptr(lua_State* L, char * s) {
	lua_pushstring(L, s);
}
static void push_void_ptr(lua_State* L, void * s) {
	lua_pushstring(L, (char *)s);
}
static void push_uint8(lua_State* L, unsigned char n) {
	lua_pushinteger(L, n);
}
static void push_uint8_array(lua_State* L, unsigned char arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_uint8(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_int8(lua_State* L, signed char n) {
	lua_pushinteger(L, n);
}
static void push_int8_array(lua_State* L, signed char arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_int8(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_int16(lua_State* L, short n) {
	lua_pushinteger(L, n);
}
static void push_int16_array(lua_State* L, short arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_int16(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_uint16(lua_State* L, unsigned short n) {
	lua_pushinteger(L, n);
}
static void push_uint16_array(lua_State* L, unsigned short arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_uint16(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_int32(lua_State* L, int n) {
	lua_pushinteger(L, n);
}
static void push_int32_array(lua_State* L, int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_int32(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_uint32(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_uint32_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_uint32(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AppId_t(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_AppId_t_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AppId_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_DepotId_t(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_DepotId_t_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_DepotId_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RTime32(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_RTime32_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RTime32(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AccountID_t(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_AccountID_t_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AccountID_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HAuthTicket(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_HAuthTicket_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HAuthTicket(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HSteamPipe(lua_State* L, int n) {
	lua_pushinteger(L, n);
}
static void push_HSteamPipe_array(lua_State* L, int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HSteamPipe(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HSteamUser(lua_State* L, int n) {
	lua_pushinteger(L, n);
}
static void push_HSteamUser_array(lua_State* L, int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HSteamUser(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FriendsGroupID_t(lua_State* L, short n) {
	lua_pushinteger(L, n);
}
static void push_FriendsGroupID_t_array(lua_State* L, short arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FriendsGroupID_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HServerQuery(lua_State* L, int n) {
	lua_pushinteger(L, n);
}
static void push_HServerQuery_array(lua_State* L, int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HServerQuery(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SNetSocket_t(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_SNetSocket_t_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SNetSocket_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SNetListenSocket_t(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_SNetListenSocket_t_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SNetListenSocket_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ScreenshotHandle(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_ScreenshotHandle_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ScreenshotHandle(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTTPRequestHandle(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_HTTPRequestHandle_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTTPRequestHandle(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTTPCookieContainerHandle(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_HTTPCookieContainerHandle_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTTPCookieContainerHandle(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HHTMLBrowser(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_HHTMLBrowser_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HHTMLBrowser(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamItemDef_t(lua_State* L, int n) {
	lua_pushinteger(L, n);
}
static void push_SteamItemDef_t_array(lua_State* L, int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamItemDef_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInventoryResult_t(lua_State* L, int n) {
	lua_pushinteger(L, n);
}
static void push_SteamInventoryResult_t_array(lua_State* L, int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInventoryResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemotePlaySessionID_t(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_RemotePlaySessionID_t_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemotePlaySessionID_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HSteamNetConnection(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_HSteamNetConnection_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HSteamNetConnection(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HSteamListenSocket(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_HSteamListenSocket_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HSteamListenSocket(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HSteamNetPollGroup(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_HSteamNetPollGroup_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HSteamNetPollGroup(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetworkingPOPID(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_SteamNetworkingPOPID_array(lua_State* L, unsigned int arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetworkingPOPID(L, arr[i]);
		lua_settable(L, -3);
	}
}

/*****************************
* PUSH (u)int64 (to strings)
******************************/
static void push_int64_t(lua_State* L, int64_t n) {
	char buf[22];
	snprintf(buf, sizeof(buf), "%lld", n);
	lua_pushstring(L, buf);
}
static void push_int64(lua_State* L, int64 n) {
	char buf[22];
	snprintf(buf, sizeof(buf), "%lld", n);
	lua_pushstring(L, buf);
}
static void push_int64_array(lua_State* L, int64 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_int64(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_lint64(lua_State* L, lint64 n) {
	push_int64(L, n);
}
static void push_lint64_array(lua_State* L, lint64 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_lint64(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_intp(lua_State* L, intp n) {
	push_int64(L, n);
}
static void push_intp_array(lua_State* L, intp arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_intp(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetworkingMicroseconds(lua_State* L, SteamNetworkingMicroseconds n) {
	push_int64(L, n);
}
static void push_SteamNetworkingMicroseconds_array(lua_State* L, SteamNetworkingMicroseconds arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetworkingMicroseconds(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_uint64(lua_State* L, uint64 n) {
	char buf[22];
	snprintf(buf, sizeof(buf), "%llu", n);
	lua_pushstring(L, buf);
}
static void push_uint64_array(lua_State* L, uint64 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_uint64(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ulint64(lua_State* L, ulint64 n) {
	push_uint64(L, n);
}
static void push_ulint64_array(lua_State* L, ulint64 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ulint64(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_uintp(lua_State* L, uintp n) {
	push_uint64(L, n);
}
static void push_uintp_array(lua_State* L, uintp arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_uintp(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_SteamAPICall_t(lua_State* L, SteamAPICall_t n) {
	push_uint64(L, n);
}
static void push_SteamAPICall_t_array(lua_State* L, SteamAPICall_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamAPICall_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_PartyBeaconID_t(lua_State* L, PartyBeaconID_t n) {
	push_uint64(L, n);
}
static void push_PartyBeaconID_t_array(lua_State* L, PartyBeaconID_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PartyBeaconID_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_UGCHandle_t(lua_State* L, UGCHandle_t n) {
	push_uint64(L, n);
}
static void push_UGCHandle_t_array(lua_State* L, UGCHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UGCHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_PublishedFileUpdateHandle_t(lua_State* L, PublishedFileUpdateHandle_t n) {
	push_uint64(L, n);
}
static void push_PublishedFileUpdateHandle_t_array(lua_State* L, PublishedFileUpdateHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PublishedFileUpdateHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_PublishedFileId_t(lua_State* L, PublishedFileId_t n) {
	push_uint64(L, n);
}
static void push_PublishedFileId_t_array(lua_State* L, PublishedFileId_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PublishedFileId_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_UGCFileWriteStreamHandle_t(lua_State* L, UGCFileWriteStreamHandle_t n) {
	push_uint64(L, n);
}
static void push_UGCFileWriteStreamHandle_t_array(lua_State* L, UGCFileWriteStreamHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UGCFileWriteStreamHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_SteamLeaderboard_t(lua_State* L, SteamLeaderboard_t n) {
	push_uint64(L, n);
}
static void push_SteamLeaderboard_t_array(lua_State* L, SteamLeaderboard_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamLeaderboard_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_SteamLeaderboardEntries_t(lua_State* L, SteamLeaderboardEntries_t n) {
	push_uint64(L, n);
}
static void push_SteamLeaderboardEntries_t_array(lua_State* L, SteamLeaderboardEntries_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamLeaderboardEntries_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_InputHandle_t(lua_State* L, InputHandle_t n) {
	push_uint64(L, n);
}
static void push_InputHandle_t_array(lua_State* L, InputHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_InputHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_InputActionSetHandle_t(lua_State* L, InputActionSetHandle_t n) {
	push_uint64(L, n);
}
static void push_InputActionSetHandle_t_array(lua_State* L, InputActionSetHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_InputActionSetHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_InputDigitalActionHandle_t(lua_State* L, InputDigitalActionHandle_t n) {
	push_uint64(L, n);
}
static void push_InputDigitalActionHandle_t_array(lua_State* L, InputDigitalActionHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_InputDigitalActionHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_InputAnalogActionHandle_t(lua_State* L, InputAnalogActionHandle_t n) {
	push_uint64(L, n);
}
static void push_InputAnalogActionHandle_t_array(lua_State* L, InputAnalogActionHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_InputAnalogActionHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_ControllerHandle_t(lua_State* L, ControllerHandle_t n) {
	push_uint64(L, n);
}
static void push_ControllerHandle_t_array(lua_State* L, ControllerHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ControllerHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_ControllerActionSetHandle_t(lua_State* L, ControllerActionSetHandle_t n) {
	push_uint64(L, n);
}
static void push_ControllerActionSetHandle_t_array(lua_State* L, ControllerActionSetHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ControllerActionSetHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_ControllerDigitalActionHandle_t(lua_State* L, ControllerDigitalActionHandle_t n) {
	push_uint64(L, n);
}
static void push_ControllerDigitalActionHandle_t_array(lua_State* L, ControllerDigitalActionHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ControllerDigitalActionHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_ControllerAnalogActionHandle_t(lua_State* L, ControllerAnalogActionHandle_t n) {
	push_uint64(L, n);
}
static void push_ControllerAnalogActionHandle_t_array(lua_State* L, ControllerAnalogActionHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ControllerAnalogActionHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_UGCQueryHandle_t(lua_State* L, UGCQueryHandle_t n) {
	push_uint64(L, n);
}
static void push_UGCQueryHandle_t_array(lua_State* L, UGCQueryHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UGCQueryHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_UGCUpdateHandle_t(lua_State* L, UGCUpdateHandle_t n) {
	push_uint64(L, n);
}
static void push_UGCUpdateHandle_t_array(lua_State* L, UGCUpdateHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UGCUpdateHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_SteamItemInstanceID_t(lua_State* L, SteamItemInstanceID_t n) {
	push_uint64(L, n);
}
static void push_SteamItemInstanceID_t_array(lua_State* L, SteamItemInstanceID_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamItemInstanceID_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_SteamInventoryUpdateHandle_t(lua_State* L, SteamInventoryUpdateHandle_t n) {
	push_uint64(L, n);
}
static void push_SteamInventoryUpdateHandle_t_array(lua_State* L, SteamInventoryUpdateHandle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInventoryUpdateHandle_t(L, arr[i]);
		lua_settable(L, -3);
	}

}

/*****************************
* PUSH enums
******************************/
static void push_ESteamIPType(lua_State* L, ESteamIPType n) {
	lua_pushinteger(L, n);
}
static void push_EUniverse(lua_State* L, EUniverse n) {
	lua_pushinteger(L, n);
}
static void push_EResult(lua_State* L, EResult n) {
	lua_pushinteger(L, n);
}
static void push_EVoiceResult(lua_State* L, EVoiceResult n) {
	lua_pushinteger(L, n);
}
static void push_EDenyReason(lua_State* L, EDenyReason n) {
	lua_pushinteger(L, n);
}
static void push_EBeginAuthSessionResult(lua_State* L, EBeginAuthSessionResult n) {
	lua_pushinteger(L, n);
}
static void push_EAuthSessionResponse(lua_State* L, EAuthSessionResponse n) {
	lua_pushinteger(L, n);
}
static void push_EUserHasLicenseForAppResult(lua_State* L, EUserHasLicenseForAppResult n) {
	lua_pushinteger(L, n);
}
static void push_EAccountType(lua_State* L, EAccountType n) {
	lua_pushinteger(L, n);
}
static void push_EChatEntryType(lua_State* L, EChatEntryType n) {
	lua_pushinteger(L, n);
}
static void push_EChatRoomEnterResponse(lua_State* L, EChatRoomEnterResponse n) {
	lua_pushinteger(L, n);
}
static void push_EChatSteamIDInstanceFlags(lua_State* L, EChatSteamIDInstanceFlags n) {
	lua_pushinteger(L, n);
}
static void push_ENotificationPosition(lua_State* L, ENotificationPosition n) {
	lua_pushinteger(L, n);
}
static void push_EBroadcastUploadResult(lua_State* L, EBroadcastUploadResult n) {
	lua_pushinteger(L, n);
}
static void push_EMarketNotAllowedReasonFlags(lua_State* L, EMarketNotAllowedReasonFlags n) {
	lua_pushinteger(L, n);
}
static void push_EDurationControlProgress(lua_State* L, EDurationControlProgress n) {
	lua_pushinteger(L, n);
}
static void push_EDurationControlNotification(lua_State* L, EDurationControlNotification n) {
	lua_pushinteger(L, n);
}
static void push_EDurationControlOnlineState(lua_State* L, EDurationControlOnlineState n) {
	lua_pushinteger(L, n);
}
static void push_EGameSearchErrorCode_t(lua_State* L, EGameSearchErrorCode_t n) {
	lua_pushinteger(L, n);
}
static void push_EPlayerResult_t(lua_State* L, EPlayerResult_t n) {
	lua_pushinteger(L, n);
}
static void push_ESteamIPv6ConnectivityProtocol(lua_State* L, ESteamIPv6ConnectivityProtocol n) {
	lua_pushinteger(L, n);
}
static void push_ESteamIPv6ConnectivityState(lua_State* L, ESteamIPv6ConnectivityState n) {
	lua_pushinteger(L, n);
}
static void push_EFriendRelationship(lua_State* L, EFriendRelationship n) {
	lua_pushinteger(L, n);
}
static void push_EPersonaState(lua_State* L, EPersonaState n) {
	lua_pushinteger(L, n);
}
static void push_EFriendFlags(lua_State* L, EFriendFlags n) {
	lua_pushinteger(L, n);
}
static void push_EUserRestriction(lua_State* L, EUserRestriction n) {
	lua_pushinteger(L, n);
}
static void push_EOverlayToStoreFlag(lua_State* L, EOverlayToStoreFlag n) {
	lua_pushinteger(L, n);
}
static void push_EActivateGameOverlayToWebPageMode(lua_State* L, EActivateGameOverlayToWebPageMode n) {
	lua_pushinteger(L, n);
}
static void push_ECommunityProfileItemType(lua_State* L, ECommunityProfileItemType n) {
	lua_pushinteger(L, n);
}
static void push_ECommunityProfileItemProperty(lua_State* L, ECommunityProfileItemProperty n) {
	lua_pushinteger(L, n);
}
static void push_EPersonaChange(lua_State* L, EPersonaChange n) {
	lua_pushinteger(L, n);
}
static void push_ESteamAPICallFailure(lua_State* L, ESteamAPICallFailure n) {
	lua_pushinteger(L, n);
}
static void push_EGamepadTextInputMode(lua_State* L, EGamepadTextInputMode n) {
	lua_pushinteger(L, n);
}
static void push_EGamepadTextInputLineMode(lua_State* L, EGamepadTextInputLineMode n) {
	lua_pushinteger(L, n);
}
static void push_EFloatingGamepadTextInputMode(lua_State* L, EFloatingGamepadTextInputMode n) {
	lua_pushinteger(L, n);
}
static void push_ETextFilteringContext(lua_State* L, ETextFilteringContext n) {
	lua_pushinteger(L, n);
}
static void push_ECheckFileSignature(lua_State* L, ECheckFileSignature n) {
	lua_pushinteger(L, n);
}
static void push_EMatchMakingServerResponse(lua_State* L, EMatchMakingServerResponse n) {
	lua_pushinteger(L, n);
}
static void push_ELobbyType(lua_State* L, ELobbyType n) {
	lua_pushinteger(L, n);
}
static void push_ELobbyComparison(lua_State* L, ELobbyComparison n) {
	lua_pushinteger(L, n);
}
static void push_ELobbyDistanceFilter(lua_State* L, ELobbyDistanceFilter n) {
	lua_pushinteger(L, n);
}
static void push_EChatMemberStateChange(lua_State* L, EChatMemberStateChange n) {
	lua_pushinteger(L, n);
}
static void push_ESteamPartyBeaconLocationType(lua_State* L, ESteamPartyBeaconLocationType n) {
	lua_pushinteger(L, n);
}
static void push_ESteamPartyBeaconLocationData(lua_State* L, ESteamPartyBeaconLocationData n) {
	lua_pushinteger(L, n);
}
static void push_ERemoteStoragePlatform(lua_State* L, ERemoteStoragePlatform n) {
	lua_pushinteger(L, n);
}
static void push_ERemoteStoragePublishedFileVisibility(lua_State* L, ERemoteStoragePublishedFileVisibility n) {
	lua_pushinteger(L, n);
}
static void push_EWorkshopFileType(lua_State* L, EWorkshopFileType n) {
	lua_pushinteger(L, n);
}
static void push_EWorkshopVote(lua_State* L, EWorkshopVote n) {
	lua_pushinteger(L, n);
}
static void push_EWorkshopFileAction(lua_State* L, EWorkshopFileAction n) {
	lua_pushinteger(L, n);
}
static void push_EWorkshopEnumerationType(lua_State* L, EWorkshopEnumerationType n) {
	lua_pushinteger(L, n);
}
static void push_EWorkshopVideoProvider(lua_State* L, EWorkshopVideoProvider n) {
	lua_pushinteger(L, n);
}
static void push_EUGCReadAction(lua_State* L, EUGCReadAction n) {
	lua_pushinteger(L, n);
}
static void push_ERemoteStorageLocalFileChange(lua_State* L, ERemoteStorageLocalFileChange n) {
	lua_pushinteger(L, n);
}
static void push_ERemoteStorageFilePathType(lua_State* L, ERemoteStorageFilePathType n) {
	lua_pushinteger(L, n);
}
static void push_ELeaderboardDataRequest(lua_State* L, ELeaderboardDataRequest n) {
	lua_pushinteger(L, n);
}
static void push_ELeaderboardSortMethod(lua_State* L, ELeaderboardSortMethod n) {
	lua_pushinteger(L, n);
}
static void push_ELeaderboardDisplayType(lua_State* L, ELeaderboardDisplayType n) {
	lua_pushinteger(L, n);
}
static void push_ELeaderboardUploadScoreMethod(lua_State* L, ELeaderboardUploadScoreMethod n) {
	lua_pushinteger(L, n);
}
static void push_ERegisterActivationCodeResult(lua_State* L, ERegisterActivationCodeResult n) {
	lua_pushinteger(L, n);
}
static void push_EP2PSessionError(lua_State* L, EP2PSessionError n) {
	lua_pushinteger(L, n);
}
static void push_EP2PSend(lua_State* L, EP2PSend n) {
	lua_pushinteger(L, n);
}
static void push_ESNetSocketState(lua_State* L, ESNetSocketState n) {
	lua_pushinteger(L, n);
}
static void push_ESNetSocketConnectionType(lua_State* L, ESNetSocketConnectionType n) {
	lua_pushinteger(L, n);
}
static void push_EVRScreenshotType(lua_State* L, EVRScreenshotType n) {
	lua_pushinteger(L, n);
}
static void push_AudioPlayback_Status(lua_State* L, AudioPlayback_Status n) {
	lua_pushinteger(L, n);
}
static void push_EHTTPMethod(lua_State* L, EHTTPMethod n) {
	lua_pushinteger(L, n);
}
static void push_EHTTPStatusCode(lua_State* L, EHTTPStatusCode n) {
	lua_pushinteger(L, n);
}
static void push_EInputSourceMode(lua_State* L, EInputSourceMode n) {
	lua_pushinteger(L, n);
}
static void push_EInputActionOrigin(lua_State* L, EInputActionOrigin n) {
	lua_pushinteger(L, n);
}
static void push_EXboxOrigin(lua_State* L, EXboxOrigin n) {
	lua_pushinteger(L, n);
}
static void push_ESteamControllerPad(lua_State* L, ESteamControllerPad n) {
	lua_pushinteger(L, n);
}
static void push_EControllerHapticLocation(lua_State* L, EControllerHapticLocation n) {
	lua_pushinteger(L, n);
}
static void push_EControllerHapticType(lua_State* L, EControllerHapticType n) {
	lua_pushinteger(L, n);
}
static void push_ESteamInputType(lua_State* L, ESteamInputType n) {
	lua_pushinteger(L, n);
}
static void push_ESteamInputConfigurationEnableType(lua_State* L, ESteamInputConfigurationEnableType n) {
	lua_pushinteger(L, n);
}
static void push_ESteamInputLEDFlag(lua_State* L, ESteamInputLEDFlag n) {
	lua_pushinteger(L, n);
}
static void push_ESteamInputGlyphSize(lua_State* L, ESteamInputGlyphSize n) {
	lua_pushinteger(L, n);
}
static void push_ESteamInputGlyphStyle(lua_State* L, ESteamInputGlyphStyle n) {
	lua_pushinteger(L, n);
}
static void push_ESteamInputActionEventType(lua_State* L, ESteamInputActionEventType n) {
	lua_pushinteger(L, n);
}
static void push_EControllerActionOrigin(lua_State* L, EControllerActionOrigin n) {
	lua_pushinteger(L, n);
}
static void push_ESteamControllerLEDFlag(lua_State* L, ESteamControllerLEDFlag n) {
	lua_pushinteger(L, n);
}
static void push_EUGCMatchingUGCType(lua_State* L, EUGCMatchingUGCType n) {
	lua_pushinteger(L, n);
}
static void push_EUserUGCList(lua_State* L, EUserUGCList n) {
	lua_pushinteger(L, n);
}
static void push_EUserUGCListSortOrder(lua_State* L, EUserUGCListSortOrder n) {
	lua_pushinteger(L, n);
}
static void push_EUGCQuery(lua_State* L, EUGCQuery n) {
	lua_pushinteger(L, n);
}
static void push_EItemUpdateStatus(lua_State* L, EItemUpdateStatus n) {
	lua_pushinteger(L, n);
}
static void push_EItemState(lua_State* L, EItemState n) {
	lua_pushinteger(L, n);
}
static void push_EItemStatistic(lua_State* L, EItemStatistic n) {
	lua_pushinteger(L, n);
}
static void push_EItemPreviewType(lua_State* L, EItemPreviewType n) {
	lua_pushinteger(L, n);
}
static void push_ESteamItemFlags(lua_State* L, ESteamItemFlags n) {
	lua_pushinteger(L, n);
}
static void push_EParentalFeature(lua_State* L, EParentalFeature n) {
	lua_pushinteger(L, n);
}
static void push_ESteamDeviceFormFactor(lua_State* L, ESteamDeviceFormFactor n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetworkingAvailability(lua_State* L, ESteamNetworkingAvailability n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetworkingIdentityType(lua_State* L, ESteamNetworkingIdentityType n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetworkingFakeIPType(lua_State* L, ESteamNetworkingFakeIPType n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetworkingConnectionState(lua_State* L, ESteamNetworkingConnectionState n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetConnectionEnd(lua_State* L, ESteamNetConnectionEnd n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetworkingConfigScope(lua_State* L, ESteamNetworkingConfigScope n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetworkingConfigDataType(lua_State* L, ESteamNetworkingConfigDataType n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetworkingConfigValue(lua_State* L, ESteamNetworkingConfigValue n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetworkingGetConfigValueResult(lua_State* L, ESteamNetworkingGetConfigValueResult n) {
	lua_pushinteger(L, n);
}
static void push_ESteamNetworkingSocketsDebugOutputType(lua_State* L, ESteamNetworkingSocketsDebugOutputType n) {
	lua_pushinteger(L, n);
}
static void push_EServerMode(lua_State* L, EServerMode n) {
	lua_pushinteger(L, n);
}
static void push_EFailureType(lua_State* L, IPCFailure_t::EFailureType n) {
	lua_pushinteger(L, n);
}
static void push_PlayerAcceptState_t(lua_State* L, RequestPlayersForGameResultCallback_t::PlayerAcceptState_t n) {
	lua_pushinteger(L, n);
}

/*****************************
* PUSH CSteamID
******************************/
static void push_CSteamID(lua_State* L, CSteamID steamId) {
	push_uint64(L, steamId.ConvertToUint64());
}
static void push_class_CSteamID(lua_State* L, CSteamID steamId) {
	push_uint64(L, steamId.ConvertToUint64());
}
static void push_CSteamID_array(lua_State* L, CSteamID steamId[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_CSteamID(L, steamId[i]);
		lua_settable(L, -3);
	}
}

/*****************************
* PUSH CGameID
******************************/
static void push_CGameID(lua_State* L, CGameID gameId) {
	push_uint64(L, gameId.ToUint64());
}

/*****************************
* PUSH structs
******************************/
static void push_servernetadr_t(lua_State* L, servernetadr_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_usConnectionPort");
	push_uint16(L, s.GetConnectionPort());
	lua_settable(L, -3);
	lua_pushstring(L, "m_usQueryPort");
	push_uint16(L, s.GetQueryPort());
	lua_settable(L, -3);
	lua_pushstring(L, "m_unIP");
	push_uint32(L, s.GetIP());
	lua_settable(L, -3);
}
static void push_gameserveritem_t(lua_State* L, gameserveritem_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_NetAdr");
	push_servernetadr_t(L, s.m_NetAdr);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPing");
	push_int(L, s.m_nPing);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bHadSuccessfulResponse");
	push_bool(L, s.m_bHadSuccessfulResponse);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bDoNotRefresh");
	push_bool(L, s.m_bDoNotRefresh);
	lua_settable(L, -3);
	lua_pushstring(L, "m_szGameDir");
	push_char_array(L, s.m_szGameDir, 32);
	lua_settable(L, -3);
	lua_pushstring(L, "m_szMap");
	push_char_array(L, s.m_szMap, 32);
	lua_settable(L, -3);
	lua_pushstring(L, "m_szGameDescription");
	push_char_array(L, s.m_szGameDescription, 64);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_uint32(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPlayers");
	push_int(L, s.m_nPlayers);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nMaxPlayers");
	push_int(L, s.m_nMaxPlayers);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nBotPlayers");
	push_int(L, s.m_nBotPlayers);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bPassword");
	push_bool(L, s.m_bPassword);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bSecure");
	push_bool(L, s.m_bSecure);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulTimeLastPlayed");
	push_uint32(L, s.m_ulTimeLastPlayed);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nServerVersion");
	push_int(L, s.m_nServerVersion);
	lua_settable(L, -3);
	lua_pushstring(L, "m_szServerName");
	lua_pushstring(L, s.GetName());
	lua_settable(L, -3);
	lua_pushstring(L, "m_szGameTags");
	push_char_array(L, s.m_szGameTags, 128);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamID");
	push_CSteamID(L, s.m_steamID);
	lua_settable(L, -3);
}
static void push_SteamParamStringArray_t(lua_State* L, SteamParamStringArray_t s) {
	lua_newtable(L);
	const char *pStrings = *s.m_ppStrings;
	for(int i=1; i<=s.m_nNumStrings; i++) {
		lua_pushnumber(L, i);
		lua_pushstring(L, &pStrings[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamIPAddress_t(lua_State* L, SteamIPAddress_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_rgubIPv6");
	push_uint8_array(L, s.m_rgubIPv6, 16);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eType");
	push_ESteamIPType(L, s.m_eType);
	lua_settable(L, -3);
}
static void push_SteamIPAddress_t_array(lua_State* L, SteamIPAddress_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamIPAddress_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FriendGameInfo_t(lua_State* L, FriendGameInfo_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_gameID");
	push_CGameID(L, s.m_gameID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unGameIP");
	push_uint32(L, s.m_unGameIP);
	lua_settable(L, -3);
	lua_pushstring(L, "m_usGamePort");
	push_uint16(L, s.m_usGamePort);
	lua_settable(L, -3);
	lua_pushstring(L, "m_usQueryPort");
	push_uint16(L, s.m_usQueryPort);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDLobby");
	push_CSteamID(L, s.m_steamIDLobby);
	lua_settable(L, -3);
}
static void push_FriendGameInfo_t_array(lua_State* L, FriendGameInfo_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FriendGameInfo_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MatchMakingKeyValuePair_t(lua_State* L, MatchMakingKeyValuePair_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_szKey");
	push_char_array(L, s.m_szKey, 256);
	lua_settable(L, -3);
	lua_pushstring(L, "m_szValue");
	push_char_array(L, s.m_szValue, 256);
	lua_settable(L, -3);
}
static void push_MatchMakingKeyValuePair_t_array(lua_State* L, MatchMakingKeyValuePair_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MatchMakingKeyValuePair_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamPartyBeaconLocation_t(lua_State* L, SteamPartyBeaconLocation_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eType");
	push_ESteamPartyBeaconLocationType(L, s.m_eType);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulLocationID");
	push_uint64(L, s.m_ulLocationID);
	lua_settable(L, -3);
}
static void push_SteamPartyBeaconLocation_t_array(lua_State* L, SteamPartyBeaconLocation_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamPartyBeaconLocation_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LeaderboardEntry_t(lua_State* L, LeaderboardEntry_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nGlobalRank");
	push_int32(L, s.m_nGlobalRank);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nScore");
	push_int32(L, s.m_nScore);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cDetails");
	push_int32(L, s.m_cDetails);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hUGC");
	push_UGCHandle_t(L, s.m_hUGC);
	lua_settable(L, -3);
}
static void push_LeaderboardEntry_t_array(lua_State* L, LeaderboardEntry_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LeaderboardEntry_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_P2PSessionState_t(lua_State* L, P2PSessionState_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bConnectionActive");
	push_uint8(L, s.m_bConnectionActive);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bConnecting");
	push_uint8(L, s.m_bConnecting);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eP2PSessionError");
	push_uint8(L, s.m_eP2PSessionError);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bUsingRelay");
	push_uint8(L, s.m_bUsingRelay);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nBytesQueuedForSend");
	push_int32(L, s.m_nBytesQueuedForSend);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPacketsQueuedForSend");
	push_int32(L, s.m_nPacketsQueuedForSend);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nRemoteIP");
	push_uint32(L, s.m_nRemoteIP);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nRemotePort");
	push_uint16(L, s.m_nRemotePort);
	lua_settable(L, -3);
}
static void push_P2PSessionState_t_array(lua_State* L, P2PSessionState_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_P2PSessionState_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_InputAnalogActionData_t(lua_State* L, InputAnalogActionData_t s) {
	lua_newtable(L);
	lua_pushstring(L, "eMode");
	push_EInputSourceMode(L, s.eMode);
	lua_settable(L, -3);
	lua_pushstring(L, "x");
	push_float(L, s.x);
	lua_settable(L, -3);
	lua_pushstring(L, "y");
	push_float(L, s.y);
	lua_settable(L, -3);
	lua_pushstring(L, "bActive");
	push_bool(L, s.bActive);
	lua_settable(L, -3);
}
static void push_InputAnalogActionData_t_array(lua_State* L, InputAnalogActionData_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_InputAnalogActionData_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_InputDigitalActionData_t(lua_State* L, InputDigitalActionData_t s) {
	lua_newtable(L);
	lua_pushstring(L, "bState");
	push_bool(L, s.bState);
	lua_settable(L, -3);
	lua_pushstring(L, "bActive");
	push_bool(L, s.bActive);
	lua_settable(L, -3);
}
static void push_InputDigitalActionData_t_array(lua_State* L, InputDigitalActionData_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_InputDigitalActionData_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_InputMotionData_t(lua_State* L, InputMotionData_t s) {
	lua_newtable(L);
	lua_pushstring(L, "rotQuatX");
	push_float(L, s.rotQuatX);
	lua_settable(L, -3);
	lua_pushstring(L, "rotQuatY");
	push_float(L, s.rotQuatY);
	lua_settable(L, -3);
	lua_pushstring(L, "rotQuatZ");
	push_float(L, s.rotQuatZ);
	lua_settable(L, -3);
	lua_pushstring(L, "rotQuatW");
	push_float(L, s.rotQuatW);
	lua_settable(L, -3);
	lua_pushstring(L, "posAccelX");
	push_float(L, s.posAccelX);
	lua_settable(L, -3);
	lua_pushstring(L, "posAccelY");
	push_float(L, s.posAccelY);
	lua_settable(L, -3);
	lua_pushstring(L, "posAccelZ");
	push_float(L, s.posAccelZ);
	lua_settable(L, -3);
	lua_pushstring(L, "rotVelX");
	push_float(L, s.rotVelX);
	lua_settable(L, -3);
	lua_pushstring(L, "rotVelY");
	push_float(L, s.rotVelY);
	lua_settable(L, -3);
	lua_pushstring(L, "rotVelZ");
	push_float(L, s.rotVelZ);
	lua_settable(L, -3);
}
static void push_InputMotionData_t_array(lua_State* L, InputMotionData_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_InputMotionData_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamUGCDetails_t(lua_State* L, SteamUGCDetails_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eFileType");
	push_EWorkshopFileType(L, s.m_eFileType);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nCreatorAppID");
	push_AppId_t(L, s.m_nCreatorAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nConsumerAppID");
	push_AppId_t(L, s.m_nConsumerAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchTitle");
	push_char_array(L, s.m_rgchTitle, 129);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchDescription");
	push_char_array(L, s.m_rgchDescription, 8000);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDOwner");
	push_uint64(L, s.m_ulSteamIDOwner);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rtimeCreated");
	push_uint32(L, s.m_rtimeCreated);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rtimeUpdated");
	push_uint32(L, s.m_rtimeUpdated);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rtimeAddedToUserList");
	push_uint32(L, s.m_rtimeAddedToUserList);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eVisibility");
	push_ERemoteStoragePublishedFileVisibility(L, s.m_eVisibility);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bBanned");
	push_bool(L, s.m_bBanned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bAcceptedForUse");
	push_bool(L, s.m_bAcceptedForUse);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bTagsTruncated");
	push_bool(L, s.m_bTagsTruncated);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchTags");
	push_char_array(L, s.m_rgchTags, 1025);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hFile");
	push_UGCHandle_t(L, s.m_hFile);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hPreviewFile");
	push_UGCHandle_t(L, s.m_hPreviewFile);
	lua_settable(L, -3);
	lua_pushstring(L, "m_pchFileName");
	push_char_array(L, s.m_pchFileName, 260);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nFileSize");
	push_int32(L, s.m_nFileSize);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPreviewFileSize");
	push_int32(L, s.m_nPreviewFileSize);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchURL");
	push_char_array(L, s.m_rgchURL, 256);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unVotesUp");
	push_uint32(L, s.m_unVotesUp);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unVotesDown");
	push_uint32(L, s.m_unVotesDown);
	lua_settable(L, -3);
	lua_pushstring(L, "m_flScore");
	push_float(L, s.m_flScore);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unNumChildren");
	push_uint32(L, s.m_unNumChildren);
	lua_settable(L, -3);
}
static void push_SteamUGCDetails_t_array(lua_State* L, SteamUGCDetails_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamUGCDetails_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamItemDetails_t(lua_State* L, SteamItemDetails_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_itemId");
	push_SteamItemInstanceID_t(L, s.m_itemId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iDefinition");
	push_SteamItemDef_t(L, s.m_iDefinition);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unQuantity");
	push_uint16(L, s.m_unQuantity);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unFlags");
	push_uint16(L, s.m_unFlags);
	lua_settable(L, -3);
}
static void push_SteamItemDetails_t_array(lua_State* L, SteamItemDetails_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamItemDetails_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetworkingIPAddr(lua_State* L, SteamNetworkingIPAddr s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ipv6");
	push_uint8_array(L, s.m_ipv6, 16);
	lua_settable(L, -3);
	lua_pushstring(L, "m_port");
	push_uint16(L, s.m_port);
	lua_settable(L, -3);
}
static void push_SteamNetworkingIPAddr_array(lua_State* L, SteamNetworkingIPAddr arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetworkingIPAddr(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetworkingIdentity(lua_State* L, SteamNetworkingIdentity s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eType");
	push_ESteamNetworkingIdentityType(L, s.m_eType);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cbSize");
	push_int(L, s.m_cbSize);
	lua_settable(L, -3);
	lua_pushstring(L, "m_szUnknownRawString");
	push_char_array(L, s.m_szUnknownRawString, 128);
	lua_settable(L, -3);
}
static void push_SteamNetworkingIdentity_array(lua_State* L, SteamNetworkingIdentity arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetworkingIdentity(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetConnectionInfo_t(lua_State* L, SteamNetConnectionInfo_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_identityRemote");
	push_SteamNetworkingIdentity(L, s.m_identityRemote);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nUserData");
	push_int64(L, s.m_nUserData);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hListenSocket");
	push_HSteamListenSocket(L, s.m_hListenSocket);
	lua_settable(L, -3);
	lua_pushstring(L, "m_addrRemote");
	push_SteamNetworkingIPAddr(L, s.m_addrRemote);
	lua_settable(L, -3);
	lua_pushstring(L, "m__pad1");
	push_uint16(L, s.m__pad1);
	lua_settable(L, -3);
	lua_pushstring(L, "m_idPOPRemote");
	push_SteamNetworkingPOPID(L, s.m_idPOPRemote);
	lua_settable(L, -3);
	lua_pushstring(L, "m_idPOPRelay");
	push_SteamNetworkingPOPID(L, s.m_idPOPRelay);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eState");
	push_ESteamNetworkingConnectionState(L, s.m_eState);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eEndReason");
	push_int(L, s.m_eEndReason);
	lua_settable(L, -3);
	lua_pushstring(L, "m_szEndDebug");
	push_char_array(L, s.m_szEndDebug, 128);
	lua_settable(L, -3);
	lua_pushstring(L, "m_szConnectionDescription");
	push_char_array(L, s.m_szConnectionDescription, 128);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nFlags");
	push_int(L, s.m_nFlags);
	lua_settable(L, -3);
	lua_pushstring(L, "reserved");
	push_uint32_array(L, s.reserved, 63);
	lua_settable(L, -3);
}
static void push_SteamNetConnectionInfo_t_array(lua_State* L, SteamNetConnectionInfo_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetConnectionInfo_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetConnectionRealTimeStatus_t(lua_State* L, SteamNetConnectionRealTimeStatus_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eState");
	push_ESteamNetworkingConnectionState(L, s.m_eState);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPing");
	push_int(L, s.m_nPing);
	lua_settable(L, -3);
	lua_pushstring(L, "m_flConnectionQualityLocal");
	push_float(L, s.m_flConnectionQualityLocal);
	lua_settable(L, -3);
	lua_pushstring(L, "m_flConnectionQualityRemote");
	push_float(L, s.m_flConnectionQualityRemote);
	lua_settable(L, -3);
	lua_pushstring(L, "m_flOutPacketsPerSec");
	push_float(L, s.m_flOutPacketsPerSec);
	lua_settable(L, -3);
	lua_pushstring(L, "m_flOutBytesPerSec");
	push_float(L, s.m_flOutBytesPerSec);
	lua_settable(L, -3);
	lua_pushstring(L, "m_flInPacketsPerSec");
	push_float(L, s.m_flInPacketsPerSec);
	lua_settable(L, -3);
	lua_pushstring(L, "m_flInBytesPerSec");
	push_float(L, s.m_flInBytesPerSec);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nSendRateBytesPerSecond");
	push_int(L, s.m_nSendRateBytesPerSecond);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cbPendingUnreliable");
	push_int(L, s.m_cbPendingUnreliable);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cbPendingReliable");
	push_int(L, s.m_cbPendingReliable);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cbSentUnackedReliable");
	push_int(L, s.m_cbSentUnackedReliable);
	lua_settable(L, -3);
	lua_pushstring(L, "m_usecQueueTime");
	push_SteamNetworkingMicroseconds(L, s.m_usecQueueTime);
	lua_settable(L, -3);
	lua_pushstring(L, "reserved");
	push_uint32_array(L, s.reserved, 16);
	lua_settable(L, -3);
}
static void push_SteamNetConnectionRealTimeStatus_t_array(lua_State* L, SteamNetConnectionRealTimeStatus_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetConnectionRealTimeStatus_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetConnectionRealTimeLaneStatus_t(lua_State* L, SteamNetConnectionRealTimeLaneStatus_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_cbPendingUnreliable");
	push_int(L, s.m_cbPendingUnreliable);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cbPendingReliable");
	push_int(L, s.m_cbPendingReliable);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cbSentUnackedReliable");
	push_int(L, s.m_cbSentUnackedReliable);
	lua_settable(L, -3);
	lua_pushstring(L, "_reservePad1");
	push_int(L, s._reservePad1);
	lua_settable(L, -3);
	lua_pushstring(L, "m_usecQueueTime");
	push_SteamNetworkingMicroseconds(L, s.m_usecQueueTime);
	lua_settable(L, -3);
	lua_pushstring(L, "reserved");
	push_uint32_array(L, s.reserved, 10);
	lua_settable(L, -3);
}
static void push_SteamNetConnectionRealTimeLaneStatus_t_array(lua_State* L, SteamNetConnectionRealTimeLaneStatus_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetConnectionRealTimeLaneStatus_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetworkPingLocation_t(lua_State* L, SteamNetworkPingLocation_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_data");
	push_uint8_array(L, s.m_data, 512);
	lua_settable(L, -3);
}
static void push_SteamNetworkPingLocation_t_array(lua_State* L, SteamNetworkPingLocation_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetworkPingLocation_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamServersConnected_t(lua_State* L, SteamServersConnected_t s) {
	lua_newtable(L);
}
static void push_SteamServersConnected_t_array(lua_State* L, SteamServersConnected_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamServersConnected_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamServerConnectFailure_t(lua_State* L, SteamServerConnectFailure_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bStillRetrying");
	push_bool(L, s.m_bStillRetrying);
	lua_settable(L, -3);
}
static void push_SteamServerConnectFailure_t_array(lua_State* L, SteamServerConnectFailure_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamServerConnectFailure_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamServersDisconnected_t(lua_State* L, SteamServersDisconnected_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_SteamServersDisconnected_t_array(lua_State* L, SteamServersDisconnected_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamServersDisconnected_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ClientGameServerDeny_t(lua_State* L, ClientGameServerDeny_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_uAppID");
	push_uint32(L, s.m_uAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unGameServerIP");
	push_uint32(L, s.m_unGameServerIP);
	lua_settable(L, -3);
	lua_pushstring(L, "m_usGameServerPort");
	push_uint16(L, s.m_usGameServerPort);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bSecure");
	push_uint16(L, s.m_bSecure);
	lua_settable(L, -3);
	lua_pushstring(L, "m_uReason");
	push_uint32(L, s.m_uReason);
	lua_settable(L, -3);
}
static void push_ClientGameServerDeny_t_array(lua_State* L, ClientGameServerDeny_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ClientGameServerDeny_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_IPCFailure_t(lua_State* L, IPCFailure_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eFailureType");
	push_uint8(L, s.m_eFailureType);
	lua_settable(L, -3);
}
static void push_IPCFailure_t_array(lua_State* L, IPCFailure_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_IPCFailure_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LicensesUpdated_t(lua_State* L, LicensesUpdated_t s) {
	lua_newtable(L);
}
static void push_LicensesUpdated_t_array(lua_State* L, LicensesUpdated_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LicensesUpdated_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ValidateAuthTicketResponse_t(lua_State* L, ValidateAuthTicketResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_SteamID");
	push_CSteamID(L, s.m_SteamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eAuthSessionResponse");
	push_EAuthSessionResponse(L, s.m_eAuthSessionResponse);
	lua_settable(L, -3);
	lua_pushstring(L, "m_OwnerSteamID");
	push_CSteamID(L, s.m_OwnerSteamID);
	lua_settable(L, -3);
}
static void push_ValidateAuthTicketResponse_t_array(lua_State* L, ValidateAuthTicketResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ValidateAuthTicketResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MicroTxnAuthorizationResponse_t(lua_State* L, MicroTxnAuthorizationResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_unAppID");
	push_uint32(L, s.m_unAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulOrderID");
	push_uint64(L, s.m_ulOrderID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bAuthorized");
	push_uint8(L, s.m_bAuthorized);
	lua_settable(L, -3);
}
static void push_MicroTxnAuthorizationResponse_t_array(lua_State* L, MicroTxnAuthorizationResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MicroTxnAuthorizationResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_EncryptedAppTicketResponse_t(lua_State* L, EncryptedAppTicketResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_EncryptedAppTicketResponse_t_array(lua_State* L, EncryptedAppTicketResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_EncryptedAppTicketResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GetAuthSessionTicketResponse_t(lua_State* L, GetAuthSessionTicketResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hAuthTicket");
	push_HAuthTicket(L, s.m_hAuthTicket);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_GetAuthSessionTicketResponse_t_array(lua_State* L, GetAuthSessionTicketResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GetAuthSessionTicketResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GameWebCallback_t(lua_State* L, GameWebCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_szURL");
	push_char_array(L, s.m_szURL, 256);
	lua_settable(L, -3);
}
static void push_GameWebCallback_t_array(lua_State* L, GameWebCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GameWebCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_StoreAuthURLResponse_t(lua_State* L, StoreAuthURLResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_szURL");
	push_char_array(L, s.m_szURL, 512);
	lua_settable(L, -3);
}
static void push_StoreAuthURLResponse_t_array(lua_State* L, StoreAuthURLResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_StoreAuthURLResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MarketEligibilityResponse_t(lua_State* L, MarketEligibilityResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bAllowed");
	push_bool(L, s.m_bAllowed);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eNotAllowedReason");
	push_EMarketNotAllowedReasonFlags(L, s.m_eNotAllowedReason);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rtAllowedAtTime");
	push_RTime32(L, s.m_rtAllowedAtTime);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cdaySteamGuardRequiredDays");
	push_int(L, s.m_cdaySteamGuardRequiredDays);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cdayNewDeviceCooldown");
	push_int(L, s.m_cdayNewDeviceCooldown);
	lua_settable(L, -3);
}
static void push_MarketEligibilityResponse_t_array(lua_State* L, MarketEligibilityResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MarketEligibilityResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_DurationControl_t(lua_State* L, DurationControl_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_appid");
	push_AppId_t(L, s.m_appid);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bApplicable");
	push_bool(L, s.m_bApplicable);
	lua_settable(L, -3);
	lua_pushstring(L, "m_csecsLast5h");
	push_int32(L, s.m_csecsLast5h);
	lua_settable(L, -3);
	lua_pushstring(L, "m_progress");
	push_EDurationControlProgress(L, s.m_progress);
	lua_settable(L, -3);
	lua_pushstring(L, "m_notification");
	push_EDurationControlNotification(L, s.m_notification);
	lua_settable(L, -3);
	lua_pushstring(L, "m_csecsToday");
	push_int32(L, s.m_csecsToday);
	lua_settable(L, -3);
	lua_pushstring(L, "m_csecsRemaining");
	push_int32(L, s.m_csecsRemaining);
	lua_settable(L, -3);
}
static void push_DurationControl_t_array(lua_State* L, DurationControl_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_DurationControl_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_PersonaStateChange_t(lua_State* L, PersonaStateChange_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulSteamID");
	push_uint64(L, s.m_ulSteamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nChangeFlags");
	push_int(L, s.m_nChangeFlags);
	lua_settable(L, -3);
}
static void push_PersonaStateChange_t_array(lua_State* L, PersonaStateChange_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PersonaStateChange_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GameOverlayActivated_t(lua_State* L, GameOverlayActivated_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bActive");
	push_uint8(L, s.m_bActive);
	lua_settable(L, -3);
}
static void push_GameOverlayActivated_t_array(lua_State* L, GameOverlayActivated_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GameOverlayActivated_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GameServerChangeRequested_t(lua_State* L, GameServerChangeRequested_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_rgchServer");
	push_char_array(L, s.m_rgchServer, 64);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchPassword");
	push_char_array(L, s.m_rgchPassword, 64);
	lua_settable(L, -3);
}
static void push_GameServerChangeRequested_t_array(lua_State* L, GameServerChangeRequested_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GameServerChangeRequested_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GameLobbyJoinRequested_t(lua_State* L, GameLobbyJoinRequested_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDLobby");
	push_CSteamID(L, s.m_steamIDLobby);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDFriend");
	push_CSteamID(L, s.m_steamIDFriend);
	lua_settable(L, -3);
}
static void push_GameLobbyJoinRequested_t_array(lua_State* L, GameLobbyJoinRequested_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GameLobbyJoinRequested_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AvatarImageLoaded_t(lua_State* L, AvatarImageLoaded_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamID");
	push_CSteamID(L, s.m_steamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iImage");
	push_int(L, s.m_iImage);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iWide");
	push_int(L, s.m_iWide);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iTall");
	push_int(L, s.m_iTall);
	lua_settable(L, -3);
}
static void push_AvatarImageLoaded_t_array(lua_State* L, AvatarImageLoaded_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AvatarImageLoaded_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ClanOfficerListResponse_t(lua_State* L, ClanOfficerListResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDClan");
	push_CSteamID(L, s.m_steamIDClan);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cOfficers");
	push_int(L, s.m_cOfficers);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bSuccess");
	push_uint8(L, s.m_bSuccess);
	lua_settable(L, -3);
}
static void push_ClanOfficerListResponse_t_array(lua_State* L, ClanOfficerListResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ClanOfficerListResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FriendRichPresenceUpdate_t(lua_State* L, FriendRichPresenceUpdate_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDFriend");
	push_CSteamID(L, s.m_steamIDFriend);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
}
static void push_FriendRichPresenceUpdate_t_array(lua_State* L, FriendRichPresenceUpdate_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FriendRichPresenceUpdate_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GameRichPresenceJoinRequested_t(lua_State* L, GameRichPresenceJoinRequested_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDFriend");
	push_CSteamID(L, s.m_steamIDFriend);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchConnect");
	push_char_array(L, s.m_rgchConnect, 256);
	lua_settable(L, -3);
}
static void push_GameRichPresenceJoinRequested_t_array(lua_State* L, GameRichPresenceJoinRequested_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GameRichPresenceJoinRequested_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GameConnectedClanChatMsg_t(lua_State* L, GameConnectedClanChatMsg_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDClanChat");
	push_CSteamID(L, s.m_steamIDClanChat);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iMessageID");
	push_int(L, s.m_iMessageID);
	lua_settable(L, -3);
}
static void push_GameConnectedClanChatMsg_t_array(lua_State* L, GameConnectedClanChatMsg_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GameConnectedClanChatMsg_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GameConnectedChatJoin_t(lua_State* L, GameConnectedChatJoin_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDClanChat");
	push_CSteamID(L, s.m_steamIDClanChat);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
}
static void push_GameConnectedChatJoin_t_array(lua_State* L, GameConnectedChatJoin_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GameConnectedChatJoin_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GameConnectedChatLeave_t(lua_State* L, GameConnectedChatLeave_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDClanChat");
	push_CSteamID(L, s.m_steamIDClanChat);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bKicked");
	push_bool(L, s.m_bKicked);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bDropped");
	push_bool(L, s.m_bDropped);
	lua_settable(L, -3);
}
static void push_GameConnectedChatLeave_t_array(lua_State* L, GameConnectedChatLeave_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GameConnectedChatLeave_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_DownloadClanActivityCountsResult_t(lua_State* L, DownloadClanActivityCountsResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bSuccess");
	push_bool(L, s.m_bSuccess);
	lua_settable(L, -3);
}
static void push_DownloadClanActivityCountsResult_t_array(lua_State* L, DownloadClanActivityCountsResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_DownloadClanActivityCountsResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_JoinClanChatRoomCompletionResult_t(lua_State* L, JoinClanChatRoomCompletionResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDClanChat");
	push_CSteamID(L, s.m_steamIDClanChat);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eChatRoomEnterResponse");
	push_EChatRoomEnterResponse(L, s.m_eChatRoomEnterResponse);
	lua_settable(L, -3);
}
static void push_JoinClanChatRoomCompletionResult_t_array(lua_State* L, JoinClanChatRoomCompletionResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_JoinClanChatRoomCompletionResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GameConnectedFriendChatMsg_t(lua_State* L, GameConnectedFriendChatMsg_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iMessageID");
	push_int(L, s.m_iMessageID);
	lua_settable(L, -3);
}
static void push_GameConnectedFriendChatMsg_t_array(lua_State* L, GameConnectedFriendChatMsg_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GameConnectedFriendChatMsg_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FriendsGetFollowerCount_t(lua_State* L, FriendsGetFollowerCount_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamID");
	push_CSteamID(L, s.m_steamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nCount");
	push_int(L, s.m_nCount);
	lua_settable(L, -3);
}
static void push_FriendsGetFollowerCount_t_array(lua_State* L, FriendsGetFollowerCount_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FriendsGetFollowerCount_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FriendsIsFollowing_t(lua_State* L, FriendsIsFollowing_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamID");
	push_CSteamID(L, s.m_steamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bIsFollowing");
	push_bool(L, s.m_bIsFollowing);
	lua_settable(L, -3);
}
static void push_FriendsIsFollowing_t_array(lua_State* L, FriendsIsFollowing_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FriendsIsFollowing_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FriendsEnumerateFollowingList_t(lua_State* L, FriendsEnumerateFollowingList_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgSteamID");
	push_CSteamID_array(L, s.m_rgSteamID, 50);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nResultsReturned");
	push_int32(L, s.m_nResultsReturned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nTotalResultCount");
	push_int32(L, s.m_nTotalResultCount);
	lua_settable(L, -3);
}
static void push_FriendsEnumerateFollowingList_t_array(lua_State* L, FriendsEnumerateFollowingList_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FriendsEnumerateFollowingList_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SetPersonaNameResponse_t(lua_State* L, SetPersonaNameResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bSuccess");
	push_bool(L, s.m_bSuccess);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bLocalSuccess");
	push_bool(L, s.m_bLocalSuccess);
	lua_settable(L, -3);
	lua_pushstring(L, "m_result");
	push_EResult(L, s.m_result);
	lua_settable(L, -3);
}
static void push_SetPersonaNameResponse_t_array(lua_State* L, SetPersonaNameResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SetPersonaNameResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_UnreadChatMessagesChanged_t(lua_State* L, UnreadChatMessagesChanged_t s) {
	lua_newtable(L);
}
static void push_UnreadChatMessagesChanged_t_array(lua_State* L, UnreadChatMessagesChanged_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UnreadChatMessagesChanged_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_OverlayBrowserProtocolNavigation_t(lua_State* L, OverlayBrowserProtocolNavigation_t s) {
	lua_newtable(L);
	lua_pushstring(L, "rgchURI");
	push_char_array(L, s.rgchURI, 1024);
	lua_settable(L, -3);
}
static void push_OverlayBrowserProtocolNavigation_t_array(lua_State* L, OverlayBrowserProtocolNavigation_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_OverlayBrowserProtocolNavigation_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_EquippedProfileItemsChanged_t(lua_State* L, EquippedProfileItemsChanged_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamID");
	push_CSteamID(L, s.m_steamID);
	lua_settable(L, -3);
}
static void push_EquippedProfileItemsChanged_t_array(lua_State* L, EquippedProfileItemsChanged_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_EquippedProfileItemsChanged_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_EquippedProfileItems_t(lua_State* L, EquippedProfileItems_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamID");
	push_CSteamID(L, s.m_steamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bHasAnimatedAvatar");
	push_bool(L, s.m_bHasAnimatedAvatar);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bHasAvatarFrame");
	push_bool(L, s.m_bHasAvatarFrame);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bHasProfileModifier");
	push_bool(L, s.m_bHasProfileModifier);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bHasProfileBackground");
	push_bool(L, s.m_bHasProfileBackground);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bHasMiniProfileBackground");
	push_bool(L, s.m_bHasMiniProfileBackground);
	lua_settable(L, -3);
}
static void push_EquippedProfileItems_t_array(lua_State* L, EquippedProfileItems_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_EquippedProfileItems_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_IPCountry_t(lua_State* L, IPCountry_t s) {
	lua_newtable(L);
}
static void push_IPCountry_t_array(lua_State* L, IPCountry_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_IPCountry_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LowBatteryPower_t(lua_State* L, LowBatteryPower_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nMinutesBatteryLeft");
	push_uint8(L, s.m_nMinutesBatteryLeft);
	lua_settable(L, -3);
}
static void push_LowBatteryPower_t_array(lua_State* L, LowBatteryPower_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LowBatteryPower_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamAPICallCompleted_t(lua_State* L, SteamAPICallCompleted_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hAsyncCall");
	push_SteamAPICall_t(L, s.m_hAsyncCall);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iCallback");
	push_int(L, s.m_iCallback);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cubParam");
	push_uint32(L, s.m_cubParam);
	lua_settable(L, -3);
}
static void push_SteamAPICallCompleted_t_array(lua_State* L, SteamAPICallCompleted_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamAPICallCompleted_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamShutdown_t(lua_State* L, SteamShutdown_t s) {
	lua_newtable(L);
}
static void push_SteamShutdown_t_array(lua_State* L, SteamShutdown_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamShutdown_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_CheckFileSignature_t(lua_State* L, CheckFileSignature_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eCheckFileSignature");
	push_ECheckFileSignature(L, s.m_eCheckFileSignature);
	lua_settable(L, -3);
}
static void push_CheckFileSignature_t_array(lua_State* L, CheckFileSignature_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_CheckFileSignature_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GamepadTextInputDismissed_t(lua_State* L, GamepadTextInputDismissed_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bSubmitted");
	push_bool(L, s.m_bSubmitted);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unSubmittedText");
	push_uint32(L, s.m_unSubmittedText);
	lua_settable(L, -3);
}
static void push_GamepadTextInputDismissed_t_array(lua_State* L, GamepadTextInputDismissed_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GamepadTextInputDismissed_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AppResumingFromSuspend_t(lua_State* L, AppResumingFromSuspend_t s) {
	lua_newtable(L);
}
static void push_AppResumingFromSuspend_t_array(lua_State* L, AppResumingFromSuspend_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AppResumingFromSuspend_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FloatingGamepadTextInputDismissed_t(lua_State* L, FloatingGamepadTextInputDismissed_t s) {
	lua_newtable(L);
}
static void push_FloatingGamepadTextInputDismissed_t_array(lua_State* L, FloatingGamepadTextInputDismissed_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FloatingGamepadTextInputDismissed_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FavoritesListChanged_t(lua_State* L, FavoritesListChanged_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nIP");
	push_uint32(L, s.m_nIP);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nQueryPort");
	push_uint32(L, s.m_nQueryPort);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nConnPort");
	push_uint32(L, s.m_nConnPort);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_uint32(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nFlags");
	push_uint32(L, s.m_nFlags);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bAdd");
	push_bool(L, s.m_bAdd);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unAccountId");
	push_AccountID_t(L, s.m_unAccountId);
	lua_settable(L, -3);
}
static void push_FavoritesListChanged_t_array(lua_State* L, FavoritesListChanged_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FavoritesListChanged_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LobbyInvite_t(lua_State* L, LobbyInvite_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulSteamIDUser");
	push_uint64(L, s.m_ulSteamIDUser);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDLobby");
	push_uint64(L, s.m_ulSteamIDLobby);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulGameID");
	push_uint64(L, s.m_ulGameID);
	lua_settable(L, -3);
}
static void push_LobbyInvite_t_array(lua_State* L, LobbyInvite_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LobbyInvite_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LobbyEnter_t(lua_State* L, LobbyEnter_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulSteamIDLobby");
	push_uint64(L, s.m_ulSteamIDLobby);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgfChatPermissions");
	push_uint32(L, s.m_rgfChatPermissions);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bLocked");
	push_bool(L, s.m_bLocked);
	lua_settable(L, -3);
	lua_pushstring(L, "m_EChatRoomEnterResponse");
	push_uint32(L, s.m_EChatRoomEnterResponse);
	lua_settable(L, -3);
}
static void push_LobbyEnter_t_array(lua_State* L, LobbyEnter_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LobbyEnter_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LobbyDataUpdate_t(lua_State* L, LobbyDataUpdate_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulSteamIDLobby");
	push_uint64(L, s.m_ulSteamIDLobby);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDMember");
	push_uint64(L, s.m_ulSteamIDMember);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bSuccess");
	push_uint8(L, s.m_bSuccess);
	lua_settable(L, -3);
}
static void push_LobbyDataUpdate_t_array(lua_State* L, LobbyDataUpdate_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LobbyDataUpdate_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LobbyChatUpdate_t(lua_State* L, LobbyChatUpdate_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulSteamIDLobby");
	push_uint64(L, s.m_ulSteamIDLobby);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDUserChanged");
	push_uint64(L, s.m_ulSteamIDUserChanged);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDMakingChange");
	push_uint64(L, s.m_ulSteamIDMakingChange);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgfChatMemberStateChange");
	push_uint32(L, s.m_rgfChatMemberStateChange);
	lua_settable(L, -3);
}
static void push_LobbyChatUpdate_t_array(lua_State* L, LobbyChatUpdate_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LobbyChatUpdate_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LobbyChatMsg_t(lua_State* L, LobbyChatMsg_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulSteamIDLobby");
	push_uint64(L, s.m_ulSteamIDLobby);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDUser");
	push_uint64(L, s.m_ulSteamIDUser);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eChatEntryType");
	push_uint8(L, s.m_eChatEntryType);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iChatID");
	push_uint32(L, s.m_iChatID);
	lua_settable(L, -3);
}
static void push_LobbyChatMsg_t_array(lua_State* L, LobbyChatMsg_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LobbyChatMsg_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LobbyGameCreated_t(lua_State* L, LobbyGameCreated_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulSteamIDLobby");
	push_uint64(L, s.m_ulSteamIDLobby);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDGameServer");
	push_uint64(L, s.m_ulSteamIDGameServer);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unIP");
	push_uint32(L, s.m_unIP);
	lua_settable(L, -3);
	lua_pushstring(L, "m_usPort");
	push_uint16(L, s.m_usPort);
	lua_settable(L, -3);
}
static void push_LobbyGameCreated_t_array(lua_State* L, LobbyGameCreated_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LobbyGameCreated_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LobbyMatchList_t(lua_State* L, LobbyMatchList_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nLobbiesMatching");
	push_uint32(L, s.m_nLobbiesMatching);
	lua_settable(L, -3);
}
static void push_LobbyMatchList_t_array(lua_State* L, LobbyMatchList_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LobbyMatchList_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LobbyKicked_t(lua_State* L, LobbyKicked_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulSteamIDLobby");
	push_uint64(L, s.m_ulSteamIDLobby);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDAdmin");
	push_uint64(L, s.m_ulSteamIDAdmin);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bKickedDueToDisconnect");
	push_uint8(L, s.m_bKickedDueToDisconnect);
	lua_settable(L, -3);
}
static void push_LobbyKicked_t_array(lua_State* L, LobbyKicked_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LobbyKicked_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LobbyCreated_t(lua_State* L, LobbyCreated_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDLobby");
	push_uint64(L, s.m_ulSteamIDLobby);
	lua_settable(L, -3);
}
static void push_LobbyCreated_t_array(lua_State* L, LobbyCreated_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LobbyCreated_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_PSNGameBootInviteResult_t(lua_State* L, PSNGameBootInviteResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bGameBootInviteExists");
	push_bool(L, s.m_bGameBootInviteExists);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDLobby");
	push_CSteamID(L, s.m_steamIDLobby);
	lua_settable(L, -3);
}
static void push_PSNGameBootInviteResult_t_array(lua_State* L, PSNGameBootInviteResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PSNGameBootInviteResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FavoritesListAccountsUpdated_t(lua_State* L, FavoritesListAccountsUpdated_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_FavoritesListAccountsUpdated_t_array(lua_State* L, FavoritesListAccountsUpdated_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FavoritesListAccountsUpdated_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SearchForGameProgressCallback_t(lua_State* L, SearchForGameProgressCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ullSearchID");
	push_uint64(L, s.m_ullSearchID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_lobbyID");
	push_CSteamID(L, s.m_lobbyID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDEndedSearch");
	push_CSteamID(L, s.m_steamIDEndedSearch);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nSecondsRemainingEstimate");
	push_int32(L, s.m_nSecondsRemainingEstimate);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cPlayersSearching");
	push_int32(L, s.m_cPlayersSearching);
	lua_settable(L, -3);
}
static void push_SearchForGameProgressCallback_t_array(lua_State* L, SearchForGameProgressCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SearchForGameProgressCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SearchForGameResultCallback_t(lua_State* L, SearchForGameResultCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ullSearchID");
	push_uint64(L, s.m_ullSearchID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nCountPlayersInGame");
	push_int32(L, s.m_nCountPlayersInGame);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nCountAcceptedGame");
	push_int32(L, s.m_nCountAcceptedGame);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDHost");
	push_CSteamID(L, s.m_steamIDHost);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bFinalCallback");
	push_bool(L, s.m_bFinalCallback);
	lua_settable(L, -3);
}
static void push_SearchForGameResultCallback_t_array(lua_State* L, SearchForGameResultCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SearchForGameResultCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RequestPlayersForGameProgressCallback_t(lua_State* L, RequestPlayersForGameProgressCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ullSearchID");
	push_uint64(L, s.m_ullSearchID);
	lua_settable(L, -3);
}
static void push_RequestPlayersForGameProgressCallback_t_array(lua_State* L, RequestPlayersForGameProgressCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RequestPlayersForGameProgressCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RequestPlayersForGameResultCallback_t(lua_State* L, RequestPlayersForGameResultCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ullSearchID");
	push_uint64(L, s.m_ullSearchID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_SteamIDPlayerFound");
	push_CSteamID(L, s.m_SteamIDPlayerFound);
	lua_settable(L, -3);
	lua_pushstring(L, "m_SteamIDLobby");
	push_CSteamID(L, s.m_SteamIDLobby);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ePlayerAcceptState");
	push_PlayerAcceptState_t(L, s.m_ePlayerAcceptState);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPlayerIndex");
	push_int32(L, s.m_nPlayerIndex);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nTotalPlayersFound");
	push_int32(L, s.m_nTotalPlayersFound);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nTotalPlayersAcceptedGame");
	push_int32(L, s.m_nTotalPlayersAcceptedGame);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nSuggestedTeamIndex");
	push_int32(L, s.m_nSuggestedTeamIndex);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ullUniqueGameID");
	push_uint64(L, s.m_ullUniqueGameID);
	lua_settable(L, -3);
}
static void push_RequestPlayersForGameResultCallback_t_array(lua_State* L, RequestPlayersForGameResultCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RequestPlayersForGameResultCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RequestPlayersForGameFinalResultCallback_t(lua_State* L, RequestPlayersForGameFinalResultCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ullSearchID");
	push_uint64(L, s.m_ullSearchID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ullUniqueGameID");
	push_uint64(L, s.m_ullUniqueGameID);
	lua_settable(L, -3);
}
static void push_RequestPlayersForGameFinalResultCallback_t_array(lua_State* L, RequestPlayersForGameFinalResultCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RequestPlayersForGameFinalResultCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SubmitPlayerResultResultCallback_t(lua_State* L, SubmitPlayerResultResultCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "ullUniqueGameID");
	push_uint64(L, s.ullUniqueGameID);
	lua_settable(L, -3);
	lua_pushstring(L, "steamIDPlayer");
	push_CSteamID(L, s.steamIDPlayer);
	lua_settable(L, -3);
}
static void push_SubmitPlayerResultResultCallback_t_array(lua_State* L, SubmitPlayerResultResultCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SubmitPlayerResultResultCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_EndGameResultCallback_t(lua_State* L, EndGameResultCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "ullUniqueGameID");
	push_uint64(L, s.ullUniqueGameID);
	lua_settable(L, -3);
}
static void push_EndGameResultCallback_t_array(lua_State* L, EndGameResultCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_EndGameResultCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_JoinPartyCallback_t(lua_State* L, JoinPartyCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulBeaconID");
	push_PartyBeaconID_t(L, s.m_ulBeaconID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_SteamIDBeaconOwner");
	push_CSteamID(L, s.m_SteamIDBeaconOwner);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchConnectString");
	push_char_array(L, s.m_rgchConnectString, 256);
	lua_settable(L, -3);
}
static void push_JoinPartyCallback_t_array(lua_State* L, JoinPartyCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_JoinPartyCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_CreateBeaconCallback_t(lua_State* L, CreateBeaconCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulBeaconID");
	push_PartyBeaconID_t(L, s.m_ulBeaconID);
	lua_settable(L, -3);
}
static void push_CreateBeaconCallback_t_array(lua_State* L, CreateBeaconCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_CreateBeaconCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ReservationNotificationCallback_t(lua_State* L, ReservationNotificationCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulBeaconID");
	push_PartyBeaconID_t(L, s.m_ulBeaconID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDJoiner");
	push_CSteamID(L, s.m_steamIDJoiner);
	lua_settable(L, -3);
}
static void push_ReservationNotificationCallback_t_array(lua_State* L, ReservationNotificationCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ReservationNotificationCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ChangeNumOpenSlotsCallback_t(lua_State* L, ChangeNumOpenSlotsCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_ChangeNumOpenSlotsCallback_t_array(lua_State* L, ChangeNumOpenSlotsCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ChangeNumOpenSlotsCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AvailableBeaconLocationsUpdated_t(lua_State* L, AvailableBeaconLocationsUpdated_t s) {
	lua_newtable(L);
}
static void push_AvailableBeaconLocationsUpdated_t_array(lua_State* L, AvailableBeaconLocationsUpdated_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AvailableBeaconLocationsUpdated_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ActiveBeaconsUpdated_t(lua_State* L, ActiveBeaconsUpdated_t s) {
	lua_newtable(L);
}
static void push_ActiveBeaconsUpdated_t_array(lua_State* L, ActiveBeaconsUpdated_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ActiveBeaconsUpdated_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageFileShareResult_t(lua_State* L, RemoteStorageFileShareResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hFile");
	push_UGCHandle_t(L, s.m_hFile);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchFilename");
	push_char_array(L, s.m_rgchFilename, 260);
	lua_settable(L, -3);
}
static void push_RemoteStorageFileShareResult_t_array(lua_State* L, RemoteStorageFileShareResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageFileShareResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStoragePublishFileResult_t(lua_State* L, RemoteStoragePublishFileResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
	push_bool(L, s.m_bUserNeedsToAcceptWorkshopLegalAgreement);
	lua_settable(L, -3);
}
static void push_RemoteStoragePublishFileResult_t_array(lua_State* L, RemoteStoragePublishFileResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStoragePublishFileResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageDeletePublishedFileResult_t(lua_State* L, RemoteStorageDeletePublishedFileResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
}
static void push_RemoteStorageDeletePublishedFileResult_t_array(lua_State* L, RemoteStorageDeletePublishedFileResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageDeletePublishedFileResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageEnumerateUserPublishedFilesResult_t(lua_State* L, RemoteStorageEnumerateUserPublishedFilesResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nResultsReturned");
	push_int32(L, s.m_nResultsReturned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nTotalResultCount");
	push_int32(L, s.m_nTotalResultCount);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgPublishedFileId");
	push_PublishedFileId_t_array(L, s.m_rgPublishedFileId, 50);
	lua_settable(L, -3);
}
static void push_RemoteStorageEnumerateUserPublishedFilesResult_t_array(lua_State* L, RemoteStorageEnumerateUserPublishedFilesResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageEnumerateUserPublishedFilesResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageSubscribePublishedFileResult_t(lua_State* L, RemoteStorageSubscribePublishedFileResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
}
static void push_RemoteStorageSubscribePublishedFileResult_t_array(lua_State* L, RemoteStorageSubscribePublishedFileResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageSubscribePublishedFileResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageEnumerateUserSubscribedFilesResult_t(lua_State* L, RemoteStorageEnumerateUserSubscribedFilesResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nResultsReturned");
	push_int32(L, s.m_nResultsReturned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nTotalResultCount");
	push_int32(L, s.m_nTotalResultCount);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgPublishedFileId");
	push_PublishedFileId_t_array(L, s.m_rgPublishedFileId, 50);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgRTimeSubscribed");
	push_uint32_array(L, s.m_rgRTimeSubscribed, 50);
	lua_settable(L, -3);
}
static void push_RemoteStorageEnumerateUserSubscribedFilesResult_t_array(lua_State* L, RemoteStorageEnumerateUserSubscribedFilesResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageEnumerateUserSubscribedFilesResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageUnsubscribePublishedFileResult_t(lua_State* L, RemoteStorageUnsubscribePublishedFileResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
}
static void push_RemoteStorageUnsubscribePublishedFileResult_t_array(lua_State* L, RemoteStorageUnsubscribePublishedFileResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageUnsubscribePublishedFileResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageUpdatePublishedFileResult_t(lua_State* L, RemoteStorageUpdatePublishedFileResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
	push_bool(L, s.m_bUserNeedsToAcceptWorkshopLegalAgreement);
	lua_settable(L, -3);
}
static void push_RemoteStorageUpdatePublishedFileResult_t_array(lua_State* L, RemoteStorageUpdatePublishedFileResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageUpdatePublishedFileResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageDownloadUGCResult_t(lua_State* L, RemoteStorageDownloadUGCResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hFile");
	push_UGCHandle_t(L, s.m_hFile);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nSizeInBytes");
	push_int32(L, s.m_nSizeInBytes);
	lua_settable(L, -3);
	lua_pushstring(L, "m_pchFileName");
	push_char_array(L, s.m_pchFileName, 260);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDOwner");
	push_uint64(L, s.m_ulSteamIDOwner);
	lua_settable(L, -3);
}
static void push_RemoteStorageDownloadUGCResult_t_array(lua_State* L, RemoteStorageDownloadUGCResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageDownloadUGCResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageGetPublishedFileDetailsResult_t(lua_State* L, RemoteStorageGetPublishedFileDetailsResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nCreatorAppID");
	push_AppId_t(L, s.m_nCreatorAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nConsumerAppID");
	push_AppId_t(L, s.m_nConsumerAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchTitle");
	push_char_array(L, s.m_rgchTitle, 129);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchDescription");
	push_char_array(L, s.m_rgchDescription, 8000);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hFile");
	push_UGCHandle_t(L, s.m_hFile);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hPreviewFile");
	push_UGCHandle_t(L, s.m_hPreviewFile);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulSteamIDOwner");
	push_uint64(L, s.m_ulSteamIDOwner);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rtimeCreated");
	push_uint32(L, s.m_rtimeCreated);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rtimeUpdated");
	push_uint32(L, s.m_rtimeUpdated);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eVisibility");
	push_ERemoteStoragePublishedFileVisibility(L, s.m_eVisibility);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bBanned");
	push_bool(L, s.m_bBanned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchTags");
	push_char_array(L, s.m_rgchTags, 1025);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bTagsTruncated");
	push_bool(L, s.m_bTagsTruncated);
	lua_settable(L, -3);
	lua_pushstring(L, "m_pchFileName");
	push_char_array(L, s.m_pchFileName, 260);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nFileSize");
	push_int32(L, s.m_nFileSize);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPreviewFileSize");
	push_int32(L, s.m_nPreviewFileSize);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchURL");
	push_char_array(L, s.m_rgchURL, 256);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eFileType");
	push_EWorkshopFileType(L, s.m_eFileType);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bAcceptedForUse");
	push_bool(L, s.m_bAcceptedForUse);
	lua_settable(L, -3);
}
static void push_RemoteStorageGetPublishedFileDetailsResult_t_array(lua_State* L, RemoteStorageGetPublishedFileDetailsResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageGetPublishedFileDetailsResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageEnumerateWorkshopFilesResult_t(lua_State* L, RemoteStorageEnumerateWorkshopFilesResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nResultsReturned");
	push_int32(L, s.m_nResultsReturned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nTotalResultCount");
	push_int32(L, s.m_nTotalResultCount);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgPublishedFileId");
	push_PublishedFileId_t_array(L, s.m_rgPublishedFileId, 50);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgScore");
	push_float_array(L, s.m_rgScore, 50);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppId");
	push_AppId_t(L, s.m_nAppId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unStartIndex");
	push_uint32(L, s.m_unStartIndex);
	lua_settable(L, -3);
}
static void push_RemoteStorageEnumerateWorkshopFilesResult_t_array(lua_State* L, RemoteStorageEnumerateWorkshopFilesResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageEnumerateWorkshopFilesResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageGetPublishedItemVoteDetailsResult_t(lua_State* L, RemoteStorageGetPublishedItemVoteDetailsResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unPublishedFileId");
	push_PublishedFileId_t(L, s.m_unPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nVotesFor");
	push_int32(L, s.m_nVotesFor);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nVotesAgainst");
	push_int32(L, s.m_nVotesAgainst);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nReports");
	push_int32(L, s.m_nReports);
	lua_settable(L, -3);
	lua_pushstring(L, "m_fScore");
	push_float(L, s.m_fScore);
	lua_settable(L, -3);
}
static void push_RemoteStorageGetPublishedItemVoteDetailsResult_t_array(lua_State* L, RemoteStorageGetPublishedItemVoteDetailsResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageGetPublishedItemVoteDetailsResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStoragePublishedFileSubscribed_t(lua_State* L, RemoteStoragePublishedFileSubscribed_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
}
static void push_RemoteStoragePublishedFileSubscribed_t_array(lua_State* L, RemoteStoragePublishedFileSubscribed_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStoragePublishedFileSubscribed_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStoragePublishedFileUnsubscribed_t(lua_State* L, RemoteStoragePublishedFileUnsubscribed_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
}
static void push_RemoteStoragePublishedFileUnsubscribed_t_array(lua_State* L, RemoteStoragePublishedFileUnsubscribed_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStoragePublishedFileUnsubscribed_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStoragePublishedFileDeleted_t(lua_State* L, RemoteStoragePublishedFileDeleted_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
}
static void push_RemoteStoragePublishedFileDeleted_t_array(lua_State* L, RemoteStoragePublishedFileDeleted_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStoragePublishedFileDeleted_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageUpdateUserPublishedItemVoteResult_t(lua_State* L, RemoteStorageUpdateUserPublishedItemVoteResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
}
static void push_RemoteStorageUpdateUserPublishedItemVoteResult_t_array(lua_State* L, RemoteStorageUpdateUserPublishedItemVoteResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageUpdateUserPublishedItemVoteResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageUserVoteDetails_t(lua_State* L, RemoteStorageUserVoteDetails_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eVote");
	push_EWorkshopVote(L, s.m_eVote);
	lua_settable(L, -3);
}
static void push_RemoteStorageUserVoteDetails_t_array(lua_State* L, RemoteStorageUserVoteDetails_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageUserVoteDetails_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t(lua_State* L, RemoteStorageEnumerateUserSharedWorkshopFilesResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nResultsReturned");
	push_int32(L, s.m_nResultsReturned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nTotalResultCount");
	push_int32(L, s.m_nTotalResultCount);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgPublishedFileId");
	push_PublishedFileId_t_array(L, s.m_rgPublishedFileId, 50);
	lua_settable(L, -3);
}
static void push_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_array(lua_State* L, RemoteStorageEnumerateUserSharedWorkshopFilesResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageSetUserPublishedFileActionResult_t(lua_State* L, RemoteStorageSetUserPublishedFileActionResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eAction");
	push_EWorkshopFileAction(L, s.m_eAction);
	lua_settable(L, -3);
}
static void push_RemoteStorageSetUserPublishedFileActionResult_t_array(lua_State* L, RemoteStorageSetUserPublishedFileActionResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageSetUserPublishedFileActionResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageEnumeratePublishedFilesByUserActionResult_t(lua_State* L, RemoteStorageEnumeratePublishedFilesByUserActionResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eAction");
	push_EWorkshopFileAction(L, s.m_eAction);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nResultsReturned");
	push_int32(L, s.m_nResultsReturned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nTotalResultCount");
	push_int32(L, s.m_nTotalResultCount);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgPublishedFileId");
	push_PublishedFileId_t_array(L, s.m_rgPublishedFileId, 50);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgRTimeUpdated");
	push_uint32_array(L, s.m_rgRTimeUpdated, 50);
	lua_settable(L, -3);
}
static void push_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_array(lua_State* L, RemoteStorageEnumeratePublishedFilesByUserActionResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageEnumeratePublishedFilesByUserActionResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStoragePublishFileProgress_t(lua_State* L, RemoteStoragePublishFileProgress_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_dPercentFile");
	push_double(L, s.m_dPercentFile);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bPreview");
	push_bool(L, s.m_bPreview);
	lua_settable(L, -3);
}
static void push_RemoteStoragePublishFileProgress_t_array(lua_State* L, RemoteStoragePublishFileProgress_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStoragePublishFileProgress_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStoragePublishedFileUpdated_t(lua_State* L, RemoteStoragePublishedFileUpdated_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulUnused");
	push_uint64(L, s.m_ulUnused);
	lua_settable(L, -3);
}
static void push_RemoteStoragePublishedFileUpdated_t_array(lua_State* L, RemoteStoragePublishedFileUpdated_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStoragePublishedFileUpdated_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageFileWriteAsyncComplete_t(lua_State* L, RemoteStorageFileWriteAsyncComplete_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_RemoteStorageFileWriteAsyncComplete_t_array(lua_State* L, RemoteStorageFileWriteAsyncComplete_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageFileWriteAsyncComplete_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageFileReadAsyncComplete_t(lua_State* L, RemoteStorageFileReadAsyncComplete_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hFileReadAsync");
	push_SteamAPICall_t(L, s.m_hFileReadAsync);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nOffset");
	push_uint32(L, s.m_nOffset);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cubRead");
	push_uint32(L, s.m_cubRead);
	lua_settable(L, -3);
}
static void push_RemoteStorageFileReadAsyncComplete_t_array(lua_State* L, RemoteStorageFileReadAsyncComplete_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageFileReadAsyncComplete_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageLocalFileChange_t(lua_State* L, RemoteStorageLocalFileChange_t s) {
	lua_newtable(L);
}
static void push_RemoteStorageLocalFileChange_t_array(lua_State* L, RemoteStorageLocalFileChange_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageLocalFileChange_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_UserStatsReceived_t(lua_State* L, UserStatsReceived_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nGameID");
	push_uint64(L, s.m_nGameID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
}
static void push_UserStatsReceived_t_array(lua_State* L, UserStatsReceived_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UserStatsReceived_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_UserStatsStored_t(lua_State* L, UserStatsStored_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nGameID");
	push_uint64(L, s.m_nGameID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_UserStatsStored_t_array(lua_State* L, UserStatsStored_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UserStatsStored_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_UserAchievementStored_t(lua_State* L, UserAchievementStored_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nGameID");
	push_uint64(L, s.m_nGameID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bGroupAchievement");
	push_bool(L, s.m_bGroupAchievement);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchAchievementName");
	push_char_array(L, s.m_rgchAchievementName, 128);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nCurProgress");
	push_uint32(L, s.m_nCurProgress);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nMaxProgress");
	push_uint32(L, s.m_nMaxProgress);
	lua_settable(L, -3);
}
static void push_UserAchievementStored_t_array(lua_State* L, UserAchievementStored_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UserAchievementStored_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LeaderboardFindResult_t(lua_State* L, LeaderboardFindResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hSteamLeaderboard");
	push_SteamLeaderboard_t(L, s.m_hSteamLeaderboard);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bLeaderboardFound");
	push_uint8(L, s.m_bLeaderboardFound);
	lua_settable(L, -3);
}
static void push_LeaderboardFindResult_t_array(lua_State* L, LeaderboardFindResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LeaderboardFindResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LeaderboardScoresDownloaded_t(lua_State* L, LeaderboardScoresDownloaded_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hSteamLeaderboard");
	push_SteamLeaderboard_t(L, s.m_hSteamLeaderboard);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hSteamLeaderboardEntries");
	push_SteamLeaderboardEntries_t(L, s.m_hSteamLeaderboardEntries);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cEntryCount");
	push_int(L, s.m_cEntryCount);
	lua_settable(L, -3);
}
static void push_LeaderboardScoresDownloaded_t_array(lua_State* L, LeaderboardScoresDownloaded_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LeaderboardScoresDownloaded_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LeaderboardScoreUploaded_t(lua_State* L, LeaderboardScoreUploaded_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bSuccess");
	push_uint8(L, s.m_bSuccess);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hSteamLeaderboard");
	push_SteamLeaderboard_t(L, s.m_hSteamLeaderboard);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nScore");
	push_int32(L, s.m_nScore);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bScoreChanged");
	push_uint8(L, s.m_bScoreChanged);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nGlobalRankNew");
	push_int(L, s.m_nGlobalRankNew);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nGlobalRankPrevious");
	push_int(L, s.m_nGlobalRankPrevious);
	lua_settable(L, -3);
}
static void push_LeaderboardScoreUploaded_t_array(lua_State* L, LeaderboardScoreUploaded_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LeaderboardScoreUploaded_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_NumberOfCurrentPlayers_t(lua_State* L, NumberOfCurrentPlayers_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bSuccess");
	push_uint8(L, s.m_bSuccess);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cPlayers");
	push_int32(L, s.m_cPlayers);
	lua_settable(L, -3);
}
static void push_NumberOfCurrentPlayers_t_array(lua_State* L, NumberOfCurrentPlayers_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_NumberOfCurrentPlayers_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_UserStatsUnloaded_t(lua_State* L, UserStatsUnloaded_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
}
static void push_UserStatsUnloaded_t_array(lua_State* L, UserStatsUnloaded_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UserStatsUnloaded_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_UserAchievementIconFetched_t(lua_State* L, UserAchievementIconFetched_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nGameID");
	push_CGameID(L, s.m_nGameID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchAchievementName");
	push_char_array(L, s.m_rgchAchievementName, 128);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bAchieved");
	push_bool(L, s.m_bAchieved);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nIconHandle");
	push_int(L, s.m_nIconHandle);
	lua_settable(L, -3);
}
static void push_UserAchievementIconFetched_t_array(lua_State* L, UserAchievementIconFetched_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UserAchievementIconFetched_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GlobalAchievementPercentagesReady_t(lua_State* L, GlobalAchievementPercentagesReady_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nGameID");
	push_uint64(L, s.m_nGameID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_GlobalAchievementPercentagesReady_t_array(lua_State* L, GlobalAchievementPercentagesReady_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GlobalAchievementPercentagesReady_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_LeaderboardUGCSet_t(lua_State* L, LeaderboardUGCSet_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hSteamLeaderboard");
	push_SteamLeaderboard_t(L, s.m_hSteamLeaderboard);
	lua_settable(L, -3);
}
static void push_LeaderboardUGCSet_t_array(lua_State* L, LeaderboardUGCSet_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_LeaderboardUGCSet_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_PS3TrophiesInstalled_t(lua_State* L, PS3TrophiesInstalled_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nGameID");
	push_uint64(L, s.m_nGameID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulRequiredDiskSpace");
	push_uint64(L, s.m_ulRequiredDiskSpace);
	lua_settable(L, -3);
}
static void push_PS3TrophiesInstalled_t_array(lua_State* L, PS3TrophiesInstalled_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PS3TrophiesInstalled_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GlobalStatsReceived_t(lua_State* L, GlobalStatsReceived_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nGameID");
	push_uint64(L, s.m_nGameID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_GlobalStatsReceived_t_array(lua_State* L, GlobalStatsReceived_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GlobalStatsReceived_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_DlcInstalled_t(lua_State* L, DlcInstalled_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
}
static void push_DlcInstalled_t_array(lua_State* L, DlcInstalled_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_DlcInstalled_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RegisterActivationCodeResponse_t(lua_State* L, RegisterActivationCodeResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_ERegisterActivationCodeResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unPackageRegistered");
	push_uint32(L, s.m_unPackageRegistered);
	lua_settable(L, -3);
}
static void push_RegisterActivationCodeResponse_t_array(lua_State* L, RegisterActivationCodeResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RegisterActivationCodeResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_NewUrlLaunchParameters_t(lua_State* L, NewUrlLaunchParameters_t s) {
	lua_newtable(L);
}
static void push_NewUrlLaunchParameters_t_array(lua_State* L, NewUrlLaunchParameters_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_NewUrlLaunchParameters_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AppProofOfPurchaseKeyResponse_t(lua_State* L, AppProofOfPurchaseKeyResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_uint32(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cchKeyLength");
	push_uint32(L, s.m_cchKeyLength);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchKey");
	push_char_array(L, s.m_rgchKey, 240);
	lua_settable(L, -3);
}
static void push_AppProofOfPurchaseKeyResponse_t_array(lua_State* L, AppProofOfPurchaseKeyResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AppProofOfPurchaseKeyResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FileDetailsResult_t(lua_State* L, FileDetailsResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulFileSize");
	push_uint64(L, s.m_ulFileSize);
	lua_settable(L, -3);
	lua_pushstring(L, "m_FileSHA");
	push_uint8_array(L, s.m_FileSHA, 20);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unFlags");
	push_uint32(L, s.m_unFlags);
	lua_settable(L, -3);
}
static void push_FileDetailsResult_t_array(lua_State* L, FileDetailsResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FileDetailsResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_TimedTrialStatus_t(lua_State* L, TimedTrialStatus_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_unAppID");
	push_AppId_t(L, s.m_unAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bIsOffline");
	push_bool(L, s.m_bIsOffline);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unSecondsAllowed");
	push_uint32(L, s.m_unSecondsAllowed);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unSecondsPlayed");
	push_uint32(L, s.m_unSecondsPlayed);
	lua_settable(L, -3);
}
static void push_TimedTrialStatus_t_array(lua_State* L, TimedTrialStatus_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_TimedTrialStatus_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_P2PSessionRequest_t(lua_State* L, P2PSessionRequest_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDRemote");
	push_CSteamID(L, s.m_steamIDRemote);
	lua_settable(L, -3);
}
static void push_P2PSessionRequest_t_array(lua_State* L, P2PSessionRequest_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_P2PSessionRequest_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_P2PSessionConnectFail_t(lua_State* L, P2PSessionConnectFail_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDRemote");
	push_CSteamID(L, s.m_steamIDRemote);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eP2PSessionError");
	push_uint8(L, s.m_eP2PSessionError);
	lua_settable(L, -3);
}
static void push_P2PSessionConnectFail_t_array(lua_State* L, P2PSessionConnectFail_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_P2PSessionConnectFail_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SocketStatusCallback_t(lua_State* L, SocketStatusCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hSocket");
	push_SNetSocket_t(L, s.m_hSocket);
	lua_settable(L, -3);
	lua_pushstring(L, "m_hListenSocket");
	push_SNetListenSocket_t(L, s.m_hListenSocket);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDRemote");
	push_CSteamID(L, s.m_steamIDRemote);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eSNetSocketState");
	push_int(L, s.m_eSNetSocketState);
	lua_settable(L, -3);
}
static void push_SocketStatusCallback_t_array(lua_State* L, SocketStatusCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SocketStatusCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ScreenshotReady_t(lua_State* L, ScreenshotReady_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hLocal");
	push_ScreenshotHandle(L, s.m_hLocal);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_ScreenshotReady_t_array(lua_State* L, ScreenshotReady_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ScreenshotReady_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ScreenshotRequested_t(lua_State* L, ScreenshotRequested_t s) {
	lua_newtable(L);
}
static void push_ScreenshotRequested_t_array(lua_State* L, ScreenshotRequested_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ScreenshotRequested_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_PlaybackStatusHasChanged_t(lua_State* L, PlaybackStatusHasChanged_t s) {
	lua_newtable(L);
}
static void push_PlaybackStatusHasChanged_t_array(lua_State* L, PlaybackStatusHasChanged_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PlaybackStatusHasChanged_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_VolumeHasChanged_t(lua_State* L, VolumeHasChanged_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_flNewVolume");
	push_float(L, s.m_flNewVolume);
	lua_settable(L, -3);
}
static void push_VolumeHasChanged_t_array(lua_State* L, VolumeHasChanged_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_VolumeHasChanged_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerRemoteWillActivate_t(lua_State* L, MusicPlayerRemoteWillActivate_t s) {
	lua_newtable(L);
}
static void push_MusicPlayerRemoteWillActivate_t_array(lua_State* L, MusicPlayerRemoteWillActivate_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerRemoteWillActivate_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerRemoteWillDeactivate_t(lua_State* L, MusicPlayerRemoteWillDeactivate_t s) {
	lua_newtable(L);
}
static void push_MusicPlayerRemoteWillDeactivate_t_array(lua_State* L, MusicPlayerRemoteWillDeactivate_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerRemoteWillDeactivate_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerRemoteToFront_t(lua_State* L, MusicPlayerRemoteToFront_t s) {
	lua_newtable(L);
}
static void push_MusicPlayerRemoteToFront_t_array(lua_State* L, MusicPlayerRemoteToFront_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerRemoteToFront_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerWillQuit_t(lua_State* L, MusicPlayerWillQuit_t s) {
	lua_newtable(L);
}
static void push_MusicPlayerWillQuit_t_array(lua_State* L, MusicPlayerWillQuit_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerWillQuit_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerWantsPlay_t(lua_State* L, MusicPlayerWantsPlay_t s) {
	lua_newtable(L);
}
static void push_MusicPlayerWantsPlay_t_array(lua_State* L, MusicPlayerWantsPlay_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerWantsPlay_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerWantsPause_t(lua_State* L, MusicPlayerWantsPause_t s) {
	lua_newtable(L);
}
static void push_MusicPlayerWantsPause_t_array(lua_State* L, MusicPlayerWantsPause_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerWantsPause_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerWantsPlayPrevious_t(lua_State* L, MusicPlayerWantsPlayPrevious_t s) {
	lua_newtable(L);
}
static void push_MusicPlayerWantsPlayPrevious_t_array(lua_State* L, MusicPlayerWantsPlayPrevious_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerWantsPlayPrevious_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerWantsPlayNext_t(lua_State* L, MusicPlayerWantsPlayNext_t s) {
	lua_newtable(L);
}
static void push_MusicPlayerWantsPlayNext_t_array(lua_State* L, MusicPlayerWantsPlayNext_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerWantsPlayNext_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerWantsShuffled_t(lua_State* L, MusicPlayerWantsShuffled_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bShuffled");
	push_bool(L, s.m_bShuffled);
	lua_settable(L, -3);
}
static void push_MusicPlayerWantsShuffled_t_array(lua_State* L, MusicPlayerWantsShuffled_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerWantsShuffled_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerWantsLooped_t(lua_State* L, MusicPlayerWantsLooped_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bLooped");
	push_bool(L, s.m_bLooped);
	lua_settable(L, -3);
}
static void push_MusicPlayerWantsLooped_t_array(lua_State* L, MusicPlayerWantsLooped_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerWantsLooped_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerWantsVolume_t(lua_State* L, MusicPlayerWantsVolume_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_flNewVolume");
	push_float(L, s.m_flNewVolume);
	lua_settable(L, -3);
}
static void push_MusicPlayerWantsVolume_t_array(lua_State* L, MusicPlayerWantsVolume_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerWantsVolume_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerSelectsQueueEntry_t(lua_State* L, MusicPlayerSelectsQueueEntry_t s) {
	lua_newtable(L);
	lua_pushstring(L, "nID");
	push_int(L, s.nID);
	lua_settable(L, -3);
}
static void push_MusicPlayerSelectsQueueEntry_t_array(lua_State* L, MusicPlayerSelectsQueueEntry_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerSelectsQueueEntry_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerSelectsPlaylistEntry_t(lua_State* L, MusicPlayerSelectsPlaylistEntry_t s) {
	lua_newtable(L);
	lua_pushstring(L, "nID");
	push_int(L, s.nID);
	lua_settable(L, -3);
}
static void push_MusicPlayerSelectsPlaylistEntry_t_array(lua_State* L, MusicPlayerSelectsPlaylistEntry_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerSelectsPlaylistEntry_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_MusicPlayerWantsPlayingRepeatStatus_t(lua_State* L, MusicPlayerWantsPlayingRepeatStatus_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nPlayingRepeatStatus");
	push_int(L, s.m_nPlayingRepeatStatus);
	lua_settable(L, -3);
}
static void push_MusicPlayerWantsPlayingRepeatStatus_t_array(lua_State* L, MusicPlayerWantsPlayingRepeatStatus_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_MusicPlayerWantsPlayingRepeatStatus_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTTPRequestCompleted_t(lua_State* L, HTTPRequestCompleted_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hRequest");
	push_HTTPRequestHandle(L, s.m_hRequest);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulContextValue");
	push_uint64(L, s.m_ulContextValue);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bRequestSuccessful");
	push_bool(L, s.m_bRequestSuccessful);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eStatusCode");
	push_EHTTPStatusCode(L, s.m_eStatusCode);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unBodySize");
	push_uint32(L, s.m_unBodySize);
	lua_settable(L, -3);
}
static void push_HTTPRequestCompleted_t_array(lua_State* L, HTTPRequestCompleted_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTTPRequestCompleted_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTTPRequestHeadersReceived_t(lua_State* L, HTTPRequestHeadersReceived_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hRequest");
	push_HTTPRequestHandle(L, s.m_hRequest);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulContextValue");
	push_uint64(L, s.m_ulContextValue);
	lua_settable(L, -3);
}
static void push_HTTPRequestHeadersReceived_t_array(lua_State* L, HTTPRequestHeadersReceived_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTTPRequestHeadersReceived_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTTPRequestDataReceived_t(lua_State* L, HTTPRequestDataReceived_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hRequest");
	push_HTTPRequestHandle(L, s.m_hRequest);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulContextValue");
	push_uint64(L, s.m_ulContextValue);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cOffset");
	push_uint32(L, s.m_cOffset);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cBytesReceived");
	push_uint32(L, s.m_cBytesReceived);
	lua_settable(L, -3);
}
static void push_HTTPRequestDataReceived_t_array(lua_State* L, HTTPRequestDataReceived_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTTPRequestDataReceived_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInputDeviceConnected_t(lua_State* L, SteamInputDeviceConnected_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulConnectedDeviceHandle");
	push_InputHandle_t(L, s.m_ulConnectedDeviceHandle);
	lua_settable(L, -3);
}
static void push_SteamInputDeviceConnected_t_array(lua_State* L, SteamInputDeviceConnected_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInputDeviceConnected_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInputDeviceDisconnected_t(lua_State* L, SteamInputDeviceDisconnected_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_ulDisconnectedDeviceHandle");
	push_InputHandle_t(L, s.m_ulDisconnectedDeviceHandle);
	lua_settable(L, -3);
}
static void push_SteamInputDeviceDisconnected_t_array(lua_State* L, SteamInputDeviceDisconnected_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInputDeviceDisconnected_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInputConfigurationLoaded_t(lua_State* L, SteamInputConfigurationLoaded_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_unAppID");
	push_AppId_t(L, s.m_unAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulDeviceHandle");
	push_InputHandle_t(L, s.m_ulDeviceHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulMappingCreator");
	push_CSteamID(L, s.m_ulMappingCreator);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unMajorRevision");
	push_uint32(L, s.m_unMajorRevision);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unMinorRevision");
	push_uint32(L, s.m_unMinorRevision);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bUsesSteamInputAPI");
	push_bool(L, s.m_bUsesSteamInputAPI);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bUsesGamepadAPI");
	push_bool(L, s.m_bUsesGamepadAPI);
	lua_settable(L, -3);
}
static void push_SteamInputConfigurationLoaded_t_array(lua_State* L, SteamInputConfigurationLoaded_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInputConfigurationLoaded_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamUGCQueryCompleted_t(lua_State* L, SteamUGCQueryCompleted_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_handle");
	push_UGCQueryHandle_t(L, s.m_handle);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unNumResultsReturned");
	push_uint32(L, s.m_unNumResultsReturned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unTotalMatchingResults");
	push_uint32(L, s.m_unTotalMatchingResults);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bCachedData");
	push_bool(L, s.m_bCachedData);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchNextCursor");
	push_char_array(L, s.m_rgchNextCursor, 256);
	lua_settable(L, -3);
}
static void push_SteamUGCQueryCompleted_t_array(lua_State* L, SteamUGCQueryCompleted_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamUGCQueryCompleted_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamUGCRequestUGCDetailsResult_t(lua_State* L, SteamUGCRequestUGCDetailsResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_details");
	push_SteamUGCDetails_t(L, s.m_details);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bCachedData");
	push_bool(L, s.m_bCachedData);
	lua_settable(L, -3);
}
static void push_SteamUGCRequestUGCDetailsResult_t_array(lua_State* L, SteamUGCRequestUGCDetailsResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamUGCRequestUGCDetailsResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_CreateItemResult_t(lua_State* L, CreateItemResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
	push_bool(L, s.m_bUserNeedsToAcceptWorkshopLegalAgreement);
	lua_settable(L, -3);
}
static void push_CreateItemResult_t_array(lua_State* L, CreateItemResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_CreateItemResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SubmitItemUpdateResult_t(lua_State* L, SubmitItemUpdateResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
	push_bool(L, s.m_bUserNeedsToAcceptWorkshopLegalAgreement);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
}
static void push_SubmitItemUpdateResult_t_array(lua_State* L, SubmitItemUpdateResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SubmitItemUpdateResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ItemInstalled_t(lua_State* L, ItemInstalled_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_unAppID");
	push_AppId_t(L, s.m_unAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
}
static void push_ItemInstalled_t_array(lua_State* L, ItemInstalled_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ItemInstalled_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_DownloadItemResult_t(lua_State* L, DownloadItemResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_unAppID");
	push_AppId_t(L, s.m_unAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_DownloadItemResult_t_array(lua_State* L, DownloadItemResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_DownloadItemResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_UserFavoriteItemsListChanged_t(lua_State* L, UserFavoriteItemsListChanged_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bWasAddRequest");
	push_bool(L, s.m_bWasAddRequest);
	lua_settable(L, -3);
}
static void push_UserFavoriteItemsListChanged_t_array(lua_State* L, UserFavoriteItemsListChanged_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UserFavoriteItemsListChanged_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SetUserItemVoteResult_t(lua_State* L, SetUserItemVoteResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bVoteUp");
	push_bool(L, s.m_bVoteUp);
	lua_settable(L, -3);
}
static void push_SetUserItemVoteResult_t_array(lua_State* L, SetUserItemVoteResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SetUserItemVoteResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GetUserItemVoteResult_t(lua_State* L, GetUserItemVoteResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bVotedUp");
	push_bool(L, s.m_bVotedUp);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bVotedDown");
	push_bool(L, s.m_bVotedDown);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bVoteSkipped");
	push_bool(L, s.m_bVoteSkipped);
	lua_settable(L, -3);
}
static void push_GetUserItemVoteResult_t_array(lua_State* L, GetUserItemVoteResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GetUserItemVoteResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_StartPlaytimeTrackingResult_t(lua_State* L, StartPlaytimeTrackingResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_StartPlaytimeTrackingResult_t_array(lua_State* L, StartPlaytimeTrackingResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_StartPlaytimeTrackingResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_StopPlaytimeTrackingResult_t(lua_State* L, StopPlaytimeTrackingResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_StopPlaytimeTrackingResult_t_array(lua_State* L, StopPlaytimeTrackingResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_StopPlaytimeTrackingResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AddUGCDependencyResult_t(lua_State* L, AddUGCDependencyResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nChildPublishedFileId");
	push_PublishedFileId_t(L, s.m_nChildPublishedFileId);
	lua_settable(L, -3);
}
static void push_AddUGCDependencyResult_t_array(lua_State* L, AddUGCDependencyResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AddUGCDependencyResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoveUGCDependencyResult_t(lua_State* L, RemoveUGCDependencyResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nChildPublishedFileId");
	push_PublishedFileId_t(L, s.m_nChildPublishedFileId);
	lua_settable(L, -3);
}
static void push_RemoveUGCDependencyResult_t_array(lua_State* L, RemoveUGCDependencyResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoveUGCDependencyResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AddAppDependencyResult_t(lua_State* L, AddAppDependencyResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
}
static void push_AddAppDependencyResult_t_array(lua_State* L, AddAppDependencyResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AddAppDependencyResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoveAppDependencyResult_t(lua_State* L, RemoveAppDependencyResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
}
static void push_RemoveAppDependencyResult_t_array(lua_State* L, RemoveAppDependencyResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoveAppDependencyResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GetAppDependenciesResult_t(lua_State* L, GetAppDependenciesResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgAppIDs");
	push_AppId_t_array(L, s.m_rgAppIDs, 32);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nNumAppDependencies");
	push_uint32(L, s.m_nNumAppDependencies);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nTotalNumAppDependencies");
	push_uint32(L, s.m_nTotalNumAppDependencies);
	lua_settable(L, -3);
}
static void push_GetAppDependenciesResult_t_array(lua_State* L, GetAppDependenciesResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GetAppDependenciesResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_DeleteItemResult_t(lua_State* L, DeleteItemResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nPublishedFileId");
	push_PublishedFileId_t(L, s.m_nPublishedFileId);
	lua_settable(L, -3);
}
static void push_DeleteItemResult_t_array(lua_State* L, DeleteItemResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_DeleteItemResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_UserSubscribedItemsListChanged_t(lua_State* L, UserSubscribedItemsListChanged_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
}
static void push_UserSubscribedItemsListChanged_t_array(lua_State* L, UserSubscribedItemsListChanged_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_UserSubscribedItemsListChanged_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_WorkshopEULAStatus_t(lua_State* L, WorkshopEULAStatus_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unVersion");
	push_uint32(L, s.m_unVersion);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rtAction");
	push_RTime32(L, s.m_rtAction);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bAccepted");
	push_bool(L, s.m_bAccepted);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bNeedsAction");
	push_bool(L, s.m_bNeedsAction);
	lua_settable(L, -3);
}
static void push_WorkshopEULAStatus_t_array(lua_State* L, WorkshopEULAStatus_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_WorkshopEULAStatus_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamAppInstalled_t(lua_State* L, SteamAppInstalled_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iInstallFolderIndex");
	push_int(L, s.m_iInstallFolderIndex);
	lua_settable(L, -3);
}
static void push_SteamAppInstalled_t_array(lua_State* L, SteamAppInstalled_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamAppInstalled_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamAppUninstalled_t(lua_State* L, SteamAppUninstalled_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_iInstallFolderIndex");
	push_int(L, s.m_iInstallFolderIndex);
	lua_settable(L, -3);
}
static void push_SteamAppUninstalled_t_array(lua_State* L, SteamAppUninstalled_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamAppUninstalled_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_BrowserReady_t(lua_State* L, HTML_BrowserReady_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
}
static void push_HTML_BrowserReady_t_array(lua_State* L, HTML_BrowserReady_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_BrowserReady_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_NeedsPaint_t(lua_State* L, HTML_NeedsPaint_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pBGRA");
	push_const_char_ptr(L, s.pBGRA);
	lua_settable(L, -3);
	lua_pushstring(L, "unWide");
	push_uint32(L, s.unWide);
	lua_settable(L, -3);
	lua_pushstring(L, "unTall");
	push_uint32(L, s.unTall);
	lua_settable(L, -3);
	lua_pushstring(L, "unUpdateX");
	push_uint32(L, s.unUpdateX);
	lua_settable(L, -3);
	lua_pushstring(L, "unUpdateY");
	push_uint32(L, s.unUpdateY);
	lua_settable(L, -3);
	lua_pushstring(L, "unUpdateWide");
	push_uint32(L, s.unUpdateWide);
	lua_settable(L, -3);
	lua_pushstring(L, "unUpdateTall");
	push_uint32(L, s.unUpdateTall);
	lua_settable(L, -3);
	lua_pushstring(L, "unScrollX");
	push_uint32(L, s.unScrollX);
	lua_settable(L, -3);
	lua_pushstring(L, "unScrollY");
	push_uint32(L, s.unScrollY);
	lua_settable(L, -3);
	lua_pushstring(L, "flPageScale");
	push_float(L, s.flPageScale);
	lua_settable(L, -3);
	lua_pushstring(L, "unPageSerial");
	push_uint32(L, s.unPageSerial);
	lua_settable(L, -3);
}
static void push_HTML_NeedsPaint_t_array(lua_State* L, HTML_NeedsPaint_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_NeedsPaint_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_StartRequest_t(lua_State* L, HTML_StartRequest_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchURL");
	push_const_char_ptr(L, s.pchURL);
	lua_settable(L, -3);
	lua_pushstring(L, "pchTarget");
	push_const_char_ptr(L, s.pchTarget);
	lua_settable(L, -3);
	lua_pushstring(L, "pchPostData");
	push_const_char_ptr(L, s.pchPostData);
	lua_settable(L, -3);
	lua_pushstring(L, "bIsRedirect");
	push_bool(L, s.bIsRedirect);
	lua_settable(L, -3);
}
static void push_HTML_StartRequest_t_array(lua_State* L, HTML_StartRequest_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_StartRequest_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_CloseBrowser_t(lua_State* L, HTML_CloseBrowser_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
}
static void push_HTML_CloseBrowser_t_array(lua_State* L, HTML_CloseBrowser_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_CloseBrowser_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_URLChanged_t(lua_State* L, HTML_URLChanged_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchURL");
	push_const_char_ptr(L, s.pchURL);
	lua_settable(L, -3);
	lua_pushstring(L, "pchPostData");
	push_const_char_ptr(L, s.pchPostData);
	lua_settable(L, -3);
	lua_pushstring(L, "bIsRedirect");
	push_bool(L, s.bIsRedirect);
	lua_settable(L, -3);
	lua_pushstring(L, "pchPageTitle");
	push_const_char_ptr(L, s.pchPageTitle);
	lua_settable(L, -3);
	lua_pushstring(L, "bNewNavigation");
	push_bool(L, s.bNewNavigation);
	lua_settable(L, -3);
}
static void push_HTML_URLChanged_t_array(lua_State* L, HTML_URLChanged_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_URLChanged_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_FinishedRequest_t(lua_State* L, HTML_FinishedRequest_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchURL");
	push_const_char_ptr(L, s.pchURL);
	lua_settable(L, -3);
	lua_pushstring(L, "pchPageTitle");
	push_const_char_ptr(L, s.pchPageTitle);
	lua_settable(L, -3);
}
static void push_HTML_FinishedRequest_t_array(lua_State* L, HTML_FinishedRequest_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_FinishedRequest_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_OpenLinkInNewTab_t(lua_State* L, HTML_OpenLinkInNewTab_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchURL");
	push_const_char_ptr(L, s.pchURL);
	lua_settable(L, -3);
}
static void push_HTML_OpenLinkInNewTab_t_array(lua_State* L, HTML_OpenLinkInNewTab_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_OpenLinkInNewTab_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_ChangedTitle_t(lua_State* L, HTML_ChangedTitle_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchTitle");
	push_const_char_ptr(L, s.pchTitle);
	lua_settable(L, -3);
}
static void push_HTML_ChangedTitle_t_array(lua_State* L, HTML_ChangedTitle_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_ChangedTitle_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_SearchResults_t(lua_State* L, HTML_SearchResults_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "unResults");
	push_uint32(L, s.unResults);
	lua_settable(L, -3);
	lua_pushstring(L, "unCurrentMatch");
	push_uint32(L, s.unCurrentMatch);
	lua_settable(L, -3);
}
static void push_HTML_SearchResults_t_array(lua_State* L, HTML_SearchResults_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_SearchResults_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_CanGoBackAndForward_t(lua_State* L, HTML_CanGoBackAndForward_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "bCanGoBack");
	push_bool(L, s.bCanGoBack);
	lua_settable(L, -3);
	lua_pushstring(L, "bCanGoForward");
	push_bool(L, s.bCanGoForward);
	lua_settable(L, -3);
}
static void push_HTML_CanGoBackAndForward_t_array(lua_State* L, HTML_CanGoBackAndForward_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_CanGoBackAndForward_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_HorizontalScroll_t(lua_State* L, HTML_HorizontalScroll_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "unScrollMax");
	push_uint32(L, s.unScrollMax);
	lua_settable(L, -3);
	lua_pushstring(L, "unScrollCurrent");
	push_uint32(L, s.unScrollCurrent);
	lua_settable(L, -3);
	lua_pushstring(L, "flPageScale");
	push_float(L, s.flPageScale);
	lua_settable(L, -3);
	lua_pushstring(L, "bVisible");
	push_bool(L, s.bVisible);
	lua_settable(L, -3);
	lua_pushstring(L, "unPageSize");
	push_uint32(L, s.unPageSize);
	lua_settable(L, -3);
}
static void push_HTML_HorizontalScroll_t_array(lua_State* L, HTML_HorizontalScroll_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_HorizontalScroll_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_VerticalScroll_t(lua_State* L, HTML_VerticalScroll_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "unScrollMax");
	push_uint32(L, s.unScrollMax);
	lua_settable(L, -3);
	lua_pushstring(L, "unScrollCurrent");
	push_uint32(L, s.unScrollCurrent);
	lua_settable(L, -3);
	lua_pushstring(L, "flPageScale");
	push_float(L, s.flPageScale);
	lua_settable(L, -3);
	lua_pushstring(L, "bVisible");
	push_bool(L, s.bVisible);
	lua_settable(L, -3);
	lua_pushstring(L, "unPageSize");
	push_uint32(L, s.unPageSize);
	lua_settable(L, -3);
}
static void push_HTML_VerticalScroll_t_array(lua_State* L, HTML_VerticalScroll_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_VerticalScroll_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_LinkAtPosition_t(lua_State* L, HTML_LinkAtPosition_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "x");
	push_uint32(L, s.x);
	lua_settable(L, -3);
	lua_pushstring(L, "y");
	push_uint32(L, s.y);
	lua_settable(L, -3);
	lua_pushstring(L, "pchURL");
	push_const_char_ptr(L, s.pchURL);
	lua_settable(L, -3);
	lua_pushstring(L, "bInput");
	push_bool(L, s.bInput);
	lua_settable(L, -3);
	lua_pushstring(L, "bLiveLink");
	push_bool(L, s.bLiveLink);
	lua_settable(L, -3);
}
static void push_HTML_LinkAtPosition_t_array(lua_State* L, HTML_LinkAtPosition_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_LinkAtPosition_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_JSAlert_t(lua_State* L, HTML_JSAlert_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchMessage");
	push_const_char_ptr(L, s.pchMessage);
	lua_settable(L, -3);
}
static void push_HTML_JSAlert_t_array(lua_State* L, HTML_JSAlert_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_JSAlert_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_JSConfirm_t(lua_State* L, HTML_JSConfirm_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchMessage");
	push_const_char_ptr(L, s.pchMessage);
	lua_settable(L, -3);
}
static void push_HTML_JSConfirm_t_array(lua_State* L, HTML_JSConfirm_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_JSConfirm_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_FileOpenDialog_t(lua_State* L, HTML_FileOpenDialog_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchTitle");
	push_const_char_ptr(L, s.pchTitle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchInitialFile");
	push_const_char_ptr(L, s.pchInitialFile);
	lua_settable(L, -3);
}
static void push_HTML_FileOpenDialog_t_array(lua_State* L, HTML_FileOpenDialog_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_FileOpenDialog_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_NewWindow_t(lua_State* L, HTML_NewWindow_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchURL");
	push_const_char_ptr(L, s.pchURL);
	lua_settable(L, -3);
	lua_pushstring(L, "unX");
	push_uint32(L, s.unX);
	lua_settable(L, -3);
	lua_pushstring(L, "unY");
	push_uint32(L, s.unY);
	lua_settable(L, -3);
	lua_pushstring(L, "unWide");
	push_uint32(L, s.unWide);
	lua_settable(L, -3);
	lua_pushstring(L, "unTall");
	push_uint32(L, s.unTall);
	lua_settable(L, -3);
	lua_pushstring(L, "unNewWindow_BrowserHandle_IGNORE");
	push_HHTMLBrowser(L, s.unNewWindow_BrowserHandle_IGNORE);
	lua_settable(L, -3);
}
static void push_HTML_NewWindow_t_array(lua_State* L, HTML_NewWindow_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_NewWindow_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_SetCursor_t(lua_State* L, HTML_SetCursor_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "eMouseCursor");
	push_uint32(L, s.eMouseCursor);
	lua_settable(L, -3);
}
static void push_HTML_SetCursor_t_array(lua_State* L, HTML_SetCursor_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_SetCursor_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_StatusText_t(lua_State* L, HTML_StatusText_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchMsg");
	push_const_char_ptr(L, s.pchMsg);
	lua_settable(L, -3);
}
static void push_HTML_StatusText_t_array(lua_State* L, HTML_StatusText_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_StatusText_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_ShowToolTip_t(lua_State* L, HTML_ShowToolTip_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchMsg");
	push_const_char_ptr(L, s.pchMsg);
	lua_settable(L, -3);
}
static void push_HTML_ShowToolTip_t_array(lua_State* L, HTML_ShowToolTip_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_ShowToolTip_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_UpdateToolTip_t(lua_State* L, HTML_UpdateToolTip_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "pchMsg");
	push_const_char_ptr(L, s.pchMsg);
	lua_settable(L, -3);
}
static void push_HTML_UpdateToolTip_t_array(lua_State* L, HTML_UpdateToolTip_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_UpdateToolTip_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_HideToolTip_t(lua_State* L, HTML_HideToolTip_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
}
static void push_HTML_HideToolTip_t_array(lua_State* L, HTML_HideToolTip_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_HideToolTip_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTML_BrowserRestarted_t(lua_State* L, HTML_BrowserRestarted_t s) {
	lua_newtable(L);
	lua_pushstring(L, "unBrowserHandle");
	push_HHTMLBrowser(L, s.unBrowserHandle);
	lua_settable(L, -3);
	lua_pushstring(L, "unOldBrowserHandle");
	push_HHTMLBrowser(L, s.unOldBrowserHandle);
	lua_settable(L, -3);
}
static void push_HTML_BrowserRestarted_t_array(lua_State* L, HTML_BrowserRestarted_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTML_BrowserRestarted_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInventoryResultReady_t(lua_State* L, SteamInventoryResultReady_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_handle");
	push_SteamInventoryResult_t(L, s.m_handle);
	lua_settable(L, -3);
	lua_pushstring(L, "m_result");
	push_EResult(L, s.m_result);
	lua_settable(L, -3);
}
static void push_SteamInventoryResultReady_t_array(lua_State* L, SteamInventoryResultReady_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInventoryResultReady_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInventoryFullUpdate_t(lua_State* L, SteamInventoryFullUpdate_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_handle");
	push_SteamInventoryResult_t(L, s.m_handle);
	lua_settable(L, -3);
}
static void push_SteamInventoryFullUpdate_t_array(lua_State* L, SteamInventoryFullUpdate_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInventoryFullUpdate_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInventoryDefinitionUpdate_t(lua_State* L, SteamInventoryDefinitionUpdate_t s) {
	lua_newtable(L);
}
static void push_SteamInventoryDefinitionUpdate_t_array(lua_State* L, SteamInventoryDefinitionUpdate_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInventoryDefinitionUpdate_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInventoryEligiblePromoItemDefIDs_t(lua_State* L, SteamInventoryEligiblePromoItemDefIDs_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_result");
	push_EResult(L, s.m_result);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamID");
	push_CSteamID(L, s.m_steamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_numEligiblePromoItemDefs");
	push_int(L, s.m_numEligiblePromoItemDefs);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bCachedData");
	push_bool(L, s.m_bCachedData);
	lua_settable(L, -3);
}
static void push_SteamInventoryEligiblePromoItemDefIDs_t_array(lua_State* L, SteamInventoryEligiblePromoItemDefIDs_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInventoryEligiblePromoItemDefIDs_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInventoryStartPurchaseResult_t(lua_State* L, SteamInventoryStartPurchaseResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_result");
	push_EResult(L, s.m_result);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulOrderID");
	push_uint64(L, s.m_ulOrderID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulTransID");
	push_uint64(L, s.m_ulTransID);
	lua_settable(L, -3);
}
static void push_SteamInventoryStartPurchaseResult_t_array(lua_State* L, SteamInventoryStartPurchaseResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInventoryStartPurchaseResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInventoryRequestPricesResult_t(lua_State* L, SteamInventoryRequestPricesResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_result");
	push_EResult(L, s.m_result);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchCurrency");
	push_char_array(L, s.m_rgchCurrency, 4);
	lua_settable(L, -3);
}
static void push_SteamInventoryRequestPricesResult_t_array(lua_State* L, SteamInventoryRequestPricesResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInventoryRequestPricesResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GetVideoURLResult_t(lua_State* L, GetVideoURLResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unVideoAppID");
	push_AppId_t(L, s.m_unVideoAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchURL");
	push_char_array(L, s.m_rgchURL, 256);
	lua_settable(L, -3);
}
static void push_GetVideoURLResult_t_array(lua_State* L, GetVideoURLResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GetVideoURLResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GetOPFSettingsResult_t(lua_State* L, GetOPFSettingsResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unVideoAppID");
	push_AppId_t(L, s.m_unVideoAppID);
	lua_settable(L, -3);
}
static void push_GetOPFSettingsResult_t_array(lua_State* L, GetOPFSettingsResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GetOPFSettingsResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamParentalSettingsChanged_t(lua_State* L, SteamParentalSettingsChanged_t s) {
	lua_newtable(L);
}
static void push_SteamParentalSettingsChanged_t_array(lua_State* L, SteamParentalSettingsChanged_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamParentalSettingsChanged_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamRemotePlaySessionConnected_t(lua_State* L, SteamRemotePlaySessionConnected_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_unSessionID");
	push_RemotePlaySessionID_t(L, s.m_unSessionID);
	lua_settable(L, -3);
}
static void push_SteamRemotePlaySessionConnected_t_array(lua_State* L, SteamRemotePlaySessionConnected_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamRemotePlaySessionConnected_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamRemotePlaySessionDisconnected_t(lua_State* L, SteamRemotePlaySessionDisconnected_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_unSessionID");
	push_RemotePlaySessionID_t(L, s.m_unSessionID);
	lua_settable(L, -3);
}
static void push_SteamRemotePlaySessionDisconnected_t_array(lua_State* L, SteamRemotePlaySessionDisconnected_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamRemotePlaySessionDisconnected_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetworkingMessagesSessionRequest_t(lua_State* L, SteamNetworkingMessagesSessionRequest_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_identityRemote");
	push_SteamNetworkingIdentity(L, s.m_identityRemote);
	lua_settable(L, -3);
}
static void push_SteamNetworkingMessagesSessionRequest_t_array(lua_State* L, SteamNetworkingMessagesSessionRequest_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetworkingMessagesSessionRequest_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetworkingMessagesSessionFailed_t(lua_State* L, SteamNetworkingMessagesSessionFailed_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_info");
	push_SteamNetConnectionInfo_t(L, s.m_info);
	lua_settable(L, -3);
}
static void push_SteamNetworkingMessagesSessionFailed_t_array(lua_State* L, SteamNetworkingMessagesSessionFailed_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetworkingMessagesSessionFailed_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetConnectionStatusChangedCallback_t(lua_State* L, SteamNetConnectionStatusChangedCallback_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_hConn");
	push_HSteamNetConnection(L, s.m_hConn);
	lua_settable(L, -3);
	lua_pushstring(L, "m_info");
	push_SteamNetConnectionInfo_t(L, s.m_info);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eOldState");
	push_ESteamNetworkingConnectionState(L, s.m_eOldState);
	lua_settable(L, -3);
}
static void push_SteamNetConnectionStatusChangedCallback_t_array(lua_State* L, SteamNetConnectionStatusChangedCallback_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetConnectionStatusChangedCallback_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamNetAuthenticationStatus_t(lua_State* L, SteamNetAuthenticationStatus_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eAvail");
	push_ESteamNetworkingAvailability(L, s.m_eAvail);
	lua_settable(L, -3);
	lua_pushstring(L, "m_debugMsg");
	push_char_array(L, s.m_debugMsg, 256);
	lua_settable(L, -3);
}
static void push_SteamNetAuthenticationStatus_t_array(lua_State* L, SteamNetAuthenticationStatus_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamNetAuthenticationStatus_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamRelayNetworkStatus_t(lua_State* L, SteamRelayNetworkStatus_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eAvail");
	push_ESteamNetworkingAvailability(L, s.m_eAvail);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bPingMeasurementInProgress");
	push_int(L, s.m_bPingMeasurementInProgress);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eAvailNetworkConfig");
	push_ESteamNetworkingAvailability(L, s.m_eAvailNetworkConfig);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eAvailAnyRelay");
	push_ESteamNetworkingAvailability(L, s.m_eAvailAnyRelay);
	lua_settable(L, -3);
	lua_pushstring(L, "m_debugMsg");
	push_char_array(L, s.m_debugMsg, 256);
	lua_settable(L, -3);
}
static void push_SteamRelayNetworkStatus_t_array(lua_State* L, SteamRelayNetworkStatus_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamRelayNetworkStatus_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSClientApprove_t(lua_State* L, GSClientApprove_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_SteamID");
	push_CSteamID(L, s.m_SteamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_OwnerSteamID");
	push_CSteamID(L, s.m_OwnerSteamID);
	lua_settable(L, -3);
}
static void push_GSClientApprove_t_array(lua_State* L, GSClientApprove_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSClientApprove_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSClientDeny_t(lua_State* L, GSClientDeny_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_SteamID");
	push_CSteamID(L, s.m_SteamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eDenyReason");
	push_EDenyReason(L, s.m_eDenyReason);
	lua_settable(L, -3);
	lua_pushstring(L, "m_rgchOptionalText");
	push_char_array(L, s.m_rgchOptionalText, 128);
	lua_settable(L, -3);
}
static void push_GSClientDeny_t_array(lua_State* L, GSClientDeny_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSClientDeny_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSClientKick_t(lua_State* L, GSClientKick_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_SteamID");
	push_CSteamID(L, s.m_SteamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eDenyReason");
	push_EDenyReason(L, s.m_eDenyReason);
	lua_settable(L, -3);
}
static void push_GSClientKick_t_array(lua_State* L, GSClientKick_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSClientKick_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSClientAchievementStatus_t(lua_State* L, GSClientAchievementStatus_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_SteamID");
	push_uint64(L, s.m_SteamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_pchAchievement");
	push_char_array(L, s.m_pchAchievement, 128);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bUnlocked");
	push_bool(L, s.m_bUnlocked);
	lua_settable(L, -3);
}
static void push_GSClientAchievementStatus_t_array(lua_State* L, GSClientAchievementStatus_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSClientAchievementStatus_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSPolicyResponse_t(lua_State* L, GSPolicyResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bSecure");
	push_uint8(L, s.m_bSecure);
	lua_settable(L, -3);
}
static void push_GSPolicyResponse_t_array(lua_State* L, GSPolicyResponse_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSPolicyResponse_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSGameplayStats_t(lua_State* L, GSGameplayStats_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nRank");
	push_int32(L, s.m_nRank);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unTotalConnects");
	push_uint32(L, s.m_unTotalConnects);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unTotalMinutesPlayed");
	push_uint32(L, s.m_unTotalMinutesPlayed);
	lua_settable(L, -3);
}
static void push_GSGameplayStats_t_array(lua_State* L, GSGameplayStats_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSGameplayStats_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSClientGroupStatus_t(lua_State* L, GSClientGroupStatus_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_SteamIDUser");
	push_CSteamID(L, s.m_SteamIDUser);
	lua_settable(L, -3);
	lua_pushstring(L, "m_SteamIDGroup");
	push_CSteamID(L, s.m_SteamIDGroup);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bMember");
	push_bool(L, s.m_bMember);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bOfficer");
	push_bool(L, s.m_bOfficer);
	lua_settable(L, -3);
}
static void push_GSClientGroupStatus_t_array(lua_State* L, GSClientGroupStatus_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSClientGroupStatus_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSReputation_t(lua_State* L, GSReputation_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unReputationScore");
	push_uint32(L, s.m_unReputationScore);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bBanned");
	push_bool(L, s.m_bBanned);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unBannedIP");
	push_uint32(L, s.m_unBannedIP);
	lua_settable(L, -3);
	lua_pushstring(L, "m_usBannedPort");
	push_uint16(L, s.m_usBannedPort);
	lua_settable(L, -3);
	lua_pushstring(L, "m_ulBannedGameID");
	push_uint64(L, s.m_ulBannedGameID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unBanExpires");
	push_uint32(L, s.m_unBanExpires);
	lua_settable(L, -3);
}
static void push_GSReputation_t_array(lua_State* L, GSReputation_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSReputation_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AssociateWithClanResult_t(lua_State* L, AssociateWithClanResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_AssociateWithClanResult_t_array(lua_State* L, AssociateWithClanResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AssociateWithClanResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ComputeNewPlayerCompatibilityResult_t(lua_State* L, ComputeNewPlayerCompatibilityResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cPlayersThatDontLikeCandidate");
	push_int(L, s.m_cPlayersThatDontLikeCandidate);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cPlayersThatCandidateDoesntLike");
	push_int(L, s.m_cPlayersThatCandidateDoesntLike);
	lua_settable(L, -3);
	lua_pushstring(L, "m_cClanPlayersThatDontLikeCandidate");
	push_int(L, s.m_cClanPlayersThatDontLikeCandidate);
	lua_settable(L, -3);
	lua_pushstring(L, "m_SteamIDCandidate");
	push_CSteamID(L, s.m_SteamIDCandidate);
	lua_settable(L, -3);
}
static void push_ComputeNewPlayerCompatibilityResult_t_array(lua_State* L, ComputeNewPlayerCompatibilityResult_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ComputeNewPlayerCompatibilityResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSStatsReceived_t(lua_State* L, GSStatsReceived_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
}
static void push_GSStatsReceived_t_array(lua_State* L, GSStatsReceived_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSStatsReceived_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSStatsStored_t(lua_State* L, GSStatsStored_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
}
static void push_GSStatsStored_t_array(lua_State* L, GSStatsStored_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSStatsStored_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_GSStatsUnloaded_t(lua_State* L, GSStatsUnloaded_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_steamIDUser");
	push_CSteamID(L, s.m_steamIDUser);
	lua_settable(L, -3);
}
static void push_GSStatsUnloaded_t_array(lua_State* L, GSStatsUnloaded_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GSStatsUnloaded_t(L, arr[i]);
		lua_settable(L, -3);
	}
}



/*****************************
* CHECK primitives
******************************/
static lua_Number check_int(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return luaL_checknumber(L, index);
	}
	return 0;
}
static lua_Number check_bool(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return lua_toboolean(L, index);
	}
	return 0;
}
static lua_Number check_float(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return luaL_checknumber(L, index);
	}
	return 0;
}
static void check_float_array(lua_State* L, int index, float * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_float(L, -1);
	}
}
static lua_Number check_double(lua_State* L, int index) {
	return luaL_checknumber(L, index);
}
static uint8 check_uint8(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (uint8)luaL_checknumber(L, index);
	}
	return (uint8)0;
}
static void check_uint8_array(lua_State* L, int index, uint8 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_uint8(L, -1);
	}
}
static int8 check_int8(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (int8)luaL_checknumber(L, index);
	}
	return (int8)0;
}
static void check_int8_array(lua_State* L, int index, int8 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_int8(L, -1);
	}
}
static int16 check_int16(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (int16)luaL_checknumber(L, index);
	}
	return (int16)0;
}
static void check_int16_array(lua_State* L, int index, int16 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_int16(L, -1);
	}
}
static uint16 check_uint16(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (uint16)luaL_checknumber(L, index);
	}
	return (uint16)0;
}
static void check_uint16_array(lua_State* L, int index, uint16 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_uint16(L, -1);
	}
}
static int32 check_int32(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (int32)luaL_checknumber(L, index);
	}
	return (int32)0;
}
static void check_int32_array(lua_State* L, int index, int32 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_int32(L, -1);
	}
}
static uint32 check_uint32(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (uint32)luaL_checknumber(L, index);
	}
	return (uint32)0;
}
static void check_uint32_array(lua_State* L, int index, uint32 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_uint32(L, -1);
	}
}
static AppId_t check_AppId_t(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (AppId_t)luaL_checknumber(L, index);
	}
	return (AppId_t)0;
}
static void check_AppId_t_array(lua_State* L, int index, AppId_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_AppId_t(L, -1);
	}
}
static DepotId_t check_DepotId_t(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (DepotId_t)luaL_checknumber(L, index);
	}
	return (DepotId_t)0;
}
static void check_DepotId_t_array(lua_State* L, int index, DepotId_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_DepotId_t(L, -1);
	}
}
static RTime32 check_RTime32(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (RTime32)luaL_checknumber(L, index);
	}
	return (RTime32)0;
}
static void check_RTime32_array(lua_State* L, int index, RTime32 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_RTime32(L, -1);
	}
}
static AccountID_t check_AccountID_t(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (AccountID_t)luaL_checknumber(L, index);
	}
	return (AccountID_t)0;
}
static void check_AccountID_t_array(lua_State* L, int index, AccountID_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_AccountID_t(L, -1);
	}
}
static HAuthTicket check_HAuthTicket(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HAuthTicket)luaL_checknumber(L, index);
	}
	return (HAuthTicket)0;
}
static void check_HAuthTicket_array(lua_State* L, int index, HAuthTicket * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HAuthTicket(L, -1);
	}
}
static HSteamPipe check_HSteamPipe(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HSteamPipe)luaL_checknumber(L, index);
	}
	return (HSteamPipe)0;
}
static void check_HSteamPipe_array(lua_State* L, int index, HSteamPipe * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HSteamPipe(L, -1);
	}
}
static HSteamUser check_HSteamUser(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HSteamUser)luaL_checknumber(L, index);
	}
	return (HSteamUser)0;
}
static void check_HSteamUser_array(lua_State* L, int index, HSteamUser * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HSteamUser(L, -1);
	}
}
static FriendsGroupID_t check_FriendsGroupID_t(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (FriendsGroupID_t)luaL_checknumber(L, index);
	}
	return (FriendsGroupID_t)0;
}
static void check_FriendsGroupID_t_array(lua_State* L, int index, FriendsGroupID_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_FriendsGroupID_t(L, -1);
	}
}
static HServerQuery check_HServerQuery(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HServerQuery)luaL_checknumber(L, index);
	}
	return (HServerQuery)0;
}
static void check_HServerQuery_array(lua_State* L, int index, HServerQuery * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HServerQuery(L, -1);
	}
}
static SNetSocket_t check_SNetSocket_t(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (SNetSocket_t)luaL_checknumber(L, index);
	}
	return (SNetSocket_t)0;
}
static void check_SNetSocket_t_array(lua_State* L, int index, SNetSocket_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SNetSocket_t(L, -1);
	}
}
static SNetListenSocket_t check_SNetListenSocket_t(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (SNetListenSocket_t)luaL_checknumber(L, index);
	}
	return (SNetListenSocket_t)0;
}
static void check_SNetListenSocket_t_array(lua_State* L, int index, SNetListenSocket_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SNetListenSocket_t(L, -1);
	}
}
static ScreenshotHandle check_ScreenshotHandle(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (ScreenshotHandle)luaL_checknumber(L, index);
	}
	return (ScreenshotHandle)0;
}
static void check_ScreenshotHandle_array(lua_State* L, int index, ScreenshotHandle * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_ScreenshotHandle(L, -1);
	}
}
static HTTPRequestHandle check_HTTPRequestHandle(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HTTPRequestHandle)luaL_checknumber(L, index);
	}
	return (HTTPRequestHandle)0;
}
static void check_HTTPRequestHandle_array(lua_State* L, int index, HTTPRequestHandle * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HTTPRequestHandle(L, -1);
	}
}
static HTTPCookieContainerHandle check_HTTPCookieContainerHandle(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HTTPCookieContainerHandle)luaL_checknumber(L, index);
	}
	return (HTTPCookieContainerHandle)0;
}
static void check_HTTPCookieContainerHandle_array(lua_State* L, int index, HTTPCookieContainerHandle * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HTTPCookieContainerHandle(L, -1);
	}
}
static HHTMLBrowser check_HHTMLBrowser(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HHTMLBrowser)luaL_checknumber(L, index);
	}
	return (HHTMLBrowser)0;
}
static void check_HHTMLBrowser_array(lua_State* L, int index, HHTMLBrowser * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HHTMLBrowser(L, -1);
	}
}
static SteamItemDef_t check_SteamItemDef_t(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (SteamItemDef_t)luaL_checknumber(L, index);
	}
	return (SteamItemDef_t)0;
}
static void check_SteamItemDef_t_array(lua_State* L, int index, SteamItemDef_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SteamItemDef_t(L, -1);
	}
}
static SteamInventoryResult_t check_SteamInventoryResult_t(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (SteamInventoryResult_t)luaL_checknumber(L, index);
	}
	return (SteamInventoryResult_t)0;
}
static void check_SteamInventoryResult_t_array(lua_State* L, int index, SteamInventoryResult_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SteamInventoryResult_t(L, -1);
	}
}
static RemotePlaySessionID_t check_RemotePlaySessionID_t(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (RemotePlaySessionID_t)luaL_checknumber(L, index);
	}
	return (RemotePlaySessionID_t)0;
}
static void check_RemotePlaySessionID_t_array(lua_State* L, int index, RemotePlaySessionID_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_RemotePlaySessionID_t(L, -1);
	}
}
static HSteamNetConnection check_HSteamNetConnection(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HSteamNetConnection)luaL_checknumber(L, index);
	}
	return (HSteamNetConnection)0;
}
static void check_HSteamNetConnection_array(lua_State* L, int index, HSteamNetConnection * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HSteamNetConnection(L, -1);
	}
}
static HSteamListenSocket check_HSteamListenSocket(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HSteamListenSocket)luaL_checknumber(L, index);
	}
	return (HSteamListenSocket)0;
}
static void check_HSteamListenSocket_array(lua_State* L, int index, HSteamListenSocket * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HSteamListenSocket(L, -1);
	}
}
static HSteamNetPollGroup check_HSteamNetPollGroup(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (HSteamNetPollGroup)luaL_checknumber(L, index);
	}
	return (HSteamNetPollGroup)0;
}
static void check_HSteamNetPollGroup_array(lua_State* L, int index, HSteamNetPollGroup * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_HSteamNetPollGroup(L, -1);
	}
}
static SteamNetworkingPOPID check_SteamNetworkingPOPID(lua_State* L, int index) {
	if(lua_isnumber(L, index)) {
		return (SteamNetworkingPOPID)luaL_checknumber(L, index);
	}
	return (SteamNetworkingPOPID)0;
}
static void check_SteamNetworkingPOPID_array(lua_State* L, int index, SteamNetworkingPOPID * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SteamNetworkingPOPID(L, -1);
	}
}

/*****************************
* CHECK strings
******************************/
static const char * check_const_char_ptr(lua_State* L, int index) {
	return luaL_checkstring(L, index);
}
static char * check_char_ptr(lua_State* L, int index) {
	return (char*)luaL_checkstring(L, index);
}
static const void * check_const_void_ptr(lua_State* L, int index) {
	return (void*)luaL_checkstring(L, index);
}
static void * check_void_ptr(lua_State* L, int index) {
	return (void*)luaL_checkstring(L, index);
}
static void check_char_array(lua_State* L, int index, char* dest, unsigned int size) {
	const char * src = luaL_checkstring(L, index);
	strncpy(dest, src, size - 1);
	dest[size] = 0x0;
}

/*****************************
* CHECK (u)int64 (from string)
******************************/
static uint64 check_uint64(lua_State* L, int index) {
	if(lua_isstring(L, index)) {
		const char * s = luaL_checkstring(L, index);
		return strtoull(s, NULL, 10);
	}
	return 0;
}
static int64_t check_int64_t(lua_State* L, int index) {
	if(lua_isstring(L, index)) {
		const char * s = luaL_checkstring(L, index);
		return strtoll(s, NULL, 10);
	}
	return 0;
}
static int64 check_int64(lua_State* L, int index) {
	if(lua_isstring(L, index)) {
		const char * s = luaL_checkstring(L, index);
		return strtoll(s, NULL, 10);
	}
	return 0;
}
static void check_uint64_array(lua_State* L, int index, uint64 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_uint64(L, -1);
	}
}
static ulint64 check_ulint64(lua_State* L, int index) {
	return (ulint64)check_uint64(L, index);
}
static void check_ulint64_array(lua_State* L, int index, ulint64 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_ulint64(L, -1);
	}
}
static uintp check_uintp(lua_State* L, int index) {
	return (uintp)check_uint64(L, index);
}
static void check_uintp_array(lua_State* L, int index, uintp * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_uintp(L, -1);
	}
}
static SteamAPICall_t check_SteamAPICall_t(lua_State* L, int index) {
	return (SteamAPICall_t)check_uint64(L, index);
}
static void check_SteamAPICall_t_array(lua_State* L, int index, SteamAPICall_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SteamAPICall_t(L, -1);
	}
}
static PartyBeaconID_t check_PartyBeaconID_t(lua_State* L, int index) {
	return (PartyBeaconID_t)check_uint64(L, index);
}
static void check_PartyBeaconID_t_array(lua_State* L, int index, PartyBeaconID_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_PartyBeaconID_t(L, -1);
	}
}
static UGCHandle_t check_UGCHandle_t(lua_State* L, int index) {
	return (UGCHandle_t)check_uint64(L, index);
}
static void check_UGCHandle_t_array(lua_State* L, int index, UGCHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_UGCHandle_t(L, -1);
	}
}
static PublishedFileUpdateHandle_t check_PublishedFileUpdateHandle_t(lua_State* L, int index) {
	return (PublishedFileUpdateHandle_t)check_uint64(L, index);
}
static void check_PublishedFileUpdateHandle_t_array(lua_State* L, int index, PublishedFileUpdateHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_PublishedFileUpdateHandle_t(L, -1);
	}
}
static PublishedFileId_t check_PublishedFileId_t(lua_State* L, int index) {
	return (PublishedFileId_t)check_uint64(L, index);
}
static void check_PublishedFileId_t_array(lua_State* L, int index, PublishedFileId_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_PublishedFileId_t(L, -1);
	}
}
static UGCFileWriteStreamHandle_t check_UGCFileWriteStreamHandle_t(lua_State* L, int index) {
	return (UGCFileWriteStreamHandle_t)check_uint64(L, index);
}
static void check_UGCFileWriteStreamHandle_t_array(lua_State* L, int index, UGCFileWriteStreamHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_UGCFileWriteStreamHandle_t(L, -1);
	}
}
static SteamLeaderboard_t check_SteamLeaderboard_t(lua_State* L, int index) {
	return (SteamLeaderboard_t)check_uint64(L, index);
}
static void check_SteamLeaderboard_t_array(lua_State* L, int index, SteamLeaderboard_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SteamLeaderboard_t(L, -1);
	}
}
static SteamLeaderboardEntries_t check_SteamLeaderboardEntries_t(lua_State* L, int index) {
	return (SteamLeaderboardEntries_t)check_uint64(L, index);
}
static void check_SteamLeaderboardEntries_t_array(lua_State* L, int index, SteamLeaderboardEntries_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SteamLeaderboardEntries_t(L, -1);
	}
}
static InputHandle_t check_InputHandle_t(lua_State* L, int index) {
	return (InputHandle_t)check_uint64(L, index);
}
static void check_InputHandle_t_array(lua_State* L, int index, InputHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_InputHandle_t(L, -1);
	}
}
static InputActionSetHandle_t check_InputActionSetHandle_t(lua_State* L, int index) {
	return (InputActionSetHandle_t)check_uint64(L, index);
}
static void check_InputActionSetHandle_t_array(lua_State* L, int index, InputActionSetHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_InputActionSetHandle_t(L, -1);
	}
}
static InputDigitalActionHandle_t check_InputDigitalActionHandle_t(lua_State* L, int index) {
	return (InputDigitalActionHandle_t)check_uint64(L, index);
}
static void check_InputDigitalActionHandle_t_array(lua_State* L, int index, InputDigitalActionHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_InputDigitalActionHandle_t(L, -1);
	}
}
static InputAnalogActionHandle_t check_InputAnalogActionHandle_t(lua_State* L, int index) {
	return (InputAnalogActionHandle_t)check_uint64(L, index);
}
static void check_InputAnalogActionHandle_t_array(lua_State* L, int index, InputAnalogActionHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_InputAnalogActionHandle_t(L, -1);
	}
}
static ControllerHandle_t check_ControllerHandle_t(lua_State* L, int index) {
	return (ControllerHandle_t)check_uint64(L, index);
}
static void check_ControllerHandle_t_array(lua_State* L, int index, ControllerHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_ControllerHandle_t(L, -1);
	}
}
static ControllerActionSetHandle_t check_ControllerActionSetHandle_t(lua_State* L, int index) {
	return (ControllerActionSetHandle_t)check_uint64(L, index);
}
static void check_ControllerActionSetHandle_t_array(lua_State* L, int index, ControllerActionSetHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_ControllerActionSetHandle_t(L, -1);
	}
}
static ControllerDigitalActionHandle_t check_ControllerDigitalActionHandle_t(lua_State* L, int index) {
	return (ControllerDigitalActionHandle_t)check_uint64(L, index);
}
static void check_ControllerDigitalActionHandle_t_array(lua_State* L, int index, ControllerDigitalActionHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_ControllerDigitalActionHandle_t(L, -1);
	}
}
static ControllerAnalogActionHandle_t check_ControllerAnalogActionHandle_t(lua_State* L, int index) {
	return (ControllerAnalogActionHandle_t)check_uint64(L, index);
}
static void check_ControllerAnalogActionHandle_t_array(lua_State* L, int index, ControllerAnalogActionHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_ControllerAnalogActionHandle_t(L, -1);
	}
}
static UGCQueryHandle_t check_UGCQueryHandle_t(lua_State* L, int index) {
	return (UGCQueryHandle_t)check_uint64(L, index);
}
static void check_UGCQueryHandle_t_array(lua_State* L, int index, UGCQueryHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_UGCQueryHandle_t(L, -1);
	}
}
static UGCUpdateHandle_t check_UGCUpdateHandle_t(lua_State* L, int index) {
	return (UGCUpdateHandle_t)check_uint64(L, index);
}
static void check_UGCUpdateHandle_t_array(lua_State* L, int index, UGCUpdateHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_UGCUpdateHandle_t(L, -1);
	}
}
static SteamItemInstanceID_t check_SteamItemInstanceID_t(lua_State* L, int index) {
	return (SteamItemInstanceID_t)check_uint64(L, index);
}
static void check_SteamItemInstanceID_t_array(lua_State* L, int index, SteamItemInstanceID_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SteamItemInstanceID_t(L, -1);
	}
}
static SteamInventoryUpdateHandle_t check_SteamInventoryUpdateHandle_t(lua_State* L, int index) {
	return (SteamInventoryUpdateHandle_t)check_uint64(L, index);
}
static void check_SteamInventoryUpdateHandle_t_array(lua_State* L, int index, SteamInventoryUpdateHandle_t * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SteamInventoryUpdateHandle_t(L, -1);
	}
}
static lint64 check_lint64(lua_State* L, int index) {
	return (lint64)check_int64(L, index);
}
static void check_lint64_array(lua_State* L, int index, lint64 * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_lint64(L, -1);
	}
}
static intp check_intp(lua_State* L, int index) {
	return (intp)check_int64(L, index);
}
static void check_intp_array(lua_State* L, int index, intp * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_intp(L, -1);
	}
}
static SteamNetworkingMicroseconds check_SteamNetworkingMicroseconds(lua_State* L, int index) {
	return (SteamNetworkingMicroseconds)check_int64(L, index);
}
static void check_SteamNetworkingMicroseconds_array(lua_State* L, int index, SteamNetworkingMicroseconds * arr, unsigned int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SteamNetworkingMicroseconds(L, -1);
	}
}

/*****************************
* CHECK enums
******************************/
static ESteamIPType check_ESteamIPType(lua_State* L, int index) {
	return ESteamIPType(luaL_checkinteger(L, index));
}
static EUniverse check_EUniverse(lua_State* L, int index) {
	return EUniverse(luaL_checkinteger(L, index));
}
static EResult check_EResult(lua_State* L, int index) {
	return EResult(luaL_checkinteger(L, index));
}
static EVoiceResult check_EVoiceResult(lua_State* L, int index) {
	return EVoiceResult(luaL_checkinteger(L, index));
}
static EDenyReason check_EDenyReason(lua_State* L, int index) {
	return EDenyReason(luaL_checkinteger(L, index));
}
static EBeginAuthSessionResult check_EBeginAuthSessionResult(lua_State* L, int index) {
	return EBeginAuthSessionResult(luaL_checkinteger(L, index));
}
static EAuthSessionResponse check_EAuthSessionResponse(lua_State* L, int index) {
	return EAuthSessionResponse(luaL_checkinteger(L, index));
}
static EUserHasLicenseForAppResult check_EUserHasLicenseForAppResult(lua_State* L, int index) {
	return EUserHasLicenseForAppResult(luaL_checkinteger(L, index));
}
static EAccountType check_EAccountType(lua_State* L, int index) {
	return EAccountType(luaL_checkinteger(L, index));
}
static EChatEntryType check_EChatEntryType(lua_State* L, int index) {
	return EChatEntryType(luaL_checkinteger(L, index));
}
static EChatRoomEnterResponse check_EChatRoomEnterResponse(lua_State* L, int index) {
	return EChatRoomEnterResponse(luaL_checkinteger(L, index));
}
static EChatSteamIDInstanceFlags check_EChatSteamIDInstanceFlags(lua_State* L, int index) {
	return EChatSteamIDInstanceFlags(luaL_checkinteger(L, index));
}
static ENotificationPosition check_ENotificationPosition(lua_State* L, int index) {
	return ENotificationPosition(luaL_checkinteger(L, index));
}
static EBroadcastUploadResult check_EBroadcastUploadResult(lua_State* L, int index) {
	return EBroadcastUploadResult(luaL_checkinteger(L, index));
}
static EMarketNotAllowedReasonFlags check_EMarketNotAllowedReasonFlags(lua_State* L, int index) {
	return EMarketNotAllowedReasonFlags(luaL_checkinteger(L, index));
}
static EDurationControlProgress check_EDurationControlProgress(lua_State* L, int index) {
	return EDurationControlProgress(luaL_checkinteger(L, index));
}
static EDurationControlNotification check_EDurationControlNotification(lua_State* L, int index) {
	return EDurationControlNotification(luaL_checkinteger(L, index));
}
static EDurationControlOnlineState check_EDurationControlOnlineState(lua_State* L, int index) {
	return EDurationControlOnlineState(luaL_checkinteger(L, index));
}
static EGameSearchErrorCode_t check_EGameSearchErrorCode_t(lua_State* L, int index) {
	return EGameSearchErrorCode_t(luaL_checkinteger(L, index));
}
static EPlayerResult_t check_EPlayerResult_t(lua_State* L, int index) {
	return EPlayerResult_t(luaL_checkinteger(L, index));
}
static ESteamIPv6ConnectivityProtocol check_ESteamIPv6ConnectivityProtocol(lua_State* L, int index) {
	return ESteamIPv6ConnectivityProtocol(luaL_checkinteger(L, index));
}
static ESteamIPv6ConnectivityState check_ESteamIPv6ConnectivityState(lua_State* L, int index) {
	return ESteamIPv6ConnectivityState(luaL_checkinteger(L, index));
}
static EFriendRelationship check_EFriendRelationship(lua_State* L, int index) {
	return EFriendRelationship(luaL_checkinteger(L, index));
}
static EPersonaState check_EPersonaState(lua_State* L, int index) {
	return EPersonaState(luaL_checkinteger(L, index));
}
static EFriendFlags check_EFriendFlags(lua_State* L, int index) {
	return EFriendFlags(luaL_checkinteger(L, index));
}
static EUserRestriction check_EUserRestriction(lua_State* L, int index) {
	return EUserRestriction(luaL_checkinteger(L, index));
}
static EOverlayToStoreFlag check_EOverlayToStoreFlag(lua_State* L, int index) {
	return EOverlayToStoreFlag(luaL_checkinteger(L, index));
}
static EActivateGameOverlayToWebPageMode check_EActivateGameOverlayToWebPageMode(lua_State* L, int index) {
	return EActivateGameOverlayToWebPageMode(luaL_checkinteger(L, index));
}
static ECommunityProfileItemType check_ECommunityProfileItemType(lua_State* L, int index) {
	return ECommunityProfileItemType(luaL_checkinteger(L, index));
}
static ECommunityProfileItemProperty check_ECommunityProfileItemProperty(lua_State* L, int index) {
	return ECommunityProfileItemProperty(luaL_checkinteger(L, index));
}
static EPersonaChange check_EPersonaChange(lua_State* L, int index) {
	return EPersonaChange(luaL_checkinteger(L, index));
}
static ESteamAPICallFailure check_ESteamAPICallFailure(lua_State* L, int index) {
	return ESteamAPICallFailure(luaL_checkinteger(L, index));
}
static EGamepadTextInputMode check_EGamepadTextInputMode(lua_State* L, int index) {
	return EGamepadTextInputMode(luaL_checkinteger(L, index));
}
static EGamepadTextInputLineMode check_EGamepadTextInputLineMode(lua_State* L, int index) {
	return EGamepadTextInputLineMode(luaL_checkinteger(L, index));
}
static EFloatingGamepadTextInputMode check_EFloatingGamepadTextInputMode(lua_State* L, int index) {
	return EFloatingGamepadTextInputMode(luaL_checkinteger(L, index));
}
static ETextFilteringContext check_ETextFilteringContext(lua_State* L, int index) {
	return ETextFilteringContext(luaL_checkinteger(L, index));
}
static ECheckFileSignature check_ECheckFileSignature(lua_State* L, int index) {
	return ECheckFileSignature(luaL_checkinteger(L, index));
}
static EMatchMakingServerResponse check_EMatchMakingServerResponse(lua_State* L, int index) {
	return EMatchMakingServerResponse(luaL_checkinteger(L, index));
}
static ELobbyType check_ELobbyType(lua_State* L, int index) {
	return ELobbyType(luaL_checkinteger(L, index));
}
static ELobbyComparison check_ELobbyComparison(lua_State* L, int index) {
	return ELobbyComparison(luaL_checkinteger(L, index));
}
static ELobbyDistanceFilter check_ELobbyDistanceFilter(lua_State* L, int index) {
	return ELobbyDistanceFilter(luaL_checkinteger(L, index));
}
static EChatMemberStateChange check_EChatMemberStateChange(lua_State* L, int index) {
	return EChatMemberStateChange(luaL_checkinteger(L, index));
}
static ESteamPartyBeaconLocationType check_ESteamPartyBeaconLocationType(lua_State* L, int index) {
	return ESteamPartyBeaconLocationType(luaL_checkinteger(L, index));
}
static ESteamPartyBeaconLocationData check_ESteamPartyBeaconLocationData(lua_State* L, int index) {
	return ESteamPartyBeaconLocationData(luaL_checkinteger(L, index));
}
static ERemoteStoragePlatform check_ERemoteStoragePlatform(lua_State* L, int index) {
	return ERemoteStoragePlatform(luaL_checkinteger(L, index));
}
static ERemoteStoragePublishedFileVisibility check_ERemoteStoragePublishedFileVisibility(lua_State* L, int index) {
	return ERemoteStoragePublishedFileVisibility(luaL_checkinteger(L, index));
}
static EWorkshopFileType check_EWorkshopFileType(lua_State* L, int index) {
	return EWorkshopFileType(luaL_checkinteger(L, index));
}
static EWorkshopVote check_EWorkshopVote(lua_State* L, int index) {
	return EWorkshopVote(luaL_checkinteger(L, index));
}
static EWorkshopFileAction check_EWorkshopFileAction(lua_State* L, int index) {
	return EWorkshopFileAction(luaL_checkinteger(L, index));
}
static EWorkshopEnumerationType check_EWorkshopEnumerationType(lua_State* L, int index) {
	return EWorkshopEnumerationType(luaL_checkinteger(L, index));
}
static EWorkshopVideoProvider check_EWorkshopVideoProvider(lua_State* L, int index) {
	return EWorkshopVideoProvider(luaL_checkinteger(L, index));
}
static EUGCReadAction check_EUGCReadAction(lua_State* L, int index) {
	return EUGCReadAction(luaL_checkinteger(L, index));
}
static ERemoteStorageLocalFileChange check_ERemoteStorageLocalFileChange(lua_State* L, int index) {
	return ERemoteStorageLocalFileChange(luaL_checkinteger(L, index));
}
static ERemoteStorageFilePathType check_ERemoteStorageFilePathType(lua_State* L, int index) {
	return ERemoteStorageFilePathType(luaL_checkinteger(L, index));
}
static ELeaderboardDataRequest check_ELeaderboardDataRequest(lua_State* L, int index) {
	return ELeaderboardDataRequest(luaL_checkinteger(L, index));
}
static ELeaderboardSortMethod check_ELeaderboardSortMethod(lua_State* L, int index) {
	return ELeaderboardSortMethod(luaL_checkinteger(L, index));
}
static ELeaderboardDisplayType check_ELeaderboardDisplayType(lua_State* L, int index) {
	return ELeaderboardDisplayType(luaL_checkinteger(L, index));
}
static ELeaderboardUploadScoreMethod check_ELeaderboardUploadScoreMethod(lua_State* L, int index) {
	return ELeaderboardUploadScoreMethod(luaL_checkinteger(L, index));
}
static ERegisterActivationCodeResult check_ERegisterActivationCodeResult(lua_State* L, int index) {
	return ERegisterActivationCodeResult(luaL_checkinteger(L, index));
}
static EP2PSessionError check_EP2PSessionError(lua_State* L, int index) {
	return EP2PSessionError(luaL_checkinteger(L, index));
}
static EP2PSend check_EP2PSend(lua_State* L, int index) {
	return EP2PSend(luaL_checkinteger(L, index));
}
static ESNetSocketState check_ESNetSocketState(lua_State* L, int index) {
	return ESNetSocketState(luaL_checkinteger(L, index));
}
static ESNetSocketConnectionType check_ESNetSocketConnectionType(lua_State* L, int index) {
	return ESNetSocketConnectionType(luaL_checkinteger(L, index));
}
static EVRScreenshotType check_EVRScreenshotType(lua_State* L, int index) {
	return EVRScreenshotType(luaL_checkinteger(L, index));
}
static AudioPlayback_Status check_AudioPlayback_Status(lua_State* L, int index) {
	return AudioPlayback_Status(luaL_checkinteger(L, index));
}
static EHTTPMethod check_EHTTPMethod(lua_State* L, int index) {
	return EHTTPMethod(luaL_checkinteger(L, index));
}
static EHTTPStatusCode check_EHTTPStatusCode(lua_State* L, int index) {
	return EHTTPStatusCode(luaL_checkinteger(L, index));
}
static EInputSourceMode check_EInputSourceMode(lua_State* L, int index) {
	return EInputSourceMode(luaL_checkinteger(L, index));
}
static EInputActionOrigin check_EInputActionOrigin(lua_State* L, int index) {
	return EInputActionOrigin(luaL_checkinteger(L, index));
}
static EXboxOrigin check_EXboxOrigin(lua_State* L, int index) {
	return EXboxOrigin(luaL_checkinteger(L, index));
}
static ESteamControllerPad check_ESteamControllerPad(lua_State* L, int index) {
	return ESteamControllerPad(luaL_checkinteger(L, index));
}
static EControllerHapticLocation check_EControllerHapticLocation(lua_State* L, int index) {
	return EControllerHapticLocation(luaL_checkinteger(L, index));
}
static EControllerHapticType check_EControllerHapticType(lua_State* L, int index) {
	return EControllerHapticType(luaL_checkinteger(L, index));
}
static ESteamInputType check_ESteamInputType(lua_State* L, int index) {
	return ESteamInputType(luaL_checkinteger(L, index));
}
static ESteamInputConfigurationEnableType check_ESteamInputConfigurationEnableType(lua_State* L, int index) {
	return ESteamInputConfigurationEnableType(luaL_checkinteger(L, index));
}
static ESteamInputLEDFlag check_ESteamInputLEDFlag(lua_State* L, int index) {
	return ESteamInputLEDFlag(luaL_checkinteger(L, index));
}
static ESteamInputGlyphSize check_ESteamInputGlyphSize(lua_State* L, int index) {
	return ESteamInputGlyphSize(luaL_checkinteger(L, index));
}
static ESteamInputGlyphStyle check_ESteamInputGlyphStyle(lua_State* L, int index) {
	return ESteamInputGlyphStyle(luaL_checkinteger(L, index));
}
static ESteamInputActionEventType check_ESteamInputActionEventType(lua_State* L, int index) {
	return ESteamInputActionEventType(luaL_checkinteger(L, index));
}
static EControllerActionOrigin check_EControllerActionOrigin(lua_State* L, int index) {
	return EControllerActionOrigin(luaL_checkinteger(L, index));
}
static ESteamControllerLEDFlag check_ESteamControllerLEDFlag(lua_State* L, int index) {
	return ESteamControllerLEDFlag(luaL_checkinteger(L, index));
}
static EUGCMatchingUGCType check_EUGCMatchingUGCType(lua_State* L, int index) {
	return EUGCMatchingUGCType(luaL_checkinteger(L, index));
}
static EUserUGCList check_EUserUGCList(lua_State* L, int index) {
	return EUserUGCList(luaL_checkinteger(L, index));
}
static EUserUGCListSortOrder check_EUserUGCListSortOrder(lua_State* L, int index) {
	return EUserUGCListSortOrder(luaL_checkinteger(L, index));
}
static EUGCQuery check_EUGCQuery(lua_State* L, int index) {
	return EUGCQuery(luaL_checkinteger(L, index));
}
static EItemUpdateStatus check_EItemUpdateStatus(lua_State* L, int index) {
	return EItemUpdateStatus(luaL_checkinteger(L, index));
}
static EItemState check_EItemState(lua_State* L, int index) {
	return EItemState(luaL_checkinteger(L, index));
}
static EItemStatistic check_EItemStatistic(lua_State* L, int index) {
	return EItemStatistic(luaL_checkinteger(L, index));
}
static EItemPreviewType check_EItemPreviewType(lua_State* L, int index) {
	return EItemPreviewType(luaL_checkinteger(L, index));
}
static ESteamItemFlags check_ESteamItemFlags(lua_State* L, int index) {
	return ESteamItemFlags(luaL_checkinteger(L, index));
}
static EParentalFeature check_EParentalFeature(lua_State* L, int index) {
	return EParentalFeature(luaL_checkinteger(L, index));
}
static ESteamDeviceFormFactor check_ESteamDeviceFormFactor(lua_State* L, int index) {
	return ESteamDeviceFormFactor(luaL_checkinteger(L, index));
}
static ESteamNetworkingAvailability check_ESteamNetworkingAvailability(lua_State* L, int index) {
	return ESteamNetworkingAvailability(luaL_checkinteger(L, index));
}
static ESteamNetworkingIdentityType check_ESteamNetworkingIdentityType(lua_State* L, int index) {
	return ESteamNetworkingIdentityType(luaL_checkinteger(L, index));
}
static ESteamNetworkingFakeIPType check_ESteamNetworkingFakeIPType(lua_State* L, int index) {
	return ESteamNetworkingFakeIPType(luaL_checkinteger(L, index));
}
static ESteamNetworkingConnectionState check_ESteamNetworkingConnectionState(lua_State* L, int index) {
	return ESteamNetworkingConnectionState(luaL_checkinteger(L, index));
}
static ESteamNetConnectionEnd check_ESteamNetConnectionEnd(lua_State* L, int index) {
	return ESteamNetConnectionEnd(luaL_checkinteger(L, index));
}
static ESteamNetworkingConfigScope check_ESteamNetworkingConfigScope(lua_State* L, int index) {
	return ESteamNetworkingConfigScope(luaL_checkinteger(L, index));
}
static ESteamNetworkingConfigDataType check_ESteamNetworkingConfigDataType(lua_State* L, int index) {
	return ESteamNetworkingConfigDataType(luaL_checkinteger(L, index));
}
static ESteamNetworkingConfigValue check_ESteamNetworkingConfigValue(lua_State* L, int index) {
	return ESteamNetworkingConfigValue(luaL_checkinteger(L, index));
}
static ESteamNetworkingGetConfigValueResult check_ESteamNetworkingGetConfigValueResult(lua_State* L, int index) {
	return ESteamNetworkingGetConfigValueResult(luaL_checkinteger(L, index));
}
static ESteamNetworkingSocketsDebugOutputType check_ESteamNetworkingSocketsDebugOutputType(lua_State* L, int index) {
	return ESteamNetworkingSocketsDebugOutputType(luaL_checkinteger(L, index));
}
static EServerMode check_EServerMode(lua_State* L, int index) {
	return EServerMode(luaL_checkinteger(L, index));
}
static IPCFailure_t::EFailureType check_EFailureType(lua_State* L, int index) {
	return IPCFailure_t::EFailureType(luaL_checkinteger(L, index));
}
static RequestPlayersForGameResultCallback_t::PlayerAcceptState_t check_PlayerAcceptState_t(lua_State* L, int index) {
	return RequestPlayersForGameResultCallback_t::PlayerAcceptState_t(luaL_checkinteger(L, index));
}

/*****************************
* CHECK LuaBuffer
******************************/
static dmScript::LuaHBuffer * check_buffer(lua_State* L, int index) {
	return dmScript::CheckBuffer(L, index);
}

/*****************************
* CHECK CSteamID
******************************/
static CSteamID check_CSteamID(lua_State* L, int index) {
	uint64 id = check_uint64(L, index);
	CSteamID steamId = CSteamID(id);
	return steamId;
}
static CSteamID check_class_CSteamID(lua_State* L, int index) {
	return check_CSteamID(L, index);
}
static void check_CSteamID_array(lua_State* L, int index, CSteamID *ids, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		ids[i] = check_CSteamID(L, -1);
	}
}

/*****************************
* CHECK CGameID
******************************/
static CGameID check_CGameID(lua_State* L, int index) {
	uint64 id = check_uint64(L, index);
	CGameID gameId = CGameID(id);
	return gameId;
}

/*****************************
* CHECK structs
******************************/
static servernetadr_t check_servernetadr_t(lua_State* L, int index) {
	servernetadr_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		s.SetConnectionPort(0);
		s.SetQueryPort(0);
		s.SetIP(0);
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_usConnectionPort");
	lua_gettable(L, index);
	s.SetConnectionPort(check_uint16(L, -1));
	lua_pushstring(L, "m_usQueryPort");
	lua_gettable(L, index);
	s.SetQueryPort(check_uint16(L, -1));
	lua_pushstring(L, "m_unIP");
	lua_gettable(L, index);
	s.SetIP(check_uint32(L, -1));
	return s;
}
static SteamParamStringArray_t check_SteamParamStringArray_t(lua_State* L, int index) {
	SteamParamStringArray_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		s.m_nNumStrings = 0;
		s.m_ppStrings = 0;
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	const int table_size = lua_objlen(L, index);
	const char *pStrings[table_size];

	s.m_nNumStrings = table_size;
	s.m_ppStrings = pStrings;
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		pStrings[i] = luaL_checkstring(L, -1);
	}
	return s;
}
static SteamIPAddress_t check_SteamIPAddress_t(lua_State* L, int index) {
	SteamIPAddress_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_rgubIPv6");
	lua_gettable(L, index);
	check_uint8_array(L, -1, s.m_rgubIPv6, 16);
	lua_pushstring(L, "m_eType");
	lua_gettable(L, index);
	s.m_eType = check_ESteamIPType(L, -1);
	return s;
}

static void check_SteamIPAddress_t_array(lua_State* L, int index, SteamIPAddress_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamIPAddress_t(L, -1);
	}
}
static FriendGameInfo_t check_FriendGameInfo_t(lua_State* L, int index) {
	FriendGameInfo_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_gameID");
	lua_gettable(L, index);
	s.m_gameID = check_CGameID(L, -1);
	lua_pushstring(L, "m_unGameIP");
	lua_gettable(L, index);
	s.m_unGameIP = check_uint32(L, -1);
	lua_pushstring(L, "m_usGamePort");
	lua_gettable(L, index);
	s.m_usGamePort = check_uint16(L, -1);
	lua_pushstring(L, "m_usQueryPort");
	lua_gettable(L, index);
	s.m_usQueryPort = check_uint16(L, -1);
	lua_pushstring(L, "m_steamIDLobby");
	lua_gettable(L, index);
	s.m_steamIDLobby = check_CSteamID(L, -1);
	return s;
}

static void check_FriendGameInfo_t_array(lua_State* L, int index, FriendGameInfo_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_FriendGameInfo_t(L, -1);
	}
}
static MatchMakingKeyValuePair_t check_MatchMakingKeyValuePair_t(lua_State* L, int index) {
	MatchMakingKeyValuePair_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_szKey");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szKey, 256);
	lua_pushstring(L, "m_szValue");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szValue, 256);
	return s;
}

static void check_MatchMakingKeyValuePair_t_array(lua_State* L, int index, MatchMakingKeyValuePair_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MatchMakingKeyValuePair_t(L, -1);
	}
}
static SteamPartyBeaconLocation_t check_SteamPartyBeaconLocation_t(lua_State* L, int index) {
	SteamPartyBeaconLocation_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eType");
	lua_gettable(L, index);
	s.m_eType = check_ESteamPartyBeaconLocationType(L, -1);
	lua_pushstring(L, "m_ulLocationID");
	lua_gettable(L, index);
	s.m_ulLocationID = check_uint64(L, -1);
	return s;
}

static void check_SteamPartyBeaconLocation_t_array(lua_State* L, int index, SteamPartyBeaconLocation_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamPartyBeaconLocation_t(L, -1);
	}
}
static LeaderboardEntry_t check_LeaderboardEntry_t(lua_State* L, int index) {
	LeaderboardEntry_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	lua_pushstring(L, "m_nGlobalRank");
	lua_gettable(L, index);
	s.m_nGlobalRank = check_int32(L, -1);
	lua_pushstring(L, "m_nScore");
	lua_gettable(L, index);
	s.m_nScore = check_int32(L, -1);
	lua_pushstring(L, "m_cDetails");
	lua_gettable(L, index);
	s.m_cDetails = check_int32(L, -1);
	lua_pushstring(L, "m_hUGC");
	lua_gettable(L, index);
	s.m_hUGC = check_UGCHandle_t(L, -1);
	return s;
}

static void check_LeaderboardEntry_t_array(lua_State* L, int index, LeaderboardEntry_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LeaderboardEntry_t(L, -1);
	}
}
static P2PSessionState_t check_P2PSessionState_t(lua_State* L, int index) {
	P2PSessionState_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bConnectionActive");
	lua_gettable(L, index);
	s.m_bConnectionActive = check_uint8(L, -1);
	lua_pushstring(L, "m_bConnecting");
	lua_gettable(L, index);
	s.m_bConnecting = check_uint8(L, -1);
	lua_pushstring(L, "m_eP2PSessionError");
	lua_gettable(L, index);
	s.m_eP2PSessionError = check_uint8(L, -1);
	lua_pushstring(L, "m_bUsingRelay");
	lua_gettable(L, index);
	s.m_bUsingRelay = check_uint8(L, -1);
	lua_pushstring(L, "m_nBytesQueuedForSend");
	lua_gettable(L, index);
	s.m_nBytesQueuedForSend = check_int32(L, -1);
	lua_pushstring(L, "m_nPacketsQueuedForSend");
	lua_gettable(L, index);
	s.m_nPacketsQueuedForSend = check_int32(L, -1);
	lua_pushstring(L, "m_nRemoteIP");
	lua_gettable(L, index);
	s.m_nRemoteIP = check_uint32(L, -1);
	lua_pushstring(L, "m_nRemotePort");
	lua_gettable(L, index);
	s.m_nRemotePort = check_uint16(L, -1);
	return s;
}

static void check_P2PSessionState_t_array(lua_State* L, int index, P2PSessionState_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_P2PSessionState_t(L, -1);
	}
}
static InputAnalogActionData_t check_InputAnalogActionData_t(lua_State* L, int index) {
	InputAnalogActionData_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "eMode");
	lua_gettable(L, index);
	s.eMode = check_EInputSourceMode(L, -1);
	lua_pushstring(L, "x");
	lua_gettable(L, index);
	s.x = check_float(L, -1);
	lua_pushstring(L, "y");
	lua_gettable(L, index);
	s.y = check_float(L, -1);
	lua_pushstring(L, "bActive");
	lua_gettable(L, index);
	s.bActive = check_bool(L, -1);
	return s;
}

static void check_InputAnalogActionData_t_array(lua_State* L, int index, InputAnalogActionData_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_InputAnalogActionData_t(L, -1);
	}
}
static InputDigitalActionData_t check_InputDigitalActionData_t(lua_State* L, int index) {
	InputDigitalActionData_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "bState");
	lua_gettable(L, index);
	s.bState = check_bool(L, -1);
	lua_pushstring(L, "bActive");
	lua_gettable(L, index);
	s.bActive = check_bool(L, -1);
	return s;
}

static void check_InputDigitalActionData_t_array(lua_State* L, int index, InputDigitalActionData_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_InputDigitalActionData_t(L, -1);
	}
}
static InputMotionData_t check_InputMotionData_t(lua_State* L, int index) {
	InputMotionData_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "rotQuatX");
	lua_gettable(L, index);
	s.rotQuatX = check_float(L, -1);
	lua_pushstring(L, "rotQuatY");
	lua_gettable(L, index);
	s.rotQuatY = check_float(L, -1);
	lua_pushstring(L, "rotQuatZ");
	lua_gettable(L, index);
	s.rotQuatZ = check_float(L, -1);
	lua_pushstring(L, "rotQuatW");
	lua_gettable(L, index);
	s.rotQuatW = check_float(L, -1);
	lua_pushstring(L, "posAccelX");
	lua_gettable(L, index);
	s.posAccelX = check_float(L, -1);
	lua_pushstring(L, "posAccelY");
	lua_gettable(L, index);
	s.posAccelY = check_float(L, -1);
	lua_pushstring(L, "posAccelZ");
	lua_gettable(L, index);
	s.posAccelZ = check_float(L, -1);
	lua_pushstring(L, "rotVelX");
	lua_gettable(L, index);
	s.rotVelX = check_float(L, -1);
	lua_pushstring(L, "rotVelY");
	lua_gettable(L, index);
	s.rotVelY = check_float(L, -1);
	lua_pushstring(L, "rotVelZ");
	lua_gettable(L, index);
	s.rotVelZ = check_float(L, -1);
	return s;
}

static void check_InputMotionData_t_array(lua_State* L, int index, InputMotionData_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_InputMotionData_t(L, -1);
	}
}
static SteamUGCDetails_t check_SteamUGCDetails_t(lua_State* L, int index) {
	SteamUGCDetails_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_eFileType");
	lua_gettable(L, index);
	s.m_eFileType = check_EWorkshopFileType(L, -1);
	lua_pushstring(L, "m_nCreatorAppID");
	lua_gettable(L, index);
	s.m_nCreatorAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_nConsumerAppID");
	lua_gettable(L, index);
	s.m_nConsumerAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_rgchTitle");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchTitle, 129);
	lua_pushstring(L, "m_rgchDescription");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchDescription, 8000);
	lua_pushstring(L, "m_ulSteamIDOwner");
	lua_gettable(L, index);
	s.m_ulSteamIDOwner = check_uint64(L, -1);
	lua_pushstring(L, "m_rtimeCreated");
	lua_gettable(L, index);
	s.m_rtimeCreated = check_uint32(L, -1);
	lua_pushstring(L, "m_rtimeUpdated");
	lua_gettable(L, index);
	s.m_rtimeUpdated = check_uint32(L, -1);
	lua_pushstring(L, "m_rtimeAddedToUserList");
	lua_gettable(L, index);
	s.m_rtimeAddedToUserList = check_uint32(L, -1);
	lua_pushstring(L, "m_eVisibility");
	lua_gettable(L, index);
	s.m_eVisibility = check_ERemoteStoragePublishedFileVisibility(L, -1);
	lua_pushstring(L, "m_bBanned");
	lua_gettable(L, index);
	s.m_bBanned = check_bool(L, -1);
	lua_pushstring(L, "m_bAcceptedForUse");
	lua_gettable(L, index);
	s.m_bAcceptedForUse = check_bool(L, -1);
	lua_pushstring(L, "m_bTagsTruncated");
	lua_gettable(L, index);
	s.m_bTagsTruncated = check_bool(L, -1);
	lua_pushstring(L, "m_rgchTags");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchTags, 1025);
	lua_pushstring(L, "m_hFile");
	lua_gettable(L, index);
	s.m_hFile = check_UGCHandle_t(L, -1);
	lua_pushstring(L, "m_hPreviewFile");
	lua_gettable(L, index);
	s.m_hPreviewFile = check_UGCHandle_t(L, -1);
	lua_pushstring(L, "m_pchFileName");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_pchFileName, 260);
	lua_pushstring(L, "m_nFileSize");
	lua_gettable(L, index);
	s.m_nFileSize = check_int32(L, -1);
	lua_pushstring(L, "m_nPreviewFileSize");
	lua_gettable(L, index);
	s.m_nPreviewFileSize = check_int32(L, -1);
	lua_pushstring(L, "m_rgchURL");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchURL, 256);
	lua_pushstring(L, "m_unVotesUp");
	lua_gettable(L, index);
	s.m_unVotesUp = check_uint32(L, -1);
	lua_pushstring(L, "m_unVotesDown");
	lua_gettable(L, index);
	s.m_unVotesDown = check_uint32(L, -1);
	lua_pushstring(L, "m_flScore");
	lua_gettable(L, index);
	s.m_flScore = check_float(L, -1);
	lua_pushstring(L, "m_unNumChildren");
	lua_gettable(L, index);
	s.m_unNumChildren = check_uint32(L, -1);
	return s;
}

static void check_SteamUGCDetails_t_array(lua_State* L, int index, SteamUGCDetails_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamUGCDetails_t(L, -1);
	}
}
static SteamItemDetails_t check_SteamItemDetails_t(lua_State* L, int index) {
	SteamItemDetails_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_itemId");
	lua_gettable(L, index);
	s.m_itemId = check_SteamItemInstanceID_t(L, -1);
	lua_pushstring(L, "m_iDefinition");
	lua_gettable(L, index);
	s.m_iDefinition = check_SteamItemDef_t(L, -1);
	lua_pushstring(L, "m_unQuantity");
	lua_gettable(L, index);
	s.m_unQuantity = check_uint16(L, -1);
	lua_pushstring(L, "m_unFlags");
	lua_gettable(L, index);
	s.m_unFlags = check_uint16(L, -1);
	return s;
}

static void check_SteamItemDetails_t_array(lua_State* L, int index, SteamItemDetails_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamItemDetails_t(L, -1);
	}
}
static SteamNetworkingIPAddr check_SteamNetworkingIPAddr(lua_State* L, int index) {
	SteamNetworkingIPAddr s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ipv6");
	lua_gettable(L, index);
	check_uint8_array(L, -1, s.m_ipv6, 16);
	lua_pushstring(L, "m_port");
	lua_gettable(L, index);
	s.m_port = check_uint16(L, -1);
	return s;
}

static void check_SteamNetworkingIPAddr_array(lua_State* L, int index, SteamNetworkingIPAddr *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetworkingIPAddr(L, -1);
	}
}
static SteamNetworkingIdentity check_SteamNetworkingIdentity(lua_State* L, int index) {
	SteamNetworkingIdentity s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eType");
	lua_gettable(L, index);
	s.m_eType = check_ESteamNetworkingIdentityType(L, -1);
	lua_pushstring(L, "m_cbSize");
	lua_gettable(L, index);
	s.m_cbSize = check_int(L, -1);
	lua_pushstring(L, "m_szUnknownRawString");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szUnknownRawString, 128);
	return s;
}

static void check_SteamNetworkingIdentity_array(lua_State* L, int index, SteamNetworkingIdentity *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetworkingIdentity(L, -1);
	}
}
static SteamNetConnectionInfo_t check_SteamNetConnectionInfo_t(lua_State* L, int index) {
	SteamNetConnectionInfo_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_identityRemote");
	lua_gettable(L, index);
	s.m_identityRemote = check_SteamNetworkingIdentity(L, -1);
	lua_pushstring(L, "m_nUserData");
	lua_gettable(L, index);
	s.m_nUserData = check_int64(L, -1);
	lua_pushstring(L, "m_hListenSocket");
	lua_gettable(L, index);
	s.m_hListenSocket = check_HSteamListenSocket(L, -1);
	lua_pushstring(L, "m_addrRemote");
	lua_gettable(L, index);
	s.m_addrRemote = check_SteamNetworkingIPAddr(L, -1);
	lua_pushstring(L, "m__pad1");
	lua_gettable(L, index);
	s.m__pad1 = check_uint16(L, -1);
	lua_pushstring(L, "m_idPOPRemote");
	lua_gettable(L, index);
	s.m_idPOPRemote = check_SteamNetworkingPOPID(L, -1);
	lua_pushstring(L, "m_idPOPRelay");
	lua_gettable(L, index);
	s.m_idPOPRelay = check_SteamNetworkingPOPID(L, -1);
	lua_pushstring(L, "m_eState");
	lua_gettable(L, index);
	s.m_eState = check_ESteamNetworkingConnectionState(L, -1);
	lua_pushstring(L, "m_eEndReason");
	lua_gettable(L, index);
	s.m_eEndReason = check_int(L, -1);
	lua_pushstring(L, "m_szEndDebug");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szEndDebug, 128);
	lua_pushstring(L, "m_szConnectionDescription");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szConnectionDescription, 128);
	lua_pushstring(L, "m_nFlags");
	lua_gettable(L, index);
	s.m_nFlags = check_int(L, -1);
	lua_pushstring(L, "reserved");
	lua_gettable(L, index);
	check_uint32_array(L, -1, s.reserved, 63);
	return s;
}

static void check_SteamNetConnectionInfo_t_array(lua_State* L, int index, SteamNetConnectionInfo_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetConnectionInfo_t(L, -1);
	}
}
static SteamNetConnectionRealTimeStatus_t check_SteamNetConnectionRealTimeStatus_t(lua_State* L, int index) {
	SteamNetConnectionRealTimeStatus_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eState");
	lua_gettable(L, index);
	s.m_eState = check_ESteamNetworkingConnectionState(L, -1);
	lua_pushstring(L, "m_nPing");
	lua_gettable(L, index);
	s.m_nPing = check_int(L, -1);
	lua_pushstring(L, "m_flConnectionQualityLocal");
	lua_gettable(L, index);
	s.m_flConnectionQualityLocal = check_float(L, -1);
	lua_pushstring(L, "m_flConnectionQualityRemote");
	lua_gettable(L, index);
	s.m_flConnectionQualityRemote = check_float(L, -1);
	lua_pushstring(L, "m_flOutPacketsPerSec");
	lua_gettable(L, index);
	s.m_flOutPacketsPerSec = check_float(L, -1);
	lua_pushstring(L, "m_flOutBytesPerSec");
	lua_gettable(L, index);
	s.m_flOutBytesPerSec = check_float(L, -1);
	lua_pushstring(L, "m_flInPacketsPerSec");
	lua_gettable(L, index);
	s.m_flInPacketsPerSec = check_float(L, -1);
	lua_pushstring(L, "m_flInBytesPerSec");
	lua_gettable(L, index);
	s.m_flInBytesPerSec = check_float(L, -1);
	lua_pushstring(L, "m_nSendRateBytesPerSecond");
	lua_gettable(L, index);
	s.m_nSendRateBytesPerSecond = check_int(L, -1);
	lua_pushstring(L, "m_cbPendingUnreliable");
	lua_gettable(L, index);
	s.m_cbPendingUnreliable = check_int(L, -1);
	lua_pushstring(L, "m_cbPendingReliable");
	lua_gettable(L, index);
	s.m_cbPendingReliable = check_int(L, -1);
	lua_pushstring(L, "m_cbSentUnackedReliable");
	lua_gettable(L, index);
	s.m_cbSentUnackedReliable = check_int(L, -1);
	lua_pushstring(L, "m_usecQueueTime");
	lua_gettable(L, index);
	s.m_usecQueueTime = check_SteamNetworkingMicroseconds(L, -1);
	lua_pushstring(L, "reserved");
	lua_gettable(L, index);
	check_uint32_array(L, -1, s.reserved, 16);
	return s;
}

static void check_SteamNetConnectionRealTimeStatus_t_array(lua_State* L, int index, SteamNetConnectionRealTimeStatus_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetConnectionRealTimeStatus_t(L, -1);
	}
}
static SteamNetConnectionRealTimeLaneStatus_t check_SteamNetConnectionRealTimeLaneStatus_t(lua_State* L, int index) {
	SteamNetConnectionRealTimeLaneStatus_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_cbPendingUnreliable");
	lua_gettable(L, index);
	s.m_cbPendingUnreliable = check_int(L, -1);
	lua_pushstring(L, "m_cbPendingReliable");
	lua_gettable(L, index);
	s.m_cbPendingReliable = check_int(L, -1);
	lua_pushstring(L, "m_cbSentUnackedReliable");
	lua_gettable(L, index);
	s.m_cbSentUnackedReliable = check_int(L, -1);
	lua_pushstring(L, "_reservePad1");
	lua_gettable(L, index);
	s._reservePad1 = check_int(L, -1);
	lua_pushstring(L, "m_usecQueueTime");
	lua_gettable(L, index);
	s.m_usecQueueTime = check_SteamNetworkingMicroseconds(L, -1);
	lua_pushstring(L, "reserved");
	lua_gettable(L, index);
	check_uint32_array(L, -1, s.reserved, 10);
	return s;
}

static void check_SteamNetConnectionRealTimeLaneStatus_t_array(lua_State* L, int index, SteamNetConnectionRealTimeLaneStatus_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetConnectionRealTimeLaneStatus_t(L, -1);
	}
}
static SteamNetworkPingLocation_t check_SteamNetworkPingLocation_t(lua_State* L, int index) {
	SteamNetworkPingLocation_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_data");
	lua_gettable(L, index);
	check_uint8_array(L, -1, s.m_data, 512);
	return s;
}

static void check_SteamNetworkPingLocation_t_array(lua_State* L, int index, SteamNetworkPingLocation_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetworkPingLocation_t(L, -1);
	}
}
static SteamServersConnected_t check_SteamServersConnected_t(lua_State* L, int index) {
	SteamServersConnected_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_SteamServersConnected_t_array(lua_State* L, int index, SteamServersConnected_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamServersConnected_t(L, -1);
	}
}
static SteamServerConnectFailure_t check_SteamServerConnectFailure_t(lua_State* L, int index) {
	SteamServerConnectFailure_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_bStillRetrying");
	lua_gettable(L, index);
	s.m_bStillRetrying = check_bool(L, -1);
	return s;
}

static void check_SteamServerConnectFailure_t_array(lua_State* L, int index, SteamServerConnectFailure_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamServerConnectFailure_t(L, -1);
	}
}
static SteamServersDisconnected_t check_SteamServersDisconnected_t(lua_State* L, int index) {
	SteamServersDisconnected_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_SteamServersDisconnected_t_array(lua_State* L, int index, SteamServersDisconnected_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamServersDisconnected_t(L, -1);
	}
}
static ClientGameServerDeny_t check_ClientGameServerDeny_t(lua_State* L, int index) {
	ClientGameServerDeny_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_uAppID");
	lua_gettable(L, index);
	s.m_uAppID = check_uint32(L, -1);
	lua_pushstring(L, "m_unGameServerIP");
	lua_gettable(L, index);
	s.m_unGameServerIP = check_uint32(L, -1);
	lua_pushstring(L, "m_usGameServerPort");
	lua_gettable(L, index);
	s.m_usGameServerPort = check_uint16(L, -1);
	lua_pushstring(L, "m_bSecure");
	lua_gettable(L, index);
	s.m_bSecure = check_uint16(L, -1);
	lua_pushstring(L, "m_uReason");
	lua_gettable(L, index);
	s.m_uReason = check_uint32(L, -1);
	return s;
}

static void check_ClientGameServerDeny_t_array(lua_State* L, int index, ClientGameServerDeny_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ClientGameServerDeny_t(L, -1);
	}
}
static IPCFailure_t check_IPCFailure_t(lua_State* L, int index) {
	IPCFailure_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eFailureType");
	lua_gettable(L, index);
	s.m_eFailureType = check_uint8(L, -1);
	return s;
}

static void check_IPCFailure_t_array(lua_State* L, int index, IPCFailure_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_IPCFailure_t(L, -1);
	}
}
static LicensesUpdated_t check_LicensesUpdated_t(lua_State* L, int index) {
	LicensesUpdated_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_LicensesUpdated_t_array(lua_State* L, int index, LicensesUpdated_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LicensesUpdated_t(L, -1);
	}
}
static ValidateAuthTicketResponse_t check_ValidateAuthTicketResponse_t(lua_State* L, int index) {
	ValidateAuthTicketResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_SteamID");
	lua_gettable(L, index);
	s.m_SteamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_eAuthSessionResponse");
	lua_gettable(L, index);
	s.m_eAuthSessionResponse = check_EAuthSessionResponse(L, -1);
	lua_pushstring(L, "m_OwnerSteamID");
	lua_gettable(L, index);
	s.m_OwnerSteamID = check_CSteamID(L, -1);
	return s;
}

static void check_ValidateAuthTicketResponse_t_array(lua_State* L, int index, ValidateAuthTicketResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ValidateAuthTicketResponse_t(L, -1);
	}
}
static MicroTxnAuthorizationResponse_t check_MicroTxnAuthorizationResponse_t(lua_State* L, int index) {
	MicroTxnAuthorizationResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_unAppID");
	lua_gettable(L, index);
	s.m_unAppID = check_uint32(L, -1);
	lua_pushstring(L, "m_ulOrderID");
	lua_gettable(L, index);
	s.m_ulOrderID = check_uint64(L, -1);
	lua_pushstring(L, "m_bAuthorized");
	lua_gettable(L, index);
	s.m_bAuthorized = check_uint8(L, -1);
	return s;
}

static void check_MicroTxnAuthorizationResponse_t_array(lua_State* L, int index, MicroTxnAuthorizationResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MicroTxnAuthorizationResponse_t(L, -1);
	}
}
static EncryptedAppTicketResponse_t check_EncryptedAppTicketResponse_t(lua_State* L, int index) {
	EncryptedAppTicketResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_EncryptedAppTicketResponse_t_array(lua_State* L, int index, EncryptedAppTicketResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_EncryptedAppTicketResponse_t(L, -1);
	}
}
static GetAuthSessionTicketResponse_t check_GetAuthSessionTicketResponse_t(lua_State* L, int index) {
	GetAuthSessionTicketResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hAuthTicket");
	lua_gettable(L, index);
	s.m_hAuthTicket = check_HAuthTicket(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_GetAuthSessionTicketResponse_t_array(lua_State* L, int index, GetAuthSessionTicketResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GetAuthSessionTicketResponse_t(L, -1);
	}
}
static GameWebCallback_t check_GameWebCallback_t(lua_State* L, int index) {
	GameWebCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_szURL");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szURL, 256);
	return s;
}

static void check_GameWebCallback_t_array(lua_State* L, int index, GameWebCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GameWebCallback_t(L, -1);
	}
}
static StoreAuthURLResponse_t check_StoreAuthURLResponse_t(lua_State* L, int index) {
	StoreAuthURLResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_szURL");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szURL, 512);
	return s;
}

static void check_StoreAuthURLResponse_t_array(lua_State* L, int index, StoreAuthURLResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_StoreAuthURLResponse_t(L, -1);
	}
}
static MarketEligibilityResponse_t check_MarketEligibilityResponse_t(lua_State* L, int index) {
	MarketEligibilityResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bAllowed");
	lua_gettable(L, index);
	s.m_bAllowed = check_bool(L, -1);
	lua_pushstring(L, "m_eNotAllowedReason");
	lua_gettable(L, index);
	s.m_eNotAllowedReason = check_EMarketNotAllowedReasonFlags(L, -1);
	lua_pushstring(L, "m_rtAllowedAtTime");
	lua_gettable(L, index);
	s.m_rtAllowedAtTime = check_RTime32(L, -1);
	lua_pushstring(L, "m_cdaySteamGuardRequiredDays");
	lua_gettable(L, index);
	s.m_cdaySteamGuardRequiredDays = check_int(L, -1);
	lua_pushstring(L, "m_cdayNewDeviceCooldown");
	lua_gettable(L, index);
	s.m_cdayNewDeviceCooldown = check_int(L, -1);
	return s;
}

static void check_MarketEligibilityResponse_t_array(lua_State* L, int index, MarketEligibilityResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MarketEligibilityResponse_t(L, -1);
	}
}
static DurationControl_t check_DurationControl_t(lua_State* L, int index) {
	DurationControl_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_appid");
	lua_gettable(L, index);
	s.m_appid = check_AppId_t(L, -1);
	lua_pushstring(L, "m_bApplicable");
	lua_gettable(L, index);
	s.m_bApplicable = check_bool(L, -1);
	lua_pushstring(L, "m_csecsLast5h");
	lua_gettable(L, index);
	s.m_csecsLast5h = check_int32(L, -1);
	lua_pushstring(L, "m_progress");
	lua_gettable(L, index);
	s.m_progress = check_EDurationControlProgress(L, -1);
	lua_pushstring(L, "m_notification");
	lua_gettable(L, index);
	s.m_notification = check_EDurationControlNotification(L, -1);
	lua_pushstring(L, "m_csecsToday");
	lua_gettable(L, index);
	s.m_csecsToday = check_int32(L, -1);
	lua_pushstring(L, "m_csecsRemaining");
	lua_gettable(L, index);
	s.m_csecsRemaining = check_int32(L, -1);
	return s;
}

static void check_DurationControl_t_array(lua_State* L, int index, DurationControl_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_DurationControl_t(L, -1);
	}
}
static PersonaStateChange_t check_PersonaStateChange_t(lua_State* L, int index) {
	PersonaStateChange_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulSteamID");
	lua_gettable(L, index);
	s.m_ulSteamID = check_uint64(L, -1);
	lua_pushstring(L, "m_nChangeFlags");
	lua_gettable(L, index);
	s.m_nChangeFlags = check_int(L, -1);
	return s;
}

static void check_PersonaStateChange_t_array(lua_State* L, int index, PersonaStateChange_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_PersonaStateChange_t(L, -1);
	}
}
static GameOverlayActivated_t check_GameOverlayActivated_t(lua_State* L, int index) {
	GameOverlayActivated_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bActive");
	lua_gettable(L, index);
	s.m_bActive = check_uint8(L, -1);
	return s;
}

static void check_GameOverlayActivated_t_array(lua_State* L, int index, GameOverlayActivated_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GameOverlayActivated_t(L, -1);
	}
}
static GameServerChangeRequested_t check_GameServerChangeRequested_t(lua_State* L, int index) {
	GameServerChangeRequested_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_rgchServer");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchServer, 64);
	lua_pushstring(L, "m_rgchPassword");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchPassword, 64);
	return s;
}

static void check_GameServerChangeRequested_t_array(lua_State* L, int index, GameServerChangeRequested_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GameServerChangeRequested_t(L, -1);
	}
}
static GameLobbyJoinRequested_t check_GameLobbyJoinRequested_t(lua_State* L, int index) {
	GameLobbyJoinRequested_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDLobby");
	lua_gettable(L, index);
	s.m_steamIDLobby = check_CSteamID(L, -1);
	lua_pushstring(L, "m_steamIDFriend");
	lua_gettable(L, index);
	s.m_steamIDFriend = check_CSteamID(L, -1);
	return s;
}

static void check_GameLobbyJoinRequested_t_array(lua_State* L, int index, GameLobbyJoinRequested_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GameLobbyJoinRequested_t(L, -1);
	}
}
static AvatarImageLoaded_t check_AvatarImageLoaded_t(lua_State* L, int index) {
	AvatarImageLoaded_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamID");
	lua_gettable(L, index);
	s.m_steamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_iImage");
	lua_gettable(L, index);
	s.m_iImage = check_int(L, -1);
	lua_pushstring(L, "m_iWide");
	lua_gettable(L, index);
	s.m_iWide = check_int(L, -1);
	lua_pushstring(L, "m_iTall");
	lua_gettable(L, index);
	s.m_iTall = check_int(L, -1);
	return s;
}

static void check_AvatarImageLoaded_t_array(lua_State* L, int index, AvatarImageLoaded_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_AvatarImageLoaded_t(L, -1);
	}
}
static ClanOfficerListResponse_t check_ClanOfficerListResponse_t(lua_State* L, int index) {
	ClanOfficerListResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDClan");
	lua_gettable(L, index);
	s.m_steamIDClan = check_CSteamID(L, -1);
	lua_pushstring(L, "m_cOfficers");
	lua_gettable(L, index);
	s.m_cOfficers = check_int(L, -1);
	lua_pushstring(L, "m_bSuccess");
	lua_gettable(L, index);
	s.m_bSuccess = check_uint8(L, -1);
	return s;
}

static void check_ClanOfficerListResponse_t_array(lua_State* L, int index, ClanOfficerListResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ClanOfficerListResponse_t(L, -1);
	}
}
static FriendRichPresenceUpdate_t check_FriendRichPresenceUpdate_t(lua_State* L, int index) {
	FriendRichPresenceUpdate_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDFriend");
	lua_gettable(L, index);
	s.m_steamIDFriend = check_CSteamID(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static void check_FriendRichPresenceUpdate_t_array(lua_State* L, int index, FriendRichPresenceUpdate_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_FriendRichPresenceUpdate_t(L, -1);
	}
}
static GameRichPresenceJoinRequested_t check_GameRichPresenceJoinRequested_t(lua_State* L, int index) {
	GameRichPresenceJoinRequested_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDFriend");
	lua_gettable(L, index);
	s.m_steamIDFriend = check_CSteamID(L, -1);
	lua_pushstring(L, "m_rgchConnect");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchConnect, 256);
	return s;
}

static void check_GameRichPresenceJoinRequested_t_array(lua_State* L, int index, GameRichPresenceJoinRequested_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GameRichPresenceJoinRequested_t(L, -1);
	}
}
static GameConnectedClanChatMsg_t check_GameConnectedClanChatMsg_t(lua_State* L, int index) {
	GameConnectedClanChatMsg_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDClanChat");
	lua_gettable(L, index);
	s.m_steamIDClanChat = check_CSteamID(L, -1);
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	lua_pushstring(L, "m_iMessageID");
	lua_gettable(L, index);
	s.m_iMessageID = check_int(L, -1);
	return s;
}

static void check_GameConnectedClanChatMsg_t_array(lua_State* L, int index, GameConnectedClanChatMsg_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GameConnectedClanChatMsg_t(L, -1);
	}
}
static GameConnectedChatJoin_t check_GameConnectedChatJoin_t(lua_State* L, int index) {
	GameConnectedChatJoin_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDClanChat");
	lua_gettable(L, index);
	s.m_steamIDClanChat = check_CSteamID(L, -1);
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static void check_GameConnectedChatJoin_t_array(lua_State* L, int index, GameConnectedChatJoin_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GameConnectedChatJoin_t(L, -1);
	}
}
static GameConnectedChatLeave_t check_GameConnectedChatLeave_t(lua_State* L, int index) {
	GameConnectedChatLeave_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDClanChat");
	lua_gettable(L, index);
	s.m_steamIDClanChat = check_CSteamID(L, -1);
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	lua_pushstring(L, "m_bKicked");
	lua_gettable(L, index);
	s.m_bKicked = check_bool(L, -1);
	lua_pushstring(L, "m_bDropped");
	lua_gettable(L, index);
	s.m_bDropped = check_bool(L, -1);
	return s;
}

static void check_GameConnectedChatLeave_t_array(lua_State* L, int index, GameConnectedChatLeave_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GameConnectedChatLeave_t(L, -1);
	}
}
static DownloadClanActivityCountsResult_t check_DownloadClanActivityCountsResult_t(lua_State* L, int index) {
	DownloadClanActivityCountsResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bSuccess");
	lua_gettable(L, index);
	s.m_bSuccess = check_bool(L, -1);
	return s;
}

static void check_DownloadClanActivityCountsResult_t_array(lua_State* L, int index, DownloadClanActivityCountsResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_DownloadClanActivityCountsResult_t(L, -1);
	}
}
static JoinClanChatRoomCompletionResult_t check_JoinClanChatRoomCompletionResult_t(lua_State* L, int index) {
	JoinClanChatRoomCompletionResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDClanChat");
	lua_gettable(L, index);
	s.m_steamIDClanChat = check_CSteamID(L, -1);
	lua_pushstring(L, "m_eChatRoomEnterResponse");
	lua_gettable(L, index);
	s.m_eChatRoomEnterResponse = check_EChatRoomEnterResponse(L, -1);
	return s;
}

static void check_JoinClanChatRoomCompletionResult_t_array(lua_State* L, int index, JoinClanChatRoomCompletionResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_JoinClanChatRoomCompletionResult_t(L, -1);
	}
}
static GameConnectedFriendChatMsg_t check_GameConnectedFriendChatMsg_t(lua_State* L, int index) {
	GameConnectedFriendChatMsg_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	lua_pushstring(L, "m_iMessageID");
	lua_gettable(L, index);
	s.m_iMessageID = check_int(L, -1);
	return s;
}

static void check_GameConnectedFriendChatMsg_t_array(lua_State* L, int index, GameConnectedFriendChatMsg_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GameConnectedFriendChatMsg_t(L, -1);
	}
}
static FriendsGetFollowerCount_t check_FriendsGetFollowerCount_t(lua_State* L, int index) {
	FriendsGetFollowerCount_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_steamID");
	lua_gettable(L, index);
	s.m_steamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_nCount");
	lua_gettable(L, index);
	s.m_nCount = check_int(L, -1);
	return s;
}

static void check_FriendsGetFollowerCount_t_array(lua_State* L, int index, FriendsGetFollowerCount_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_FriendsGetFollowerCount_t(L, -1);
	}
}
static FriendsIsFollowing_t check_FriendsIsFollowing_t(lua_State* L, int index) {
	FriendsIsFollowing_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_steamID");
	lua_gettable(L, index);
	s.m_steamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_bIsFollowing");
	lua_gettable(L, index);
	s.m_bIsFollowing = check_bool(L, -1);
	return s;
}

static void check_FriendsIsFollowing_t_array(lua_State* L, int index, FriendsIsFollowing_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_FriendsIsFollowing_t(L, -1);
	}
}
static FriendsEnumerateFollowingList_t check_FriendsEnumerateFollowingList_t(lua_State* L, int index) {
	FriendsEnumerateFollowingList_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_rgSteamID");
	lua_gettable(L, index);
	check_CSteamID_array(L, -1, s.m_rgSteamID, 50);
	lua_pushstring(L, "m_nResultsReturned");
	lua_gettable(L, index);
	s.m_nResultsReturned = check_int32(L, -1);
	lua_pushstring(L, "m_nTotalResultCount");
	lua_gettable(L, index);
	s.m_nTotalResultCount = check_int32(L, -1);
	return s;
}

static void check_FriendsEnumerateFollowingList_t_array(lua_State* L, int index, FriendsEnumerateFollowingList_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_FriendsEnumerateFollowingList_t(L, -1);
	}
}
static SetPersonaNameResponse_t check_SetPersonaNameResponse_t(lua_State* L, int index) {
	SetPersonaNameResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bSuccess");
	lua_gettable(L, index);
	s.m_bSuccess = check_bool(L, -1);
	lua_pushstring(L, "m_bLocalSuccess");
	lua_gettable(L, index);
	s.m_bLocalSuccess = check_bool(L, -1);
	lua_pushstring(L, "m_result");
	lua_gettable(L, index);
	s.m_result = check_EResult(L, -1);
	return s;
}

static void check_SetPersonaNameResponse_t_array(lua_State* L, int index, SetPersonaNameResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SetPersonaNameResponse_t(L, -1);
	}
}
static UnreadChatMessagesChanged_t check_UnreadChatMessagesChanged_t(lua_State* L, int index) {
	UnreadChatMessagesChanged_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_UnreadChatMessagesChanged_t_array(lua_State* L, int index, UnreadChatMessagesChanged_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_UnreadChatMessagesChanged_t(L, -1);
	}
}
static OverlayBrowserProtocolNavigation_t check_OverlayBrowserProtocolNavigation_t(lua_State* L, int index) {
	OverlayBrowserProtocolNavigation_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "rgchURI");
	lua_gettable(L, index);
	check_char_array(L, -1, s.rgchURI, 1024);
	return s;
}

static void check_OverlayBrowserProtocolNavigation_t_array(lua_State* L, int index, OverlayBrowserProtocolNavigation_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_OverlayBrowserProtocolNavigation_t(L, -1);
	}
}
static EquippedProfileItemsChanged_t check_EquippedProfileItemsChanged_t(lua_State* L, int index) {
	EquippedProfileItemsChanged_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamID");
	lua_gettable(L, index);
	s.m_steamID = check_CSteamID(L, -1);
	return s;
}

static void check_EquippedProfileItemsChanged_t_array(lua_State* L, int index, EquippedProfileItemsChanged_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_EquippedProfileItemsChanged_t(L, -1);
	}
}
static EquippedProfileItems_t check_EquippedProfileItems_t(lua_State* L, int index) {
	EquippedProfileItems_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_steamID");
	lua_gettable(L, index);
	s.m_steamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_bHasAnimatedAvatar");
	lua_gettable(L, index);
	s.m_bHasAnimatedAvatar = check_bool(L, -1);
	lua_pushstring(L, "m_bHasAvatarFrame");
	lua_gettable(L, index);
	s.m_bHasAvatarFrame = check_bool(L, -1);
	lua_pushstring(L, "m_bHasProfileModifier");
	lua_gettable(L, index);
	s.m_bHasProfileModifier = check_bool(L, -1);
	lua_pushstring(L, "m_bHasProfileBackground");
	lua_gettable(L, index);
	s.m_bHasProfileBackground = check_bool(L, -1);
	lua_pushstring(L, "m_bHasMiniProfileBackground");
	lua_gettable(L, index);
	s.m_bHasMiniProfileBackground = check_bool(L, -1);
	return s;
}

static void check_EquippedProfileItems_t_array(lua_State* L, int index, EquippedProfileItems_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_EquippedProfileItems_t(L, -1);
	}
}
static IPCountry_t check_IPCountry_t(lua_State* L, int index) {
	IPCountry_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_IPCountry_t_array(lua_State* L, int index, IPCountry_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_IPCountry_t(L, -1);
	}
}
static LowBatteryPower_t check_LowBatteryPower_t(lua_State* L, int index) {
	LowBatteryPower_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nMinutesBatteryLeft");
	lua_gettable(L, index);
	s.m_nMinutesBatteryLeft = check_uint8(L, -1);
	return s;
}

static void check_LowBatteryPower_t_array(lua_State* L, int index, LowBatteryPower_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LowBatteryPower_t(L, -1);
	}
}
static SteamAPICallCompleted_t check_SteamAPICallCompleted_t(lua_State* L, int index) {
	SteamAPICallCompleted_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hAsyncCall");
	lua_gettable(L, index);
	s.m_hAsyncCall = check_SteamAPICall_t(L, -1);
	lua_pushstring(L, "m_iCallback");
	lua_gettable(L, index);
	s.m_iCallback = check_int(L, -1);
	lua_pushstring(L, "m_cubParam");
	lua_gettable(L, index);
	s.m_cubParam = check_uint32(L, -1);
	return s;
}

static void check_SteamAPICallCompleted_t_array(lua_State* L, int index, SteamAPICallCompleted_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamAPICallCompleted_t(L, -1);
	}
}
static SteamShutdown_t check_SteamShutdown_t(lua_State* L, int index) {
	SteamShutdown_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_SteamShutdown_t_array(lua_State* L, int index, SteamShutdown_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamShutdown_t(L, -1);
	}
}
static CheckFileSignature_t check_CheckFileSignature_t(lua_State* L, int index) {
	CheckFileSignature_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eCheckFileSignature");
	lua_gettable(L, index);
	s.m_eCheckFileSignature = check_ECheckFileSignature(L, -1);
	return s;
}

static void check_CheckFileSignature_t_array(lua_State* L, int index, CheckFileSignature_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_CheckFileSignature_t(L, -1);
	}
}
static GamepadTextInputDismissed_t check_GamepadTextInputDismissed_t(lua_State* L, int index) {
	GamepadTextInputDismissed_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bSubmitted");
	lua_gettable(L, index);
	s.m_bSubmitted = check_bool(L, -1);
	lua_pushstring(L, "m_unSubmittedText");
	lua_gettable(L, index);
	s.m_unSubmittedText = check_uint32(L, -1);
	return s;
}

static void check_GamepadTextInputDismissed_t_array(lua_State* L, int index, GamepadTextInputDismissed_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GamepadTextInputDismissed_t(L, -1);
	}
}
static AppResumingFromSuspend_t check_AppResumingFromSuspend_t(lua_State* L, int index) {
	AppResumingFromSuspend_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_AppResumingFromSuspend_t_array(lua_State* L, int index, AppResumingFromSuspend_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_AppResumingFromSuspend_t(L, -1);
	}
}
static FloatingGamepadTextInputDismissed_t check_FloatingGamepadTextInputDismissed_t(lua_State* L, int index) {
	FloatingGamepadTextInputDismissed_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_FloatingGamepadTextInputDismissed_t_array(lua_State* L, int index, FloatingGamepadTextInputDismissed_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_FloatingGamepadTextInputDismissed_t(L, -1);
	}
}
static FavoritesListChanged_t check_FavoritesListChanged_t(lua_State* L, int index) {
	FavoritesListChanged_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nIP");
	lua_gettable(L, index);
	s.m_nIP = check_uint32(L, -1);
	lua_pushstring(L, "m_nQueryPort");
	lua_gettable(L, index);
	s.m_nQueryPort = check_uint32(L, -1);
	lua_pushstring(L, "m_nConnPort");
	lua_gettable(L, index);
	s.m_nConnPort = check_uint32(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_uint32(L, -1);
	lua_pushstring(L, "m_nFlags");
	lua_gettable(L, index);
	s.m_nFlags = check_uint32(L, -1);
	lua_pushstring(L, "m_bAdd");
	lua_gettable(L, index);
	s.m_bAdd = check_bool(L, -1);
	lua_pushstring(L, "m_unAccountId");
	lua_gettable(L, index);
	s.m_unAccountId = check_AccountID_t(L, -1);
	return s;
}

static void check_FavoritesListChanged_t_array(lua_State* L, int index, FavoritesListChanged_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_FavoritesListChanged_t(L, -1);
	}
}
static LobbyInvite_t check_LobbyInvite_t(lua_State* L, int index) {
	LobbyInvite_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulSteamIDUser");
	lua_gettable(L, index);
	s.m_ulSteamIDUser = check_uint64(L, -1);
	lua_pushstring(L, "m_ulSteamIDLobby");
	lua_gettable(L, index);
	s.m_ulSteamIDLobby = check_uint64(L, -1);
	lua_pushstring(L, "m_ulGameID");
	lua_gettable(L, index);
	s.m_ulGameID = check_uint64(L, -1);
	return s;
}

static void check_LobbyInvite_t_array(lua_State* L, int index, LobbyInvite_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LobbyInvite_t(L, -1);
	}
}
static LobbyEnter_t check_LobbyEnter_t(lua_State* L, int index) {
	LobbyEnter_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulSteamIDLobby");
	lua_gettable(L, index);
	s.m_ulSteamIDLobby = check_uint64(L, -1);
	lua_pushstring(L, "m_rgfChatPermissions");
	lua_gettable(L, index);
	s.m_rgfChatPermissions = check_uint32(L, -1);
	lua_pushstring(L, "m_bLocked");
	lua_gettable(L, index);
	s.m_bLocked = check_bool(L, -1);
	lua_pushstring(L, "m_EChatRoomEnterResponse");
	lua_gettable(L, index);
	s.m_EChatRoomEnterResponse = check_uint32(L, -1);
	return s;
}

static void check_LobbyEnter_t_array(lua_State* L, int index, LobbyEnter_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LobbyEnter_t(L, -1);
	}
}
static LobbyDataUpdate_t check_LobbyDataUpdate_t(lua_State* L, int index) {
	LobbyDataUpdate_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulSteamIDLobby");
	lua_gettable(L, index);
	s.m_ulSteamIDLobby = check_uint64(L, -1);
	lua_pushstring(L, "m_ulSteamIDMember");
	lua_gettable(L, index);
	s.m_ulSteamIDMember = check_uint64(L, -1);
	lua_pushstring(L, "m_bSuccess");
	lua_gettable(L, index);
	s.m_bSuccess = check_uint8(L, -1);
	return s;
}

static void check_LobbyDataUpdate_t_array(lua_State* L, int index, LobbyDataUpdate_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LobbyDataUpdate_t(L, -1);
	}
}
static LobbyChatUpdate_t check_LobbyChatUpdate_t(lua_State* L, int index) {
	LobbyChatUpdate_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulSteamIDLobby");
	lua_gettable(L, index);
	s.m_ulSteamIDLobby = check_uint64(L, -1);
	lua_pushstring(L, "m_ulSteamIDUserChanged");
	lua_gettable(L, index);
	s.m_ulSteamIDUserChanged = check_uint64(L, -1);
	lua_pushstring(L, "m_ulSteamIDMakingChange");
	lua_gettable(L, index);
	s.m_ulSteamIDMakingChange = check_uint64(L, -1);
	lua_pushstring(L, "m_rgfChatMemberStateChange");
	lua_gettable(L, index);
	s.m_rgfChatMemberStateChange = check_uint32(L, -1);
	return s;
}

static void check_LobbyChatUpdate_t_array(lua_State* L, int index, LobbyChatUpdate_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LobbyChatUpdate_t(L, -1);
	}
}
static LobbyChatMsg_t check_LobbyChatMsg_t(lua_State* L, int index) {
	LobbyChatMsg_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulSteamIDLobby");
	lua_gettable(L, index);
	s.m_ulSteamIDLobby = check_uint64(L, -1);
	lua_pushstring(L, "m_ulSteamIDUser");
	lua_gettable(L, index);
	s.m_ulSteamIDUser = check_uint64(L, -1);
	lua_pushstring(L, "m_eChatEntryType");
	lua_gettable(L, index);
	s.m_eChatEntryType = check_uint8(L, -1);
	lua_pushstring(L, "m_iChatID");
	lua_gettable(L, index);
	s.m_iChatID = check_uint32(L, -1);
	return s;
}

static void check_LobbyChatMsg_t_array(lua_State* L, int index, LobbyChatMsg_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LobbyChatMsg_t(L, -1);
	}
}
static LobbyGameCreated_t check_LobbyGameCreated_t(lua_State* L, int index) {
	LobbyGameCreated_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulSteamIDLobby");
	lua_gettable(L, index);
	s.m_ulSteamIDLobby = check_uint64(L, -1);
	lua_pushstring(L, "m_ulSteamIDGameServer");
	lua_gettable(L, index);
	s.m_ulSteamIDGameServer = check_uint64(L, -1);
	lua_pushstring(L, "m_unIP");
	lua_gettable(L, index);
	s.m_unIP = check_uint32(L, -1);
	lua_pushstring(L, "m_usPort");
	lua_gettable(L, index);
	s.m_usPort = check_uint16(L, -1);
	return s;
}

static void check_LobbyGameCreated_t_array(lua_State* L, int index, LobbyGameCreated_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LobbyGameCreated_t(L, -1);
	}
}
static LobbyMatchList_t check_LobbyMatchList_t(lua_State* L, int index) {
	LobbyMatchList_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nLobbiesMatching");
	lua_gettable(L, index);
	s.m_nLobbiesMatching = check_uint32(L, -1);
	return s;
}

static void check_LobbyMatchList_t_array(lua_State* L, int index, LobbyMatchList_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LobbyMatchList_t(L, -1);
	}
}
static LobbyKicked_t check_LobbyKicked_t(lua_State* L, int index) {
	LobbyKicked_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulSteamIDLobby");
	lua_gettable(L, index);
	s.m_ulSteamIDLobby = check_uint64(L, -1);
	lua_pushstring(L, "m_ulSteamIDAdmin");
	lua_gettable(L, index);
	s.m_ulSteamIDAdmin = check_uint64(L, -1);
	lua_pushstring(L, "m_bKickedDueToDisconnect");
	lua_gettable(L, index);
	s.m_bKickedDueToDisconnect = check_uint8(L, -1);
	return s;
}

static void check_LobbyKicked_t_array(lua_State* L, int index, LobbyKicked_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LobbyKicked_t(L, -1);
	}
}
static LobbyCreated_t check_LobbyCreated_t(lua_State* L, int index) {
	LobbyCreated_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_ulSteamIDLobby");
	lua_gettable(L, index);
	s.m_ulSteamIDLobby = check_uint64(L, -1);
	return s;
}

static void check_LobbyCreated_t_array(lua_State* L, int index, LobbyCreated_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LobbyCreated_t(L, -1);
	}
}
static PSNGameBootInviteResult_t check_PSNGameBootInviteResult_t(lua_State* L, int index) {
	PSNGameBootInviteResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bGameBootInviteExists");
	lua_gettable(L, index);
	s.m_bGameBootInviteExists = check_bool(L, -1);
	lua_pushstring(L, "m_steamIDLobby");
	lua_gettable(L, index);
	s.m_steamIDLobby = check_CSteamID(L, -1);
	return s;
}

static void check_PSNGameBootInviteResult_t_array(lua_State* L, int index, PSNGameBootInviteResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_PSNGameBootInviteResult_t(L, -1);
	}
}
static FavoritesListAccountsUpdated_t check_FavoritesListAccountsUpdated_t(lua_State* L, int index) {
	FavoritesListAccountsUpdated_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_FavoritesListAccountsUpdated_t_array(lua_State* L, int index, FavoritesListAccountsUpdated_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_FavoritesListAccountsUpdated_t(L, -1);
	}
}
static SearchForGameProgressCallback_t check_SearchForGameProgressCallback_t(lua_State* L, int index) {
	SearchForGameProgressCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ullSearchID");
	lua_gettable(L, index);
	s.m_ullSearchID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_lobbyID");
	lua_gettable(L, index);
	s.m_lobbyID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_steamIDEndedSearch");
	lua_gettable(L, index);
	s.m_steamIDEndedSearch = check_CSteamID(L, -1);
	lua_pushstring(L, "m_nSecondsRemainingEstimate");
	lua_gettable(L, index);
	s.m_nSecondsRemainingEstimate = check_int32(L, -1);
	lua_pushstring(L, "m_cPlayersSearching");
	lua_gettable(L, index);
	s.m_cPlayersSearching = check_int32(L, -1);
	return s;
}

static void check_SearchForGameProgressCallback_t_array(lua_State* L, int index, SearchForGameProgressCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SearchForGameProgressCallback_t(L, -1);
	}
}
static SearchForGameResultCallback_t check_SearchForGameResultCallback_t(lua_State* L, int index) {
	SearchForGameResultCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ullSearchID");
	lua_gettable(L, index);
	s.m_ullSearchID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nCountPlayersInGame");
	lua_gettable(L, index);
	s.m_nCountPlayersInGame = check_int32(L, -1);
	lua_pushstring(L, "m_nCountAcceptedGame");
	lua_gettable(L, index);
	s.m_nCountAcceptedGame = check_int32(L, -1);
	lua_pushstring(L, "m_steamIDHost");
	lua_gettable(L, index);
	s.m_steamIDHost = check_CSteamID(L, -1);
	lua_pushstring(L, "m_bFinalCallback");
	lua_gettable(L, index);
	s.m_bFinalCallback = check_bool(L, -1);
	return s;
}

static void check_SearchForGameResultCallback_t_array(lua_State* L, int index, SearchForGameResultCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SearchForGameResultCallback_t(L, -1);
	}
}
static RequestPlayersForGameProgressCallback_t check_RequestPlayersForGameProgressCallback_t(lua_State* L, int index) {
	RequestPlayersForGameProgressCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_ullSearchID");
	lua_gettable(L, index);
	s.m_ullSearchID = check_uint64(L, -1);
	return s;
}

static void check_RequestPlayersForGameProgressCallback_t_array(lua_State* L, int index, RequestPlayersForGameProgressCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RequestPlayersForGameProgressCallback_t(L, -1);
	}
}
static RequestPlayersForGameResultCallback_t check_RequestPlayersForGameResultCallback_t(lua_State* L, int index) {
	RequestPlayersForGameResultCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_ullSearchID");
	lua_gettable(L, index);
	s.m_ullSearchID = check_uint64(L, -1);
	lua_pushstring(L, "m_SteamIDPlayerFound");
	lua_gettable(L, index);
	s.m_SteamIDPlayerFound = check_CSteamID(L, -1);
	lua_pushstring(L, "m_SteamIDLobby");
	lua_gettable(L, index);
	s.m_SteamIDLobby = check_CSteamID(L, -1);
	lua_pushstring(L, "m_ePlayerAcceptState");
	lua_gettable(L, index);
	s.m_ePlayerAcceptState = check_PlayerAcceptState_t(L, -1);
	lua_pushstring(L, "m_nPlayerIndex");
	lua_gettable(L, index);
	s.m_nPlayerIndex = check_int32(L, -1);
	lua_pushstring(L, "m_nTotalPlayersFound");
	lua_gettable(L, index);
	s.m_nTotalPlayersFound = check_int32(L, -1);
	lua_pushstring(L, "m_nTotalPlayersAcceptedGame");
	lua_gettable(L, index);
	s.m_nTotalPlayersAcceptedGame = check_int32(L, -1);
	lua_pushstring(L, "m_nSuggestedTeamIndex");
	lua_gettable(L, index);
	s.m_nSuggestedTeamIndex = check_int32(L, -1);
	lua_pushstring(L, "m_ullUniqueGameID");
	lua_gettable(L, index);
	s.m_ullUniqueGameID = check_uint64(L, -1);
	return s;
}

static void check_RequestPlayersForGameResultCallback_t_array(lua_State* L, int index, RequestPlayersForGameResultCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RequestPlayersForGameResultCallback_t(L, -1);
	}
}
static RequestPlayersForGameFinalResultCallback_t check_RequestPlayersForGameFinalResultCallback_t(lua_State* L, int index) {
	RequestPlayersForGameFinalResultCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_ullSearchID");
	lua_gettable(L, index);
	s.m_ullSearchID = check_uint64(L, -1);
	lua_pushstring(L, "m_ullUniqueGameID");
	lua_gettable(L, index);
	s.m_ullUniqueGameID = check_uint64(L, -1);
	return s;
}

static void check_RequestPlayersForGameFinalResultCallback_t_array(lua_State* L, int index, RequestPlayersForGameFinalResultCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RequestPlayersForGameFinalResultCallback_t(L, -1);
	}
}
static SubmitPlayerResultResultCallback_t check_SubmitPlayerResultResultCallback_t(lua_State* L, int index) {
	SubmitPlayerResultResultCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "ullUniqueGameID");
	lua_gettable(L, index);
	s.ullUniqueGameID = check_uint64(L, -1);
	lua_pushstring(L, "steamIDPlayer");
	lua_gettable(L, index);
	s.steamIDPlayer = check_CSteamID(L, -1);
	return s;
}

static void check_SubmitPlayerResultResultCallback_t_array(lua_State* L, int index, SubmitPlayerResultResultCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SubmitPlayerResultResultCallback_t(L, -1);
	}
}
static EndGameResultCallback_t check_EndGameResultCallback_t(lua_State* L, int index) {
	EndGameResultCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "ullUniqueGameID");
	lua_gettable(L, index);
	s.ullUniqueGameID = check_uint64(L, -1);
	return s;
}

static void check_EndGameResultCallback_t_array(lua_State* L, int index, EndGameResultCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_EndGameResultCallback_t(L, -1);
	}
}
static JoinPartyCallback_t check_JoinPartyCallback_t(lua_State* L, int index) {
	JoinPartyCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_ulBeaconID");
	lua_gettable(L, index);
	s.m_ulBeaconID = check_PartyBeaconID_t(L, -1);
	lua_pushstring(L, "m_SteamIDBeaconOwner");
	lua_gettable(L, index);
	s.m_SteamIDBeaconOwner = check_CSteamID(L, -1);
	lua_pushstring(L, "m_rgchConnectString");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchConnectString, 256);
	return s;
}

static void check_JoinPartyCallback_t_array(lua_State* L, int index, JoinPartyCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_JoinPartyCallback_t(L, -1);
	}
}
static CreateBeaconCallback_t check_CreateBeaconCallback_t(lua_State* L, int index) {
	CreateBeaconCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_ulBeaconID");
	lua_gettable(L, index);
	s.m_ulBeaconID = check_PartyBeaconID_t(L, -1);
	return s;
}

static void check_CreateBeaconCallback_t_array(lua_State* L, int index, CreateBeaconCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_CreateBeaconCallback_t(L, -1);
	}
}
static ReservationNotificationCallback_t check_ReservationNotificationCallback_t(lua_State* L, int index) {
	ReservationNotificationCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulBeaconID");
	lua_gettable(L, index);
	s.m_ulBeaconID = check_PartyBeaconID_t(L, -1);
	lua_pushstring(L, "m_steamIDJoiner");
	lua_gettable(L, index);
	s.m_steamIDJoiner = check_CSteamID(L, -1);
	return s;
}

static void check_ReservationNotificationCallback_t_array(lua_State* L, int index, ReservationNotificationCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ReservationNotificationCallback_t(L, -1);
	}
}
static ChangeNumOpenSlotsCallback_t check_ChangeNumOpenSlotsCallback_t(lua_State* L, int index) {
	ChangeNumOpenSlotsCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_ChangeNumOpenSlotsCallback_t_array(lua_State* L, int index, ChangeNumOpenSlotsCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ChangeNumOpenSlotsCallback_t(L, -1);
	}
}
static AvailableBeaconLocationsUpdated_t check_AvailableBeaconLocationsUpdated_t(lua_State* L, int index) {
	AvailableBeaconLocationsUpdated_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_AvailableBeaconLocationsUpdated_t_array(lua_State* L, int index, AvailableBeaconLocationsUpdated_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_AvailableBeaconLocationsUpdated_t(L, -1);
	}
}
static ActiveBeaconsUpdated_t check_ActiveBeaconsUpdated_t(lua_State* L, int index) {
	ActiveBeaconsUpdated_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_ActiveBeaconsUpdated_t_array(lua_State* L, int index, ActiveBeaconsUpdated_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ActiveBeaconsUpdated_t(L, -1);
	}
}
static RemoteStorageFileShareResult_t check_RemoteStorageFileShareResult_t(lua_State* L, int index) {
	RemoteStorageFileShareResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_hFile");
	lua_gettable(L, index);
	s.m_hFile = check_UGCHandle_t(L, -1);
	lua_pushstring(L, "m_rgchFilename");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchFilename, 260);
	return s;
}

static void check_RemoteStorageFileShareResult_t_array(lua_State* L, int index, RemoteStorageFileShareResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageFileShareResult_t(L, -1);
	}
}
static RemoteStoragePublishFileResult_t check_RemoteStoragePublishFileResult_t(lua_State* L, int index) {
	RemoteStoragePublishFileResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
	lua_gettable(L, index);
	s.m_bUserNeedsToAcceptWorkshopLegalAgreement = check_bool(L, -1);
	return s;
}

static void check_RemoteStoragePublishFileResult_t_array(lua_State* L, int index, RemoteStoragePublishFileResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStoragePublishFileResult_t(L, -1);
	}
}
static RemoteStorageDeletePublishedFileResult_t check_RemoteStorageDeletePublishedFileResult_t(lua_State* L, int index) {
	RemoteStorageDeletePublishedFileResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static void check_RemoteStorageDeletePublishedFileResult_t_array(lua_State* L, int index, RemoteStorageDeletePublishedFileResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageDeletePublishedFileResult_t(L, -1);
	}
}
static RemoteStorageEnumerateUserPublishedFilesResult_t check_RemoteStorageEnumerateUserPublishedFilesResult_t(lua_State* L, int index) {
	RemoteStorageEnumerateUserPublishedFilesResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nResultsReturned");
	lua_gettable(L, index);
	s.m_nResultsReturned = check_int32(L, -1);
	lua_pushstring(L, "m_nTotalResultCount");
	lua_gettable(L, index);
	s.m_nTotalResultCount = check_int32(L, -1);
	lua_pushstring(L, "m_rgPublishedFileId");
	lua_gettable(L, index);
	check_PublishedFileId_t_array(L, -1, s.m_rgPublishedFileId, 50);
	return s;
}

static void check_RemoteStorageEnumerateUserPublishedFilesResult_t_array(lua_State* L, int index, RemoteStorageEnumerateUserPublishedFilesResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageEnumerateUserPublishedFilesResult_t(L, -1);
	}
}
static RemoteStorageSubscribePublishedFileResult_t check_RemoteStorageSubscribePublishedFileResult_t(lua_State* L, int index) {
	RemoteStorageSubscribePublishedFileResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static void check_RemoteStorageSubscribePublishedFileResult_t_array(lua_State* L, int index, RemoteStorageSubscribePublishedFileResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageSubscribePublishedFileResult_t(L, -1);
	}
}
static RemoteStorageEnumerateUserSubscribedFilesResult_t check_RemoteStorageEnumerateUserSubscribedFilesResult_t(lua_State* L, int index) {
	RemoteStorageEnumerateUserSubscribedFilesResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nResultsReturned");
	lua_gettable(L, index);
	s.m_nResultsReturned = check_int32(L, -1);
	lua_pushstring(L, "m_nTotalResultCount");
	lua_gettable(L, index);
	s.m_nTotalResultCount = check_int32(L, -1);
	lua_pushstring(L, "m_rgPublishedFileId");
	lua_gettable(L, index);
	check_PublishedFileId_t_array(L, -1, s.m_rgPublishedFileId, 50);
	lua_pushstring(L, "m_rgRTimeSubscribed");
	lua_gettable(L, index);
	check_uint32_array(L, -1, s.m_rgRTimeSubscribed, 50);
	return s;
}

static void check_RemoteStorageEnumerateUserSubscribedFilesResult_t_array(lua_State* L, int index, RemoteStorageEnumerateUserSubscribedFilesResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageEnumerateUserSubscribedFilesResult_t(L, -1);
	}
}
static RemoteStorageUnsubscribePublishedFileResult_t check_RemoteStorageUnsubscribePublishedFileResult_t(lua_State* L, int index) {
	RemoteStorageUnsubscribePublishedFileResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static void check_RemoteStorageUnsubscribePublishedFileResult_t_array(lua_State* L, int index, RemoteStorageUnsubscribePublishedFileResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageUnsubscribePublishedFileResult_t(L, -1);
	}
}
static RemoteStorageUpdatePublishedFileResult_t check_RemoteStorageUpdatePublishedFileResult_t(lua_State* L, int index) {
	RemoteStorageUpdatePublishedFileResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
	lua_gettable(L, index);
	s.m_bUserNeedsToAcceptWorkshopLegalAgreement = check_bool(L, -1);
	return s;
}

static void check_RemoteStorageUpdatePublishedFileResult_t_array(lua_State* L, int index, RemoteStorageUpdatePublishedFileResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageUpdatePublishedFileResult_t(L, -1);
	}
}
static RemoteStorageDownloadUGCResult_t check_RemoteStorageDownloadUGCResult_t(lua_State* L, int index) {
	RemoteStorageDownloadUGCResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_hFile");
	lua_gettable(L, index);
	s.m_hFile = check_UGCHandle_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_nSizeInBytes");
	lua_gettable(L, index);
	s.m_nSizeInBytes = check_int32(L, -1);
	lua_pushstring(L, "m_pchFileName");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_pchFileName, 260);
	lua_pushstring(L, "m_ulSteamIDOwner");
	lua_gettable(L, index);
	s.m_ulSteamIDOwner = check_uint64(L, -1);
	return s;
}

static void check_RemoteStorageDownloadUGCResult_t_array(lua_State* L, int index, RemoteStorageDownloadUGCResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageDownloadUGCResult_t(L, -1);
	}
}
static RemoteStorageGetPublishedFileDetailsResult_t check_RemoteStorageGetPublishedFileDetailsResult_t(lua_State* L, int index) {
	RemoteStorageGetPublishedFileDetailsResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nCreatorAppID");
	lua_gettable(L, index);
	s.m_nCreatorAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_nConsumerAppID");
	lua_gettable(L, index);
	s.m_nConsumerAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_rgchTitle");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchTitle, 129);
	lua_pushstring(L, "m_rgchDescription");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchDescription, 8000);
	lua_pushstring(L, "m_hFile");
	lua_gettable(L, index);
	s.m_hFile = check_UGCHandle_t(L, -1);
	lua_pushstring(L, "m_hPreviewFile");
	lua_gettable(L, index);
	s.m_hPreviewFile = check_UGCHandle_t(L, -1);
	lua_pushstring(L, "m_ulSteamIDOwner");
	lua_gettable(L, index);
	s.m_ulSteamIDOwner = check_uint64(L, -1);
	lua_pushstring(L, "m_rtimeCreated");
	lua_gettable(L, index);
	s.m_rtimeCreated = check_uint32(L, -1);
	lua_pushstring(L, "m_rtimeUpdated");
	lua_gettable(L, index);
	s.m_rtimeUpdated = check_uint32(L, -1);
	lua_pushstring(L, "m_eVisibility");
	lua_gettable(L, index);
	s.m_eVisibility = check_ERemoteStoragePublishedFileVisibility(L, -1);
	lua_pushstring(L, "m_bBanned");
	lua_gettable(L, index);
	s.m_bBanned = check_bool(L, -1);
	lua_pushstring(L, "m_rgchTags");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchTags, 1025);
	lua_pushstring(L, "m_bTagsTruncated");
	lua_gettable(L, index);
	s.m_bTagsTruncated = check_bool(L, -1);
	lua_pushstring(L, "m_pchFileName");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_pchFileName, 260);
	lua_pushstring(L, "m_nFileSize");
	lua_gettable(L, index);
	s.m_nFileSize = check_int32(L, -1);
	lua_pushstring(L, "m_nPreviewFileSize");
	lua_gettable(L, index);
	s.m_nPreviewFileSize = check_int32(L, -1);
	lua_pushstring(L, "m_rgchURL");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchURL, 256);
	lua_pushstring(L, "m_eFileType");
	lua_gettable(L, index);
	s.m_eFileType = check_EWorkshopFileType(L, -1);
	lua_pushstring(L, "m_bAcceptedForUse");
	lua_gettable(L, index);
	s.m_bAcceptedForUse = check_bool(L, -1);
	return s;
}

static void check_RemoteStorageGetPublishedFileDetailsResult_t_array(lua_State* L, int index, RemoteStorageGetPublishedFileDetailsResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageGetPublishedFileDetailsResult_t(L, -1);
	}
}
static RemoteStorageEnumerateWorkshopFilesResult_t check_RemoteStorageEnumerateWorkshopFilesResult_t(lua_State* L, int index) {
	RemoteStorageEnumerateWorkshopFilesResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nResultsReturned");
	lua_gettable(L, index);
	s.m_nResultsReturned = check_int32(L, -1);
	lua_pushstring(L, "m_nTotalResultCount");
	lua_gettable(L, index);
	s.m_nTotalResultCount = check_int32(L, -1);
	lua_pushstring(L, "m_rgPublishedFileId");
	lua_gettable(L, index);
	check_PublishedFileId_t_array(L, -1, s.m_rgPublishedFileId, 50);
	lua_pushstring(L, "m_rgScore");
	lua_gettable(L, index);
	check_float_array(L, -1, s.m_rgScore, 50);
	lua_pushstring(L, "m_nAppId");
	lua_gettable(L, index);
	s.m_nAppId = check_AppId_t(L, -1);
	lua_pushstring(L, "m_unStartIndex");
	lua_gettable(L, index);
	s.m_unStartIndex = check_uint32(L, -1);
	return s;
}

static void check_RemoteStorageEnumerateWorkshopFilesResult_t_array(lua_State* L, int index, RemoteStorageEnumerateWorkshopFilesResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageEnumerateWorkshopFilesResult_t(L, -1);
	}
}
static RemoteStorageGetPublishedItemVoteDetailsResult_t check_RemoteStorageGetPublishedItemVoteDetailsResult_t(lua_State* L, int index) {
	RemoteStorageGetPublishedItemVoteDetailsResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_unPublishedFileId");
	lua_gettable(L, index);
	s.m_unPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nVotesFor");
	lua_gettable(L, index);
	s.m_nVotesFor = check_int32(L, -1);
	lua_pushstring(L, "m_nVotesAgainst");
	lua_gettable(L, index);
	s.m_nVotesAgainst = check_int32(L, -1);
	lua_pushstring(L, "m_nReports");
	lua_gettable(L, index);
	s.m_nReports = check_int32(L, -1);
	lua_pushstring(L, "m_fScore");
	lua_gettable(L, index);
	s.m_fScore = check_float(L, -1);
	return s;
}

static void check_RemoteStorageGetPublishedItemVoteDetailsResult_t_array(lua_State* L, int index, RemoteStorageGetPublishedItemVoteDetailsResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageGetPublishedItemVoteDetailsResult_t(L, -1);
	}
}
static RemoteStoragePublishedFileSubscribed_t check_RemoteStoragePublishedFileSubscribed_t(lua_State* L, int index) {
	RemoteStoragePublishedFileSubscribed_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static void check_RemoteStoragePublishedFileSubscribed_t_array(lua_State* L, int index, RemoteStoragePublishedFileSubscribed_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStoragePublishedFileSubscribed_t(L, -1);
	}
}
static RemoteStoragePublishedFileUnsubscribed_t check_RemoteStoragePublishedFileUnsubscribed_t(lua_State* L, int index) {
	RemoteStoragePublishedFileUnsubscribed_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static void check_RemoteStoragePublishedFileUnsubscribed_t_array(lua_State* L, int index, RemoteStoragePublishedFileUnsubscribed_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStoragePublishedFileUnsubscribed_t(L, -1);
	}
}
static RemoteStoragePublishedFileDeleted_t check_RemoteStoragePublishedFileDeleted_t(lua_State* L, int index) {
	RemoteStoragePublishedFileDeleted_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static void check_RemoteStoragePublishedFileDeleted_t_array(lua_State* L, int index, RemoteStoragePublishedFileDeleted_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStoragePublishedFileDeleted_t(L, -1);
	}
}
static RemoteStorageUpdateUserPublishedItemVoteResult_t check_RemoteStorageUpdateUserPublishedItemVoteResult_t(lua_State* L, int index) {
	RemoteStorageUpdateUserPublishedItemVoteResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static void check_RemoteStorageUpdateUserPublishedItemVoteResult_t_array(lua_State* L, int index, RemoteStorageUpdateUserPublishedItemVoteResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageUpdateUserPublishedItemVoteResult_t(L, -1);
	}
}
static RemoteStorageUserVoteDetails_t check_RemoteStorageUserVoteDetails_t(lua_State* L, int index) {
	RemoteStorageUserVoteDetails_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_eVote");
	lua_gettable(L, index);
	s.m_eVote = check_EWorkshopVote(L, -1);
	return s;
}

static void check_RemoteStorageUserVoteDetails_t_array(lua_State* L, int index, RemoteStorageUserVoteDetails_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageUserVoteDetails_t(L, -1);
	}
}
static RemoteStorageEnumerateUserSharedWorkshopFilesResult_t check_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t(lua_State* L, int index) {
	RemoteStorageEnumerateUserSharedWorkshopFilesResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nResultsReturned");
	lua_gettable(L, index);
	s.m_nResultsReturned = check_int32(L, -1);
	lua_pushstring(L, "m_nTotalResultCount");
	lua_gettable(L, index);
	s.m_nTotalResultCount = check_int32(L, -1);
	lua_pushstring(L, "m_rgPublishedFileId");
	lua_gettable(L, index);
	check_PublishedFileId_t_array(L, -1, s.m_rgPublishedFileId, 50);
	return s;
}

static void check_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_array(lua_State* L, int index, RemoteStorageEnumerateUserSharedWorkshopFilesResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t(L, -1);
	}
}
static RemoteStorageSetUserPublishedFileActionResult_t check_RemoteStorageSetUserPublishedFileActionResult_t(lua_State* L, int index) {
	RemoteStorageSetUserPublishedFileActionResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_eAction");
	lua_gettable(L, index);
	s.m_eAction = check_EWorkshopFileAction(L, -1);
	return s;
}

static void check_RemoteStorageSetUserPublishedFileActionResult_t_array(lua_State* L, int index, RemoteStorageSetUserPublishedFileActionResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageSetUserPublishedFileActionResult_t(L, -1);
	}
}
static RemoteStorageEnumeratePublishedFilesByUserActionResult_t check_RemoteStorageEnumeratePublishedFilesByUserActionResult_t(lua_State* L, int index) {
	RemoteStorageEnumeratePublishedFilesByUserActionResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_eAction");
	lua_gettable(L, index);
	s.m_eAction = check_EWorkshopFileAction(L, -1);
	lua_pushstring(L, "m_nResultsReturned");
	lua_gettable(L, index);
	s.m_nResultsReturned = check_int32(L, -1);
	lua_pushstring(L, "m_nTotalResultCount");
	lua_gettable(L, index);
	s.m_nTotalResultCount = check_int32(L, -1);
	lua_pushstring(L, "m_rgPublishedFileId");
	lua_gettable(L, index);
	check_PublishedFileId_t_array(L, -1, s.m_rgPublishedFileId, 50);
	lua_pushstring(L, "m_rgRTimeUpdated");
	lua_gettable(L, index);
	check_uint32_array(L, -1, s.m_rgRTimeUpdated, 50);
	return s;
}

static void check_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_array(lua_State* L, int index, RemoteStorageEnumeratePublishedFilesByUserActionResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageEnumeratePublishedFilesByUserActionResult_t(L, -1);
	}
}
static RemoteStoragePublishFileProgress_t check_RemoteStoragePublishFileProgress_t(lua_State* L, int index) {
	RemoteStoragePublishFileProgress_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_dPercentFile");
	lua_gettable(L, index);
	s.m_dPercentFile = check_double(L, -1);
	lua_pushstring(L, "m_bPreview");
	lua_gettable(L, index);
	s.m_bPreview = check_bool(L, -1);
	return s;
}

static void check_RemoteStoragePublishFileProgress_t_array(lua_State* L, int index, RemoteStoragePublishFileProgress_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStoragePublishFileProgress_t(L, -1);
	}
}
static RemoteStoragePublishedFileUpdated_t check_RemoteStoragePublishedFileUpdated_t(lua_State* L, int index) {
	RemoteStoragePublishedFileUpdated_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_ulUnused");
	lua_gettable(L, index);
	s.m_ulUnused = check_uint64(L, -1);
	return s;
}

static void check_RemoteStoragePublishedFileUpdated_t_array(lua_State* L, int index, RemoteStoragePublishedFileUpdated_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStoragePublishedFileUpdated_t(L, -1);
	}
}
static RemoteStorageFileWriteAsyncComplete_t check_RemoteStorageFileWriteAsyncComplete_t(lua_State* L, int index) {
	RemoteStorageFileWriteAsyncComplete_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_RemoteStorageFileWriteAsyncComplete_t_array(lua_State* L, int index, RemoteStorageFileWriteAsyncComplete_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageFileWriteAsyncComplete_t(L, -1);
	}
}
static RemoteStorageFileReadAsyncComplete_t check_RemoteStorageFileReadAsyncComplete_t(lua_State* L, int index) {
	RemoteStorageFileReadAsyncComplete_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hFileReadAsync");
	lua_gettable(L, index);
	s.m_hFileReadAsync = check_SteamAPICall_t(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nOffset");
	lua_gettable(L, index);
	s.m_nOffset = check_uint32(L, -1);
	lua_pushstring(L, "m_cubRead");
	lua_gettable(L, index);
	s.m_cubRead = check_uint32(L, -1);
	return s;
}

static void check_RemoteStorageFileReadAsyncComplete_t_array(lua_State* L, int index, RemoteStorageFileReadAsyncComplete_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageFileReadAsyncComplete_t(L, -1);
	}
}
static RemoteStorageLocalFileChange_t check_RemoteStorageLocalFileChange_t(lua_State* L, int index) {
	RemoteStorageLocalFileChange_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_RemoteStorageLocalFileChange_t_array(lua_State* L, int index, RemoteStorageLocalFileChange_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoteStorageLocalFileChange_t(L, -1);
	}
}
static UserStatsReceived_t check_UserStatsReceived_t(lua_State* L, int index) {
	UserStatsReceived_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static void check_UserStatsReceived_t_array(lua_State* L, int index, UserStatsReceived_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_UserStatsReceived_t(L, -1);
	}
}
static UserStatsStored_t check_UserStatsStored_t(lua_State* L, int index) {
	UserStatsStored_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_UserStatsStored_t_array(lua_State* L, int index, UserStatsStored_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_UserStatsStored_t(L, -1);
	}
}
static UserAchievementStored_t check_UserAchievementStored_t(lua_State* L, int index) {
	UserAchievementStored_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_bGroupAchievement");
	lua_gettable(L, index);
	s.m_bGroupAchievement = check_bool(L, -1);
	lua_pushstring(L, "m_rgchAchievementName");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchAchievementName, 128);
	lua_pushstring(L, "m_nCurProgress");
	lua_gettable(L, index);
	s.m_nCurProgress = check_uint32(L, -1);
	lua_pushstring(L, "m_nMaxProgress");
	lua_gettable(L, index);
	s.m_nMaxProgress = check_uint32(L, -1);
	return s;
}

static void check_UserAchievementStored_t_array(lua_State* L, int index, UserAchievementStored_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_UserAchievementStored_t(L, -1);
	}
}
static LeaderboardFindResult_t check_LeaderboardFindResult_t(lua_State* L, int index) {
	LeaderboardFindResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hSteamLeaderboard");
	lua_gettable(L, index);
	s.m_hSteamLeaderboard = check_SteamLeaderboard_t(L, -1);
	lua_pushstring(L, "m_bLeaderboardFound");
	lua_gettable(L, index);
	s.m_bLeaderboardFound = check_uint8(L, -1);
	return s;
}

static void check_LeaderboardFindResult_t_array(lua_State* L, int index, LeaderboardFindResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LeaderboardFindResult_t(L, -1);
	}
}
static LeaderboardScoresDownloaded_t check_LeaderboardScoresDownloaded_t(lua_State* L, int index) {
	LeaderboardScoresDownloaded_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hSteamLeaderboard");
	lua_gettable(L, index);
	s.m_hSteamLeaderboard = check_SteamLeaderboard_t(L, -1);
	lua_pushstring(L, "m_hSteamLeaderboardEntries");
	lua_gettable(L, index);
	s.m_hSteamLeaderboardEntries = check_SteamLeaderboardEntries_t(L, -1);
	lua_pushstring(L, "m_cEntryCount");
	lua_gettable(L, index);
	s.m_cEntryCount = check_int(L, -1);
	return s;
}

static void check_LeaderboardScoresDownloaded_t_array(lua_State* L, int index, LeaderboardScoresDownloaded_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LeaderboardScoresDownloaded_t(L, -1);
	}
}
static LeaderboardScoreUploaded_t check_LeaderboardScoreUploaded_t(lua_State* L, int index) {
	LeaderboardScoreUploaded_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bSuccess");
	lua_gettable(L, index);
	s.m_bSuccess = check_uint8(L, -1);
	lua_pushstring(L, "m_hSteamLeaderboard");
	lua_gettable(L, index);
	s.m_hSteamLeaderboard = check_SteamLeaderboard_t(L, -1);
	lua_pushstring(L, "m_nScore");
	lua_gettable(L, index);
	s.m_nScore = check_int32(L, -1);
	lua_pushstring(L, "m_bScoreChanged");
	lua_gettable(L, index);
	s.m_bScoreChanged = check_uint8(L, -1);
	lua_pushstring(L, "m_nGlobalRankNew");
	lua_gettable(L, index);
	s.m_nGlobalRankNew = check_int(L, -1);
	lua_pushstring(L, "m_nGlobalRankPrevious");
	lua_gettable(L, index);
	s.m_nGlobalRankPrevious = check_int(L, -1);
	return s;
}

static void check_LeaderboardScoreUploaded_t_array(lua_State* L, int index, LeaderboardScoreUploaded_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LeaderboardScoreUploaded_t(L, -1);
	}
}
static NumberOfCurrentPlayers_t check_NumberOfCurrentPlayers_t(lua_State* L, int index) {
	NumberOfCurrentPlayers_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bSuccess");
	lua_gettable(L, index);
	s.m_bSuccess = check_uint8(L, -1);
	lua_pushstring(L, "m_cPlayers");
	lua_gettable(L, index);
	s.m_cPlayers = check_int32(L, -1);
	return s;
}

static void check_NumberOfCurrentPlayers_t_array(lua_State* L, int index, NumberOfCurrentPlayers_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_NumberOfCurrentPlayers_t(L, -1);
	}
}
static UserStatsUnloaded_t check_UserStatsUnloaded_t(lua_State* L, int index) {
	UserStatsUnloaded_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static void check_UserStatsUnloaded_t_array(lua_State* L, int index, UserStatsUnloaded_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_UserStatsUnloaded_t(L, -1);
	}
}
static UserAchievementIconFetched_t check_UserAchievementIconFetched_t(lua_State* L, int index) {
	UserAchievementIconFetched_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_CGameID(L, -1);
	lua_pushstring(L, "m_rgchAchievementName");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchAchievementName, 128);
	lua_pushstring(L, "m_bAchieved");
	lua_gettable(L, index);
	s.m_bAchieved = check_bool(L, -1);
	lua_pushstring(L, "m_nIconHandle");
	lua_gettable(L, index);
	s.m_nIconHandle = check_int(L, -1);
	return s;
}

static void check_UserAchievementIconFetched_t_array(lua_State* L, int index, UserAchievementIconFetched_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_UserAchievementIconFetched_t(L, -1);
	}
}
static GlobalAchievementPercentagesReady_t check_GlobalAchievementPercentagesReady_t(lua_State* L, int index) {
	GlobalAchievementPercentagesReady_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_GlobalAchievementPercentagesReady_t_array(lua_State* L, int index, GlobalAchievementPercentagesReady_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GlobalAchievementPercentagesReady_t(L, -1);
	}
}
static LeaderboardUGCSet_t check_LeaderboardUGCSet_t(lua_State* L, int index) {
	LeaderboardUGCSet_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_hSteamLeaderboard");
	lua_gettable(L, index);
	s.m_hSteamLeaderboard = check_SteamLeaderboard_t(L, -1);
	return s;
}

static void check_LeaderboardUGCSet_t_array(lua_State* L, int index, LeaderboardUGCSet_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_LeaderboardUGCSet_t(L, -1);
	}
}
static PS3TrophiesInstalled_t check_PS3TrophiesInstalled_t(lua_State* L, int index) {
	PS3TrophiesInstalled_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_ulRequiredDiskSpace");
	lua_gettable(L, index);
	s.m_ulRequiredDiskSpace = check_uint64(L, -1);
	return s;
}

static void check_PS3TrophiesInstalled_t_array(lua_State* L, int index, PS3TrophiesInstalled_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_PS3TrophiesInstalled_t(L, -1);
	}
}
static GlobalStatsReceived_t check_GlobalStatsReceived_t(lua_State* L, int index) {
	GlobalStatsReceived_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_GlobalStatsReceived_t_array(lua_State* L, int index, GlobalStatsReceived_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GlobalStatsReceived_t(L, -1);
	}
}
static DlcInstalled_t check_DlcInstalled_t(lua_State* L, int index) {
	DlcInstalled_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static void check_DlcInstalled_t_array(lua_State* L, int index, DlcInstalled_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_DlcInstalled_t(L, -1);
	}
}
static RegisterActivationCodeResponse_t check_RegisterActivationCodeResponse_t(lua_State* L, int index) {
	RegisterActivationCodeResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_ERegisterActivationCodeResult(L, -1);
	lua_pushstring(L, "m_unPackageRegistered");
	lua_gettable(L, index);
	s.m_unPackageRegistered = check_uint32(L, -1);
	return s;
}

static void check_RegisterActivationCodeResponse_t_array(lua_State* L, int index, RegisterActivationCodeResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RegisterActivationCodeResponse_t(L, -1);
	}
}
static NewUrlLaunchParameters_t check_NewUrlLaunchParameters_t(lua_State* L, int index) {
	NewUrlLaunchParameters_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_NewUrlLaunchParameters_t_array(lua_State* L, int index, NewUrlLaunchParameters_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_NewUrlLaunchParameters_t(L, -1);
	}
}
static AppProofOfPurchaseKeyResponse_t check_AppProofOfPurchaseKeyResponse_t(lua_State* L, int index) {
	AppProofOfPurchaseKeyResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_uint32(L, -1);
	lua_pushstring(L, "m_cchKeyLength");
	lua_gettable(L, index);
	s.m_cchKeyLength = check_uint32(L, -1);
	lua_pushstring(L, "m_rgchKey");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchKey, 240);
	return s;
}

static void check_AppProofOfPurchaseKeyResponse_t_array(lua_State* L, int index, AppProofOfPurchaseKeyResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_AppProofOfPurchaseKeyResponse_t(L, -1);
	}
}
static FileDetailsResult_t check_FileDetailsResult_t(lua_State* L, int index) {
	FileDetailsResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_ulFileSize");
	lua_gettable(L, index);
	s.m_ulFileSize = check_uint64(L, -1);
	lua_pushstring(L, "m_FileSHA");
	lua_gettable(L, index);
	check_uint8_array(L, -1, s.m_FileSHA, 20);
	lua_pushstring(L, "m_unFlags");
	lua_gettable(L, index);
	s.m_unFlags = check_uint32(L, -1);
	return s;
}

static void check_FileDetailsResult_t_array(lua_State* L, int index, FileDetailsResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_FileDetailsResult_t(L, -1);
	}
}
static TimedTrialStatus_t check_TimedTrialStatus_t(lua_State* L, int index) {
	TimedTrialStatus_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_unAppID");
	lua_gettable(L, index);
	s.m_unAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_bIsOffline");
	lua_gettable(L, index);
	s.m_bIsOffline = check_bool(L, -1);
	lua_pushstring(L, "m_unSecondsAllowed");
	lua_gettable(L, index);
	s.m_unSecondsAllowed = check_uint32(L, -1);
	lua_pushstring(L, "m_unSecondsPlayed");
	lua_gettable(L, index);
	s.m_unSecondsPlayed = check_uint32(L, -1);
	return s;
}

static void check_TimedTrialStatus_t_array(lua_State* L, int index, TimedTrialStatus_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_TimedTrialStatus_t(L, -1);
	}
}
static P2PSessionRequest_t check_P2PSessionRequest_t(lua_State* L, int index) {
	P2PSessionRequest_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDRemote");
	lua_gettable(L, index);
	s.m_steamIDRemote = check_CSteamID(L, -1);
	return s;
}

static void check_P2PSessionRequest_t_array(lua_State* L, int index, P2PSessionRequest_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_P2PSessionRequest_t(L, -1);
	}
}
static P2PSessionConnectFail_t check_P2PSessionConnectFail_t(lua_State* L, int index) {
	P2PSessionConnectFail_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDRemote");
	lua_gettable(L, index);
	s.m_steamIDRemote = check_CSteamID(L, -1);
	lua_pushstring(L, "m_eP2PSessionError");
	lua_gettable(L, index);
	s.m_eP2PSessionError = check_uint8(L, -1);
	return s;
}

static void check_P2PSessionConnectFail_t_array(lua_State* L, int index, P2PSessionConnectFail_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_P2PSessionConnectFail_t(L, -1);
	}
}
static SocketStatusCallback_t check_SocketStatusCallback_t(lua_State* L, int index) {
	SocketStatusCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hSocket");
	lua_gettable(L, index);
	s.m_hSocket = check_SNetSocket_t(L, -1);
	lua_pushstring(L, "m_hListenSocket");
	lua_gettable(L, index);
	s.m_hListenSocket = check_SNetListenSocket_t(L, -1);
	lua_pushstring(L, "m_steamIDRemote");
	lua_gettable(L, index);
	s.m_steamIDRemote = check_CSteamID(L, -1);
	lua_pushstring(L, "m_eSNetSocketState");
	lua_gettable(L, index);
	s.m_eSNetSocketState = check_int(L, -1);
	return s;
}

static void check_SocketStatusCallback_t_array(lua_State* L, int index, SocketStatusCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SocketStatusCallback_t(L, -1);
	}
}
static ScreenshotReady_t check_ScreenshotReady_t(lua_State* L, int index) {
	ScreenshotReady_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hLocal");
	lua_gettable(L, index);
	s.m_hLocal = check_ScreenshotHandle(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_ScreenshotReady_t_array(lua_State* L, int index, ScreenshotReady_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ScreenshotReady_t(L, -1);
	}
}
static ScreenshotRequested_t check_ScreenshotRequested_t(lua_State* L, int index) {
	ScreenshotRequested_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_ScreenshotRequested_t_array(lua_State* L, int index, ScreenshotRequested_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ScreenshotRequested_t(L, -1);
	}
}
static PlaybackStatusHasChanged_t check_PlaybackStatusHasChanged_t(lua_State* L, int index) {
	PlaybackStatusHasChanged_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_PlaybackStatusHasChanged_t_array(lua_State* L, int index, PlaybackStatusHasChanged_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_PlaybackStatusHasChanged_t(L, -1);
	}
}
static VolumeHasChanged_t check_VolumeHasChanged_t(lua_State* L, int index) {
	VolumeHasChanged_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_flNewVolume");
	lua_gettable(L, index);
	s.m_flNewVolume = check_float(L, -1);
	return s;
}

static void check_VolumeHasChanged_t_array(lua_State* L, int index, VolumeHasChanged_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_VolumeHasChanged_t(L, -1);
	}
}
static MusicPlayerRemoteWillActivate_t check_MusicPlayerRemoteWillActivate_t(lua_State* L, int index) {
	MusicPlayerRemoteWillActivate_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_MusicPlayerRemoteWillActivate_t_array(lua_State* L, int index, MusicPlayerRemoteWillActivate_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerRemoteWillActivate_t(L, -1);
	}
}
static MusicPlayerRemoteWillDeactivate_t check_MusicPlayerRemoteWillDeactivate_t(lua_State* L, int index) {
	MusicPlayerRemoteWillDeactivate_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_MusicPlayerRemoteWillDeactivate_t_array(lua_State* L, int index, MusicPlayerRemoteWillDeactivate_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerRemoteWillDeactivate_t(L, -1);
	}
}
static MusicPlayerRemoteToFront_t check_MusicPlayerRemoteToFront_t(lua_State* L, int index) {
	MusicPlayerRemoteToFront_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_MusicPlayerRemoteToFront_t_array(lua_State* L, int index, MusicPlayerRemoteToFront_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerRemoteToFront_t(L, -1);
	}
}
static MusicPlayerWillQuit_t check_MusicPlayerWillQuit_t(lua_State* L, int index) {
	MusicPlayerWillQuit_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_MusicPlayerWillQuit_t_array(lua_State* L, int index, MusicPlayerWillQuit_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerWillQuit_t(L, -1);
	}
}
static MusicPlayerWantsPlay_t check_MusicPlayerWantsPlay_t(lua_State* L, int index) {
	MusicPlayerWantsPlay_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_MusicPlayerWantsPlay_t_array(lua_State* L, int index, MusicPlayerWantsPlay_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerWantsPlay_t(L, -1);
	}
}
static MusicPlayerWantsPause_t check_MusicPlayerWantsPause_t(lua_State* L, int index) {
	MusicPlayerWantsPause_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_MusicPlayerWantsPause_t_array(lua_State* L, int index, MusicPlayerWantsPause_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerWantsPause_t(L, -1);
	}
}
static MusicPlayerWantsPlayPrevious_t check_MusicPlayerWantsPlayPrevious_t(lua_State* L, int index) {
	MusicPlayerWantsPlayPrevious_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_MusicPlayerWantsPlayPrevious_t_array(lua_State* L, int index, MusicPlayerWantsPlayPrevious_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerWantsPlayPrevious_t(L, -1);
	}
}
static MusicPlayerWantsPlayNext_t check_MusicPlayerWantsPlayNext_t(lua_State* L, int index) {
	MusicPlayerWantsPlayNext_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_MusicPlayerWantsPlayNext_t_array(lua_State* L, int index, MusicPlayerWantsPlayNext_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerWantsPlayNext_t(L, -1);
	}
}
static MusicPlayerWantsShuffled_t check_MusicPlayerWantsShuffled_t(lua_State* L, int index) {
	MusicPlayerWantsShuffled_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bShuffled");
	lua_gettable(L, index);
	s.m_bShuffled = check_bool(L, -1);
	return s;
}

static void check_MusicPlayerWantsShuffled_t_array(lua_State* L, int index, MusicPlayerWantsShuffled_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerWantsShuffled_t(L, -1);
	}
}
static MusicPlayerWantsLooped_t check_MusicPlayerWantsLooped_t(lua_State* L, int index) {
	MusicPlayerWantsLooped_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bLooped");
	lua_gettable(L, index);
	s.m_bLooped = check_bool(L, -1);
	return s;
}

static void check_MusicPlayerWantsLooped_t_array(lua_State* L, int index, MusicPlayerWantsLooped_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerWantsLooped_t(L, -1);
	}
}
static MusicPlayerWantsVolume_t check_MusicPlayerWantsVolume_t(lua_State* L, int index) {
	MusicPlayerWantsVolume_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_flNewVolume");
	lua_gettable(L, index);
	s.m_flNewVolume = check_float(L, -1);
	return s;
}

static void check_MusicPlayerWantsVolume_t_array(lua_State* L, int index, MusicPlayerWantsVolume_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerWantsVolume_t(L, -1);
	}
}
static MusicPlayerSelectsQueueEntry_t check_MusicPlayerSelectsQueueEntry_t(lua_State* L, int index) {
	MusicPlayerSelectsQueueEntry_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "nID");
	lua_gettable(L, index);
	s.nID = check_int(L, -1);
	return s;
}

static void check_MusicPlayerSelectsQueueEntry_t_array(lua_State* L, int index, MusicPlayerSelectsQueueEntry_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerSelectsQueueEntry_t(L, -1);
	}
}
static MusicPlayerSelectsPlaylistEntry_t check_MusicPlayerSelectsPlaylistEntry_t(lua_State* L, int index) {
	MusicPlayerSelectsPlaylistEntry_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "nID");
	lua_gettable(L, index);
	s.nID = check_int(L, -1);
	return s;
}

static void check_MusicPlayerSelectsPlaylistEntry_t_array(lua_State* L, int index, MusicPlayerSelectsPlaylistEntry_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerSelectsPlaylistEntry_t(L, -1);
	}
}
static MusicPlayerWantsPlayingRepeatStatus_t check_MusicPlayerWantsPlayingRepeatStatus_t(lua_State* L, int index) {
	MusicPlayerWantsPlayingRepeatStatus_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nPlayingRepeatStatus");
	lua_gettable(L, index);
	s.m_nPlayingRepeatStatus = check_int(L, -1);
	return s;
}

static void check_MusicPlayerWantsPlayingRepeatStatus_t_array(lua_State* L, int index, MusicPlayerWantsPlayingRepeatStatus_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_MusicPlayerWantsPlayingRepeatStatus_t(L, -1);
	}
}
static HTTPRequestCompleted_t check_HTTPRequestCompleted_t(lua_State* L, int index) {
	HTTPRequestCompleted_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hRequest");
	lua_gettable(L, index);
	s.m_hRequest = check_HTTPRequestHandle(L, -1);
	lua_pushstring(L, "m_ulContextValue");
	lua_gettable(L, index);
	s.m_ulContextValue = check_uint64(L, -1);
	lua_pushstring(L, "m_bRequestSuccessful");
	lua_gettable(L, index);
	s.m_bRequestSuccessful = check_bool(L, -1);
	lua_pushstring(L, "m_eStatusCode");
	lua_gettable(L, index);
	s.m_eStatusCode = check_EHTTPStatusCode(L, -1);
	lua_pushstring(L, "m_unBodySize");
	lua_gettable(L, index);
	s.m_unBodySize = check_uint32(L, -1);
	return s;
}

static void check_HTTPRequestCompleted_t_array(lua_State* L, int index, HTTPRequestCompleted_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTTPRequestCompleted_t(L, -1);
	}
}
static HTTPRequestHeadersReceived_t check_HTTPRequestHeadersReceived_t(lua_State* L, int index) {
	HTTPRequestHeadersReceived_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hRequest");
	lua_gettable(L, index);
	s.m_hRequest = check_HTTPRequestHandle(L, -1);
	lua_pushstring(L, "m_ulContextValue");
	lua_gettable(L, index);
	s.m_ulContextValue = check_uint64(L, -1);
	return s;
}

static void check_HTTPRequestHeadersReceived_t_array(lua_State* L, int index, HTTPRequestHeadersReceived_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTTPRequestHeadersReceived_t(L, -1);
	}
}
static HTTPRequestDataReceived_t check_HTTPRequestDataReceived_t(lua_State* L, int index) {
	HTTPRequestDataReceived_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hRequest");
	lua_gettable(L, index);
	s.m_hRequest = check_HTTPRequestHandle(L, -1);
	lua_pushstring(L, "m_ulContextValue");
	lua_gettable(L, index);
	s.m_ulContextValue = check_uint64(L, -1);
	lua_pushstring(L, "m_cOffset");
	lua_gettable(L, index);
	s.m_cOffset = check_uint32(L, -1);
	lua_pushstring(L, "m_cBytesReceived");
	lua_gettable(L, index);
	s.m_cBytesReceived = check_uint32(L, -1);
	return s;
}

static void check_HTTPRequestDataReceived_t_array(lua_State* L, int index, HTTPRequestDataReceived_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTTPRequestDataReceived_t(L, -1);
	}
}
static SteamInputDeviceConnected_t check_SteamInputDeviceConnected_t(lua_State* L, int index) {
	SteamInputDeviceConnected_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulConnectedDeviceHandle");
	lua_gettable(L, index);
	s.m_ulConnectedDeviceHandle = check_InputHandle_t(L, -1);
	return s;
}

static void check_SteamInputDeviceConnected_t_array(lua_State* L, int index, SteamInputDeviceConnected_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamInputDeviceConnected_t(L, -1);
	}
}
static SteamInputDeviceDisconnected_t check_SteamInputDeviceDisconnected_t(lua_State* L, int index) {
	SteamInputDeviceDisconnected_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_ulDisconnectedDeviceHandle");
	lua_gettable(L, index);
	s.m_ulDisconnectedDeviceHandle = check_InputHandle_t(L, -1);
	return s;
}

static void check_SteamInputDeviceDisconnected_t_array(lua_State* L, int index, SteamInputDeviceDisconnected_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamInputDeviceDisconnected_t(L, -1);
	}
}
static SteamInputConfigurationLoaded_t check_SteamInputConfigurationLoaded_t(lua_State* L, int index) {
	SteamInputConfigurationLoaded_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_unAppID");
	lua_gettable(L, index);
	s.m_unAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_ulDeviceHandle");
	lua_gettable(L, index);
	s.m_ulDeviceHandle = check_InputHandle_t(L, -1);
	lua_pushstring(L, "m_ulMappingCreator");
	lua_gettable(L, index);
	s.m_ulMappingCreator = check_CSteamID(L, -1);
	lua_pushstring(L, "m_unMajorRevision");
	lua_gettable(L, index);
	s.m_unMajorRevision = check_uint32(L, -1);
	lua_pushstring(L, "m_unMinorRevision");
	lua_gettable(L, index);
	s.m_unMinorRevision = check_uint32(L, -1);
	lua_pushstring(L, "m_bUsesSteamInputAPI");
	lua_gettable(L, index);
	s.m_bUsesSteamInputAPI = check_bool(L, -1);
	lua_pushstring(L, "m_bUsesGamepadAPI");
	lua_gettable(L, index);
	s.m_bUsesGamepadAPI = check_bool(L, -1);
	return s;
}

static void check_SteamInputConfigurationLoaded_t_array(lua_State* L, int index, SteamInputConfigurationLoaded_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamInputConfigurationLoaded_t(L, -1);
	}
}
static SteamUGCQueryCompleted_t check_SteamUGCQueryCompleted_t(lua_State* L, int index) {
	SteamUGCQueryCompleted_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_handle");
	lua_gettable(L, index);
	s.m_handle = check_UGCQueryHandle_t(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_unNumResultsReturned");
	lua_gettable(L, index);
	s.m_unNumResultsReturned = check_uint32(L, -1);
	lua_pushstring(L, "m_unTotalMatchingResults");
	lua_gettable(L, index);
	s.m_unTotalMatchingResults = check_uint32(L, -1);
	lua_pushstring(L, "m_bCachedData");
	lua_gettable(L, index);
	s.m_bCachedData = check_bool(L, -1);
	lua_pushstring(L, "m_rgchNextCursor");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchNextCursor, 256);
	return s;
}

static void check_SteamUGCQueryCompleted_t_array(lua_State* L, int index, SteamUGCQueryCompleted_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamUGCQueryCompleted_t(L, -1);
	}
}
static SteamUGCRequestUGCDetailsResult_t check_SteamUGCRequestUGCDetailsResult_t(lua_State* L, int index) {
	SteamUGCRequestUGCDetailsResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_details");
	lua_gettable(L, index);
	s.m_details = check_SteamUGCDetails_t(L, -1);
	lua_pushstring(L, "m_bCachedData");
	lua_gettable(L, index);
	s.m_bCachedData = check_bool(L, -1);
	return s;
}

static void check_SteamUGCRequestUGCDetailsResult_t_array(lua_State* L, int index, SteamUGCRequestUGCDetailsResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamUGCRequestUGCDetailsResult_t(L, -1);
	}
}
static CreateItemResult_t check_CreateItemResult_t(lua_State* L, int index) {
	CreateItemResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
	lua_gettable(L, index);
	s.m_bUserNeedsToAcceptWorkshopLegalAgreement = check_bool(L, -1);
	return s;
}

static void check_CreateItemResult_t_array(lua_State* L, int index, CreateItemResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_CreateItemResult_t(L, -1);
	}
}
static SubmitItemUpdateResult_t check_SubmitItemUpdateResult_t(lua_State* L, int index) {
	SubmitItemUpdateResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_bUserNeedsToAcceptWorkshopLegalAgreement");
	lua_gettable(L, index);
	s.m_bUserNeedsToAcceptWorkshopLegalAgreement = check_bool(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static void check_SubmitItemUpdateResult_t_array(lua_State* L, int index, SubmitItemUpdateResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SubmitItemUpdateResult_t(L, -1);
	}
}
static ItemInstalled_t check_ItemInstalled_t(lua_State* L, int index) {
	ItemInstalled_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_unAppID");
	lua_gettable(L, index);
	s.m_unAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static void check_ItemInstalled_t_array(lua_State* L, int index, ItemInstalled_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ItemInstalled_t(L, -1);
	}
}
static DownloadItemResult_t check_DownloadItemResult_t(lua_State* L, int index) {
	DownloadItemResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_unAppID");
	lua_gettable(L, index);
	s.m_unAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_DownloadItemResult_t_array(lua_State* L, int index, DownloadItemResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_DownloadItemResult_t(L, -1);
	}
}
static UserFavoriteItemsListChanged_t check_UserFavoriteItemsListChanged_t(lua_State* L, int index) {
	UserFavoriteItemsListChanged_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_bWasAddRequest");
	lua_gettable(L, index);
	s.m_bWasAddRequest = check_bool(L, -1);
	return s;
}

static void check_UserFavoriteItemsListChanged_t_array(lua_State* L, int index, UserFavoriteItemsListChanged_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_UserFavoriteItemsListChanged_t(L, -1);
	}
}
static SetUserItemVoteResult_t check_SetUserItemVoteResult_t(lua_State* L, int index) {
	SetUserItemVoteResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_bVoteUp");
	lua_gettable(L, index);
	s.m_bVoteUp = check_bool(L, -1);
	return s;
}

static void check_SetUserItemVoteResult_t_array(lua_State* L, int index, SetUserItemVoteResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SetUserItemVoteResult_t(L, -1);
	}
}
static GetUserItemVoteResult_t check_GetUserItemVoteResult_t(lua_State* L, int index) {
	GetUserItemVoteResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_bVotedUp");
	lua_gettable(L, index);
	s.m_bVotedUp = check_bool(L, -1);
	lua_pushstring(L, "m_bVotedDown");
	lua_gettable(L, index);
	s.m_bVotedDown = check_bool(L, -1);
	lua_pushstring(L, "m_bVoteSkipped");
	lua_gettable(L, index);
	s.m_bVoteSkipped = check_bool(L, -1);
	return s;
}

static void check_GetUserItemVoteResult_t_array(lua_State* L, int index, GetUserItemVoteResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GetUserItemVoteResult_t(L, -1);
	}
}
static StartPlaytimeTrackingResult_t check_StartPlaytimeTrackingResult_t(lua_State* L, int index) {
	StartPlaytimeTrackingResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_StartPlaytimeTrackingResult_t_array(lua_State* L, int index, StartPlaytimeTrackingResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_StartPlaytimeTrackingResult_t(L, -1);
	}
}
static StopPlaytimeTrackingResult_t check_StopPlaytimeTrackingResult_t(lua_State* L, int index) {
	StopPlaytimeTrackingResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_StopPlaytimeTrackingResult_t_array(lua_State* L, int index, StopPlaytimeTrackingResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_StopPlaytimeTrackingResult_t(L, -1);
	}
}
static AddUGCDependencyResult_t check_AddUGCDependencyResult_t(lua_State* L, int index) {
	AddUGCDependencyResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nChildPublishedFileId");
	lua_gettable(L, index);
	s.m_nChildPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static void check_AddUGCDependencyResult_t_array(lua_State* L, int index, AddUGCDependencyResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_AddUGCDependencyResult_t(L, -1);
	}
}
static RemoveUGCDependencyResult_t check_RemoveUGCDependencyResult_t(lua_State* L, int index) {
	RemoveUGCDependencyResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nChildPublishedFileId");
	lua_gettable(L, index);
	s.m_nChildPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static void check_RemoveUGCDependencyResult_t_array(lua_State* L, int index, RemoveUGCDependencyResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoveUGCDependencyResult_t(L, -1);
	}
}
static AddAppDependencyResult_t check_AddAppDependencyResult_t(lua_State* L, int index) {
	AddAppDependencyResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static void check_AddAppDependencyResult_t_array(lua_State* L, int index, AddAppDependencyResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_AddAppDependencyResult_t(L, -1);
	}
}
static RemoveAppDependencyResult_t check_RemoveAppDependencyResult_t(lua_State* L, int index) {
	RemoveAppDependencyResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static void check_RemoveAppDependencyResult_t_array(lua_State* L, int index, RemoveAppDependencyResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_RemoveAppDependencyResult_t(L, -1);
	}
}
static GetAppDependenciesResult_t check_GetAppDependenciesResult_t(lua_State* L, int index) {
	GetAppDependenciesResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_rgAppIDs");
	lua_gettable(L, index);
	check_AppId_t_array(L, -1, s.m_rgAppIDs, 32);
	lua_pushstring(L, "m_nNumAppDependencies");
	lua_gettable(L, index);
	s.m_nNumAppDependencies = check_uint32(L, -1);
	lua_pushstring(L, "m_nTotalNumAppDependencies");
	lua_gettable(L, index);
	s.m_nTotalNumAppDependencies = check_uint32(L, -1);
	return s;
}

static void check_GetAppDependenciesResult_t_array(lua_State* L, int index, GetAppDependenciesResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GetAppDependenciesResult_t(L, -1);
	}
}
static DeleteItemResult_t check_DeleteItemResult_t(lua_State* L, int index) {
	DeleteItemResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static void check_DeleteItemResult_t_array(lua_State* L, int index, DeleteItemResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_DeleteItemResult_t(L, -1);
	}
}
static UserSubscribedItemsListChanged_t check_UserSubscribedItemsListChanged_t(lua_State* L, int index) {
	UserSubscribedItemsListChanged_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static void check_UserSubscribedItemsListChanged_t_array(lua_State* L, int index, UserSubscribedItemsListChanged_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_UserSubscribedItemsListChanged_t(L, -1);
	}
}
static WorkshopEULAStatus_t check_WorkshopEULAStatus_t(lua_State* L, int index) {
	WorkshopEULAStatus_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_unVersion");
	lua_gettable(L, index);
	s.m_unVersion = check_uint32(L, -1);
	lua_pushstring(L, "m_rtAction");
	lua_gettable(L, index);
	s.m_rtAction = check_RTime32(L, -1);
	lua_pushstring(L, "m_bAccepted");
	lua_gettable(L, index);
	s.m_bAccepted = check_bool(L, -1);
	lua_pushstring(L, "m_bNeedsAction");
	lua_gettable(L, index);
	s.m_bNeedsAction = check_bool(L, -1);
	return s;
}

static void check_WorkshopEULAStatus_t_array(lua_State* L, int index, WorkshopEULAStatus_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_WorkshopEULAStatus_t(L, -1);
	}
}
static SteamAppInstalled_t check_SteamAppInstalled_t(lua_State* L, int index) {
	SteamAppInstalled_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_iInstallFolderIndex");
	lua_gettable(L, index);
	s.m_iInstallFolderIndex = check_int(L, -1);
	return s;
}

static void check_SteamAppInstalled_t_array(lua_State* L, int index, SteamAppInstalled_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamAppInstalled_t(L, -1);
	}
}
static SteamAppUninstalled_t check_SteamAppUninstalled_t(lua_State* L, int index) {
	SteamAppUninstalled_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_iInstallFolderIndex");
	lua_gettable(L, index);
	s.m_iInstallFolderIndex = check_int(L, -1);
	return s;
}

static void check_SteamAppUninstalled_t_array(lua_State* L, int index, SteamAppUninstalled_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamAppUninstalled_t(L, -1);
	}
}
static HTML_BrowserReady_t check_HTML_BrowserReady_t(lua_State* L, int index) {
	HTML_BrowserReady_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	return s;
}

static void check_HTML_BrowserReady_t_array(lua_State* L, int index, HTML_BrowserReady_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_BrowserReady_t(L, -1);
	}
}
static HTML_NeedsPaint_t check_HTML_NeedsPaint_t(lua_State* L, int index) {
	HTML_NeedsPaint_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pBGRA");
	lua_gettable(L, index);
	s.pBGRA = check_const_char_ptr(L, -1);
	lua_pushstring(L, "unWide");
	lua_gettable(L, index);
	s.unWide = check_uint32(L, -1);
	lua_pushstring(L, "unTall");
	lua_gettable(L, index);
	s.unTall = check_uint32(L, -1);
	lua_pushstring(L, "unUpdateX");
	lua_gettable(L, index);
	s.unUpdateX = check_uint32(L, -1);
	lua_pushstring(L, "unUpdateY");
	lua_gettable(L, index);
	s.unUpdateY = check_uint32(L, -1);
	lua_pushstring(L, "unUpdateWide");
	lua_gettable(L, index);
	s.unUpdateWide = check_uint32(L, -1);
	lua_pushstring(L, "unUpdateTall");
	lua_gettable(L, index);
	s.unUpdateTall = check_uint32(L, -1);
	lua_pushstring(L, "unScrollX");
	lua_gettable(L, index);
	s.unScrollX = check_uint32(L, -1);
	lua_pushstring(L, "unScrollY");
	lua_gettable(L, index);
	s.unScrollY = check_uint32(L, -1);
	lua_pushstring(L, "flPageScale");
	lua_gettable(L, index);
	s.flPageScale = check_float(L, -1);
	lua_pushstring(L, "unPageSerial");
	lua_gettable(L, index);
	s.unPageSerial = check_uint32(L, -1);
	return s;
}

static void check_HTML_NeedsPaint_t_array(lua_State* L, int index, HTML_NeedsPaint_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_NeedsPaint_t(L, -1);
	}
}
static HTML_StartRequest_t check_HTML_StartRequest_t(lua_State* L, int index) {
	HTML_StartRequest_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchURL");
	lua_gettable(L, index);
	s.pchURL = check_const_char_ptr(L, -1);
	lua_pushstring(L, "pchTarget");
	lua_gettable(L, index);
	s.pchTarget = check_const_char_ptr(L, -1);
	lua_pushstring(L, "pchPostData");
	lua_gettable(L, index);
	s.pchPostData = check_const_char_ptr(L, -1);
	lua_pushstring(L, "bIsRedirect");
	lua_gettable(L, index);
	s.bIsRedirect = check_bool(L, -1);
	return s;
}

static void check_HTML_StartRequest_t_array(lua_State* L, int index, HTML_StartRequest_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_StartRequest_t(L, -1);
	}
}
static HTML_CloseBrowser_t check_HTML_CloseBrowser_t(lua_State* L, int index) {
	HTML_CloseBrowser_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	return s;
}

static void check_HTML_CloseBrowser_t_array(lua_State* L, int index, HTML_CloseBrowser_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_CloseBrowser_t(L, -1);
	}
}
static HTML_URLChanged_t check_HTML_URLChanged_t(lua_State* L, int index) {
	HTML_URLChanged_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchURL");
	lua_gettable(L, index);
	s.pchURL = check_const_char_ptr(L, -1);
	lua_pushstring(L, "pchPostData");
	lua_gettable(L, index);
	s.pchPostData = check_const_char_ptr(L, -1);
	lua_pushstring(L, "bIsRedirect");
	lua_gettable(L, index);
	s.bIsRedirect = check_bool(L, -1);
	lua_pushstring(L, "pchPageTitle");
	lua_gettable(L, index);
	s.pchPageTitle = check_const_char_ptr(L, -1);
	lua_pushstring(L, "bNewNavigation");
	lua_gettable(L, index);
	s.bNewNavigation = check_bool(L, -1);
	return s;
}

static void check_HTML_URLChanged_t_array(lua_State* L, int index, HTML_URLChanged_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_URLChanged_t(L, -1);
	}
}
static HTML_FinishedRequest_t check_HTML_FinishedRequest_t(lua_State* L, int index) {
	HTML_FinishedRequest_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchURL");
	lua_gettable(L, index);
	s.pchURL = check_const_char_ptr(L, -1);
	lua_pushstring(L, "pchPageTitle");
	lua_gettable(L, index);
	s.pchPageTitle = check_const_char_ptr(L, -1);
	return s;
}

static void check_HTML_FinishedRequest_t_array(lua_State* L, int index, HTML_FinishedRequest_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_FinishedRequest_t(L, -1);
	}
}
static HTML_OpenLinkInNewTab_t check_HTML_OpenLinkInNewTab_t(lua_State* L, int index) {
	HTML_OpenLinkInNewTab_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchURL");
	lua_gettable(L, index);
	s.pchURL = check_const_char_ptr(L, -1);
	return s;
}

static void check_HTML_OpenLinkInNewTab_t_array(lua_State* L, int index, HTML_OpenLinkInNewTab_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_OpenLinkInNewTab_t(L, -1);
	}
}
static HTML_ChangedTitle_t check_HTML_ChangedTitle_t(lua_State* L, int index) {
	HTML_ChangedTitle_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchTitle");
	lua_gettable(L, index);
	s.pchTitle = check_const_char_ptr(L, -1);
	return s;
}

static void check_HTML_ChangedTitle_t_array(lua_State* L, int index, HTML_ChangedTitle_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_ChangedTitle_t(L, -1);
	}
}
static HTML_SearchResults_t check_HTML_SearchResults_t(lua_State* L, int index) {
	HTML_SearchResults_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "unResults");
	lua_gettable(L, index);
	s.unResults = check_uint32(L, -1);
	lua_pushstring(L, "unCurrentMatch");
	lua_gettable(L, index);
	s.unCurrentMatch = check_uint32(L, -1);
	return s;
}

static void check_HTML_SearchResults_t_array(lua_State* L, int index, HTML_SearchResults_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_SearchResults_t(L, -1);
	}
}
static HTML_CanGoBackAndForward_t check_HTML_CanGoBackAndForward_t(lua_State* L, int index) {
	HTML_CanGoBackAndForward_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "bCanGoBack");
	lua_gettable(L, index);
	s.bCanGoBack = check_bool(L, -1);
	lua_pushstring(L, "bCanGoForward");
	lua_gettable(L, index);
	s.bCanGoForward = check_bool(L, -1);
	return s;
}

static void check_HTML_CanGoBackAndForward_t_array(lua_State* L, int index, HTML_CanGoBackAndForward_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_CanGoBackAndForward_t(L, -1);
	}
}
static HTML_HorizontalScroll_t check_HTML_HorizontalScroll_t(lua_State* L, int index) {
	HTML_HorizontalScroll_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "unScrollMax");
	lua_gettable(L, index);
	s.unScrollMax = check_uint32(L, -1);
	lua_pushstring(L, "unScrollCurrent");
	lua_gettable(L, index);
	s.unScrollCurrent = check_uint32(L, -1);
	lua_pushstring(L, "flPageScale");
	lua_gettable(L, index);
	s.flPageScale = check_float(L, -1);
	lua_pushstring(L, "bVisible");
	lua_gettable(L, index);
	s.bVisible = check_bool(L, -1);
	lua_pushstring(L, "unPageSize");
	lua_gettable(L, index);
	s.unPageSize = check_uint32(L, -1);
	return s;
}

static void check_HTML_HorizontalScroll_t_array(lua_State* L, int index, HTML_HorizontalScroll_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_HorizontalScroll_t(L, -1);
	}
}
static HTML_VerticalScroll_t check_HTML_VerticalScroll_t(lua_State* L, int index) {
	HTML_VerticalScroll_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "unScrollMax");
	lua_gettable(L, index);
	s.unScrollMax = check_uint32(L, -1);
	lua_pushstring(L, "unScrollCurrent");
	lua_gettable(L, index);
	s.unScrollCurrent = check_uint32(L, -1);
	lua_pushstring(L, "flPageScale");
	lua_gettable(L, index);
	s.flPageScale = check_float(L, -1);
	lua_pushstring(L, "bVisible");
	lua_gettable(L, index);
	s.bVisible = check_bool(L, -1);
	lua_pushstring(L, "unPageSize");
	lua_gettable(L, index);
	s.unPageSize = check_uint32(L, -1);
	return s;
}

static void check_HTML_VerticalScroll_t_array(lua_State* L, int index, HTML_VerticalScroll_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_VerticalScroll_t(L, -1);
	}
}
static HTML_LinkAtPosition_t check_HTML_LinkAtPosition_t(lua_State* L, int index) {
	HTML_LinkAtPosition_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "x");
	lua_gettable(L, index);
	s.x = check_uint32(L, -1);
	lua_pushstring(L, "y");
	lua_gettable(L, index);
	s.y = check_uint32(L, -1);
	lua_pushstring(L, "pchURL");
	lua_gettable(L, index);
	s.pchURL = check_const_char_ptr(L, -1);
	lua_pushstring(L, "bInput");
	lua_gettable(L, index);
	s.bInput = check_bool(L, -1);
	lua_pushstring(L, "bLiveLink");
	lua_gettable(L, index);
	s.bLiveLink = check_bool(L, -1);
	return s;
}

static void check_HTML_LinkAtPosition_t_array(lua_State* L, int index, HTML_LinkAtPosition_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_LinkAtPosition_t(L, -1);
	}
}
static HTML_JSAlert_t check_HTML_JSAlert_t(lua_State* L, int index) {
	HTML_JSAlert_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMessage");
	lua_gettable(L, index);
	s.pchMessage = check_const_char_ptr(L, -1);
	return s;
}

static void check_HTML_JSAlert_t_array(lua_State* L, int index, HTML_JSAlert_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_JSAlert_t(L, -1);
	}
}
static HTML_JSConfirm_t check_HTML_JSConfirm_t(lua_State* L, int index) {
	HTML_JSConfirm_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMessage");
	lua_gettable(L, index);
	s.pchMessage = check_const_char_ptr(L, -1);
	return s;
}

static void check_HTML_JSConfirm_t_array(lua_State* L, int index, HTML_JSConfirm_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_JSConfirm_t(L, -1);
	}
}
static HTML_FileOpenDialog_t check_HTML_FileOpenDialog_t(lua_State* L, int index) {
	HTML_FileOpenDialog_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchTitle");
	lua_gettable(L, index);
	s.pchTitle = check_const_char_ptr(L, -1);
	lua_pushstring(L, "pchInitialFile");
	lua_gettable(L, index);
	s.pchInitialFile = check_const_char_ptr(L, -1);
	return s;
}

static void check_HTML_FileOpenDialog_t_array(lua_State* L, int index, HTML_FileOpenDialog_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_FileOpenDialog_t(L, -1);
	}
}
static HTML_NewWindow_t check_HTML_NewWindow_t(lua_State* L, int index) {
	HTML_NewWindow_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchURL");
	lua_gettable(L, index);
	s.pchURL = check_const_char_ptr(L, -1);
	lua_pushstring(L, "unX");
	lua_gettable(L, index);
	s.unX = check_uint32(L, -1);
	lua_pushstring(L, "unY");
	lua_gettable(L, index);
	s.unY = check_uint32(L, -1);
	lua_pushstring(L, "unWide");
	lua_gettable(L, index);
	s.unWide = check_uint32(L, -1);
	lua_pushstring(L, "unTall");
	lua_gettable(L, index);
	s.unTall = check_uint32(L, -1);
	lua_pushstring(L, "unNewWindow_BrowserHandle_IGNORE");
	lua_gettable(L, index);
	s.unNewWindow_BrowserHandle_IGNORE = check_HHTMLBrowser(L, -1);
	return s;
}

static void check_HTML_NewWindow_t_array(lua_State* L, int index, HTML_NewWindow_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_NewWindow_t(L, -1);
	}
}
static HTML_SetCursor_t check_HTML_SetCursor_t(lua_State* L, int index) {
	HTML_SetCursor_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "eMouseCursor");
	lua_gettable(L, index);
	s.eMouseCursor = check_uint32(L, -1);
	return s;
}

static void check_HTML_SetCursor_t_array(lua_State* L, int index, HTML_SetCursor_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_SetCursor_t(L, -1);
	}
}
static HTML_StatusText_t check_HTML_StatusText_t(lua_State* L, int index) {
	HTML_StatusText_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMsg");
	lua_gettable(L, index);
	s.pchMsg = check_const_char_ptr(L, -1);
	return s;
}

static void check_HTML_StatusText_t_array(lua_State* L, int index, HTML_StatusText_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_StatusText_t(L, -1);
	}
}
static HTML_ShowToolTip_t check_HTML_ShowToolTip_t(lua_State* L, int index) {
	HTML_ShowToolTip_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMsg");
	lua_gettable(L, index);
	s.pchMsg = check_const_char_ptr(L, -1);
	return s;
}

static void check_HTML_ShowToolTip_t_array(lua_State* L, int index, HTML_ShowToolTip_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_ShowToolTip_t(L, -1);
	}
}
static HTML_UpdateToolTip_t check_HTML_UpdateToolTip_t(lua_State* L, int index) {
	HTML_UpdateToolTip_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMsg");
	lua_gettable(L, index);
	s.pchMsg = check_const_char_ptr(L, -1);
	return s;
}

static void check_HTML_UpdateToolTip_t_array(lua_State* L, int index, HTML_UpdateToolTip_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_UpdateToolTip_t(L, -1);
	}
}
static HTML_HideToolTip_t check_HTML_HideToolTip_t(lua_State* L, int index) {
	HTML_HideToolTip_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	return s;
}

static void check_HTML_HideToolTip_t_array(lua_State* L, int index, HTML_HideToolTip_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_HideToolTip_t(L, -1);
	}
}
static HTML_BrowserRestarted_t check_HTML_BrowserRestarted_t(lua_State* L, int index) {
	HTML_BrowserRestarted_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "unOldBrowserHandle");
	lua_gettable(L, index);
	s.unOldBrowserHandle = check_HHTMLBrowser(L, -1);
	return s;
}

static void check_HTML_BrowserRestarted_t_array(lua_State* L, int index, HTML_BrowserRestarted_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_HTML_BrowserRestarted_t(L, -1);
	}
}
static SteamInventoryResultReady_t check_SteamInventoryResultReady_t(lua_State* L, int index) {
	SteamInventoryResultReady_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_handle");
	lua_gettable(L, index);
	s.m_handle = check_SteamInventoryResult_t(L, -1);
	lua_pushstring(L, "m_result");
	lua_gettable(L, index);
	s.m_result = check_EResult(L, -1);
	return s;
}

static void check_SteamInventoryResultReady_t_array(lua_State* L, int index, SteamInventoryResultReady_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamInventoryResultReady_t(L, -1);
	}
}
static SteamInventoryFullUpdate_t check_SteamInventoryFullUpdate_t(lua_State* L, int index) {
	SteamInventoryFullUpdate_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_handle");
	lua_gettable(L, index);
	s.m_handle = check_SteamInventoryResult_t(L, -1);
	return s;
}

static void check_SteamInventoryFullUpdate_t_array(lua_State* L, int index, SteamInventoryFullUpdate_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamInventoryFullUpdate_t(L, -1);
	}
}
static SteamInventoryDefinitionUpdate_t check_SteamInventoryDefinitionUpdate_t(lua_State* L, int index) {
	SteamInventoryDefinitionUpdate_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_SteamInventoryDefinitionUpdate_t_array(lua_State* L, int index, SteamInventoryDefinitionUpdate_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamInventoryDefinitionUpdate_t(L, -1);
	}
}
static SteamInventoryEligiblePromoItemDefIDs_t check_SteamInventoryEligiblePromoItemDefIDs_t(lua_State* L, int index) {
	SteamInventoryEligiblePromoItemDefIDs_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_result");
	lua_gettable(L, index);
	s.m_result = check_EResult(L, -1);
	lua_pushstring(L, "m_steamID");
	lua_gettable(L, index);
	s.m_steamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_numEligiblePromoItemDefs");
	lua_gettable(L, index);
	s.m_numEligiblePromoItemDefs = check_int(L, -1);
	lua_pushstring(L, "m_bCachedData");
	lua_gettable(L, index);
	s.m_bCachedData = check_bool(L, -1);
	return s;
}

static void check_SteamInventoryEligiblePromoItemDefIDs_t_array(lua_State* L, int index, SteamInventoryEligiblePromoItemDefIDs_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamInventoryEligiblePromoItemDefIDs_t(L, -1);
	}
}
static SteamInventoryStartPurchaseResult_t check_SteamInventoryStartPurchaseResult_t(lua_State* L, int index) {
	SteamInventoryStartPurchaseResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_result");
	lua_gettable(L, index);
	s.m_result = check_EResult(L, -1);
	lua_pushstring(L, "m_ulOrderID");
	lua_gettable(L, index);
	s.m_ulOrderID = check_uint64(L, -1);
	lua_pushstring(L, "m_ulTransID");
	lua_gettable(L, index);
	s.m_ulTransID = check_uint64(L, -1);
	return s;
}

static void check_SteamInventoryStartPurchaseResult_t_array(lua_State* L, int index, SteamInventoryStartPurchaseResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamInventoryStartPurchaseResult_t(L, -1);
	}
}
static SteamInventoryRequestPricesResult_t check_SteamInventoryRequestPricesResult_t(lua_State* L, int index) {
	SteamInventoryRequestPricesResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_result");
	lua_gettable(L, index);
	s.m_result = check_EResult(L, -1);
	lua_pushstring(L, "m_rgchCurrency");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchCurrency, 4);
	return s;
}

static void check_SteamInventoryRequestPricesResult_t_array(lua_State* L, int index, SteamInventoryRequestPricesResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamInventoryRequestPricesResult_t(L, -1);
	}
}
static GetVideoURLResult_t check_GetVideoURLResult_t(lua_State* L, int index) {
	GetVideoURLResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_unVideoAppID");
	lua_gettable(L, index);
	s.m_unVideoAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_rgchURL");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchURL, 256);
	return s;
}

static void check_GetVideoURLResult_t_array(lua_State* L, int index, GetVideoURLResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GetVideoURLResult_t(L, -1);
	}
}
static GetOPFSettingsResult_t check_GetOPFSettingsResult_t(lua_State* L, int index) {
	GetOPFSettingsResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_unVideoAppID");
	lua_gettable(L, index);
	s.m_unVideoAppID = check_AppId_t(L, -1);
	return s;
}

static void check_GetOPFSettingsResult_t_array(lua_State* L, int index, GetOPFSettingsResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GetOPFSettingsResult_t(L, -1);
	}
}
static SteamParentalSettingsChanged_t check_SteamParentalSettingsChanged_t(lua_State* L, int index) {
	SteamParentalSettingsChanged_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	return s;
}

static void check_SteamParentalSettingsChanged_t_array(lua_State* L, int index, SteamParentalSettingsChanged_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamParentalSettingsChanged_t(L, -1);
	}
}
static SteamRemotePlaySessionConnected_t check_SteamRemotePlaySessionConnected_t(lua_State* L, int index) {
	SteamRemotePlaySessionConnected_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_unSessionID");
	lua_gettable(L, index);
	s.m_unSessionID = check_RemotePlaySessionID_t(L, -1);
	return s;
}

static void check_SteamRemotePlaySessionConnected_t_array(lua_State* L, int index, SteamRemotePlaySessionConnected_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamRemotePlaySessionConnected_t(L, -1);
	}
}
static SteamRemotePlaySessionDisconnected_t check_SteamRemotePlaySessionDisconnected_t(lua_State* L, int index) {
	SteamRemotePlaySessionDisconnected_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_unSessionID");
	lua_gettable(L, index);
	s.m_unSessionID = check_RemotePlaySessionID_t(L, -1);
	return s;
}

static void check_SteamRemotePlaySessionDisconnected_t_array(lua_State* L, int index, SteamRemotePlaySessionDisconnected_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamRemotePlaySessionDisconnected_t(L, -1);
	}
}
static SteamNetworkingMessagesSessionRequest_t check_SteamNetworkingMessagesSessionRequest_t(lua_State* L, int index) {
	SteamNetworkingMessagesSessionRequest_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_identityRemote");
	lua_gettable(L, index);
	s.m_identityRemote = check_SteamNetworkingIdentity(L, -1);
	return s;
}

static void check_SteamNetworkingMessagesSessionRequest_t_array(lua_State* L, int index, SteamNetworkingMessagesSessionRequest_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetworkingMessagesSessionRequest_t(L, -1);
	}
}
static SteamNetworkingMessagesSessionFailed_t check_SteamNetworkingMessagesSessionFailed_t(lua_State* L, int index) {
	SteamNetworkingMessagesSessionFailed_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_info");
	lua_gettable(L, index);
	s.m_info = check_SteamNetConnectionInfo_t(L, -1);
	return s;
}

static void check_SteamNetworkingMessagesSessionFailed_t_array(lua_State* L, int index, SteamNetworkingMessagesSessionFailed_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetworkingMessagesSessionFailed_t(L, -1);
	}
}
static SteamNetConnectionStatusChangedCallback_t check_SteamNetConnectionStatusChangedCallback_t(lua_State* L, int index) {
	SteamNetConnectionStatusChangedCallback_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_hConn");
	lua_gettable(L, index);
	s.m_hConn = check_HSteamNetConnection(L, -1);
	lua_pushstring(L, "m_info");
	lua_gettable(L, index);
	s.m_info = check_SteamNetConnectionInfo_t(L, -1);
	lua_pushstring(L, "m_eOldState");
	lua_gettable(L, index);
	s.m_eOldState = check_ESteamNetworkingConnectionState(L, -1);
	return s;
}

static void check_SteamNetConnectionStatusChangedCallback_t_array(lua_State* L, int index, SteamNetConnectionStatusChangedCallback_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetConnectionStatusChangedCallback_t(L, -1);
	}
}
static SteamNetAuthenticationStatus_t check_SteamNetAuthenticationStatus_t(lua_State* L, int index) {
	SteamNetAuthenticationStatus_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eAvail");
	lua_gettable(L, index);
	s.m_eAvail = check_ESteamNetworkingAvailability(L, -1);
	lua_pushstring(L, "m_debugMsg");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_debugMsg, 256);
	return s;
}

static void check_SteamNetAuthenticationStatus_t_array(lua_State* L, int index, SteamNetAuthenticationStatus_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamNetAuthenticationStatus_t(L, -1);
	}
}
static SteamRelayNetworkStatus_t check_SteamRelayNetworkStatus_t(lua_State* L, int index) {
	SteamRelayNetworkStatus_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eAvail");
	lua_gettable(L, index);
	s.m_eAvail = check_ESteamNetworkingAvailability(L, -1);
	lua_pushstring(L, "m_bPingMeasurementInProgress");
	lua_gettable(L, index);
	s.m_bPingMeasurementInProgress = check_int(L, -1);
	lua_pushstring(L, "m_eAvailNetworkConfig");
	lua_gettable(L, index);
	s.m_eAvailNetworkConfig = check_ESteamNetworkingAvailability(L, -1);
	lua_pushstring(L, "m_eAvailAnyRelay");
	lua_gettable(L, index);
	s.m_eAvailAnyRelay = check_ESteamNetworkingAvailability(L, -1);
	lua_pushstring(L, "m_debugMsg");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_debugMsg, 256);
	return s;
}

static void check_SteamRelayNetworkStatus_t_array(lua_State* L, int index, SteamRelayNetworkStatus_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_SteamRelayNetworkStatus_t(L, -1);
	}
}
static GSClientApprove_t check_GSClientApprove_t(lua_State* L, int index) {
	GSClientApprove_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_SteamID");
	lua_gettable(L, index);
	s.m_SteamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_OwnerSteamID");
	lua_gettable(L, index);
	s.m_OwnerSteamID = check_CSteamID(L, -1);
	return s;
}

static void check_GSClientApprove_t_array(lua_State* L, int index, GSClientApprove_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSClientApprove_t(L, -1);
	}
}
static GSClientDeny_t check_GSClientDeny_t(lua_State* L, int index) {
	GSClientDeny_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_SteamID");
	lua_gettable(L, index);
	s.m_SteamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_eDenyReason");
	lua_gettable(L, index);
	s.m_eDenyReason = check_EDenyReason(L, -1);
	lua_pushstring(L, "m_rgchOptionalText");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchOptionalText, 128);
	return s;
}

static void check_GSClientDeny_t_array(lua_State* L, int index, GSClientDeny_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSClientDeny_t(L, -1);
	}
}
static GSClientKick_t check_GSClientKick_t(lua_State* L, int index) {
	GSClientKick_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_SteamID");
	lua_gettable(L, index);
	s.m_SteamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_eDenyReason");
	lua_gettable(L, index);
	s.m_eDenyReason = check_EDenyReason(L, -1);
	return s;
}

static void check_GSClientKick_t_array(lua_State* L, int index, GSClientKick_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSClientKick_t(L, -1);
	}
}
static GSClientAchievementStatus_t check_GSClientAchievementStatus_t(lua_State* L, int index) {
	GSClientAchievementStatus_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_SteamID");
	lua_gettable(L, index);
	s.m_SteamID = check_uint64(L, -1);
	lua_pushstring(L, "m_pchAchievement");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_pchAchievement, 128);
	lua_pushstring(L, "m_bUnlocked");
	lua_gettable(L, index);
	s.m_bUnlocked = check_bool(L, -1);
	return s;
}

static void check_GSClientAchievementStatus_t_array(lua_State* L, int index, GSClientAchievementStatus_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSClientAchievementStatus_t(L, -1);
	}
}
static GSPolicyResponse_t check_GSPolicyResponse_t(lua_State* L, int index) {
	GSPolicyResponse_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_bSecure");
	lua_gettable(L, index);
	s.m_bSecure = check_uint8(L, -1);
	return s;
}

static void check_GSPolicyResponse_t_array(lua_State* L, int index, GSPolicyResponse_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSPolicyResponse_t(L, -1);
	}
}
static GSGameplayStats_t check_GSGameplayStats_t(lua_State* L, int index) {
	GSGameplayStats_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nRank");
	lua_gettable(L, index);
	s.m_nRank = check_int32(L, -1);
	lua_pushstring(L, "m_unTotalConnects");
	lua_gettable(L, index);
	s.m_unTotalConnects = check_uint32(L, -1);
	lua_pushstring(L, "m_unTotalMinutesPlayed");
	lua_gettable(L, index);
	s.m_unTotalMinutesPlayed = check_uint32(L, -1);
	return s;
}

static void check_GSGameplayStats_t_array(lua_State* L, int index, GSGameplayStats_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSGameplayStats_t(L, -1);
	}
}
static GSClientGroupStatus_t check_GSClientGroupStatus_t(lua_State* L, int index) {
	GSClientGroupStatus_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_SteamIDUser");
	lua_gettable(L, index);
	s.m_SteamIDUser = check_CSteamID(L, -1);
	lua_pushstring(L, "m_SteamIDGroup");
	lua_gettable(L, index);
	s.m_SteamIDGroup = check_CSteamID(L, -1);
	lua_pushstring(L, "m_bMember");
	lua_gettable(L, index);
	s.m_bMember = check_bool(L, -1);
	lua_pushstring(L, "m_bOfficer");
	lua_gettable(L, index);
	s.m_bOfficer = check_bool(L, -1);
	return s;
}

static void check_GSClientGroupStatus_t_array(lua_State* L, int index, GSClientGroupStatus_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSClientGroupStatus_t(L, -1);
	}
}
static GSReputation_t check_GSReputation_t(lua_State* L, int index) {
	GSReputation_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_unReputationScore");
	lua_gettable(L, index);
	s.m_unReputationScore = check_uint32(L, -1);
	lua_pushstring(L, "m_bBanned");
	lua_gettable(L, index);
	s.m_bBanned = check_bool(L, -1);
	lua_pushstring(L, "m_unBannedIP");
	lua_gettable(L, index);
	s.m_unBannedIP = check_uint32(L, -1);
	lua_pushstring(L, "m_usBannedPort");
	lua_gettable(L, index);
	s.m_usBannedPort = check_uint16(L, -1);
	lua_pushstring(L, "m_ulBannedGameID");
	lua_gettable(L, index);
	s.m_ulBannedGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_unBanExpires");
	lua_gettable(L, index);
	s.m_unBanExpires = check_uint32(L, -1);
	return s;
}

static void check_GSReputation_t_array(lua_State* L, int index, GSReputation_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSReputation_t(L, -1);
	}
}
static AssociateWithClanResult_t check_AssociateWithClanResult_t(lua_State* L, int index) {
	AssociateWithClanResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static void check_AssociateWithClanResult_t_array(lua_State* L, int index, AssociateWithClanResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_AssociateWithClanResult_t(L, -1);
	}
}
static ComputeNewPlayerCompatibilityResult_t check_ComputeNewPlayerCompatibilityResult_t(lua_State* L, int index) {
	ComputeNewPlayerCompatibilityResult_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_cPlayersThatDontLikeCandidate");
	lua_gettable(L, index);
	s.m_cPlayersThatDontLikeCandidate = check_int(L, -1);
	lua_pushstring(L, "m_cPlayersThatCandidateDoesntLike");
	lua_gettable(L, index);
	s.m_cPlayersThatCandidateDoesntLike = check_int(L, -1);
	lua_pushstring(L, "m_cClanPlayersThatDontLikeCandidate");
	lua_gettable(L, index);
	s.m_cClanPlayersThatDontLikeCandidate = check_int(L, -1);
	lua_pushstring(L, "m_SteamIDCandidate");
	lua_gettable(L, index);
	s.m_SteamIDCandidate = check_CSteamID(L, -1);
	return s;
}

static void check_ComputeNewPlayerCompatibilityResult_t_array(lua_State* L, int index, ComputeNewPlayerCompatibilityResult_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_ComputeNewPlayerCompatibilityResult_t(L, -1);
	}
}
static GSStatsReceived_t check_GSStatsReceived_t(lua_State* L, int index) {
	GSStatsReceived_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static void check_GSStatsReceived_t_array(lua_State* L, int index, GSStatsReceived_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSStatsReceived_t(L, -1);
	}
}
static GSStatsStored_t check_GSStatsStored_t(lua_State* L, int index) {
	GSStatsStored_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static void check_GSStatsStored_t_array(lua_State* L, int index, GSStatsStored_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSStatsStored_t(L, -1);
	}
}
static GSStatsUnloaded_t check_GSStatsUnloaded_t(lua_State* L, int index) {
	GSStatsUnloaded_t s;
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		return s;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static void check_GSStatsUnloaded_t_array(lua_State* L, int index, GSStatsUnloaded_t *s, int size) {
	if(lua_isnil(L, index) || lua_isnone(L, index)) {
		if(size > 0) {
			luaL_error(L, "Size > 0 but no table provided");
		}
		return;
	}
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		s[i] = check_GSStatsUnloaded_t(L, -1);
	}
}




static lua_Listener steamworksListener;

class SteamCallbackWrapper {
	private:
		int64 m_iAppID;
	public:
		SteamCallbackWrapper();

		//STEAM_CALLBACK(SteamCallbackWrapper, OnGameOverlayActivated, GameOverlayActivated_t, m_CallbackGameOverlayActivated);
		STEAM_CALLBACK(SteamCallbackWrapper, OnPersonaStateChange_t, PersonaStateChange_t, m_CallbackPersonaStateChange_t);
		STEAM_CALLBACK(SteamCallbackWrapper, OnGameOverlayActivated_t, GameOverlayActivated_t, m_CallbackGameOverlayActivated_t);
		STEAM_CALLBACK(SteamCallbackWrapper, OnUserStatsReceived_t, UserStatsReceived_t, m_CallbackUserStatsReceived_t);


		
		CCallResult<SteamCallbackWrapper, EncryptedAppTicketResponse_t> m_CallResultEncryptedAppTicketResponse_t;
		void TrackSteamAPICallEncryptedAppTicketResponse_t(SteamAPICall_t steamAPICall) {
			m_CallResultEncryptedAppTicketResponse_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnEncryptedAppTicketResponse_t);
		}
		void OnEncryptedAppTicketResponse_t(EncryptedAppTicketResponse_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnEncryptedAppTicketResponse_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "EncryptedAppTicketResponse_t");
			push_EncryptedAppTicketResponse_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnEncryptedAppTicketResponse_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, StoreAuthURLResponse_t> m_CallResultStoreAuthURLResponse_t;
		void TrackSteamAPICallStoreAuthURLResponse_t(SteamAPICall_t steamAPICall) {
			m_CallResultStoreAuthURLResponse_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnStoreAuthURLResponse_t);
		}
		void OnStoreAuthURLResponse_t(StoreAuthURLResponse_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnStoreAuthURLResponse_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "StoreAuthURLResponse_t");
			push_StoreAuthURLResponse_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnStoreAuthURLResponse_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, MarketEligibilityResponse_t> m_CallResultMarketEligibilityResponse_t;
		void TrackSteamAPICallMarketEligibilityResponse_t(SteamAPICall_t steamAPICall) {
			m_CallResultMarketEligibilityResponse_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnMarketEligibilityResponse_t);
		}
		void OnMarketEligibilityResponse_t(MarketEligibilityResponse_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnMarketEligibilityResponse_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "MarketEligibilityResponse_t");
			push_MarketEligibilityResponse_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnMarketEligibilityResponse_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, DurationControl_t> m_CallResultDurationControl_t;
		void TrackSteamAPICallDurationControl_t(SteamAPICall_t steamAPICall) {
			m_CallResultDurationControl_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnDurationControl_t);
		}
		void OnDurationControl_t(DurationControl_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnDurationControl_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "DurationControl_t");
			push_DurationControl_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnDurationControl_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, ClanOfficerListResponse_t> m_CallResultClanOfficerListResponse_t;
		void TrackSteamAPICallClanOfficerListResponse_t(SteamAPICall_t steamAPICall) {
			m_CallResultClanOfficerListResponse_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnClanOfficerListResponse_t);
		}
		void OnClanOfficerListResponse_t(ClanOfficerListResponse_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnClanOfficerListResponse_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "ClanOfficerListResponse_t");
			push_ClanOfficerListResponse_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnClanOfficerListResponse_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, DownloadClanActivityCountsResult_t> m_CallResultDownloadClanActivityCountsResult_t;
		void TrackSteamAPICallDownloadClanActivityCountsResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultDownloadClanActivityCountsResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnDownloadClanActivityCountsResult_t);
		}
		void OnDownloadClanActivityCountsResult_t(DownloadClanActivityCountsResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnDownloadClanActivityCountsResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "DownloadClanActivityCountsResult_t");
			push_DownloadClanActivityCountsResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnDownloadClanActivityCountsResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, JoinClanChatRoomCompletionResult_t> m_CallResultJoinClanChatRoomCompletionResult_t;
		void TrackSteamAPICallJoinClanChatRoomCompletionResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultJoinClanChatRoomCompletionResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnJoinClanChatRoomCompletionResult_t);
		}
		void OnJoinClanChatRoomCompletionResult_t(JoinClanChatRoomCompletionResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnJoinClanChatRoomCompletionResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "JoinClanChatRoomCompletionResult_t");
			push_JoinClanChatRoomCompletionResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnJoinClanChatRoomCompletionResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, FriendsGetFollowerCount_t> m_CallResultFriendsGetFollowerCount_t;
		void TrackSteamAPICallFriendsGetFollowerCount_t(SteamAPICall_t steamAPICall) {
			m_CallResultFriendsGetFollowerCount_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnFriendsGetFollowerCount_t);
		}
		void OnFriendsGetFollowerCount_t(FriendsGetFollowerCount_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnFriendsGetFollowerCount_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "FriendsGetFollowerCount_t");
			push_FriendsGetFollowerCount_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnFriendsGetFollowerCount_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, FriendsIsFollowing_t> m_CallResultFriendsIsFollowing_t;
		void TrackSteamAPICallFriendsIsFollowing_t(SteamAPICall_t steamAPICall) {
			m_CallResultFriendsIsFollowing_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnFriendsIsFollowing_t);
		}
		void OnFriendsIsFollowing_t(FriendsIsFollowing_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnFriendsIsFollowing_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "FriendsIsFollowing_t");
			push_FriendsIsFollowing_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnFriendsIsFollowing_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, FriendsEnumerateFollowingList_t> m_CallResultFriendsEnumerateFollowingList_t;
		void TrackSteamAPICallFriendsEnumerateFollowingList_t(SteamAPICall_t steamAPICall) {
			m_CallResultFriendsEnumerateFollowingList_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnFriendsEnumerateFollowingList_t);
		}
		void OnFriendsEnumerateFollowingList_t(FriendsEnumerateFollowingList_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnFriendsEnumerateFollowingList_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "FriendsEnumerateFollowingList_t");
			push_FriendsEnumerateFollowingList_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnFriendsEnumerateFollowingList_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, SetPersonaNameResponse_t> m_CallResultSetPersonaNameResponse_t;
		void TrackSteamAPICallSetPersonaNameResponse_t(SteamAPICall_t steamAPICall) {
			m_CallResultSetPersonaNameResponse_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnSetPersonaNameResponse_t);
		}
		void OnSetPersonaNameResponse_t(SetPersonaNameResponse_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnSetPersonaNameResponse_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "SetPersonaNameResponse_t");
			push_SetPersonaNameResponse_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnSetPersonaNameResponse_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, EquippedProfileItems_t> m_CallResultEquippedProfileItems_t;
		void TrackSteamAPICallEquippedProfileItems_t(SteamAPICall_t steamAPICall) {
			m_CallResultEquippedProfileItems_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnEquippedProfileItems_t);
		}
		void OnEquippedProfileItems_t(EquippedProfileItems_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnEquippedProfileItems_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "EquippedProfileItems_t");
			push_EquippedProfileItems_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnEquippedProfileItems_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, CheckFileSignature_t> m_CallResultCheckFileSignature_t;
		void TrackSteamAPICallCheckFileSignature_t(SteamAPICall_t steamAPICall) {
			m_CallResultCheckFileSignature_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnCheckFileSignature_t);
		}
		void OnCheckFileSignature_t(CheckFileSignature_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnCheckFileSignature_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "CheckFileSignature_t");
			push_CheckFileSignature_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnCheckFileSignature_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, LobbyEnter_t> m_CallResultLobbyEnter_t;
		void TrackSteamAPICallLobbyEnter_t(SteamAPICall_t steamAPICall) {
			m_CallResultLobbyEnter_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnLobbyEnter_t);
		}
		void OnLobbyEnter_t(LobbyEnter_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnLobbyEnter_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "LobbyEnter_t");
			push_LobbyEnter_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnLobbyEnter_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, LobbyMatchList_t> m_CallResultLobbyMatchList_t;
		void TrackSteamAPICallLobbyMatchList_t(SteamAPICall_t steamAPICall) {
			m_CallResultLobbyMatchList_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnLobbyMatchList_t);
		}
		void OnLobbyMatchList_t(LobbyMatchList_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnLobbyMatchList_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "LobbyMatchList_t");
			push_LobbyMatchList_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnLobbyMatchList_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, LobbyCreated_t> m_CallResultLobbyCreated_t;
		void TrackSteamAPICallLobbyCreated_t(SteamAPICall_t steamAPICall) {
			m_CallResultLobbyCreated_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnLobbyCreated_t);
		}
		void OnLobbyCreated_t(LobbyCreated_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnLobbyCreated_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "LobbyCreated_t");
			push_LobbyCreated_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnLobbyCreated_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, JoinPartyCallback_t> m_CallResultJoinPartyCallback_t;
		void TrackSteamAPICallJoinPartyCallback_t(SteamAPICall_t steamAPICall) {
			m_CallResultJoinPartyCallback_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnJoinPartyCallback_t);
		}
		void OnJoinPartyCallback_t(JoinPartyCallback_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnJoinPartyCallback_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "JoinPartyCallback_t");
			push_JoinPartyCallback_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnJoinPartyCallback_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, CreateBeaconCallback_t> m_CallResultCreateBeaconCallback_t;
		void TrackSteamAPICallCreateBeaconCallback_t(SteamAPICall_t steamAPICall) {
			m_CallResultCreateBeaconCallback_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnCreateBeaconCallback_t);
		}
		void OnCreateBeaconCallback_t(CreateBeaconCallback_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnCreateBeaconCallback_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "CreateBeaconCallback_t");
			push_CreateBeaconCallback_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnCreateBeaconCallback_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, ChangeNumOpenSlotsCallback_t> m_CallResultChangeNumOpenSlotsCallback_t;
		void TrackSteamAPICallChangeNumOpenSlotsCallback_t(SteamAPICall_t steamAPICall) {
			m_CallResultChangeNumOpenSlotsCallback_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnChangeNumOpenSlotsCallback_t);
		}
		void OnChangeNumOpenSlotsCallback_t(ChangeNumOpenSlotsCallback_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnChangeNumOpenSlotsCallback_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "ChangeNumOpenSlotsCallback_t");
			push_ChangeNumOpenSlotsCallback_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnChangeNumOpenSlotsCallback_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageFileShareResult_t> m_CallResultRemoteStorageFileShareResult_t;
		void TrackSteamAPICallRemoteStorageFileShareResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageFileShareResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageFileShareResult_t);
		}
		void OnRemoteStorageFileShareResult_t(RemoteStorageFileShareResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageFileShareResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageFileShareResult_t");
			push_RemoteStorageFileShareResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageFileShareResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageDeletePublishedFileResult_t> m_CallResultRemoteStorageDeletePublishedFileResult_t;
		void TrackSteamAPICallRemoteStorageDeletePublishedFileResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageDeletePublishedFileResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageDeletePublishedFileResult_t);
		}
		void OnRemoteStorageDeletePublishedFileResult_t(RemoteStorageDeletePublishedFileResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageDeletePublishedFileResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageDeletePublishedFileResult_t");
			push_RemoteStorageDeletePublishedFileResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageDeletePublishedFileResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageEnumerateUserPublishedFilesResult_t> m_CallResultRemoteStorageEnumerateUserPublishedFilesResult_t;
		void TrackSteamAPICallRemoteStorageEnumerateUserPublishedFilesResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageEnumerateUserPublishedFilesResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageEnumerateUserPublishedFilesResult_t);
		}
		void OnRemoteStorageEnumerateUserPublishedFilesResult_t(RemoteStorageEnumerateUserPublishedFilesResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageEnumerateUserPublishedFilesResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageEnumerateUserPublishedFilesResult_t");
			push_RemoteStorageEnumerateUserPublishedFilesResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageEnumerateUserPublishedFilesResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageSubscribePublishedFileResult_t> m_CallResultRemoteStorageSubscribePublishedFileResult_t;
		void TrackSteamAPICallRemoteStorageSubscribePublishedFileResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageSubscribePublishedFileResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageSubscribePublishedFileResult_t);
		}
		void OnRemoteStorageSubscribePublishedFileResult_t(RemoteStorageSubscribePublishedFileResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageSubscribePublishedFileResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageSubscribePublishedFileResult_t");
			push_RemoteStorageSubscribePublishedFileResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageSubscribePublishedFileResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageEnumerateUserSubscribedFilesResult_t> m_CallResultRemoteStorageEnumerateUserSubscribedFilesResult_t;
		void TrackSteamAPICallRemoteStorageEnumerateUserSubscribedFilesResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageEnumerateUserSubscribedFilesResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageEnumerateUserSubscribedFilesResult_t);
		}
		void OnRemoteStorageEnumerateUserSubscribedFilesResult_t(RemoteStorageEnumerateUserSubscribedFilesResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageEnumerateUserSubscribedFilesResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageEnumerateUserSubscribedFilesResult_t");
			push_RemoteStorageEnumerateUserSubscribedFilesResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageEnumerateUserSubscribedFilesResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageUnsubscribePublishedFileResult_t> m_CallResultRemoteStorageUnsubscribePublishedFileResult_t;
		void TrackSteamAPICallRemoteStorageUnsubscribePublishedFileResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageUnsubscribePublishedFileResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageUnsubscribePublishedFileResult_t);
		}
		void OnRemoteStorageUnsubscribePublishedFileResult_t(RemoteStorageUnsubscribePublishedFileResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageUnsubscribePublishedFileResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageUnsubscribePublishedFileResult_t");
			push_RemoteStorageUnsubscribePublishedFileResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageUnsubscribePublishedFileResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageUpdatePublishedFileResult_t> m_CallResultRemoteStorageUpdatePublishedFileResult_t;
		void TrackSteamAPICallRemoteStorageUpdatePublishedFileResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageUpdatePublishedFileResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageUpdatePublishedFileResult_t);
		}
		void OnRemoteStorageUpdatePublishedFileResult_t(RemoteStorageUpdatePublishedFileResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageUpdatePublishedFileResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageUpdatePublishedFileResult_t");
			push_RemoteStorageUpdatePublishedFileResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageUpdatePublishedFileResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageDownloadUGCResult_t> m_CallResultRemoteStorageDownloadUGCResult_t;
		void TrackSteamAPICallRemoteStorageDownloadUGCResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageDownloadUGCResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageDownloadUGCResult_t);
		}
		void OnRemoteStorageDownloadUGCResult_t(RemoteStorageDownloadUGCResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageDownloadUGCResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageDownloadUGCResult_t");
			push_RemoteStorageDownloadUGCResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageDownloadUGCResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageGetPublishedFileDetailsResult_t> m_CallResultRemoteStorageGetPublishedFileDetailsResult_t;
		void TrackSteamAPICallRemoteStorageGetPublishedFileDetailsResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageGetPublishedFileDetailsResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageGetPublishedFileDetailsResult_t);
		}
		void OnRemoteStorageGetPublishedFileDetailsResult_t(RemoteStorageGetPublishedFileDetailsResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageGetPublishedFileDetailsResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageGetPublishedFileDetailsResult_t");
			push_RemoteStorageGetPublishedFileDetailsResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageGetPublishedFileDetailsResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageEnumerateWorkshopFilesResult_t> m_CallResultRemoteStorageEnumerateWorkshopFilesResult_t;
		void TrackSteamAPICallRemoteStorageEnumerateWorkshopFilesResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageEnumerateWorkshopFilesResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageEnumerateWorkshopFilesResult_t);
		}
		void OnRemoteStorageEnumerateWorkshopFilesResult_t(RemoteStorageEnumerateWorkshopFilesResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageEnumerateWorkshopFilesResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageEnumerateWorkshopFilesResult_t");
			push_RemoteStorageEnumerateWorkshopFilesResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageEnumerateWorkshopFilesResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageGetPublishedItemVoteDetailsResult_t> m_CallResultRemoteStorageGetPublishedItemVoteDetailsResult_t;
		void TrackSteamAPICallRemoteStorageGetPublishedItemVoteDetailsResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageGetPublishedItemVoteDetailsResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageGetPublishedItemVoteDetailsResult_t);
		}
		void OnRemoteStorageGetPublishedItemVoteDetailsResult_t(RemoteStorageGetPublishedItemVoteDetailsResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageGetPublishedItemVoteDetailsResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageGetPublishedItemVoteDetailsResult_t");
			push_RemoteStorageGetPublishedItemVoteDetailsResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageGetPublishedItemVoteDetailsResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageUpdateUserPublishedItemVoteResult_t> m_CallResultRemoteStorageUpdateUserPublishedItemVoteResult_t;
		void TrackSteamAPICallRemoteStorageUpdateUserPublishedItemVoteResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageUpdateUserPublishedItemVoteResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageUpdateUserPublishedItemVoteResult_t);
		}
		void OnRemoteStorageUpdateUserPublishedItemVoteResult_t(RemoteStorageUpdateUserPublishedItemVoteResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageUpdateUserPublishedItemVoteResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageUpdateUserPublishedItemVoteResult_t");
			push_RemoteStorageUpdateUserPublishedItemVoteResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageUpdateUserPublishedItemVoteResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageSetUserPublishedFileActionResult_t> m_CallResultRemoteStorageSetUserPublishedFileActionResult_t;
		void TrackSteamAPICallRemoteStorageSetUserPublishedFileActionResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageSetUserPublishedFileActionResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageSetUserPublishedFileActionResult_t);
		}
		void OnRemoteStorageSetUserPublishedFileActionResult_t(RemoteStorageSetUserPublishedFileActionResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageSetUserPublishedFileActionResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageSetUserPublishedFileActionResult_t");
			push_RemoteStorageSetUserPublishedFileActionResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageSetUserPublishedFileActionResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageEnumeratePublishedFilesByUserActionResult_t> m_CallResultRemoteStorageEnumeratePublishedFilesByUserActionResult_t;
		void TrackSteamAPICallRemoteStorageEnumeratePublishedFilesByUserActionResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageEnumeratePublishedFilesByUserActionResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageEnumeratePublishedFilesByUserActionResult_t);
		}
		void OnRemoteStorageEnumeratePublishedFilesByUserActionResult_t(RemoteStorageEnumeratePublishedFilesByUserActionResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageEnumeratePublishedFilesByUserActionResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageEnumeratePublishedFilesByUserActionResult_t");
			push_RemoteStorageEnumeratePublishedFilesByUserActionResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageEnumeratePublishedFilesByUserActionResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStoragePublishFileProgress_t> m_CallResultRemoteStoragePublishFileProgress_t;
		void TrackSteamAPICallRemoteStoragePublishFileProgress_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStoragePublishFileProgress_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStoragePublishFileProgress_t);
		}
		void OnRemoteStoragePublishFileProgress_t(RemoteStoragePublishFileProgress_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStoragePublishFileProgress_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStoragePublishFileProgress_t");
			push_RemoteStoragePublishFileProgress_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStoragePublishFileProgress_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageFileWriteAsyncComplete_t> m_CallResultRemoteStorageFileWriteAsyncComplete_t;
		void TrackSteamAPICallRemoteStorageFileWriteAsyncComplete_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageFileWriteAsyncComplete_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageFileWriteAsyncComplete_t);
		}
		void OnRemoteStorageFileWriteAsyncComplete_t(RemoteStorageFileWriteAsyncComplete_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageFileWriteAsyncComplete_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageFileWriteAsyncComplete_t");
			push_RemoteStorageFileWriteAsyncComplete_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageFileWriteAsyncComplete_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoteStorageFileReadAsyncComplete_t> m_CallResultRemoteStorageFileReadAsyncComplete_t;
		void TrackSteamAPICallRemoteStorageFileReadAsyncComplete_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoteStorageFileReadAsyncComplete_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoteStorageFileReadAsyncComplete_t);
		}
		void OnRemoteStorageFileReadAsyncComplete_t(RemoteStorageFileReadAsyncComplete_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoteStorageFileReadAsyncComplete_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoteStorageFileReadAsyncComplete_t");
			push_RemoteStorageFileReadAsyncComplete_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoteStorageFileReadAsyncComplete_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, UserStatsReceived_t> m_CallResultUserStatsReceived_t;
		void TrackSteamAPICallUserStatsReceived_t(SteamAPICall_t steamAPICall) {
			m_CallResultUserStatsReceived_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnUserStatsReceived_t);
		}
		void OnUserStatsReceived_t(UserStatsReceived_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnUserStatsReceived_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "UserStatsReceived_t");
			push_UserStatsReceived_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnUserStatsReceived_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, LeaderboardFindResult_t> m_CallResultLeaderboardFindResult_t;
		void TrackSteamAPICallLeaderboardFindResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultLeaderboardFindResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnLeaderboardFindResult_t);
		}
		void OnLeaderboardFindResult_t(LeaderboardFindResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnLeaderboardFindResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "LeaderboardFindResult_t");
			push_LeaderboardFindResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnLeaderboardFindResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, LeaderboardScoresDownloaded_t> m_CallResultLeaderboardScoresDownloaded_t;
		void TrackSteamAPICallLeaderboardScoresDownloaded_t(SteamAPICall_t steamAPICall) {
			m_CallResultLeaderboardScoresDownloaded_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnLeaderboardScoresDownloaded_t);
		}
		void OnLeaderboardScoresDownloaded_t(LeaderboardScoresDownloaded_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnLeaderboardScoresDownloaded_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "LeaderboardScoresDownloaded_t");
			push_LeaderboardScoresDownloaded_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnLeaderboardScoresDownloaded_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, LeaderboardScoreUploaded_t> m_CallResultLeaderboardScoreUploaded_t;
		void TrackSteamAPICallLeaderboardScoreUploaded_t(SteamAPICall_t steamAPICall) {
			m_CallResultLeaderboardScoreUploaded_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnLeaderboardScoreUploaded_t);
		}
		void OnLeaderboardScoreUploaded_t(LeaderboardScoreUploaded_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnLeaderboardScoreUploaded_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "LeaderboardScoreUploaded_t");
			push_LeaderboardScoreUploaded_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnLeaderboardScoreUploaded_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, NumberOfCurrentPlayers_t> m_CallResultNumberOfCurrentPlayers_t;
		void TrackSteamAPICallNumberOfCurrentPlayers_t(SteamAPICall_t steamAPICall) {
			m_CallResultNumberOfCurrentPlayers_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnNumberOfCurrentPlayers_t);
		}
		void OnNumberOfCurrentPlayers_t(NumberOfCurrentPlayers_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnNumberOfCurrentPlayers_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "NumberOfCurrentPlayers_t");
			push_NumberOfCurrentPlayers_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnNumberOfCurrentPlayers_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, GlobalAchievementPercentagesReady_t> m_CallResultGlobalAchievementPercentagesReady_t;
		void TrackSteamAPICallGlobalAchievementPercentagesReady_t(SteamAPICall_t steamAPICall) {
			m_CallResultGlobalAchievementPercentagesReady_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnGlobalAchievementPercentagesReady_t);
		}
		void OnGlobalAchievementPercentagesReady_t(GlobalAchievementPercentagesReady_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnGlobalAchievementPercentagesReady_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "GlobalAchievementPercentagesReady_t");
			push_GlobalAchievementPercentagesReady_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnGlobalAchievementPercentagesReady_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, LeaderboardUGCSet_t> m_CallResultLeaderboardUGCSet_t;
		void TrackSteamAPICallLeaderboardUGCSet_t(SteamAPICall_t steamAPICall) {
			m_CallResultLeaderboardUGCSet_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnLeaderboardUGCSet_t);
		}
		void OnLeaderboardUGCSet_t(LeaderboardUGCSet_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnLeaderboardUGCSet_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "LeaderboardUGCSet_t");
			push_LeaderboardUGCSet_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnLeaderboardUGCSet_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, GlobalStatsReceived_t> m_CallResultGlobalStatsReceived_t;
		void TrackSteamAPICallGlobalStatsReceived_t(SteamAPICall_t steamAPICall) {
			m_CallResultGlobalStatsReceived_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnGlobalStatsReceived_t);
		}
		void OnGlobalStatsReceived_t(GlobalStatsReceived_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnGlobalStatsReceived_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "GlobalStatsReceived_t");
			push_GlobalStatsReceived_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnGlobalStatsReceived_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, FileDetailsResult_t> m_CallResultFileDetailsResult_t;
		void TrackSteamAPICallFileDetailsResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultFileDetailsResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnFileDetailsResult_t);
		}
		void OnFileDetailsResult_t(FileDetailsResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnFileDetailsResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "FileDetailsResult_t");
			push_FileDetailsResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnFileDetailsResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, SteamUGCQueryCompleted_t> m_CallResultSteamUGCQueryCompleted_t;
		void TrackSteamAPICallSteamUGCQueryCompleted_t(SteamAPICall_t steamAPICall) {
			m_CallResultSteamUGCQueryCompleted_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnSteamUGCQueryCompleted_t);
		}
		void OnSteamUGCQueryCompleted_t(SteamUGCQueryCompleted_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnSteamUGCQueryCompleted_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "SteamUGCQueryCompleted_t");
			push_SteamUGCQueryCompleted_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnSteamUGCQueryCompleted_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, SteamUGCRequestUGCDetailsResult_t> m_CallResultSteamUGCRequestUGCDetailsResult_t;
		void TrackSteamAPICallSteamUGCRequestUGCDetailsResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultSteamUGCRequestUGCDetailsResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnSteamUGCRequestUGCDetailsResult_t);
		}
		void OnSteamUGCRequestUGCDetailsResult_t(SteamUGCRequestUGCDetailsResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnSteamUGCRequestUGCDetailsResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "SteamUGCRequestUGCDetailsResult_t");
			push_SteamUGCRequestUGCDetailsResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnSteamUGCRequestUGCDetailsResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, CreateItemResult_t> m_CallResultCreateItemResult_t;
		void TrackSteamAPICallCreateItemResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultCreateItemResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnCreateItemResult_t);
		}
		void OnCreateItemResult_t(CreateItemResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnCreateItemResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "CreateItemResult_t");
			push_CreateItemResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnCreateItemResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, SubmitItemUpdateResult_t> m_CallResultSubmitItemUpdateResult_t;
		void TrackSteamAPICallSubmitItemUpdateResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultSubmitItemUpdateResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnSubmitItemUpdateResult_t);
		}
		void OnSubmitItemUpdateResult_t(SubmitItemUpdateResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnSubmitItemUpdateResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "SubmitItemUpdateResult_t");
			push_SubmitItemUpdateResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnSubmitItemUpdateResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, UserFavoriteItemsListChanged_t> m_CallResultUserFavoriteItemsListChanged_t;
		void TrackSteamAPICallUserFavoriteItemsListChanged_t(SteamAPICall_t steamAPICall) {
			m_CallResultUserFavoriteItemsListChanged_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnUserFavoriteItemsListChanged_t);
		}
		void OnUserFavoriteItemsListChanged_t(UserFavoriteItemsListChanged_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnUserFavoriteItemsListChanged_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "UserFavoriteItemsListChanged_t");
			push_UserFavoriteItemsListChanged_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnUserFavoriteItemsListChanged_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, SetUserItemVoteResult_t> m_CallResultSetUserItemVoteResult_t;
		void TrackSteamAPICallSetUserItemVoteResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultSetUserItemVoteResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnSetUserItemVoteResult_t);
		}
		void OnSetUserItemVoteResult_t(SetUserItemVoteResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnSetUserItemVoteResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "SetUserItemVoteResult_t");
			push_SetUserItemVoteResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnSetUserItemVoteResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, GetUserItemVoteResult_t> m_CallResultGetUserItemVoteResult_t;
		void TrackSteamAPICallGetUserItemVoteResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultGetUserItemVoteResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnGetUserItemVoteResult_t);
		}
		void OnGetUserItemVoteResult_t(GetUserItemVoteResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnGetUserItemVoteResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "GetUserItemVoteResult_t");
			push_GetUserItemVoteResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnGetUserItemVoteResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, StartPlaytimeTrackingResult_t> m_CallResultStartPlaytimeTrackingResult_t;
		void TrackSteamAPICallStartPlaytimeTrackingResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultStartPlaytimeTrackingResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnStartPlaytimeTrackingResult_t);
		}
		void OnStartPlaytimeTrackingResult_t(StartPlaytimeTrackingResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnStartPlaytimeTrackingResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "StartPlaytimeTrackingResult_t");
			push_StartPlaytimeTrackingResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnStartPlaytimeTrackingResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, StopPlaytimeTrackingResult_t> m_CallResultStopPlaytimeTrackingResult_t;
		void TrackSteamAPICallStopPlaytimeTrackingResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultStopPlaytimeTrackingResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnStopPlaytimeTrackingResult_t);
		}
		void OnStopPlaytimeTrackingResult_t(StopPlaytimeTrackingResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnStopPlaytimeTrackingResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "StopPlaytimeTrackingResult_t");
			push_StopPlaytimeTrackingResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnStopPlaytimeTrackingResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, AddUGCDependencyResult_t> m_CallResultAddUGCDependencyResult_t;
		void TrackSteamAPICallAddUGCDependencyResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultAddUGCDependencyResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnAddUGCDependencyResult_t);
		}
		void OnAddUGCDependencyResult_t(AddUGCDependencyResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnAddUGCDependencyResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "AddUGCDependencyResult_t");
			push_AddUGCDependencyResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnAddUGCDependencyResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoveUGCDependencyResult_t> m_CallResultRemoveUGCDependencyResult_t;
		void TrackSteamAPICallRemoveUGCDependencyResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoveUGCDependencyResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoveUGCDependencyResult_t);
		}
		void OnRemoveUGCDependencyResult_t(RemoveUGCDependencyResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoveUGCDependencyResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoveUGCDependencyResult_t");
			push_RemoveUGCDependencyResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoveUGCDependencyResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, AddAppDependencyResult_t> m_CallResultAddAppDependencyResult_t;
		void TrackSteamAPICallAddAppDependencyResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultAddAppDependencyResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnAddAppDependencyResult_t);
		}
		void OnAddAppDependencyResult_t(AddAppDependencyResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnAddAppDependencyResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "AddAppDependencyResult_t");
			push_AddAppDependencyResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnAddAppDependencyResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, RemoveAppDependencyResult_t> m_CallResultRemoveAppDependencyResult_t;
		void TrackSteamAPICallRemoveAppDependencyResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultRemoveAppDependencyResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnRemoveAppDependencyResult_t);
		}
		void OnRemoveAppDependencyResult_t(RemoveAppDependencyResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnRemoveAppDependencyResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "RemoveAppDependencyResult_t");
			push_RemoveAppDependencyResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnRemoveAppDependencyResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, GetAppDependenciesResult_t> m_CallResultGetAppDependenciesResult_t;
		void TrackSteamAPICallGetAppDependenciesResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultGetAppDependenciesResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnGetAppDependenciesResult_t);
		}
		void OnGetAppDependenciesResult_t(GetAppDependenciesResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnGetAppDependenciesResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "GetAppDependenciesResult_t");
			push_GetAppDependenciesResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnGetAppDependenciesResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, DeleteItemResult_t> m_CallResultDeleteItemResult_t;
		void TrackSteamAPICallDeleteItemResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultDeleteItemResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnDeleteItemResult_t);
		}
		void OnDeleteItemResult_t(DeleteItemResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnDeleteItemResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "DeleteItemResult_t");
			push_DeleteItemResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnDeleteItemResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, WorkshopEULAStatus_t> m_CallResultWorkshopEULAStatus_t;
		void TrackSteamAPICallWorkshopEULAStatus_t(SteamAPICall_t steamAPICall) {
			m_CallResultWorkshopEULAStatus_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnWorkshopEULAStatus_t);
		}
		void OnWorkshopEULAStatus_t(WorkshopEULAStatus_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnWorkshopEULAStatus_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "WorkshopEULAStatus_t");
			push_WorkshopEULAStatus_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnWorkshopEULAStatus_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, SteamInventoryEligiblePromoItemDefIDs_t> m_CallResultSteamInventoryEligiblePromoItemDefIDs_t;
		void TrackSteamAPICallSteamInventoryEligiblePromoItemDefIDs_t(SteamAPICall_t steamAPICall) {
			m_CallResultSteamInventoryEligiblePromoItemDefIDs_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnSteamInventoryEligiblePromoItemDefIDs_t);
		}
		void OnSteamInventoryEligiblePromoItemDefIDs_t(SteamInventoryEligiblePromoItemDefIDs_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnSteamInventoryEligiblePromoItemDefIDs_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "SteamInventoryEligiblePromoItemDefIDs_t");
			push_SteamInventoryEligiblePromoItemDefIDs_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnSteamInventoryEligiblePromoItemDefIDs_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, SteamInventoryStartPurchaseResult_t> m_CallResultSteamInventoryStartPurchaseResult_t;
		void TrackSteamAPICallSteamInventoryStartPurchaseResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultSteamInventoryStartPurchaseResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnSteamInventoryStartPurchaseResult_t);
		}
		void OnSteamInventoryStartPurchaseResult_t(SteamInventoryStartPurchaseResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnSteamInventoryStartPurchaseResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "SteamInventoryStartPurchaseResult_t");
			push_SteamInventoryStartPurchaseResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnSteamInventoryStartPurchaseResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
		CCallResult<SteamCallbackWrapper, SteamInventoryRequestPricesResult_t> m_CallResultSteamInventoryRequestPricesResult_t;
		void TrackSteamAPICallSteamInventoryRequestPricesResult_t(SteamAPICall_t steamAPICall) {
			m_CallResultSteamInventoryRequestPricesResult_t.Set(steamAPICall, this, &SteamCallbackWrapper::OnSteamInventoryRequestPricesResult_t);
		}
		void OnSteamInventoryRequestPricesResult_t(SteamInventoryRequestPricesResult_t *pResult, bool bIOFailure) {
			dmLogInfo("SteamCallbackWrapper::OnSteamInventoryRequestPricesResult_t\n");
			lua_State* L = steamworksListener.m_L;
			if (!L) {
				dmLogInfo("no lua state\n");
				return;
			}
			int top = lua_gettop(L);
			lua_pushlistener(L, steamworksListener);

			lua_pushstring(L, "SteamInventoryRequestPricesResult_t");
			push_SteamInventoryRequestPricesResult_t(L, *pResult);
			int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
			if (ret != 0) {
				dmLogInfo("SteamCallbackWrapper::OnSteamInventoryRequestPricesResult_t error: %s\n", lua_tostring(L, -1));
				lua_pop(L, 1);
			}
			assert(top == lua_gettop(L));
		}
		
};

// ctor
SteamCallbackWrapper::SteamCallbackWrapper() :

	m_CallbackPersonaStateChange_t(this, &SteamCallbackWrapper::OnPersonaStateChange_t),
	m_CallbackGameOverlayActivated_t(this, &SteamCallbackWrapper::OnGameOverlayActivated_t),
	m_CallbackUserStatsReceived_t(this, &SteamCallbackWrapper::OnUserStatsReceived_t),
	m_iAppID( 0 )
{
	//m_iAppID = SteamUtils()->GetAppID();
}

void SteamCallbackWrapper::OnPersonaStateChange_t(PersonaStateChange_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnPersonaStateChange_t\n");
	lua_State* L = steamworksListener.m_L;
	if (!L) {
		// no listener set
		return;
	}
	int top = lua_gettop(L);
	lua_pushlistener(L, steamworksListener);
	lua_pushstring(L, "PersonaStateChange_t");
	push_PersonaStateChange_t(L, *pCallback);
	int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
	if (ret != 0) {
		dmLogInfo("SteamCallbackWrapper::OnPersonaStateChange_t error: %s\n", lua_tostring(L, -1));
		lua_pop(L, 1);
	}
	assert(top == lua_gettop(L));

}
void SteamCallbackWrapper::OnGameOverlayActivated_t(GameOverlayActivated_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnGameOverlayActivated_t\n");
	lua_State* L = steamworksListener.m_L;
	if (!L) {
		// no listener set
		return;
	}
	int top = lua_gettop(L);
	lua_pushlistener(L, steamworksListener);
	lua_pushstring(L, "GameOverlayActivated_t");
	push_GameOverlayActivated_t(L, *pCallback);
	int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
	if (ret != 0) {
		dmLogInfo("SteamCallbackWrapper::OnGameOverlayActivated_t error: %s\n", lua_tostring(L, -1));
		lua_pop(L, 1);
	}
	assert(top == lua_gettop(L));

}
void SteamCallbackWrapper::OnUserStatsReceived_t(UserStatsReceived_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnUserStatsReceived_t\n");
	lua_State* L = steamworksListener.m_L;
	if (!L) {
		// no listener set
		return;
	}
	int top = lua_gettop(L);
	lua_pushlistener(L, steamworksListener);
	lua_pushstring(L, "UserStatsReceived_t");
	push_UserStatsReceived_t(L, *pCallback);
	int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
	if (ret != 0) {
		dmLogInfo("SteamCallbackWrapper::OnUserStatsReceived_t error: %s\n", lua_tostring(L, -1));
		lua_pop(L, 1);
	}
	assert(top == lua_gettop(L));

}


static SteamCallbackWrapper *steamCallbackWrapper = new SteamCallbackWrapper();





static int ISteamUser_GetHSteamUser(lua_State* L) {
	int top = lua_gettop(L);

	HSteamUser r = user->GetHSteamUser();
	push_HSteamUser(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_BLoggedOn(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BLoggedOn();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_GetSteamID(lua_State* L) {
	int top = lua_gettop(L);

	CSteamID r = user->GetSteamID();
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_TrackAppUsageEvent(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchExtraInfo = check_const_char_ptr(L, 3); /*normal*/
	int eAppUsageEvent = check_int(L, 2); /*normal*/
	CGameID gameID = check_CGameID(L, 1); /*normal*/

	user->TrackAppUsageEvent(gameID, eAppUsageEvent, pchExtraInfo);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_GetUserDataFolder(lua_State* L) {
	int top = lua_gettop(L);
	int cubBuffer = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pchBuffer_buffer = check_buffer(L, 1); /*buffer_param*/
	char * pchBuffer = 0x0;
	uint32_t pchBuffer_buffersize = 0;
	dmBuffer::Result pchBuffer_buffer_result = dmBuffer::GetBytes(pchBuffer_buffer->m_Buffer, (void**)&pchBuffer, &pchBuffer_buffersize);

	bool r = user->GetUserDataFolder(pchBuffer, cubBuffer);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_GetAuthSessionTicket(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pcbTicket = check_uint32(L, 3); /*out_param*/
	int cbMaxTicket = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pTicket_buffer = check_buffer(L, 1); /*buffer_param*/
	void * pTicket = 0x0;
	uint32_t pTicket_buffersize = 0;
	dmBuffer::Result pTicket_buffer_result = dmBuffer::GetBytes(pTicket_buffer->m_Buffer, (void**)&pTicket, &pTicket_buffersize);

	HAuthTicket r = user->GetAuthSessionTicket(pTicket, cbMaxTicket, &pcbTicket);
	push_HAuthTicket(L, r);
	push_uint32(L, pcbTicket); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUser_BeginAuthSession(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamID = check_CSteamID(L, 3); /*normal*/
	int cbAuthTicket = check_int(L, 2); /*normal*/
	const void * pAuthTicket = check_const_void_ptr(L, 1); /*normal*/

	EBeginAuthSessionResult r = user->BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
	push_EBeginAuthSessionResult(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_EndAuthSession(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/

	user->EndAuthSession(steamID);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_CancelAuthTicket(lua_State* L) {
	int top = lua_gettop(L);
	HAuthTicket hAuthTicket = check_HAuthTicket(L, 1); /*normal*/

	user->CancelAuthTicket(hAuthTicket);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_UserHasLicenseForApp(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t appID = check_AppId_t(L, 2); /*normal*/
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/

	EUserHasLicenseForAppResult r = user->UserHasLicenseForApp(steamID, appID);
	push_EUserHasLicenseForAppResult(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_BIsBehindNAT(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BIsBehindNAT();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_AdvertiseGame(lua_State* L) {
	int top = lua_gettop(L);
	uint16 usPortServer = check_uint16(L, 3); /*normal*/
	uint32 unIPServer = check_uint32(L, 2); /*normal*/
	CSteamID steamIDGameServer = check_CSteamID(L, 1); /*normal*/

	user->AdvertiseGame(steamIDGameServer, unIPServer, usPortServer);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_RequestEncryptedAppTicket(lua_State* L) {
	int top = lua_gettop(L);
	int cbDataToInclude = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pDataToInclude_buffer = check_buffer(L, 1); /*buffer_param*/
	void * pDataToInclude = 0x0;
	uint32_t pDataToInclude_buffersize = 0;
	dmBuffer::Result pDataToInclude_buffer_result = dmBuffer::GetBytes(pDataToInclude_buffer->m_Buffer, (void**)&pDataToInclude, &pDataToInclude_buffersize);

	SteamAPICall_t r = user->RequestEncryptedAppTicket(pDataToInclude, cbDataToInclude);
	steamCallbackWrapper->TrackSteamAPICallEncryptedAppTicketResponse_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_GetEncryptedAppTicket(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pcbTicket = check_uint32(L, 3); /*out_param*/
	int cbMaxTicket = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pTicket_buffer = check_buffer(L, 1); /*buffer_param*/
	void * pTicket = 0x0;
	uint32_t pTicket_buffersize = 0;
	dmBuffer::Result pTicket_buffer_result = dmBuffer::GetBytes(pTicket_buffer->m_Buffer, (void**)&pTicket, &pTicket_buffersize);

	bool r = user->GetEncryptedAppTicket(pTicket, cbMaxTicket, &pcbTicket);
	push_bool(L, r);
	push_uint32(L, pcbTicket); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUser_GetGameBadgeLevel(lua_State* L) {
	int top = lua_gettop(L);
	bool bFoil = check_bool(L, 2); /*normal*/
	int nSeries = check_int(L, 1); /*normal*/

	int r = user->GetGameBadgeLevel(nSeries, bFoil);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_GetPlayerSteamLevel(lua_State* L) {
	int top = lua_gettop(L);

	int r = user->GetPlayerSteamLevel();
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_RequestStoreAuthURL(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchRedirectURL = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = user->RequestStoreAuthURL(pchRedirectURL);
	steamCallbackWrapper->TrackSteamAPICallStoreAuthURLResponse_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_BIsPhoneVerified(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BIsPhoneVerified();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_BIsTwoFactorEnabled(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BIsTwoFactorEnabled();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_BIsPhoneIdentifying(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BIsPhoneIdentifying();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_BIsPhoneRequiringVerification(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BIsPhoneRequiringVerification();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_GetMarketEligibility(lua_State* L) {
	int top = lua_gettop(L);

	SteamAPICall_t r = user->GetMarketEligibility();
	steamCallbackWrapper->TrackSteamAPICallMarketEligibilityResponse_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_GetDurationControl(lua_State* L) {
	int top = lua_gettop(L);

	SteamAPICall_t r = user->GetDurationControl();
	steamCallbackWrapper->TrackSteamAPICallDurationControl_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_BSetDurationControlOnlineState(lua_State* L) {
	int top = lua_gettop(L);
	EDurationControlOnlineState eNewState = check_EDurationControlOnlineState(L, 1); /*normal*/

	bool r = user->BSetDurationControlOnlineState(eNewState);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetPersonaName(lua_State* L) {
	int top = lua_gettop(L);

	const char * r = friends->GetPersonaName();
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_SetPersonaName(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchPersonaName = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = friends->SetPersonaName(pchPersonaName);
	steamCallbackWrapper->TrackSteamAPICallSetPersonaNameResponse_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_GetPersonaState(lua_State* L) {
	int top = lua_gettop(L);

	EPersonaState r = friends->GetPersonaState();
	push_EPersonaState(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendCount(lua_State* L) {
	int top = lua_gettop(L);
	int iFriendFlags = check_int(L, 1); /*normal*/

	int r = friends->GetFriendCount(iFriendFlags);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iFriendFlags = check_int(L, 2); /*normal*/
	int iFriend = check_int(L, 1); /*normal*/

	CSteamID r = friends->GetFriendByIndex(iFriend, iFriendFlags);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendRelationship(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	EFriendRelationship r = friends->GetFriendRelationship(steamIDFriend);
	push_EFriendRelationship(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendPersonaState(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	EPersonaState r = friends->GetFriendPersonaState(steamIDFriend);
	push_EPersonaState(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendPersonaName(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendPersonaName(steamIDFriend);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendGamePlayed(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/
	FriendGameInfo_t pFriendGameInfo; /*out_struct*/

	bool r = friends->GetFriendGamePlayed(steamIDFriend, &pFriendGameInfo);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendPersonaNameHistory(lua_State* L) {
	int top = lua_gettop(L);
	int iPersonaName = check_int(L, 2); /*normal*/
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendSteamLevel(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendSteamLevel(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetPlayerNickname(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDPlayer = check_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetPlayerNickname(steamIDPlayer);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendsGroupCount(lua_State* L) {
	int top = lua_gettop(L);

	int r = friends->GetFriendsGroupCount();
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendsGroupIDByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iFG = check_int(L, 1); /*normal*/

	FriendsGroupID_t r = friends->GetFriendsGroupIDByIndex(iFG);
	push_FriendsGroupID_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendsGroupName(lua_State* L) {
	int top = lua_gettop(L);
	FriendsGroupID_t friendsGroupID = check_FriendsGroupID_t(L, 1); /*normal*/

	const char * r = friends->GetFriendsGroupName(friendsGroupID);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendsGroupMembersCount(lua_State* L) {
	int top = lua_gettop(L);
	FriendsGroupID_t friendsGroupID = check_FriendsGroupID_t(L, 1); /*normal*/

	int r = friends->GetFriendsGroupMembersCount(friendsGroupID);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendsGroupMembersList(lua_State* L) {
	int top = lua_gettop(L);
	int nMembersCount; /*out_array_call_param*/
	FriendsGroupID_t friendsGroupID = check_FriendsGroupID_t(L, 1); /*normal*/
	nMembersCount = friends->GetFriendsGroupMembersCount(friendsGroupID);/*out_array_call*/
	CSteamID pOutSteamIDMembers[nMembersCount]; /*out_array_call*/

	friends->GetFriendsGroupMembersList(friendsGroupID, pOutSteamIDMembers, nMembersCount);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_HasFriend(lua_State* L) {
	int top = lua_gettop(L);
	int iFriendFlags = check_int(L, 2); /*normal*/
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	bool r = friends->HasFriend(steamIDFriend, iFriendFlags);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanCount(lua_State* L) {
	int top = lua_gettop(L);

	int r = friends->GetClanCount();
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iClan = check_int(L, 1); /*normal*/

	CSteamID r = friends->GetClanByIndex(iClan);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanName(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetClanName(steamIDClan);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanTag(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetClanTag(steamIDClan);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanActivityCounts(lua_State* L) {
	int top = lua_gettop(L);
	int pnChatting = check_int(L, 4); /*out_param*/
	int pnInGame = check_int(L, 3); /*out_param*/
	int pnOnline = check_int(L, 2); /*out_param*/
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	bool r = friends->GetClanActivityCounts(steamIDClan, &pnOnline, &pnInGame, &pnChatting);
	push_bool(L, r);
	push_int(L, pnChatting); /*out_param*/
	push_int(L, pnInGame); /*out_param*/
	push_int(L, pnOnline); /*out_param*/
	
	assert(top + 1 + 3 == lua_gettop(L));
	return 1 + 3;
}

static int ISteamFriends_DownloadClanActivityCounts(lua_State* L) {
	int top = lua_gettop(L);
	int cClansToRequest = check_int(L, 2); /*normal*/
	luaL_checktype(L, 1, LUA_TTABLE); /*array_count*/
	CSteamID psteamIDClans[cClansToRequest];
	for(int i=1; i<=cClansToRequest; i++) {
		lua_rawgeti(L, 1, i);
		psteamIDClans[i] = check_CSteamID(L, 1 + 1);
		lua_pop(L, 1);
	}

	SteamAPICall_t r = friends->DownloadClanActivityCounts(psteamIDClans, cClansToRequest);
	steamCallbackWrapper->TrackSteamAPICallDownloadClanActivityCountsResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_GetFriendCountFromSource(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDSource = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendCountFromSource(steamIDSource);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendFromSourceByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iFriend = check_int(L, 2); /*normal*/
	CSteamID steamIDSource = check_CSteamID(L, 1); /*normal*/

	CSteamID r = friends->GetFriendFromSourceByIndex(steamIDSource, iFriend);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_IsUserInSource(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDSource = check_CSteamID(L, 2); /*normal*/
	CSteamID steamIDUser = check_CSteamID(L, 1); /*normal*/

	bool r = friends->IsUserInSource(steamIDUser, steamIDSource);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_SetInGameVoiceSpeaking(lua_State* L) {
	int top = lua_gettop(L);
	bool bSpeaking = check_bool(L, 2); /*normal*/
	CSteamID steamIDUser = check_CSteamID(L, 1); /*normal*/

	friends->SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_ActivateGameOverlay(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchDialog = check_const_char_ptr(L, 1); /*normal*/

	friends->ActivateGameOverlay(pchDialog);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_ActivateGameOverlayToUser(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamID = check_CSteamID(L, 2); /*normal*/
	const char * pchDialog = check_const_char_ptr(L, 1); /*normal*/

	friends->ActivateGameOverlayToUser(pchDialog, steamID);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_ActivateGameOverlayToWebPage(lua_State* L) {
	int top = lua_gettop(L);
	EActivateGameOverlayToWebPageMode eMode = check_EActivateGameOverlayToWebPageMode(L, 2); /*normal*/
	const char * pchURL = check_const_char_ptr(L, 1); /*normal*/

	friends->ActivateGameOverlayToWebPage(pchURL, eMode);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_ActivateGameOverlayToStore(lua_State* L) {
	int top = lua_gettop(L);
	EOverlayToStoreFlag eFlag = check_EOverlayToStoreFlag(L, 2); /*normal*/
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	friends->ActivateGameOverlayToStore(nAppID, eFlag);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_SetPlayedWith(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDUserPlayedWith = check_CSteamID(L, 1); /*normal*/

	friends->SetPlayedWith(steamIDUserPlayedWith);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_ActivateGameOverlayInviteDialog(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	friends->ActivateGameOverlayInviteDialog(steamIDLobby);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_GetSmallFriendAvatar(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetSmallFriendAvatar(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetMediumFriendAvatar(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetMediumFriendAvatar(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetLargeFriendAvatar(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetLargeFriendAvatar(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_RequestUserInformation(lua_State* L) {
	int top = lua_gettop(L);
	bool bRequireNameOnly = check_bool(L, 2); /*normal*/
	CSteamID steamIDUser = check_CSteamID(L, 1); /*normal*/

	bool r = friends->RequestUserInformation(steamIDUser, bRequireNameOnly);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_RequestClanOfficerList(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = friends->RequestClanOfficerList(steamIDClan);
	steamCallbackWrapper->TrackSteamAPICallClanOfficerListResponse_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_GetClanOwner(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	CSteamID r = friends->GetClanOwner(steamIDClan);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanOfficerCount(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetClanOfficerCount(steamIDClan);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanOfficerByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iOfficer = check_int(L, 2); /*normal*/
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	CSteamID r = friends->GetClanOfficerByIndex(steamIDClan, iOfficer);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetUserRestrictions(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = friends->GetUserRestrictions();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_SetRichPresence(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchValue = check_const_char_ptr(L, 2); /*normal*/
	const char * pchKey = check_const_char_ptr(L, 1); /*normal*/

	bool r = friends->SetRichPresence(pchKey, pchValue);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_ClearRichPresence(lua_State* L) {
	int top = lua_gettop(L);

	friends->ClearRichPresence();
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_GetFriendRichPresence(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendRichPresence(steamIDFriend, pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendRichPresenceKeyCount(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendRichPresenceKeyCount(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendRichPresenceKeyByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iKey = check_int(L, 2); /*normal*/
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_RequestFriendRichPresence(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	friends->RequestFriendRichPresence(steamIDFriend);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_InviteUserToGame(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchConnectString = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	bool r = friends->InviteUserToGame(steamIDFriend, pchConnectString);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetCoplayFriendCount(lua_State* L) {
	int top = lua_gettop(L);

	int r = friends->GetCoplayFriendCount();
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetCoplayFriend(lua_State* L) {
	int top = lua_gettop(L);
	int iCoplayFriend = check_int(L, 1); /*normal*/

	CSteamID r = friends->GetCoplayFriend(iCoplayFriend);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendCoplayTime(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendCoplayTime(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendCoplayGame(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	AppId_t r = friends->GetFriendCoplayGame(steamIDFriend);
	push_AppId_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_JoinClanChatRoom(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = friends->JoinClanChatRoom(steamIDClan);
	steamCallbackWrapper->TrackSteamAPICallJoinClanChatRoomCompletionResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_LeaveClanChatRoom(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	bool r = friends->LeaveClanChatRoom(steamIDClan);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanChatMemberCount(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetClanChatMemberCount(steamIDClan);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetChatMemberByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iUser = check_int(L, 2); /*normal*/
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	CSteamID r = friends->GetChatMemberByIndex(steamIDClan, iUser);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_SendClanChatMessage(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchText = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDClanChat = check_CSteamID(L, 1); /*normal*/

	bool r = friends->SendClanChatMessage(steamIDClanChat, pchText);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanChatMessage(lua_State* L) {
	int top = lua_gettop(L);
	EChatEntryType peChatEntryType = check_EChatEntryType(L, 5); /*out_param*/
	int cchTextMax = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * prgchText_buffer = check_buffer(L, 3); /*buffer_param*/
	void * prgchText = 0x0;
	uint32_t prgchText_buffersize = 0;
	dmBuffer::Result prgchText_buffer_result = dmBuffer::GetBytes(prgchText_buffer->m_Buffer, (void**)&prgchText, &prgchText_buffersize);
	int iMessage = check_int(L, 2); /*normal*/
	CSteamID steamIDClanChat = check_CSteamID(L, 1); /*normal*/
	CSteamID psteamidChatter; /*out_struct*/

	int r = friends->GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, &peChatEntryType, &psteamidChatter);
	push_int(L, r);
	push_EChatEntryType(L, peChatEntryType); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamFriends_IsClanChatAdmin(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDUser = check_CSteamID(L, 2); /*normal*/
	CSteamID steamIDClanChat = check_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanChatAdmin(steamIDClanChat, steamIDUser);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_IsClanChatWindowOpenInSteam(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClanChat = check_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanChatWindowOpenInSteam(steamIDClanChat);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_OpenClanChatWindowInSteam(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClanChat = check_CSteamID(L, 1); /*normal*/

	bool r = friends->OpenClanChatWindowInSteam(steamIDClanChat);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_CloseClanChatWindowInSteam(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClanChat = check_CSteamID(L, 1); /*normal*/

	bool r = friends->CloseClanChatWindowInSteam(steamIDClanChat);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_SetListenForFriendsMessages(lua_State* L) {
	int top = lua_gettop(L);
	bool bInterceptEnabled = check_bool(L, 1); /*normal*/

	bool r = friends->SetListenForFriendsMessages(bInterceptEnabled);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_ReplyToFriendMessage(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchMsgToSend = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	bool r = friends->ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendMessage(lua_State* L) {
	int top = lua_gettop(L);
	EChatEntryType peChatEntryType = check_EChatEntryType(L, 5); /*out_param*/
	int cubData = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * pvData_buffer = check_buffer(L, 3); /*buffer_param*/
	void * pvData = 0x0;
	uint32_t pvData_buffersize = 0;
	dmBuffer::Result pvData_buffer_result = dmBuffer::GetBytes(pvData_buffer->m_Buffer, (void**)&pvData, &pvData_buffersize);
	int iMessageID = check_int(L, 2); /*normal*/
	CSteamID steamIDFriend = check_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, &peChatEntryType);
	push_int(L, r);
	push_EChatEntryType(L, peChatEntryType); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamFriends_GetFollowerCount(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = friends->GetFollowerCount(steamID);
	steamCallbackWrapper->TrackSteamAPICallFriendsGetFollowerCount_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_IsFollowing(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = friends->IsFollowing(steamID);
	steamCallbackWrapper->TrackSteamAPICallFriendsIsFollowing_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_EnumerateFollowingList(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unStartIndex = check_uint32(L, 1); /*normal*/

	SteamAPICall_t r = friends->EnumerateFollowingList(unStartIndex);
	steamCallbackWrapper->TrackSteamAPICallFriendsEnumerateFollowingList_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_IsClanPublic(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanPublic(steamIDClan);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_IsClanOfficialGameGroup(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDClan = check_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanOfficialGameGroup(steamIDClan);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetNumChatsWithUnreadPriorityMessages(lua_State* L) {
	int top = lua_gettop(L);

	int r = friends->GetNumChatsWithUnreadPriorityMessages();
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	friends->ActivateGameOverlayRemotePlayTogetherInviteDialog(steamIDLobby);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_RegisterProtocolInOverlayBrowser(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchProtocol = check_const_char_ptr(L, 1); /*normal*/

	bool r = friends->RegisterProtocolInOverlayBrowser(pchProtocol);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_ActivateGameOverlayInviteDialogConnectString(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchConnectString = check_const_char_ptr(L, 1); /*normal*/

	friends->ActivateGameOverlayInviteDialogConnectString(pchConnectString);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_RequestEquippedProfileItems(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = friends->RequestEquippedProfileItems(steamID);
	steamCallbackWrapper->TrackSteamAPICallEquippedProfileItems_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_BHasEquippedProfileItem(lua_State* L) {
	int top = lua_gettop(L);
	ECommunityProfileItemType itemType = check_ECommunityProfileItemType(L, 2); /*normal*/
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/

	bool r = friends->BHasEquippedProfileItem(steamID, itemType);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetProfileItemPropertyString(lua_State* L) {
	int top = lua_gettop(L);
	ECommunityProfileItemProperty prop = check_ECommunityProfileItemProperty(L, 3); /*normal*/
	ECommunityProfileItemType itemType = check_ECommunityProfileItemType(L, 2); /*normal*/
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetProfileItemPropertyString(steamID, itemType, prop);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetProfileItemPropertyUint(lua_State* L) {
	int top = lua_gettop(L);
	ECommunityProfileItemProperty prop = check_ECommunityProfileItemProperty(L, 3); /*normal*/
	ECommunityProfileItemType itemType = check_ECommunityProfileItemType(L, 2); /*normal*/
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/

	uint32 r = friends->GetProfileItemPropertyUint(steamID, itemType, prop);
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetSecondsSinceAppActive(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetSecondsSinceAppActive();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetSecondsSinceComputerActive(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetSecondsSinceComputerActive();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetConnectedUniverse(lua_State* L) {
	int top = lua_gettop(L);

	EUniverse r = utils->GetConnectedUniverse();
	push_EUniverse(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetServerRealTime(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetServerRealTime();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetIPCountry(lua_State* L) {
	int top = lua_gettop(L);

	const char * r = utils->GetIPCountry();
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetImageSize(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pnHeight = check_uint32(L, 3); /*out_param*/
	uint32 pnWidth = check_uint32(L, 2); /*out_param*/
	int iImage = check_int(L, 1); /*normal*/

	bool r = utils->GetImageSize(iImage, &pnWidth, &pnHeight);
	push_bool(L, r);
	push_uint32(L, pnHeight); /*out_param*/
	push_uint32(L, pnWidth); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUtils_GetImageRGBA(lua_State* L) {
	int top = lua_gettop(L);
	int nDestBufferSize = check_int(L, 3); /*normal*/
	dmScript::LuaHBuffer * pubDest_buffer = check_buffer(L, 2); /*buffer_param*/
	uint8 * pubDest = 0x0;
	uint32_t pubDest_buffersize = 0;
	dmBuffer::Result pubDest_buffer_result = dmBuffer::GetBytes(pubDest_buffer->m_Buffer, (void**)&pubDest, &pubDest_buffersize);
	int iImage = check_int(L, 1); /*normal*/

	bool r = utils->GetImageRGBA(iImage, pubDest, nDestBufferSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetCurrentBatteryPower(lua_State* L) {
	int top = lua_gettop(L);

	uint8 r = utils->GetCurrentBatteryPower();
	push_uint8(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetAppID(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetAppID();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_SetOverlayNotificationPosition(lua_State* L) {
	int top = lua_gettop(L);
	ENotificationPosition eNotificationPosition = check_ENotificationPosition(L, 1); /*normal*/

	utils->SetOverlayNotificationPosition(eNotificationPosition);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUtils_IsAPICallCompleted(lua_State* L) {
	int top = lua_gettop(L);
	bool pbFailed = check_bool(L, 2); /*out_param*/
	SteamAPICall_t hSteamAPICall = check_SteamAPICall_t(L, 1); /*normal*/

	bool r = utils->IsAPICallCompleted(hSteamAPICall, &pbFailed);
	push_bool(L, r);
	push_bool(L, pbFailed); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUtils_GetAPICallFailureReason(lua_State* L) {
	int top = lua_gettop(L);
	SteamAPICall_t hSteamAPICall = check_SteamAPICall_t(L, 1); /*normal*/

	ESteamAPICallFailure r = utils->GetAPICallFailureReason(hSteamAPICall);
	push_ESteamAPICallFailure(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetAPICallResult(lua_State* L) {
	int top = lua_gettop(L);
	bool pbFailed = check_bool(L, 5); /*out_param*/
	int iCallbackExpected = check_int(L, 4); /*normal*/
	int cubCallback = check_int(L, 3); /*normal*/
	dmScript::LuaHBuffer * pCallback_buffer = check_buffer(L, 2); /*buffer_param*/
	void * pCallback = 0x0;
	uint32_t pCallback_buffersize = 0;
	dmBuffer::Result pCallback_buffer_result = dmBuffer::GetBytes(pCallback_buffer->m_Buffer, (void**)&pCallback, &pCallback_buffersize);
	SteamAPICall_t hSteamAPICall = check_SteamAPICall_t(L, 1); /*normal*/

	bool r = utils->GetAPICallResult(hSteamAPICall, pCallback, cubCallback, iCallbackExpected, &pbFailed);
	push_bool(L, r);
	push_bool(L, pbFailed); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUtils_GetIPCCallCount(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetIPCCallCount();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_IsOverlayEnabled(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->IsOverlayEnabled();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_BOverlayNeedsPresent(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->BOverlayNeedsPresent();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_CheckFileSignature(lua_State* L) {
	int top = lua_gettop(L);
	const char * szFileName = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = utils->CheckFileSignature(szFileName);
	steamCallbackWrapper->TrackSteamAPICallCheckFileSignature_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUtils_ShowGamepadTextInput(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchExistingText = check_const_char_ptr(L, 5); /*normal*/
	uint32 unCharMax = check_uint32(L, 4); /*normal*/
	const char * pchDescription = check_const_char_ptr(L, 3); /*normal*/
	EGamepadTextInputLineMode eLineInputMode = check_EGamepadTextInputLineMode(L, 2); /*normal*/
	EGamepadTextInputMode eInputMode = check_EGamepadTextInputMode(L, 1); /*normal*/

	bool r = utils->ShowGamepadTextInput(eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetEnteredGamepadTextLength(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetEnteredGamepadTextLength();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetEnteredGamepadTextInput(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cchText = check_uint32(L, 2); /*normal*/
	dmScript::LuaHBuffer * pchText_buffer = check_buffer(L, 1); /*buffer_param*/
	char * pchText = 0x0;
	uint32_t pchText_buffersize = 0;
	dmBuffer::Result pchText_buffer_result = dmBuffer::GetBytes(pchText_buffer->m_Buffer, (void**)&pchText, &pchText_buffersize);

	bool r = utils->GetEnteredGamepadTextInput(pchText, cchText);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetSteamUILanguage(lua_State* L) {
	int top = lua_gettop(L);

	const char * r = utils->GetSteamUILanguage();
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_IsSteamRunningInVR(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->IsSteamRunningInVR();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_SetOverlayNotificationInset(lua_State* L) {
	int top = lua_gettop(L);
	int nVerticalInset = check_int(L, 2); /*normal*/
	int nHorizontalInset = check_int(L, 1); /*normal*/

	utils->SetOverlayNotificationInset(nHorizontalInset, nVerticalInset);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUtils_IsSteamInBigPictureMode(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->IsSteamInBigPictureMode();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_StartVRDashboard(lua_State* L) {
	int top = lua_gettop(L);

	utils->StartVRDashboard();
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUtils_IsVRHeadsetStreamingEnabled(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->IsVRHeadsetStreamingEnabled();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_SetVRHeadsetStreamingEnabled(lua_State* L) {
	int top = lua_gettop(L);
	bool bEnabled = check_bool(L, 1); /*normal*/

	utils->SetVRHeadsetStreamingEnabled(bEnabled);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUtils_IsSteamChinaLauncher(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->IsSteamChinaLauncher();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_InitFilterText(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unFilterOptions = check_uint32(L, 1); /*normal*/

	bool r = utils->InitFilterText(unFilterOptions);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_FilterText(lua_State* L) {
	int top = lua_gettop(L);
	uint32 nByteSizeOutFilteredText = check_uint32(L, 5); /*normal*/
	dmScript::LuaHBuffer * pchOutFilteredText_buffer = check_buffer(L, 4); /*buffer_param*/
	char * pchOutFilteredText = 0x0;
	uint32_t pchOutFilteredText_buffersize = 0;
	dmBuffer::Result pchOutFilteredText_buffer_result = dmBuffer::GetBytes(pchOutFilteredText_buffer->m_Buffer, (void**)&pchOutFilteredText, &pchOutFilteredText_buffersize);
	const char * pchInputMessage = check_const_char_ptr(L, 3); /*normal*/
	CSteamID sourceSteamID = check_CSteamID(L, 2); /*normal*/
	ETextFilteringContext eContext = check_ETextFilteringContext(L, 1); /*normal*/

	int r = utils->FilterText(eContext, sourceSteamID, pchInputMessage, pchOutFilteredText, nByteSizeOutFilteredText);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetIPv6ConnectivityState(lua_State* L) {
	int top = lua_gettop(L);
	ESteamIPv6ConnectivityProtocol eProtocol = check_ESteamIPv6ConnectivityProtocol(L, 1); /*normal*/

	ESteamIPv6ConnectivityState r = utils->GetIPv6ConnectivityState(eProtocol);
	push_ESteamIPv6ConnectivityState(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_IsSteamRunningOnSteamDeck(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->IsSteamRunningOnSteamDeck();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_ShowFloatingGamepadTextInput(lua_State* L) {
	int top = lua_gettop(L);
	int nTextFieldHeight = check_int(L, 5); /*normal*/
	int nTextFieldWidth = check_int(L, 4); /*normal*/
	int nTextFieldYPosition = check_int(L, 3); /*normal*/
	int nTextFieldXPosition = check_int(L, 2); /*normal*/
	EFloatingGamepadTextInputMode eKeyboardMode = check_EFloatingGamepadTextInputMode(L, 1); /*normal*/

	bool r = utils->ShowFloatingGamepadTextInput(eKeyboardMode, nTextFieldXPosition, nTextFieldYPosition, nTextFieldWidth, nTextFieldHeight);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_SetGameLauncherMode(lua_State* L) {
	int top = lua_gettop(L);
	bool bLauncherMode = check_bool(L, 1); /*normal*/

	utils->SetGameLauncherMode(bLauncherMode);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUtils_DismissFloatingGamepadTextInput(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->DismissFloatingGamepadTextInput();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetFavoriteGameCount(lua_State* L) {
	int top = lua_gettop(L);

	int r = matchmaking->GetFavoriteGameCount();
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetFavoriteGame(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pRTime32LastPlayedOnServer = check_uint32(L, 7); /*out_param*/
	uint32 punFlags = check_uint32(L, 6); /*out_param*/
	uint16 pnQueryPort = check_uint16(L, 5); /*out_param*/
	uint16 pnConnPort = check_uint16(L, 4); /*out_param*/
	uint32 pnIP = check_uint32(L, 3); /*out_param*/
	AppId_t pnAppID = check_AppId_t(L, 2); /*out_param*/
	int iGame = check_int(L, 1); /*normal*/

	bool r = matchmaking->GetFavoriteGame(iGame, &pnAppID, &pnIP, &pnConnPort, &pnQueryPort, &punFlags, &pRTime32LastPlayedOnServer);
	push_bool(L, r);
	push_uint32(L, pRTime32LastPlayedOnServer); /*out_param*/
	push_uint32(L, punFlags); /*out_param*/
	push_uint16(L, pnQueryPort); /*out_param*/
	push_uint16(L, pnConnPort); /*out_param*/
	push_uint32(L, pnIP); /*out_param*/
	push_AppId_t(L, pnAppID); /*out_param*/
	
	assert(top + 1 + 6 == lua_gettop(L));
	return 1 + 6;
}

static int ISteamMatchmaking_AddFavoriteGame(lua_State* L) {
	int top = lua_gettop(L);
	uint32 rTime32LastPlayedOnServer = check_uint32(L, 6); /*normal*/
	uint32 unFlags = check_uint32(L, 5); /*normal*/
	uint16 nQueryPort = check_uint16(L, 4); /*normal*/
	uint16 nConnPort = check_uint16(L, 3); /*normal*/
	uint32 nIP = check_uint32(L, 2); /*normal*/
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	int r = matchmaking->AddFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_RemoveFavoriteGame(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unFlags = check_uint32(L, 5); /*normal*/
	uint16 nQueryPort = check_uint16(L, 4); /*normal*/
	uint16 nConnPort = check_uint16(L, 3); /*normal*/
	uint32 nIP = check_uint32(L, 2); /*normal*/
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	bool r = matchmaking->RemoveFavoriteGame(nAppID, nIP, nConnPort, nQueryPort, unFlags);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_RequestLobbyList(lua_State* L) {
	int top = lua_gettop(L);

	SteamAPICall_t r = matchmaking->RequestLobbyList();
	steamCallbackWrapper->TrackSteamAPICallLobbyMatchList_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_AddRequestLobbyListStringFilter(lua_State* L) {
	int top = lua_gettop(L);
	ELobbyComparison eComparisonType = check_ELobbyComparison(L, 3); /*normal*/
	const char * pchValueToMatch = check_const_char_ptr(L, 2); /*normal*/
	const char * pchKeyToMatch = check_const_char_ptr(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListStringFilter(pchKeyToMatch, pchValueToMatch, eComparisonType);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_AddRequestLobbyListNumericalFilter(lua_State* L) {
	int top = lua_gettop(L);
	ELobbyComparison eComparisonType = check_ELobbyComparison(L, 3); /*normal*/
	int nValueToMatch = check_int(L, 2); /*normal*/
	const char * pchKeyToMatch = check_const_char_ptr(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListNumericalFilter(pchKeyToMatch, nValueToMatch, eComparisonType);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_AddRequestLobbyListNearValueFilter(lua_State* L) {
	int top = lua_gettop(L);
	int nValueToBeCloseTo = check_int(L, 2); /*normal*/
	const char * pchKeyToMatch = check_const_char_ptr(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListNearValueFilter(pchKeyToMatch, nValueToBeCloseTo);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(lua_State* L) {
	int top = lua_gettop(L);
	int nSlotsAvailable = check_int(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListFilterSlotsAvailable(nSlotsAvailable);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_AddRequestLobbyListDistanceFilter(lua_State* L) {
	int top = lua_gettop(L);
	ELobbyDistanceFilter eLobbyDistanceFilter = check_ELobbyDistanceFilter(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListDistanceFilter(eLobbyDistanceFilter);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_AddRequestLobbyListResultCountFilter(lua_State* L) {
	int top = lua_gettop(L);
	int cMaxResults = check_int(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListResultCountFilter(cMaxResults);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListCompatibleMembersFilter(steamIDLobby);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_GetLobbyByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iLobby = check_int(L, 1); /*normal*/

	CSteamID r = matchmaking->GetLobbyByIndex(iLobby);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_CreateLobby(lua_State* L) {
	int top = lua_gettop(L);
	int cMaxMembers = check_int(L, 2); /*normal*/
	ELobbyType eLobbyType = check_ELobbyType(L, 1); /*normal*/

	SteamAPICall_t r = matchmaking->CreateLobby(eLobbyType, cMaxMembers);
	steamCallbackWrapper->TrackSteamAPICallLobbyCreated_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_JoinLobby(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = matchmaking->JoinLobby(steamIDLobby);
	steamCallbackWrapper->TrackSteamAPICallLobbyEnter_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_LeaveLobby(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	matchmaking->LeaveLobby(steamIDLobby);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_InviteUserToLobby(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDInvitee = check_CSteamID(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->InviteUserToLobby(steamIDLobby, steamIDInvitee);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetNumLobbyMembers(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	int r = matchmaking->GetNumLobbyMembers(steamIDLobby);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyMemberByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iMember = check_int(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	CSteamID r = matchmaking->GetLobbyMemberByIndex(steamIDLobby, iMember);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	const char * r = matchmaking->GetLobbyData(steamIDLobby, pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchValue = check_const_char_ptr(L, 3); /*normal*/
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyData(steamIDLobby, pchKey, pchValue);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyDataCount(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	int r = matchmaking->GetLobbyDataCount(steamIDLobby);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyDataByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int cchValueBufferSize = check_int(L, 6); /*normal*/
	dmScript::LuaHBuffer * pchValue_buffer = check_buffer(L, 5); /*buffer_param*/
	char * pchValue = 0x0;
	uint32_t pchValue_buffersize = 0;
	dmBuffer::Result pchValue_buffer_result = dmBuffer::GetBytes(pchValue_buffer->m_Buffer, (void**)&pchValue, &pchValue_buffersize);
	int cchKeyBufferSize = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * pchKey_buffer = check_buffer(L, 3); /*buffer_param*/
	char * pchKey = 0x0;
	uint32_t pchKey_buffersize = 0;
	dmBuffer::Result pchKey_buffer_result = dmBuffer::GetBytes(pchKey_buffer->m_Buffer, (void**)&pchKey, &pchKey_buffersize);
	int iLobbyData = check_int(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->GetLobbyDataByIndex(steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_DeleteLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->DeleteLobbyData(steamIDLobby, pchKey);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyMemberData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 3); /*normal*/
	CSteamID steamIDUser = check_CSteamID(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	const char * r = matchmaking->GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyMemberData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchValue = check_const_char_ptr(L, 3); /*normal*/
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	matchmaking->SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_SendLobbyChatMsg(lua_State* L) {
	int top = lua_gettop(L);
	int cubMsgBody = check_int(L, 3); /*normal*/
	const void * pvMsgBody = check_const_void_ptr(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyChatEntry(lua_State* L) {
	int top = lua_gettop(L);
	EChatEntryType peChatEntryType = check_EChatEntryType(L, 5); /*out_param*/
	int cubData = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * pvData_buffer = check_buffer(L, 3); /*buffer_param*/
	void * pvData = 0x0;
	uint32_t pvData_buffersize = 0;
	dmBuffer::Result pvData_buffer_result = dmBuffer::GetBytes(pvData_buffer->m_Buffer, (void**)&pvData, &pvData_buffersize);
	int iChatID = check_int(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/
	CSteamID pSteamIDUser; /*out_struct*/

	int r = matchmaking->GetLobbyChatEntry(steamIDLobby, iChatID, &pSteamIDUser, pvData, cubData, &peChatEntryType);
	push_int(L, r);
	push_EChatEntryType(L, peChatEntryType); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamMatchmaking_RequestLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->RequestLobbyData(steamIDLobby);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyGameServer(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDGameServer = check_CSteamID(L, 4); /*normal*/
	uint16 unGameServerPort = check_uint16(L, 3); /*normal*/
	uint32 unGameServerIP = check_uint32(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	matchmaking->SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_GetLobbyGameServer(lua_State* L) {
	int top = lua_gettop(L);
	uint16 punGameServerPort = check_uint16(L, 3); /*out_param*/
	uint32 punGameServerIP = check_uint32(L, 2); /*out_param*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/
	CSteamID psteamIDGameServer; /*out_struct*/

	bool r = matchmaking->GetLobbyGameServer(steamIDLobby, &punGameServerIP, &punGameServerPort, &psteamIDGameServer);
	push_bool(L, r);
	push_uint16(L, punGameServerPort); /*out_param*/
	push_uint32(L, punGameServerIP); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamMatchmaking_SetLobbyMemberLimit(lua_State* L) {
	int top = lua_gettop(L);
	int cMaxMembers = check_int(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyMemberLimit(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	int r = matchmaking->GetLobbyMemberLimit(steamIDLobby);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyType(lua_State* L) {
	int top = lua_gettop(L);
	ELobbyType eLobbyType = check_ELobbyType(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyType(steamIDLobby, eLobbyType);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyJoinable(lua_State* L) {
	int top = lua_gettop(L);
	bool bLobbyJoinable = check_bool(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyJoinable(steamIDLobby, bLobbyJoinable);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyOwner(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	CSteamID r = matchmaking->GetLobbyOwner(steamIDLobby);
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyOwner(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDNewOwner = check_CSteamID(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyOwner(steamIDLobby, steamIDNewOwner);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLinkedLobby(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDLobbyDependent = check_CSteamID(L, 2); /*normal*/
	CSteamID steamIDLobby = check_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLinkedLobby(steamIDLobby, steamIDLobbyDependent);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamParties_GetNumActiveBeacons(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = parties->GetNumActiveBeacons();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamParties_GetBeaconByIndex(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unIndex = check_uint32(L, 1); /*normal*/

	PartyBeaconID_t r = parties->GetBeaconByIndex(unIndex);
	push_PartyBeaconID_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamParties_GetBeaconDetails(lua_State* L) {
	int top = lua_gettop(L);
	int cchMetadata = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * pchMetadata_buffer = check_buffer(L, 3); /*buffer_param*/
	char * pchMetadata = 0x0;
	uint32_t pchMetadata_buffersize = 0;
	dmBuffer::Result pchMetadata_buffer_result = dmBuffer::GetBytes(pchMetadata_buffer->m_Buffer, (void**)&pchMetadata, &pchMetadata_buffersize);
	CSteamID pSteamIDBeaconOwner = check_CSteamID(L, 2); /*out_param*/
	PartyBeaconID_t ulBeaconID = check_PartyBeaconID_t(L, 1); /*normal*/
	SteamPartyBeaconLocation_t pLocation; /*out_struct*/

	bool r = parties->GetBeaconDetails(ulBeaconID, &pSteamIDBeaconOwner, &pLocation, pchMetadata, cchMetadata);
	push_bool(L, r);
	push_CSteamID(L, pSteamIDBeaconOwner); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamParties_JoinParty(lua_State* L) {
	int top = lua_gettop(L);
	PartyBeaconID_t ulBeaconID = check_PartyBeaconID_t(L, 1); /*normal*/

	SteamAPICall_t r = parties->JoinParty(ulBeaconID);
	steamCallbackWrapper->TrackSteamAPICallJoinPartyCallback_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamParties_GetNumAvailableBeaconLocations(lua_State* L) {
	int top = lua_gettop(L);
	uint32 puNumLocations = check_uint32(L, 1); /*out_param*/

	bool r = parties->GetNumAvailableBeaconLocations(&puNumLocations);
	push_bool(L, r);
	push_uint32(L, puNumLocations); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamParties_GetAvailableBeaconLocations(lua_State* L) {
	int top = lua_gettop(L);
	uint32 uMaxNumLocations = check_uint32(L, 2); /*normal*/
	SteamPartyBeaconLocation_t pLocationList = check_SteamPartyBeaconLocation_t(L, 1); /*out_param*/

	bool r = parties->GetAvailableBeaconLocations(&pLocationList, uMaxNumLocations);
	push_bool(L, r);
	push_SteamPartyBeaconLocation_t(L, pLocationList); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamParties_CreateBeacon(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchMetadata = check_const_char_ptr(L, 4); /*normal*/
	const char * pchConnectString = check_const_char_ptr(L, 3); /*normal*/
	SteamPartyBeaconLocation_t pBeaconLocation = check_SteamPartyBeaconLocation_t(L, 2); /*out_param*/
	uint32 unOpenSlots = check_uint32(L, 1); /*normal*/

	SteamAPICall_t r = parties->CreateBeacon(unOpenSlots, &pBeaconLocation, pchConnectString, pchMetadata);
	steamCallbackWrapper->TrackSteamAPICallCreateBeaconCallback_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamParties_OnReservationCompleted(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDUser = check_CSteamID(L, 2); /*normal*/
	PartyBeaconID_t ulBeacon = check_PartyBeaconID_t(L, 1); /*normal*/

	parties->OnReservationCompleted(ulBeacon, steamIDUser);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamParties_CancelReservation(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDUser = check_CSteamID(L, 2); /*normal*/
	PartyBeaconID_t ulBeacon = check_PartyBeaconID_t(L, 1); /*normal*/

	parties->CancelReservation(ulBeacon, steamIDUser);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamParties_ChangeNumOpenSlots(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unOpenSlots = check_uint32(L, 2); /*normal*/
	PartyBeaconID_t ulBeacon = check_PartyBeaconID_t(L, 1); /*normal*/

	SteamAPICall_t r = parties->ChangeNumOpenSlots(ulBeacon, unOpenSlots);
	steamCallbackWrapper->TrackSteamAPICallChangeNumOpenSlotsCallback_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamParties_DestroyBeacon(lua_State* L) {
	int top = lua_gettop(L);
	PartyBeaconID_t ulBeacon = check_PartyBeaconID_t(L, 1); /*normal*/

	bool r = parties->DestroyBeacon(ulBeacon);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamParties_GetBeaconLocationData(lua_State* L) {
	int top = lua_gettop(L);
	int cchDataStringOut = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * pchDataStringOut_buffer = check_buffer(L, 3); /*buffer_param*/
	char * pchDataStringOut = 0x0;
	uint32_t pchDataStringOut_buffersize = 0;
	dmBuffer::Result pchDataStringOut_buffer_result = dmBuffer::GetBytes(pchDataStringOut_buffer->m_Buffer, (void**)&pchDataStringOut, &pchDataStringOut_buffersize);
	ESteamPartyBeaconLocationData eData = check_ESteamPartyBeaconLocationData(L, 2); /*normal*/
	SteamPartyBeaconLocation_t BeaconLocation = check_SteamPartyBeaconLocation_t(L, 1); /*normal*/

	bool r = parties->GetBeaconLocationData(BeaconLocation, eData, pchDataStringOut, cchDataStringOut);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileWrite(lua_State* L) {
	int top = lua_gettop(L);
	int32 cubData = check_int32(L, 3); /*normal*/
	const void * pvData = check_const_void_ptr(L, 2); /*normal*/
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	bool r = remote_storage->FileWrite(pchFile, pvData, cubData);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileRead(lua_State* L) {
	int top = lua_gettop(L);
	int32 cubDataToRead = check_int32(L, 3); /*normal*/
	dmScript::LuaHBuffer * pvData_buffer = check_buffer(L, 2); /*buffer_param*/
	void * pvData = 0x0;
	uint32_t pvData_buffersize = 0;
	dmBuffer::Result pvData_buffer_result = dmBuffer::GetBytes(pvData_buffer->m_Buffer, (void**)&pvData, &pvData_buffersize);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	int32 r = remote_storage->FileRead(pchFile, pvData, cubDataToRead);
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileWriteAsync(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cubData = check_uint32(L, 3); /*normal*/
	const void * pvData = check_const_void_ptr(L, 2); /*normal*/
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->FileWriteAsync(pchFile, pvData, cubData);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageFileWriteAsyncComplete_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_FileReadAsync(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cubToRead = check_uint32(L, 3); /*normal*/
	uint32 nOffset = check_uint32(L, 2); /*normal*/
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->FileReadAsync(pchFile, nOffset, cubToRead);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageFileReadAsyncComplete_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_FileReadAsyncComplete(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cubToRead = check_uint32(L, 3); /*normal*/
	dmScript::LuaHBuffer * pvBuffer_buffer = check_buffer(L, 2); /*buffer_param*/
	void * pvBuffer = 0x0;
	uint32_t pvBuffer_buffersize = 0;
	dmBuffer::Result pvBuffer_buffer_result = dmBuffer::GetBytes(pvBuffer_buffer->m_Buffer, (void**)&pvBuffer, &pvBuffer_buffersize);
	SteamAPICall_t hReadCall = check_SteamAPICall_t(L, 1); /*normal*/

	bool r = remote_storage->FileReadAsyncComplete(hReadCall, pvBuffer, cubToRead);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileForget(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	bool r = remote_storage->FileForget(pchFile);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileDelete(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	bool r = remote_storage->FileDelete(pchFile);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileShare(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->FileShare(pchFile);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageFileShareResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_SetSyncPlatforms(lua_State* L) {
	int top = lua_gettop(L);
	ERemoteStoragePlatform eRemoteStoragePlatform = check_ERemoteStoragePlatform(L, 2); /*normal*/
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	bool r = remote_storage->SetSyncPlatforms(pchFile, eRemoteStoragePlatform);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileWriteStreamOpen(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	UGCFileWriteStreamHandle_t r = remote_storage->FileWriteStreamOpen(pchFile);
	push_UGCFileWriteStreamHandle_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileWriteStreamWriteChunk(lua_State* L) {
	int top = lua_gettop(L);
	int32 cubData = check_int32(L, 3); /*normal*/
	const void * pvData = check_const_void_ptr(L, 2); /*normal*/
	UGCFileWriteStreamHandle_t writeHandle = check_UGCFileWriteStreamHandle_t(L, 1); /*normal*/

	bool r = remote_storage->FileWriteStreamWriteChunk(writeHandle, pvData, cubData);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileWriteStreamClose(lua_State* L) {
	int top = lua_gettop(L);
	UGCFileWriteStreamHandle_t writeHandle = check_UGCFileWriteStreamHandle_t(L, 1); /*normal*/

	bool r = remote_storage->FileWriteStreamClose(writeHandle);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileWriteStreamCancel(lua_State* L) {
	int top = lua_gettop(L);
	UGCFileWriteStreamHandle_t writeHandle = check_UGCFileWriteStreamHandle_t(L, 1); /*normal*/

	bool r = remote_storage->FileWriteStreamCancel(writeHandle);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FileExists(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	bool r = remote_storage->FileExists(pchFile);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_FilePersisted(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	bool r = remote_storage->FilePersisted(pchFile);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_GetFileSize(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	int32 r = remote_storage->GetFileSize(pchFile);
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_GetFileTimestamp(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	int64 r = remote_storage->GetFileTimestamp(pchFile);
	push_int64(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_GetSyncPlatforms(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	ERemoteStoragePlatform r = remote_storage->GetSyncPlatforms(pchFile);
	push_ERemoteStoragePlatform(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_GetFileCount(lua_State* L) {
	int top = lua_gettop(L);

	int32 r = remote_storage->GetFileCount();
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_GetFileNameAndSize(lua_State* L) {
	int top = lua_gettop(L);
	int32 pnFileSizeInBytes = check_int32(L, 2); /*out_param*/
	int iFile = check_int(L, 1); /*normal*/

	const char * r = remote_storage->GetFileNameAndSize(iFile, &pnFileSizeInBytes);
	push_const_char_ptr(L, r);
	push_int32(L, pnFileSizeInBytes); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamRemoteStorage_GetQuota(lua_State* L) {
	int top = lua_gettop(L);
	uint64 puAvailableBytes = check_uint64(L, 2); /*out_param*/
	uint64 pnTotalBytes = check_uint64(L, 1); /*out_param*/

	bool r = remote_storage->GetQuota(&pnTotalBytes, &puAvailableBytes);
	push_bool(L, r);
	push_uint64(L, puAvailableBytes); /*out_param*/
	push_uint64(L, pnTotalBytes); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamRemoteStorage_IsCloudEnabledForAccount(lua_State* L) {
	int top = lua_gettop(L);

	bool r = remote_storage->IsCloudEnabledForAccount();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_IsCloudEnabledForApp(lua_State* L) {
	int top = lua_gettop(L);

	bool r = remote_storage->IsCloudEnabledForApp();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_SetCloudEnabledForApp(lua_State* L) {
	int top = lua_gettop(L);
	bool bEnabled = check_bool(L, 1); /*normal*/

	remote_storage->SetCloudEnabledForApp(bEnabled);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_UGCDownload(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unPriority = check_uint32(L, 2); /*normal*/
	UGCHandle_t hContent = check_UGCHandle_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->UGCDownload(hContent, unPriority);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageDownloadUGCResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_GetUGCDownloadProgress(lua_State* L) {
	int top = lua_gettop(L);
	int32 pnBytesExpected = check_int32(L, 3); /*out_param*/
	int32 pnBytesDownloaded = check_int32(L, 2); /*out_param*/
	UGCHandle_t hContent = check_UGCHandle_t(L, 1); /*normal*/

	bool r = remote_storage->GetUGCDownloadProgress(hContent, &pnBytesDownloaded, &pnBytesExpected);
	push_bool(L, r);
	push_int32(L, pnBytesExpected); /*out_param*/
	push_int32(L, pnBytesDownloaded); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamRemoteStorage_GetUGCDetails(lua_State* L) {
	int top = lua_gettop(L);
	int32 pnFileSizeInBytes = check_int32(L, 3); /*out_param*/
	AppId_t pnAppID = check_AppId_t(L, 2); /*out_param*/
	UGCHandle_t hContent = check_UGCHandle_t(L, 1); /*normal*/
	char ** ppchName; /*out_string*/
	CSteamID pSteamIDOwner; /*out_struct*/

	bool r = remote_storage->GetUGCDetails(hContent, &pnAppID, ppchName, &pnFileSizeInBytes, &pSteamIDOwner);
	push_bool(L, r);
	push_int32(L, pnFileSizeInBytes); /*out_param*/
	push_AppId_t(L, pnAppID); /*out_param*/
	push_char_ptr(L, *ppchName); /*out_string*/
	
	assert(top + 1 + 3 == lua_gettop(L));
	return 1 + 3;
}

static int ISteamRemoteStorage_UGCRead(lua_State* L) {
	int top = lua_gettop(L);
	EUGCReadAction eAction = check_EUGCReadAction(L, 5); /*normal*/
	uint32 cOffset = check_uint32(L, 4); /*normal*/
	int32 cubDataToRead = check_int32(L, 3); /*normal*/
	dmScript::LuaHBuffer * pvData_buffer = check_buffer(L, 2); /*buffer_param*/
	void * pvData = 0x0;
	uint32_t pvData_buffersize = 0;
	dmBuffer::Result pvData_buffer_result = dmBuffer::GetBytes(pvData_buffer->m_Buffer, (void**)&pvData, &pvData_buffersize);
	UGCHandle_t hContent = check_UGCHandle_t(L, 1); /*normal*/

	int32 r = remote_storage->UGCRead(hContent, pvData, cubDataToRead, cOffset, eAction);
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_GetCachedUGCCount(lua_State* L) {
	int top = lua_gettop(L);

	int32 r = remote_storage->GetCachedUGCCount();
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_GetCachedUGCHandle(lua_State* L) {
	int top = lua_gettop(L);
	int32 iCachedContent = check_int32(L, 1); /*normal*/

	UGCHandle_t r = remote_storage->GetCachedUGCHandle(iCachedContent);
	push_UGCHandle_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_PublishWorkshopFile(lua_State* L) {
	int top = lua_gettop(L);
	EWorkshopFileType eWorkshopFileType = check_EWorkshopFileType(L, 8); /*normal*/
	SteamParamStringArray_t pTags = check_SteamParamStringArray_t(L, 7); /*out_param*/
	ERemoteStoragePublishedFileVisibility eVisibility = check_ERemoteStoragePublishedFileVisibility(L, 6); /*normal*/
	const char * pchDescription = check_const_char_ptr(L, 5); /*normal*/
	const char * pchTitle = check_const_char_ptr(L, 4); /*normal*/
	AppId_t nConsumerAppId = check_AppId_t(L, 3); /*normal*/
	const char * pchPreviewFile = check_const_char_ptr(L, 2); /*normal*/
	const char * pchFile = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->PublishWorkshopFile(pchFile, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, &pTags, eWorkshopFileType);
	steamCallbackWrapper->TrackSteamAPICallRemoteStoragePublishFileProgress_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_CreatePublishedFileUpdateRequest(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1); /*normal*/

	PublishedFileUpdateHandle_t r = remote_storage->CreatePublishedFileUpdateRequest(unPublishedFileId);
	push_PublishedFileUpdateHandle_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_UpdatePublishedFileFile(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchFile = check_const_char_ptr(L, 2); /*normal*/
	PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1); /*normal*/

	bool r = remote_storage->UpdatePublishedFileFile(updateHandle, pchFile);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_UpdatePublishedFilePreviewFile(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchPreviewFile = check_const_char_ptr(L, 2); /*normal*/
	PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1); /*normal*/

	bool r = remote_storage->UpdatePublishedFilePreviewFile(updateHandle, pchPreviewFile);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_UpdatePublishedFileTitle(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchTitle = check_const_char_ptr(L, 2); /*normal*/
	PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1); /*normal*/

	bool r = remote_storage->UpdatePublishedFileTitle(updateHandle, pchTitle);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_UpdatePublishedFileDescription(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchDescription = check_const_char_ptr(L, 2); /*normal*/
	PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1); /*normal*/

	bool r = remote_storage->UpdatePublishedFileDescription(updateHandle, pchDescription);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_UpdatePublishedFileVisibility(lua_State* L) {
	int top = lua_gettop(L);
	ERemoteStoragePublishedFileVisibility eVisibility = check_ERemoteStoragePublishedFileVisibility(L, 2); /*normal*/
	PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1); /*normal*/

	bool r = remote_storage->UpdatePublishedFileVisibility(updateHandle, eVisibility);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_UpdatePublishedFileTags(lua_State* L) {
	int top = lua_gettop(L);
	SteamParamStringArray_t pTags = check_SteamParamStringArray_t(L, 2); /*out_param*/
	PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1); /*normal*/

	bool r = remote_storage->UpdatePublishedFileTags(updateHandle, &pTags);
	push_bool(L, r);
	push_SteamParamStringArray_t(L, pTags); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamRemoteStorage_CommitPublishedFileUpdate(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->CommitPublishedFileUpdate(updateHandle);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageUpdatePublishedFileResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_GetPublishedFileDetails(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unMaxSecondsOld = check_uint32(L, 2); /*normal*/
	PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->GetPublishedFileDetails(unPublishedFileId, unMaxSecondsOld);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageGetPublishedFileDetailsResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_DeletePublishedFile(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->DeletePublishedFile(unPublishedFileId);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageDeletePublishedFileResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_EnumerateUserPublishedFiles(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unStartIndex = check_uint32(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->EnumerateUserPublishedFiles(unStartIndex);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageEnumerateUserPublishedFilesResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_SubscribePublishedFile(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->SubscribePublishedFile(unPublishedFileId);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageSubscribePublishedFileResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_EnumerateUserSubscribedFiles(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unStartIndex = check_uint32(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->EnumerateUserSubscribedFiles(unStartIndex);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageEnumerateUserSubscribedFilesResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_UnsubscribePublishedFile(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->UnsubscribePublishedFile(unPublishedFileId);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageUnsubscribePublishedFileResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchChangeDescription = check_const_char_ptr(L, 2); /*normal*/
	PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1); /*normal*/

	bool r = remote_storage->UpdatePublishedFileSetChangeDescription(updateHandle, pchChangeDescription);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_GetPublishedItemVoteDetails(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->GetPublishedItemVoteDetails(unPublishedFileId);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageGetPublishedItemVoteDetailsResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_UpdateUserPublishedItemVote(lua_State* L) {
	int top = lua_gettop(L);
	bool bVoteUp = check_bool(L, 2); /*normal*/
	PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->UpdateUserPublishedItemVote(unPublishedFileId, bVoteUp);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageUpdateUserPublishedItemVoteResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_GetUserPublishedItemVoteDetails(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->GetUserPublishedItemVoteDetails(unPublishedFileId);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageGetPublishedItemVoteDetailsResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(lua_State* L) {
	int top = lua_gettop(L);
	SteamParamStringArray_t pExcludedTags = check_SteamParamStringArray_t(L, 4); /*out_param*/
	SteamParamStringArray_t pRequiredTags = check_SteamParamStringArray_t(L, 3); /*out_param*/
	uint32 unStartIndex = check_uint32(L, 2); /*normal*/
	CSteamID steamId = check_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->EnumerateUserSharedWorkshopFiles(steamId, unStartIndex, &pRequiredTags, &pExcludedTags);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageEnumerateUserPublishedFilesResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_PublishVideo(lua_State* L) {
	int top = lua_gettop(L);
	SteamParamStringArray_t pTags = check_SteamParamStringArray_t(L, 9); /*out_param*/
	ERemoteStoragePublishedFileVisibility eVisibility = check_ERemoteStoragePublishedFileVisibility(L, 8); /*normal*/
	const char * pchDescription = check_const_char_ptr(L, 7); /*normal*/
	const char * pchTitle = check_const_char_ptr(L, 6); /*normal*/
	AppId_t nConsumerAppId = check_AppId_t(L, 5); /*normal*/
	const char * pchPreviewFile = check_const_char_ptr(L, 4); /*normal*/
	const char * pchVideoIdentifier = check_const_char_ptr(L, 3); /*normal*/
	const char * pchVideoAccount = check_const_char_ptr(L, 2); /*normal*/
	EWorkshopVideoProvider eVideoProvider = check_EWorkshopVideoProvider(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->PublishVideo(eVideoProvider, pchVideoAccount, pchVideoIdentifier, pchPreviewFile, nConsumerAppId, pchTitle, pchDescription, eVisibility, &pTags);
	steamCallbackWrapper->TrackSteamAPICallRemoteStoragePublishFileProgress_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_SetUserPublishedFileAction(lua_State* L) {
	int top = lua_gettop(L);
	EWorkshopFileAction eAction = check_EWorkshopFileAction(L, 2); /*normal*/
	PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->SetUserPublishedFileAction(unPublishedFileId, eAction);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageSetUserPublishedFileActionResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unStartIndex = check_uint32(L, 2); /*normal*/
	EWorkshopFileAction eAction = check_EWorkshopFileAction(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->EnumeratePublishedFilesByUserAction(eAction, unStartIndex);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageEnumeratePublishedFilesByUserActionResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(lua_State* L) {
	int top = lua_gettop(L);
	SteamParamStringArray_t pUserTags = check_SteamParamStringArray_t(L, 6); /*out_param*/
	SteamParamStringArray_t pTags = check_SteamParamStringArray_t(L, 5); /*out_param*/
	uint32 unDays = check_uint32(L, 4); /*normal*/
	uint32 unCount = check_uint32(L, 3); /*normal*/
	uint32 unStartIndex = check_uint32(L, 2); /*normal*/
	EWorkshopEnumerationType eEnumerationType = check_EWorkshopEnumerationType(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->EnumeratePublishedWorkshopFiles(eEnumerationType, unStartIndex, unCount, unDays, &pTags, &pUserTags);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageEnumerateWorkshopFilesResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_UGCDownloadToLocation(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unPriority = check_uint32(L, 3); /*normal*/
	const char * pchLocation = check_const_char_ptr(L, 2); /*normal*/
	UGCHandle_t hContent = check_UGCHandle_t(L, 1); /*normal*/

	SteamAPICall_t r = remote_storage->UGCDownloadToLocation(hContent, pchLocation, unPriority);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageDownloadUGCResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamRemoteStorage_GetLocalFileChangeCount(lua_State* L) {
	int top = lua_gettop(L);

	int32 r = remote_storage->GetLocalFileChangeCount();
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_GetLocalFileChange(lua_State* L) {
	int top = lua_gettop(L);
	ERemoteStorageFilePathType pEFilePathType = check_ERemoteStorageFilePathType(L, 3); /*out_param*/
	ERemoteStorageLocalFileChange pEChangeType = check_ERemoteStorageLocalFileChange(L, 2); /*out_param*/
	int iFile = check_int(L, 1); /*normal*/

	const char * r = remote_storage->GetLocalFileChange(iFile, &pEChangeType, &pEFilePathType);
	push_const_char_ptr(L, r);
	push_ERemoteStorageFilePathType(L, pEFilePathType); /*out_param*/
	push_ERemoteStorageLocalFileChange(L, pEChangeType); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamRemoteStorage_BeginFileWriteBatch(lua_State* L) {
	int top = lua_gettop(L);

	bool r = remote_storage->BeginFileWriteBatch();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamRemoteStorage_EndFileWriteBatch(lua_State* L) {
	int top = lua_gettop(L);

	bool r = remote_storage->EndFileWriteBatch();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_RequestCurrentStats(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user_stats->RequestCurrentStats();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetStatInt32(lua_State* L) {
	int top = lua_gettop(L);
	int32 pData = check_int32(L, 2); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetStat(pchName, &pData);
	push_bool(L, r);
	push_int32(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetStatFloat(lua_State* L) {
	int top = lua_gettop(L);
	float pData = check_float(L, 2); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetStat(pchName, &pData);
	push_bool(L, r);
	push_float(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_SetStatInt32(lua_State* L) {
	int top = lua_gettop(L);
	int32 nData = check_int32(L, 2); /*normal*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->SetStat(pchName, nData);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_SetStatFloat(lua_State* L) {
	int top = lua_gettop(L);
	float fData = check_float(L, 2); /*normal*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->SetStat(pchName, fData);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_UpdateAvgRateStat(lua_State* L) {
	int top = lua_gettop(L);
	double dSessionLength = check_double(L, 3); /*normal*/
	float flCountThisSession = check_float(L, 2); /*normal*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->UpdateAvgRateStat(pchName, flCountThisSession, dSessionLength);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetAchievement(lua_State* L) {
	int top = lua_gettop(L);
	bool pbAchieved = check_bool(L, 2); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetAchievement(pchName, &pbAchieved);
	push_bool(L, r);
	push_bool(L, pbAchieved); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_SetAchievement(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->SetAchievement(pchName);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_ClearAchievement(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->ClearAchievement(pchName);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetAchievementAndUnlockTime(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punUnlockTime = check_uint32(L, 3); /*out_param*/
	bool pbAchieved = check_bool(L, 2); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetAchievementAndUnlockTime(pchName, &pbAchieved, &punUnlockTime);
	push_bool(L, r);
	push_uint32(L, punUnlockTime); /*out_param*/
	push_bool(L, pbAchieved); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUserStats_StoreStats(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user_stats->StoreStats();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetAchievementIcon(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	int r = user_stats->GetAchievementIcon(pchName);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetAchievementDisplayAttribute(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	const char * r = user_stats->GetAchievementDisplayAttribute(pchName, pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_IndicateAchievementProgress(lua_State* L) {
	int top = lua_gettop(L);
	uint32 nMaxProgress = check_uint32(L, 3); /*normal*/
	uint32 nCurProgress = check_uint32(L, 2); /*normal*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->IndicateAchievementProgress(pchName, nCurProgress, nMaxProgress);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetNumAchievements(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = user_stats->GetNumAchievements();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetAchievementName(lua_State* L) {
	int top = lua_gettop(L);
	uint32 iAchievement = check_uint32(L, 1); /*normal*/

	const char * r = user_stats->GetAchievementName(iAchievement);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_RequestUserStats(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDUser = check_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->RequestUserStats(steamIDUser);
	steamCallbackWrapper->TrackSteamAPICallUserStatsReceived_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_GetUserStatInt32(lua_State* L) {
	int top = lua_gettop(L);
	int32 pData = check_int32(L, 3); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDUser = check_CSteamID(L, 1); /*normal*/

	bool r = user_stats->GetUserStat(steamIDUser, pchName, &pData);
	push_bool(L, r);
	push_int32(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetUserStatFloat(lua_State* L) {
	int top = lua_gettop(L);
	float pData = check_float(L, 3); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDUser = check_CSteamID(L, 1); /*normal*/

	bool r = user_stats->GetUserStat(steamIDUser, pchName, &pData);
	push_bool(L, r);
	push_float(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetUserAchievement(lua_State* L) {
	int top = lua_gettop(L);
	bool pbAchieved = check_bool(L, 3); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDUser = check_CSteamID(L, 1); /*normal*/

	bool r = user_stats->GetUserAchievement(steamIDUser, pchName, &pbAchieved);
	push_bool(L, r);
	push_bool(L, pbAchieved); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetUserAchievementAndUnlockTime(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punUnlockTime = check_uint32(L, 4); /*out_param*/
	bool pbAchieved = check_bool(L, 3); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 2); /*normal*/
	CSteamID steamIDUser = check_CSteamID(L, 1); /*normal*/

	bool r = user_stats->GetUserAchievementAndUnlockTime(steamIDUser, pchName, &pbAchieved, &punUnlockTime);
	push_bool(L, r);
	push_uint32(L, punUnlockTime); /*out_param*/
	push_bool(L, pbAchieved); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUserStats_ResetAllStats(lua_State* L) {
	int top = lua_gettop(L);
	bool bAchievementsToo = check_bool(L, 1); /*normal*/

	bool r = user_stats->ResetAllStats(bAchievementsToo);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_FindOrCreateLeaderboard(lua_State* L) {
	int top = lua_gettop(L);
	ELeaderboardDisplayType eLeaderboardDisplayType = check_ELeaderboardDisplayType(L, 3); /*normal*/
	ELeaderboardSortMethod eLeaderboardSortMethod = check_ELeaderboardSortMethod(L, 2); /*normal*/
	const char * pchLeaderboardName = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->FindOrCreateLeaderboard(pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType);
	steamCallbackWrapper->TrackSteamAPICallLeaderboardFindResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_FindLeaderboard(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchLeaderboardName = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->FindLeaderboard(pchLeaderboardName);
	steamCallbackWrapper->TrackSteamAPICallLeaderboardFindResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_GetLeaderboardName(lua_State* L) {
	int top = lua_gettop(L);
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	const char * r = user_stats->GetLeaderboardName(hSteamLeaderboard);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetLeaderboardEntryCount(lua_State* L) {
	int top = lua_gettop(L);
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	int r = user_stats->GetLeaderboardEntryCount(hSteamLeaderboard);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetLeaderboardSortMethod(lua_State* L) {
	int top = lua_gettop(L);
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	ELeaderboardSortMethod r = user_stats->GetLeaderboardSortMethod(hSteamLeaderboard);
	push_ELeaderboardSortMethod(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetLeaderboardDisplayType(lua_State* L) {
	int top = lua_gettop(L);
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	ELeaderboardDisplayType r = user_stats->GetLeaderboardDisplayType(hSteamLeaderboard);
	push_ELeaderboardDisplayType(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_DownloadLeaderboardEntries(lua_State* L) {
	int top = lua_gettop(L);
	int nRangeEnd = check_int(L, 4); /*normal*/
	int nRangeStart = check_int(L, 3); /*normal*/
	ELeaderboardDataRequest eLeaderboardDataRequest = check_ELeaderboardDataRequest(L, 2); /*normal*/
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->DownloadLeaderboardEntries(hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd);
	steamCallbackWrapper->TrackSteamAPICallLeaderboardScoresDownloaded_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_DownloadLeaderboardEntriesForUsers(lua_State* L) {
	int top = lua_gettop(L);
	int cUsers = check_int(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	CSteamID prgUsers[cUsers];
	for(int i=1; i<=cUsers; i++) {
		lua_rawgeti(L, 2, i);
		prgUsers[i] = check_CSteamID(L, 2 + 1);
		lua_pop(L, 1);
	}
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->DownloadLeaderboardEntriesForUsers(hSteamLeaderboard, prgUsers, cUsers);
	steamCallbackWrapper->TrackSteamAPICallLeaderboardScoresDownloaded_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_GetDownloadedLeaderboardEntry(lua_State* L) {
	int top = lua_gettop(L);
	int cDetailsMax = check_int(L, 5); /*normal*/
	luaL_checktype(L, 4, LUA_TTABLE); /*array_count*/
	int32 pDetails[cDetailsMax];
	for(int i=1; i<=cDetailsMax; i++) {
		lua_rawgeti(L, 4, i);
		pDetails[i] = check_int32(L, 4 + 1);
		lua_pop(L, 1);
	}
	LeaderboardEntry_t pLeaderboardEntry = check_LeaderboardEntry_t(L, 3); /*out_param*/
	int index = check_int(L, 2); /*normal*/
	SteamLeaderboardEntries_t hSteamLeaderboardEntries = check_SteamLeaderboardEntries_t(L, 1); /*normal*/

	bool r = user_stats->GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries, index, &pLeaderboardEntry, pDetails, cDetailsMax);
	push_bool(L, r);
	push_LeaderboardEntry_t(L, pLeaderboardEntry); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_UploadLeaderboardScore(lua_State* L) {
	int top = lua_gettop(L);
	int cScoreDetailsCount = check_int(L, 5); /*normal*/
	luaL_checktype(L, 4, LUA_TTABLE); /*array_count*/
	int32 pScoreDetails[cScoreDetailsCount];
	for(int i=1; i<=cScoreDetailsCount; i++) {
		lua_rawgeti(L, 4, i);
		pScoreDetails[i] = check_int32(L, 4 + 1);
		lua_pop(L, 1);
	}
	int32 nScore = check_int32(L, 3); /*normal*/
	ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod = check_ELeaderboardUploadScoreMethod(L, 2); /*normal*/
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->UploadLeaderboardScore(hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount);
	steamCallbackWrapper->TrackSteamAPICallLeaderboardScoreUploaded_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_AttachLeaderboardUGC(lua_State* L) {
	int top = lua_gettop(L);
	UGCHandle_t hUGC = check_UGCHandle_t(L, 2); /*normal*/
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->AttachLeaderboardUGC(hSteamLeaderboard, hUGC);
	steamCallbackWrapper->TrackSteamAPICallLeaderboardUGCSet_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_GetNumberOfCurrentPlayers(lua_State* L) {
	int top = lua_gettop(L);

	SteamAPICall_t r = user_stats->GetNumberOfCurrentPlayers();
	steamCallbackWrapper->TrackSteamAPICallNumberOfCurrentPlayers_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_RequestGlobalAchievementPercentages(lua_State* L) {
	int top = lua_gettop(L);

	SteamAPICall_t r = user_stats->RequestGlobalAchievementPercentages();
	steamCallbackWrapper->TrackSteamAPICallGlobalAchievementPercentagesReady_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_GetMostAchievedAchievementInfo(lua_State* L) {
	int top = lua_gettop(L);
	bool pbAchieved = check_bool(L, 4); /*out_param*/
	float pflPercent = check_float(L, 3); /*out_param*/
	uint32 unNameBufLen = check_uint32(L, 2); /*normal*/
	dmScript::LuaHBuffer * pchName_buffer = check_buffer(L, 1); /*buffer_param*/
	char * pchName = 0x0;
	uint32_t pchName_buffersize = 0;
	dmBuffer::Result pchName_buffer_result = dmBuffer::GetBytes(pchName_buffer->m_Buffer, (void**)&pchName, &pchName_buffersize);

	int r = user_stats->GetMostAchievedAchievementInfo(pchName, unNameBufLen, &pflPercent, &pbAchieved);
	push_int(L, r);
	push_bool(L, pbAchieved); /*out_param*/
	push_float(L, pflPercent); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUserStats_GetNextMostAchievedAchievementInfo(lua_State* L) {
	int top = lua_gettop(L);
	bool pbAchieved = check_bool(L, 5); /*out_param*/
	float pflPercent = check_float(L, 4); /*out_param*/
	uint32 unNameBufLen = check_uint32(L, 3); /*normal*/
	dmScript::LuaHBuffer * pchName_buffer = check_buffer(L, 2); /*buffer_param*/
	char * pchName = 0x0;
	uint32_t pchName_buffersize = 0;
	dmBuffer::Result pchName_buffer_result = dmBuffer::GetBytes(pchName_buffer->m_Buffer, (void**)&pchName, &pchName_buffersize);
	int iIteratorPrevious = check_int(L, 1); /*normal*/

	int r = user_stats->GetNextMostAchievedAchievementInfo(iIteratorPrevious, pchName, unNameBufLen, &pflPercent, &pbAchieved);
	push_int(L, r);
	push_bool(L, pbAchieved); /*out_param*/
	push_float(L, pflPercent); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUserStats_GetAchievementAchievedPercent(lua_State* L) {
	int top = lua_gettop(L);
	float pflPercent = check_float(L, 2); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetAchievementAchievedPercent(pchName, &pflPercent);
	push_bool(L, r);
	push_float(L, pflPercent); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_RequestGlobalStats(lua_State* L) {
	int top = lua_gettop(L);
	int nHistoryDays = check_int(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->RequestGlobalStats(nHistoryDays);
	steamCallbackWrapper->TrackSteamAPICallGlobalStatsReceived_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_GetGlobalStatInt64(lua_State* L) {
	int top = lua_gettop(L);
	int64 pData = check_int64(L, 2); /*out_param*/
	const char * pchStatName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetGlobalStat(pchStatName, &pData);
	push_bool(L, r);
	push_int64(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetGlobalStatDouble(lua_State* L) {
	int top = lua_gettop(L);
	double pData = check_double(L, 2); /*out_param*/
	const char * pchStatName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetGlobalStat(pchStatName, &pData);
	push_bool(L, r);
	push_double(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetGlobalStatHistoryInt64(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cubData = check_uint32(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	int64 pData[cubData];
	for(int i=1; i<=cubData; i++) {
		lua_rawgeti(L, 2, i);
		pData[i] = check_int64(L, 2 + 1);
		lua_pop(L, 1);
	}
	const char * pchStatName = check_const_char_ptr(L, 1); /*normal*/

	int32 r = user_stats->GetGlobalStatHistory(pchStatName, pData, cubData);
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetGlobalStatHistoryDouble(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cubData = check_uint32(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	double pData[cubData];
	for(int i=1; i<=cubData; i++) {
		lua_rawgeti(L, 2, i);
		pData[i] = check_double(L, 2 + 1);
		lua_pop(L, 1);
	}
	const char * pchStatName = check_const_char_ptr(L, 1); /*normal*/

	int32 r = user_stats->GetGlobalStatHistory(pchStatName, pData, cubData);
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetAchievementProgressLimitsInt32(lua_State* L) {
	int top = lua_gettop(L);
	int32 pnMaxProgress = check_int32(L, 3); /*out_param*/
	int32 pnMinProgress = check_int32(L, 2); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetAchievementProgressLimits(pchName, &pnMinProgress, &pnMaxProgress);
	push_bool(L, r);
	push_int32(L, pnMaxProgress); /*out_param*/
	push_int32(L, pnMinProgress); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUserStats_GetAchievementProgressLimitsFloat(lua_State* L) {
	int top = lua_gettop(L);
	float pfMaxProgress = check_float(L, 3); /*out_param*/
	float pfMinProgress = check_float(L, 2); /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetAchievementProgressLimits(pchName, &pfMinProgress, &pfMaxProgress);
	push_bool(L, r);
	push_float(L, pfMaxProgress); /*out_param*/
	push_float(L, pfMinProgress); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamApps_BIsSubscribed(lua_State* L) {
	int top = lua_gettop(L);

	bool r = apps->BIsSubscribed();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BIsLowViolence(lua_State* L) {
	int top = lua_gettop(L);

	bool r = apps->BIsLowViolence();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BIsCybercafe(lua_State* L) {
	int top = lua_gettop(L);

	bool r = apps->BIsCybercafe();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BIsVACBanned(lua_State* L) {
	int top = lua_gettop(L);

	bool r = apps->BIsVACBanned();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_GetCurrentGameLanguage(lua_State* L) {
	int top = lua_gettop(L);

	const char * r = apps->GetCurrentGameLanguage();
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_GetAvailableGameLanguages(lua_State* L) {
	int top = lua_gettop(L);

	const char * r = apps->GetAvailableGameLanguages();
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BIsSubscribedApp(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t appID = check_AppId_t(L, 1); /*normal*/

	bool r = apps->BIsSubscribedApp(appID);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BIsDlcInstalled(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t appID = check_AppId_t(L, 1); /*normal*/

	bool r = apps->BIsDlcInstalled(appID);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_GetEarliestPurchaseUnixTime(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	uint32 r = apps->GetEarliestPurchaseUnixTime(nAppID);
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BIsSubscribedFromFreeWeekend(lua_State* L) {
	int top = lua_gettop(L);

	bool r = apps->BIsSubscribedFromFreeWeekend();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_GetDLCCount(lua_State* L) {
	int top = lua_gettop(L);

	int r = apps->GetDLCCount();
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BGetDLCDataByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int cchNameBufferSize = check_int(L, 5); /*normal*/
	dmScript::LuaHBuffer * pchName_buffer = check_buffer(L, 4); /*buffer_param*/
	char * pchName = 0x0;
	uint32_t pchName_buffersize = 0;
	dmBuffer::Result pchName_buffer_result = dmBuffer::GetBytes(pchName_buffer->m_Buffer, (void**)&pchName, &pchName_buffersize);
	bool pbAvailable = check_bool(L, 3); /*out_param*/
	AppId_t pAppID = check_AppId_t(L, 2); /*out_param*/
	int iDLC = check_int(L, 1); /*normal*/

	bool r = apps->BGetDLCDataByIndex(iDLC, &pAppID, &pbAvailable, pchName, cchNameBufferSize);
	push_bool(L, r);
	push_bool(L, pbAvailable); /*out_param*/
	push_AppId_t(L, pAppID); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamApps_InstallDLC(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	apps->InstallDLC(nAppID);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamApps_UninstallDLC(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	apps->UninstallDLC(nAppID);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamApps_RequestAppProofOfPurchaseKey(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	apps->RequestAppProofOfPurchaseKey(nAppID);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamApps_GetCurrentBetaName(lua_State* L) {
	int top = lua_gettop(L);
	int cchNameBufferSize = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pchName_buffer = check_buffer(L, 1); /*buffer_param*/
	char * pchName = 0x0;
	uint32_t pchName_buffersize = 0;
	dmBuffer::Result pchName_buffer_result = dmBuffer::GetBytes(pchName_buffer->m_Buffer, (void**)&pchName, &pchName_buffersize);

	bool r = apps->GetCurrentBetaName(pchName, cchNameBufferSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_MarkContentCorrupt(lua_State* L) {
	int top = lua_gettop(L);
	bool bMissingFilesOnly = check_bool(L, 1); /*normal*/

	bool r = apps->MarkContentCorrupt(bMissingFilesOnly);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_GetInstalledDepots(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cMaxDepots = check_uint32(L, 3); /*normal*/
	DepotId_t pvecDepots = check_DepotId_t(L, 2); /*out_param*/
	AppId_t appID = check_AppId_t(L, 1); /*normal*/

	uint32 r = apps->GetInstalledDepots(appID, &pvecDepots, cMaxDepots);
	push_uint32(L, r);
	push_DepotId_t(L, pvecDepots); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamApps_GetAppInstallDir(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cchFolderBufferSize = check_uint32(L, 3); /*normal*/
	dmScript::LuaHBuffer * pchFolder_buffer = check_buffer(L, 2); /*buffer_param*/
	char * pchFolder = 0x0;
	uint32_t pchFolder_buffersize = 0;
	dmBuffer::Result pchFolder_buffer_result = dmBuffer::GetBytes(pchFolder_buffer->m_Buffer, (void**)&pchFolder, &pchFolder_buffersize);
	AppId_t appID = check_AppId_t(L, 1); /*normal*/

	uint32 r = apps->GetAppInstallDir(appID, pchFolder, cchFolderBufferSize);
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BIsAppInstalled(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t appID = check_AppId_t(L, 1); /*normal*/

	bool r = apps->BIsAppInstalled(appID);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_GetAppOwner(lua_State* L) {
	int top = lua_gettop(L);

	CSteamID r = apps->GetAppOwner();
	push_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_GetLaunchQueryParam(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 1); /*normal*/

	const char * r = apps->GetLaunchQueryParam(pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_GetDlcDownloadProgress(lua_State* L) {
	int top = lua_gettop(L);
	uint64 punBytesTotal = check_uint64(L, 3); /*out_param*/
	uint64 punBytesDownloaded = check_uint64(L, 2); /*out_param*/
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	bool r = apps->GetDlcDownloadProgress(nAppID, &punBytesDownloaded, &punBytesTotal);
	push_bool(L, r);
	push_uint64(L, punBytesTotal); /*out_param*/
	push_uint64(L, punBytesDownloaded); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamApps_GetAppBuildId(lua_State* L) {
	int top = lua_gettop(L);

	int r = apps->GetAppBuildId();
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_RequestAllProofOfPurchaseKeys(lua_State* L) {
	int top = lua_gettop(L);

	apps->RequestAllProofOfPurchaseKeys();
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamApps_GetFileDetails(lua_State* L) {
	int top = lua_gettop(L);
	const char * pszFileName = check_const_char_ptr(L, 1); /*normal*/

	SteamAPICall_t r = apps->GetFileDetails(pszFileName);
	steamCallbackWrapper->TrackSteamAPICallFileDetailsResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamApps_GetLaunchCommandLine(lua_State* L) {
	int top = lua_gettop(L);
	int cubCommandLine = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pszCommandLine_buffer = check_buffer(L, 1); /*buffer_param*/
	char * pszCommandLine = 0x0;
	uint32_t pszCommandLine_buffersize = 0;
	dmBuffer::Result pszCommandLine_buffer_result = dmBuffer::GetBytes(pszCommandLine_buffer->m_Buffer, (void**)&pszCommandLine, &pszCommandLine_buffersize);

	int r = apps->GetLaunchCommandLine(pszCommandLine, cubCommandLine);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BIsSubscribedFromFamilySharing(lua_State* L) {
	int top = lua_gettop(L);

	bool r = apps->BIsSubscribedFromFamilySharing();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamApps_BIsTimedTrial(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punSecondsPlayed = check_uint32(L, 2); /*out_param*/
	uint32 punSecondsAllowed = check_uint32(L, 1); /*out_param*/

	bool r = apps->BIsTimedTrial(&punSecondsAllowed, &punSecondsPlayed);
	push_bool(L, r);
	push_uint32(L, punSecondsPlayed); /*out_param*/
	push_uint32(L, punSecondsAllowed); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamApps_SetDlcContext(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	bool r = apps->SetDlcContext(nAppID);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMusic_BIsEnabled(lua_State* L) {
	int top = lua_gettop(L);

	bool r = music->BIsEnabled();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMusic_BIsPlaying(lua_State* L) {
	int top = lua_gettop(L);

	bool r = music->BIsPlaying();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMusic_GetPlaybackStatus(lua_State* L) {
	int top = lua_gettop(L);

	AudioPlayback_Status r = music->GetPlaybackStatus();
	push_AudioPlayback_Status(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMusic_Play(lua_State* L) {
	int top = lua_gettop(L);

	music->Play();
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMusic_Pause(lua_State* L) {
	int top = lua_gettop(L);

	music->Pause();
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMusic_PlayPrevious(lua_State* L) {
	int top = lua_gettop(L);

	music->PlayPrevious();
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMusic_PlayNext(lua_State* L) {
	int top = lua_gettop(L);

	music->PlayNext();
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMusic_SetVolume(lua_State* L) {
	int top = lua_gettop(L);
	float flVolume = check_float(L, 1); /*normal*/

	music->SetVolume(flVolume);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMusic_GetVolume(lua_State* L) {
	int top = lua_gettop(L);

	float r = music->GetVolume();
	push_float(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_CreateQueryUserUGCRequest(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unPage = check_uint32(L, 7); /*normal*/
	AppId_t nConsumerAppID = check_AppId_t(L, 6); /*normal*/
	AppId_t nCreatorAppID = check_AppId_t(L, 5); /*normal*/
	EUserUGCListSortOrder eSortOrder = check_EUserUGCListSortOrder(L, 4); /*normal*/
	EUGCMatchingUGCType eMatchingUGCType = check_EUGCMatchingUGCType(L, 3); /*normal*/
	EUserUGCList eListType = check_EUserUGCList(L, 2); /*normal*/
	AccountID_t unAccountID = check_AccountID_t(L, 1); /*normal*/

	UGCQueryHandle_t r = ugc->CreateQueryUserUGCRequest(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage);
	push_UGCQueryHandle_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_CreateQueryAllUGCRequestPage(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unPage = check_uint32(L, 5); /*normal*/
	AppId_t nConsumerAppID = check_AppId_t(L, 4); /*normal*/
	AppId_t nCreatorAppID = check_AppId_t(L, 3); /*normal*/
	EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType = check_EUGCMatchingUGCType(L, 2); /*normal*/
	EUGCQuery eQueryType = check_EUGCQuery(L, 1); /*normal*/

	UGCQueryHandle_t r = ugc->CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage);
	push_UGCQueryHandle_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_CreateQueryAllUGCRequestCursor(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchCursor = check_const_char_ptr(L, 5); /*normal*/
	AppId_t nConsumerAppID = check_AppId_t(L, 4); /*normal*/
	AppId_t nCreatorAppID = check_AppId_t(L, 3); /*normal*/
	EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType = check_EUGCMatchingUGCType(L, 2); /*normal*/
	EUGCQuery eQueryType = check_EUGCQuery(L, 1); /*normal*/

	UGCQueryHandle_t r = ugc->CreateQueryAllUGCRequest(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, pchCursor);
	push_UGCQueryHandle_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_CreateQueryUGCDetailsRequest(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unNumPublishedFileIDs = check_uint32(L, 2); /*normal*/
	PublishedFileId_t pvecPublishedFileID = check_PublishedFileId_t(L, 1); /*out_param*/

	UGCQueryHandle_t r = ugc->CreateQueryUGCDetailsRequest(&pvecPublishedFileID, unNumPublishedFileIDs);
	push_UGCQueryHandle_t(L, r);
	push_PublishedFileId_t(L, pvecPublishedFileID); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUGC_SendQueryUGCRequest(lua_State* L) {
	int top = lua_gettop(L);
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->SendQueryUGCRequest(handle);
	steamCallbackWrapper->TrackSteamAPICallSteamUGCQueryCompleted_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_GetQueryUGCResult(lua_State* L) {
	int top = lua_gettop(L);
	SteamUGCDetails_t pDetails = check_SteamUGCDetails_t(L, 3); /*out_param*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCResult(handle, index, &pDetails);
	push_bool(L, r);
	push_SteamUGCDetails_t(L, pDetails); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUGC_GetQueryUGCNumTags(lua_State* L) {
	int top = lua_gettop(L);
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	uint32 r = ugc->GetQueryUGCNumTags(handle, index);
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetQueryUGCTag(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cchValueSize = check_uint32(L, 5); /*normal*/
	dmScript::LuaHBuffer * pchValue_buffer = check_buffer(L, 4); /*buffer_param*/
	char * pchValue = 0x0;
	uint32_t pchValue_buffersize = 0;
	dmBuffer::Result pchValue_buffer_result = dmBuffer::GetBytes(pchValue_buffer->m_Buffer, (void**)&pchValue, &pchValue_buffersize);
	uint32 indexTag = check_uint32(L, 3); /*normal*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCTag(handle, index, indexTag, pchValue, cchValueSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetQueryUGCTagDisplayName(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cchValueSize = check_uint32(L, 5); /*normal*/
	dmScript::LuaHBuffer * pchValue_buffer = check_buffer(L, 4); /*buffer_param*/
	char * pchValue = 0x0;
	uint32_t pchValue_buffersize = 0;
	dmBuffer::Result pchValue_buffer_result = dmBuffer::GetBytes(pchValue_buffer->m_Buffer, (void**)&pchValue, &pchValue_buffersize);
	uint32 indexTag = check_uint32(L, 3); /*normal*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCTagDisplayName(handle, index, indexTag, pchValue, cchValueSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetQueryUGCPreviewURL(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cchURLSize = check_uint32(L, 4); /*normal*/
	dmScript::LuaHBuffer * pchURL_buffer = check_buffer(L, 3); /*buffer_param*/
	char * pchURL = 0x0;
	uint32_t pchURL_buffersize = 0;
	dmBuffer::Result pchURL_buffer_result = dmBuffer::GetBytes(pchURL_buffer->m_Buffer, (void**)&pchURL, &pchURL_buffersize);
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCPreviewURL(handle, index, pchURL, cchURLSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetQueryUGCMetadata(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cchMetadatasize = check_uint32(L, 4); /*normal*/
	dmScript::LuaHBuffer * pchMetadata_buffer = check_buffer(L, 3); /*buffer_param*/
	char * pchMetadata = 0x0;
	uint32_t pchMetadata_buffersize = 0;
	dmBuffer::Result pchMetadata_buffer_result = dmBuffer::GetBytes(pchMetadata_buffer->m_Buffer, (void**)&pchMetadata, &pchMetadata_buffersize);
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCMetadata(handle, index, pchMetadata, cchMetadatasize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetQueryUGCChildren(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cMaxEntries = check_uint32(L, 4); /*normal*/
	PublishedFileId_t pvecPublishedFileID = check_PublishedFileId_t(L, 3); /*out_param*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCChildren(handle, index, &pvecPublishedFileID, cMaxEntries);
	push_bool(L, r);
	push_PublishedFileId_t(L, pvecPublishedFileID); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUGC_GetQueryUGCStatistic(lua_State* L) {
	int top = lua_gettop(L);
	uint64 pStatValue = check_uint64(L, 4); /*out_param*/
	EItemStatistic eStatType = check_EItemStatistic(L, 3); /*normal*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCStatistic(handle, index, eStatType, &pStatValue);
	push_bool(L, r);
	push_uint64(L, pStatValue); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUGC_GetQueryUGCNumAdditionalPreviews(lua_State* L) {
	int top = lua_gettop(L);
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	uint32 r = ugc->GetQueryUGCNumAdditionalPreviews(handle, index);
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetQueryUGCAdditionalPreview(lua_State* L) {
	int top = lua_gettop(L);
	EItemPreviewType pPreviewType = check_EItemPreviewType(L, 8); /*out_param*/
	uint32 cchOriginalFileNameSize = check_uint32(L, 7); /*normal*/
	dmScript::LuaHBuffer * pchOriginalFileName_buffer = check_buffer(L, 6); /*buffer_param*/
	char * pchOriginalFileName = 0x0;
	uint32_t pchOriginalFileName_buffersize = 0;
	dmBuffer::Result pchOriginalFileName_buffer_result = dmBuffer::GetBytes(pchOriginalFileName_buffer->m_Buffer, (void**)&pchOriginalFileName, &pchOriginalFileName_buffersize);
	uint32 cchURLSize = check_uint32(L, 5); /*normal*/
	dmScript::LuaHBuffer * pchURLOrVideoID_buffer = check_buffer(L, 4); /*buffer_param*/
	char * pchURLOrVideoID = 0x0;
	uint32_t pchURLOrVideoID_buffersize = 0;
	dmBuffer::Result pchURLOrVideoID_buffer_result = dmBuffer::GetBytes(pchURLOrVideoID_buffer->m_Buffer, (void**)&pchURLOrVideoID, &pchURLOrVideoID_buffersize);
	uint32 previewIndex = check_uint32(L, 3); /*normal*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCAdditionalPreview(handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, &pPreviewType);
	push_bool(L, r);
	push_EItemPreviewType(L, pPreviewType); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUGC_GetQueryUGCNumKeyValueTags(lua_State* L) {
	int top = lua_gettop(L);
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	uint32 r = ugc->GetQueryUGCNumKeyValueTags(handle, index);
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetQueryUGCKeyValueTag(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cchValueSize = check_uint32(L, 7); /*normal*/
	dmScript::LuaHBuffer * pchValue_buffer = check_buffer(L, 6); /*buffer_param*/
	char * pchValue = 0x0;
	uint32_t pchValue_buffersize = 0;
	dmBuffer::Result pchValue_buffer_result = dmBuffer::GetBytes(pchValue_buffer->m_Buffer, (void**)&pchValue, &pchValue_buffersize);
	uint32 cchKeySize = check_uint32(L, 5); /*normal*/
	dmScript::LuaHBuffer * pchKey_buffer = check_buffer(L, 4); /*buffer_param*/
	char * pchKey = 0x0;
	uint32_t pchKey_buffersize = 0;
	dmBuffer::Result pchKey_buffer_result = dmBuffer::GetBytes(pchKey_buffer->m_Buffer, (void**)&pchKey, &pchKey_buffersize);
	uint32 keyValueTagIndex = check_uint32(L, 3); /*normal*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCKeyValueTag(handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetQueryFirstUGCKeyValueTag(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cchValueSize = check_uint32(L, 5); /*normal*/
	dmScript::LuaHBuffer * pchValue_buffer = check_buffer(L, 4); /*buffer_param*/
	char * pchValue = 0x0;
	uint32_t pchValue_buffersize = 0;
	dmBuffer::Result pchValue_buffer_result = dmBuffer::GetBytes(pchValue_buffer->m_Buffer, (void**)&pchValue, &pchValue_buffersize);
	const char * pchKey = check_const_char_ptr(L, 3); /*normal*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->GetQueryUGCKeyValueTag(handle, index, pchKey, pchValue, cchValueSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_ReleaseQueryUGCRequest(lua_State* L) {
	int top = lua_gettop(L);
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->ReleaseQueryUGCRequest(handle);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_AddRequiredTag(lua_State* L) {
	int top = lua_gettop(L);
	const char * pTagName = check_const_char_ptr(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->AddRequiredTag(handle, pTagName);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_AddRequiredTagGroup(lua_State* L) {
	int top = lua_gettop(L);
	const SteamParamStringArray_t pTagGroups = check_SteamParamStringArray_t(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->AddRequiredTagGroup(handle, &pTagGroups);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_AddExcludedTag(lua_State* L) {
	int top = lua_gettop(L);
	const char * pTagName = check_const_char_ptr(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->AddExcludedTag(handle, pTagName);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetReturnOnlyIDs(lua_State* L) {
	int top = lua_gettop(L);
	bool bReturnOnlyIDs = check_bool(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetReturnOnlyIDs(handle, bReturnOnlyIDs);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetReturnKeyValueTags(lua_State* L) {
	int top = lua_gettop(L);
	bool bReturnKeyValueTags = check_bool(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetReturnKeyValueTags(handle, bReturnKeyValueTags);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetReturnLongDescription(lua_State* L) {
	int top = lua_gettop(L);
	bool bReturnLongDescription = check_bool(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetReturnLongDescription(handle, bReturnLongDescription);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetReturnMetadata(lua_State* L) {
	int top = lua_gettop(L);
	bool bReturnMetadata = check_bool(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetReturnMetadata(handle, bReturnMetadata);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetReturnChildren(lua_State* L) {
	int top = lua_gettop(L);
	bool bReturnChildren = check_bool(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetReturnChildren(handle, bReturnChildren);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetReturnAdditionalPreviews(lua_State* L) {
	int top = lua_gettop(L);
	bool bReturnAdditionalPreviews = check_bool(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetReturnAdditionalPreviews(handle, bReturnAdditionalPreviews);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetReturnTotalOnly(lua_State* L) {
	int top = lua_gettop(L);
	bool bReturnTotalOnly = check_bool(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetReturnTotalOnly(handle, bReturnTotalOnly);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetReturnPlaytimeStats(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unDays = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetReturnPlaytimeStats(handle, unDays);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetLanguage(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchLanguage = check_const_char_ptr(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetLanguage(handle, pchLanguage);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetAllowCachedResponse(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unMaxAgeSeconds = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetAllowCachedResponse(handle, unMaxAgeSeconds);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetCloudFileNameFilter(lua_State* L) {
	int top = lua_gettop(L);
	const char * pMatchCloudFileName = check_const_char_ptr(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetCloudFileNameFilter(handle, pMatchCloudFileName);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetMatchAnyTag(lua_State* L) {
	int top = lua_gettop(L);
	bool bMatchAnyTag = check_bool(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetMatchAnyTag(handle, bMatchAnyTag);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetSearchText(lua_State* L) {
	int top = lua_gettop(L);
	const char * pSearchText = check_const_char_ptr(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetSearchText(handle, pSearchText);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetRankedByTrendDays(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unDays = check_uint32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetRankedByTrendDays(handle, unDays);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetTimeCreatedDateRange(lua_State* L) {
	int top = lua_gettop(L);
	RTime32 rtEnd = check_RTime32(L, 3); /*normal*/
	RTime32 rtStart = check_RTime32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetTimeCreatedDateRange(handle, rtStart, rtEnd);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetTimeUpdatedDateRange(lua_State* L) {
	int top = lua_gettop(L);
	RTime32 rtEnd = check_RTime32(L, 3); /*normal*/
	RTime32 rtStart = check_RTime32(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->SetTimeUpdatedDateRange(handle, rtStart, rtEnd);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_AddRequiredKeyValueTag(lua_State* L) {
	int top = lua_gettop(L);
	const char * pValue = check_const_char_ptr(L, 3); /*normal*/
	const char * pKey = check_const_char_ptr(L, 2); /*normal*/
	UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1); /*normal*/

	bool r = ugc->AddRequiredKeyValueTag(handle, pKey, pValue);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_RequestUGCDetails(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unMaxAgeSeconds = check_uint32(L, 2); /*normal*/
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->RequestUGCDetails(nPublishedFileID, unMaxAgeSeconds);
	steamCallbackWrapper->TrackSteamAPICallSteamUGCRequestUGCDetailsResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_CreateItem(lua_State* L) {
	int top = lua_gettop(L);
	EWorkshopFileType eFileType = check_EWorkshopFileType(L, 2); /*normal*/
	AppId_t nConsumerAppId = check_AppId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->CreateItem(nConsumerAppId, eFileType);
	steamCallbackWrapper->TrackSteamAPICallCreateItemResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_StartItemUpdate(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 2); /*normal*/
	AppId_t nConsumerAppId = check_AppId_t(L, 1); /*normal*/

	UGCUpdateHandle_t r = ugc->StartItemUpdate(nConsumerAppId, nPublishedFileID);
	push_UGCUpdateHandle_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetItemTitle(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchTitle = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->SetItemTitle(handle, pchTitle);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetItemDescription(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchDescription = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->SetItemDescription(handle, pchDescription);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetItemUpdateLanguage(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchLanguage = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->SetItemUpdateLanguage(handle, pchLanguage);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetItemMetadata(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchMetaData = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->SetItemMetadata(handle, pchMetaData);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetItemVisibility(lua_State* L) {
	int top = lua_gettop(L);
	ERemoteStoragePublishedFileVisibility eVisibility = check_ERemoteStoragePublishedFileVisibility(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->SetItemVisibility(handle, eVisibility);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetItemTags(lua_State* L) {
	int top = lua_gettop(L);
	const SteamParamStringArray_t pTags = check_SteamParamStringArray_t(L, 2); /*normal*/
	UGCUpdateHandle_t updateHandle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->SetItemTags(updateHandle, &pTags);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetItemContent(lua_State* L) {
	int top = lua_gettop(L);
	const char * pszContentFolder = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->SetItemContent(handle, pszContentFolder);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetItemPreview(lua_State* L) {
	int top = lua_gettop(L);
	const char * pszPreviewFile = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->SetItemPreview(handle, pszPreviewFile);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SetAllowLegacyUpload(lua_State* L) {
	int top = lua_gettop(L);
	bool bAllowLegacyUpload = check_bool(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->SetAllowLegacyUpload(handle, bAllowLegacyUpload);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_RemoveAllItemKeyValueTags(lua_State* L) {
	int top = lua_gettop(L);
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->RemoveAllItemKeyValueTags(handle);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_RemoveItemKeyValueTags(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->RemoveItemKeyValueTags(handle, pchKey);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_AddItemKeyValueTag(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchValue = check_const_char_ptr(L, 3); /*normal*/
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->AddItemKeyValueTag(handle, pchKey, pchValue);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_AddItemPreviewFile(lua_State* L) {
	int top = lua_gettop(L);
	EItemPreviewType type = check_EItemPreviewType(L, 3); /*normal*/
	const char * pszPreviewFile = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->AddItemPreviewFile(handle, pszPreviewFile, type);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_AddItemPreviewVideo(lua_State* L) {
	int top = lua_gettop(L);
	const char * pszVideoID = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->AddItemPreviewVideo(handle, pszVideoID);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_UpdateItemPreviewFile(lua_State* L) {
	int top = lua_gettop(L);
	const char * pszPreviewFile = check_const_char_ptr(L, 3); /*normal*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->UpdateItemPreviewFile(handle, index, pszPreviewFile);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_UpdateItemPreviewVideo(lua_State* L) {
	int top = lua_gettop(L);
	const char * pszVideoID = check_const_char_ptr(L, 3); /*normal*/
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->UpdateItemPreviewVideo(handle, index, pszVideoID);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_RemoveItemPreview(lua_State* L) {
	int top = lua_gettop(L);
	uint32 index = check_uint32(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	bool r = ugc->RemoveItemPreview(handle, index);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SubmitItemUpdate(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchChangeNote = check_const_char_ptr(L, 2); /*normal*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->SubmitItemUpdate(handle, pchChangeNote);
	steamCallbackWrapper->TrackSteamAPICallSubmitItemUpdateResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_GetItemUpdateProgress(lua_State* L) {
	int top = lua_gettop(L);
	uint64 punBytesTotal = check_uint64(L, 3); /*out_param*/
	uint64 punBytesProcessed = check_uint64(L, 2); /*out_param*/
	UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1); /*normal*/

	EItemUpdateStatus r = ugc->GetItemUpdateProgress(handle, &punBytesProcessed, &punBytesTotal);
	push_EItemUpdateStatus(L, r);
	push_uint64(L, punBytesTotal); /*out_param*/
	push_uint64(L, punBytesProcessed); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUGC_SetUserItemVote(lua_State* L) {
	int top = lua_gettop(L);
	bool bVoteUp = check_bool(L, 2); /*normal*/
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->SetUserItemVote(nPublishedFileID, bVoteUp);
	steamCallbackWrapper->TrackSteamAPICallSetUserItemVoteResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_GetUserItemVote(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->GetUserItemVote(nPublishedFileID);
	steamCallbackWrapper->TrackSteamAPICallGetUserItemVoteResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_AddItemToFavorites(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 2); /*normal*/
	AppId_t nAppId = check_AppId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->AddItemToFavorites(nAppId, nPublishedFileID);
	steamCallbackWrapper->TrackSteamAPICallUserFavoriteItemsListChanged_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_RemoveItemFromFavorites(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 2); /*normal*/
	AppId_t nAppId = check_AppId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->RemoveItemFromFavorites(nAppId, nPublishedFileID);
	steamCallbackWrapper->TrackSteamAPICallUserFavoriteItemsListChanged_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_SubscribeItem(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->SubscribeItem(nPublishedFileID);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageSubscribePublishedFileResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_UnsubscribeItem(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->UnsubscribeItem(nPublishedFileID);
	steamCallbackWrapper->TrackSteamAPICallRemoteStorageUnsubscribePublishedFileResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_GetNumSubscribedItems(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = ugc->GetNumSubscribedItems();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetSubscribedItems(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cMaxEntries = check_uint32(L, 2); /*normal*/
	PublishedFileId_t pvecPublishedFileID = check_PublishedFileId_t(L, 1); /*out_param*/

	uint32 r = ugc->GetSubscribedItems(&pvecPublishedFileID, cMaxEntries);
	push_uint32(L, r);
	push_PublishedFileId_t(L, pvecPublishedFileID); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUGC_GetItemState(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	uint32 r = ugc->GetItemState(nPublishedFileID);
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetItemInstallInfo(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punTimeStamp = check_uint32(L, 5); /*out_param*/
	uint32 cchFolderSize = check_uint32(L, 4); /*normal*/
	dmScript::LuaHBuffer * pchFolder_buffer = check_buffer(L, 3); /*buffer_param*/
	char * pchFolder = 0x0;
	uint32_t pchFolder_buffersize = 0;
	dmBuffer::Result pchFolder_buffer_result = dmBuffer::GetBytes(pchFolder_buffer->m_Buffer, (void**)&pchFolder, &pchFolder_buffersize);
	uint64 punSizeOnDisk = check_uint64(L, 2); /*out_param*/
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	bool r = ugc->GetItemInstallInfo(nPublishedFileID, &punSizeOnDisk, pchFolder, cchFolderSize, &punTimeStamp);
	push_bool(L, r);
	push_uint32(L, punTimeStamp); /*out_param*/
	push_uint64(L, punSizeOnDisk); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUGC_GetItemDownloadInfo(lua_State* L) {
	int top = lua_gettop(L);
	uint64 punBytesTotal = check_uint64(L, 3); /*out_param*/
	uint64 punBytesDownloaded = check_uint64(L, 2); /*out_param*/
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	bool r = ugc->GetItemDownloadInfo(nPublishedFileID, &punBytesDownloaded, &punBytesTotal);
	push_bool(L, r);
	push_uint64(L, punBytesTotal); /*out_param*/
	push_uint64(L, punBytesDownloaded); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUGC_DownloadItem(lua_State* L) {
	int top = lua_gettop(L);
	bool bHighPriority = check_bool(L, 2); /*normal*/
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	bool r = ugc->DownloadItem(nPublishedFileID, bHighPriority);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_BInitWorkshopForGameServer(lua_State* L) {
	int top = lua_gettop(L);
	const char * pszFolder = check_const_char_ptr(L, 2); /*normal*/
	DepotId_t unWorkshopDepotID = check_DepotId_t(L, 1); /*normal*/

	bool r = ugc->BInitWorkshopForGameServer(unWorkshopDepotID, pszFolder);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_SuspendDownloads(lua_State* L) {
	int top = lua_gettop(L);
	bool bSuspend = check_bool(L, 1); /*normal*/

	ugc->SuspendDownloads(bSuspend);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_StartPlaytimeTracking(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unNumPublishedFileIDs = check_uint32(L, 2); /*normal*/
	PublishedFileId_t pvecPublishedFileID = check_PublishedFileId_t(L, 1); /*out_param*/

	SteamAPICall_t r = ugc->StartPlaytimeTracking(&pvecPublishedFileID, unNumPublishedFileIDs);
	steamCallbackWrapper->TrackSteamAPICallStartPlaytimeTrackingResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_StopPlaytimeTracking(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unNumPublishedFileIDs = check_uint32(L, 2); /*normal*/
	PublishedFileId_t pvecPublishedFileID = check_PublishedFileId_t(L, 1); /*out_param*/

	SteamAPICall_t r = ugc->StopPlaytimeTracking(&pvecPublishedFileID, unNumPublishedFileIDs);
	steamCallbackWrapper->TrackSteamAPICallStopPlaytimeTrackingResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_StopPlaytimeTrackingForAllItems(lua_State* L) {
	int top = lua_gettop(L);

	SteamAPICall_t r = ugc->StopPlaytimeTrackingForAllItems();
	steamCallbackWrapper->TrackSteamAPICallStopPlaytimeTrackingResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_AddDependency(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nChildPublishedFileID = check_PublishedFileId_t(L, 2); /*normal*/
	PublishedFileId_t nParentPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->AddDependency(nParentPublishedFileID, nChildPublishedFileID);
	steamCallbackWrapper->TrackSteamAPICallAddUGCDependencyResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_RemoveDependency(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nChildPublishedFileID = check_PublishedFileId_t(L, 2); /*normal*/
	PublishedFileId_t nParentPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->RemoveDependency(nParentPublishedFileID, nChildPublishedFileID);
	steamCallbackWrapper->TrackSteamAPICallRemoveUGCDependencyResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_AddAppDependency(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t nAppID = check_AppId_t(L, 2); /*normal*/
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->AddAppDependency(nPublishedFileID, nAppID);
	steamCallbackWrapper->TrackSteamAPICallAddAppDependencyResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_RemoveAppDependency(lua_State* L) {
	int top = lua_gettop(L);
	AppId_t nAppID = check_AppId_t(L, 2); /*normal*/
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->RemoveAppDependency(nPublishedFileID, nAppID);
	steamCallbackWrapper->TrackSteamAPICallRemoveAppDependencyResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_GetAppDependencies(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->GetAppDependencies(nPublishedFileID);
	steamCallbackWrapper->TrackSteamAPICallGetAppDependenciesResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_DeleteItem(lua_State* L) {
	int top = lua_gettop(L);
	PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1); /*normal*/

	SteamAPICall_t r = ugc->DeleteItem(nPublishedFileID);
	steamCallbackWrapper->TrackSteamAPICallDeleteItemResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUGC_ShowWorkshopEULA(lua_State* L) {
	int top = lua_gettop(L);

	bool r = ugc->ShowWorkshopEULA();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUGC_GetWorkshopEULAStatus(lua_State* L) {
	int top = lua_gettop(L);

	SteamAPICall_t r = ugc->GetWorkshopEULAStatus();
	steamCallbackWrapper->TrackSteamAPICallWorkshopEULAStatus_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamInventory_GetResultStatus(lua_State* L) {
	int top = lua_gettop(L);
	SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1); /*normal*/

	EResult r = inventory->GetResultStatus(resultHandle);
	push_EResult(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_GetResultItems(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punOutItemsArraySize = check_uint32(L, 3); /*out_param*/
	SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1); /*normal*/
	SteamItemDetails_t pOutItemsArray[punOutItemsArraySize];
	check_SteamItemDetails_t_array(L, 2, pOutItemsArray, punOutItemsArraySize); /*out_array_count*/

	bool r = inventory->GetResultItems(resultHandle, pOutItemsArray, &punOutItemsArraySize);
	push_bool(L, r);
	push_uint32(L, punOutItemsArraySize); /*out_param*/
	push_SteamItemDetails_t_array(L, pOutItemsArray, punOutItemsArraySize);  /*out_array_count*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamInventory_GetResultItemProperty(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punValueBufferSizeOut = check_uint32(L, 5); /*out_param*/
	dmScript::LuaHBuffer * pchValueBuffer_buffer = check_buffer(L, 4); /*buffer_param*/
	char * pchValueBuffer = 0x0;
	uint32_t pchValueBuffer_buffersize = 0;
	dmBuffer::Result pchValueBuffer_buffer_result = dmBuffer::GetBytes(pchValueBuffer_buffer->m_Buffer, (void**)&pchValueBuffer, &pchValueBuffer_buffersize);
	const char * pchPropertyName = check_const_char_ptr(L, 3); /*normal*/
	uint32 unItemIndex = check_uint32(L, 2); /*normal*/
	SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1); /*normal*/

	bool r = inventory->GetResultItemProperty(resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, &punValueBufferSizeOut);
	push_bool(L, r);
	push_uint32(L, punValueBufferSizeOut); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_GetResultTimestamp(lua_State* L) {
	int top = lua_gettop(L);
	SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1); /*normal*/

	uint32 r = inventory->GetResultTimestamp(resultHandle);
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_CheckResultSteamID(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamIDExpected = check_CSteamID(L, 2); /*normal*/
	SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1); /*normal*/

	bool r = inventory->CheckResultSteamID(resultHandle, steamIDExpected);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_DestroyResult(lua_State* L) {
	int top = lua_gettop(L);
	SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1); /*normal*/

	inventory->DestroyResult(resultHandle);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamInventory_GetAllItems(lua_State* L) {
	int top = lua_gettop(L);
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->GetAllItems(&pResultHandle);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_GetItemsByID(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unCountInstanceIDs = check_uint32(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	SteamItemInstanceID_t pInstanceIDs[unCountInstanceIDs];
	for(int i=1; i<=unCountInstanceIDs; i++) {
		lua_rawgeti(L, 2, i);
		pInstanceIDs[i] = check_SteamItemInstanceID_t(L, 2 + 1);
		lua_pop(L, 1);
	}
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->GetItemsByID(&pResultHandle, pInstanceIDs, unCountInstanceIDs);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_SerializeResult(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punOutBufferSize = check_uint32(L, 3); /*out_param*/
	dmScript::LuaHBuffer * pOutBuffer_buffer = check_buffer(L, 2); /*buffer_param*/
	void * pOutBuffer = 0x0;
	uint32_t pOutBuffer_buffersize = 0;
	dmBuffer::Result pOutBuffer_buffer_result = dmBuffer::GetBytes(pOutBuffer_buffer->m_Buffer, (void**)&pOutBuffer, &pOutBuffer_buffersize);
	SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1); /*normal*/

	bool r = inventory->SerializeResult(resultHandle, pOutBuffer, &punOutBufferSize);
	push_bool(L, r);
	push_uint32(L, punOutBufferSize); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_DeserializeResult(lua_State* L) {
	int top = lua_gettop(L);
	bool bRESERVED_MUST_BE_FALSE = check_bool(L, 4); /*normal*/
	uint32 unBufferSize = check_uint32(L, 3); /*normal*/
	const void * pBuffer = check_const_void_ptr(L, 2); /*normal*/
	SteamInventoryResult_t pOutResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->DeserializeResult(&pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pOutResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_GenerateItems(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unArrayLength = check_uint32(L, 4); /*normal*/
	luaL_checktype(L, 3, LUA_TTABLE); /*array_count*/
	uint32 punArrayQuantity[unArrayLength];
	for(int i=1; i<=unArrayLength; i++) {
		lua_rawgeti(L, 3, i);
		punArrayQuantity[i] = check_uint32(L, 3 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	SteamItemDef_t pArrayItemDefs[unArrayLength];
	for(int i=1; i<=unArrayLength; i++) {
		lua_rawgeti(L, 2, i);
		pArrayItemDefs[i] = check_SteamItemDef_t(L, 2 + 1);
		lua_pop(L, 1);
	}
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->GenerateItems(&pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_GrantPromoItems(lua_State* L) {
	int top = lua_gettop(L);
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->GrantPromoItems(&pResultHandle);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_AddPromoItem(lua_State* L) {
	int top = lua_gettop(L);
	SteamItemDef_t itemDef = check_SteamItemDef_t(L, 2); /*normal*/
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->AddPromoItem(&pResultHandle, itemDef);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_AddPromoItems(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unArrayLength = check_uint32(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	SteamItemDef_t pArrayItemDefs[unArrayLength];
	for(int i=1; i<=unArrayLength; i++) {
		lua_rawgeti(L, 2, i);
		pArrayItemDefs[i] = check_SteamItemDef_t(L, 2 + 1);
		lua_pop(L, 1);
	}
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->AddPromoItems(&pResultHandle, pArrayItemDefs, unArrayLength);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_ConsumeItem(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unQuantity = check_uint32(L, 3); /*normal*/
	SteamItemInstanceID_t itemConsume = check_SteamItemInstanceID_t(L, 2); /*normal*/
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->ConsumeItem(&pResultHandle, itemConsume, unQuantity);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_ExchangeItems(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unArrayDestroyLength = check_uint32(L, 7); /*normal*/
	luaL_checktype(L, 6, LUA_TTABLE); /*array_count*/
	uint32 punArrayDestroyQuantity[unArrayDestroyLength];
	for(int i=1; i<=unArrayDestroyLength; i++) {
		lua_rawgeti(L, 6, i);
		punArrayDestroyQuantity[i] = check_uint32(L, 6 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 5, LUA_TTABLE); /*array_count*/
	SteamItemInstanceID_t pArrayDestroy[unArrayDestroyLength];
	for(int i=1; i<=unArrayDestroyLength; i++) {
		lua_rawgeti(L, 5, i);
		pArrayDestroy[i] = check_SteamItemInstanceID_t(L, 5 + 1);
		lua_pop(L, 1);
	}
	uint32 unArrayGenerateLength = check_uint32(L, 4); /*normal*/
	luaL_checktype(L, 3, LUA_TTABLE); /*array_count*/
	uint32 punArrayGenerateQuantity[unArrayGenerateLength];
	for(int i=1; i<=unArrayGenerateLength; i++) {
		lua_rawgeti(L, 3, i);
		punArrayGenerateQuantity[i] = check_uint32(L, 3 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	SteamItemDef_t pArrayGenerate[unArrayGenerateLength];
	for(int i=1; i<=unArrayGenerateLength; i++) {
		lua_rawgeti(L, 2, i);
		pArrayGenerate[i] = check_SteamItemDef_t(L, 2 + 1);
		lua_pop(L, 1);
	}
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->ExchangeItems(&pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_TransferItemQuantity(lua_State* L) {
	int top = lua_gettop(L);
	SteamItemInstanceID_t itemIdDest = check_SteamItemInstanceID_t(L, 4); /*normal*/
	uint32 unQuantity = check_uint32(L, 3); /*normal*/
	SteamItemInstanceID_t itemIdSource = check_SteamItemInstanceID_t(L, 2); /*normal*/
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->TransferItemQuantity(&pResultHandle, itemIdSource, unQuantity, itemIdDest);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_SendItemDropHeartbeat(lua_State* L) {
	int top = lua_gettop(L);

	inventory->SendItemDropHeartbeat();
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamInventory_TriggerItemDrop(lua_State* L) {
	int top = lua_gettop(L);
	SteamItemDef_t dropListDefinition = check_SteamItemDef_t(L, 2); /*normal*/
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->TriggerItemDrop(&pResultHandle, dropListDefinition);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_TradeItems(lua_State* L) {
	int top = lua_gettop(L);
	uint32 nArrayGetLength = check_uint32(L, 8); /*normal*/
	luaL_checktype(L, 7, LUA_TTABLE); /*array_count*/
	uint32 pArrayGetQuantity[nArrayGetLength];
	for(int i=1; i<=nArrayGetLength; i++) {
		lua_rawgeti(L, 7, i);
		pArrayGetQuantity[i] = check_uint32(L, 7 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 6, LUA_TTABLE); /*array_count*/
	SteamItemInstanceID_t pArrayGet[nArrayGetLength];
	for(int i=1; i<=nArrayGetLength; i++) {
		lua_rawgeti(L, 6, i);
		pArrayGet[i] = check_SteamItemInstanceID_t(L, 6 + 1);
		lua_pop(L, 1);
	}
	uint32 nArrayGiveLength = check_uint32(L, 5); /*normal*/
	luaL_checktype(L, 4, LUA_TTABLE); /*array_count*/
	uint32 pArrayGiveQuantity[nArrayGiveLength];
	for(int i=1; i<=nArrayGiveLength; i++) {
		lua_rawgeti(L, 4, i);
		pArrayGiveQuantity[i] = check_uint32(L, 4 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 3, LUA_TTABLE); /*array_count*/
	SteamItemInstanceID_t pArrayGive[nArrayGiveLength];
	for(int i=1; i<=nArrayGiveLength; i++) {
		lua_rawgeti(L, 3, i);
		pArrayGive[i] = check_SteamItemInstanceID_t(L, 3 + 1);
		lua_pop(L, 1);
	}
	CSteamID steamIDTradePartner = check_CSteamID(L, 2); /*normal*/
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->TradeItems(&pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_LoadItemDefinitions(lua_State* L) {
	int top = lua_gettop(L);

	bool r = inventory->LoadItemDefinitions();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_GetItemDefinitionIDs(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punItemDefIDsArraySize = check_uint32(L, 2); /*out_param*/
	SteamItemDef_t pItemDefIDs[punItemDefIDsArraySize];
	check_SteamItemDef_t_array(L, 1, pItemDefIDs, punItemDefIDsArraySize); /*out_array_count*/

	bool r = inventory->GetItemDefinitionIDs(pItemDefIDs, &punItemDefIDsArraySize);
	push_bool(L, r);
	push_uint32(L, punItemDefIDsArraySize); /*out_param*/
	push_SteamItemDef_t_array(L, pItemDefIDs, punItemDefIDsArraySize);  /*out_array_count*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamInventory_GetItemDefinitionProperty(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punValueBufferSizeOut = check_uint32(L, 4); /*out_param*/
	dmScript::LuaHBuffer * pchValueBuffer_buffer = check_buffer(L, 3); /*buffer_param*/
	char * pchValueBuffer = 0x0;
	uint32_t pchValueBuffer_buffersize = 0;
	dmBuffer::Result pchValueBuffer_buffer_result = dmBuffer::GetBytes(pchValueBuffer_buffer->m_Buffer, (void**)&pchValueBuffer, &pchValueBuffer_buffersize);
	const char * pchPropertyName = check_const_char_ptr(L, 2); /*normal*/
	SteamItemDef_t iDefinition = check_SteamItemDef_t(L, 1); /*normal*/

	bool r = inventory->GetItemDefinitionProperty(iDefinition, pchPropertyName, pchValueBuffer, &punValueBufferSizeOut);
	push_bool(L, r);
	push_uint32(L, punValueBufferSizeOut); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(lua_State* L) {
	int top = lua_gettop(L);
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = inventory->RequestEligiblePromoItemDefinitionsIDs(steamID);
	steamCallbackWrapper->TrackSteamAPICallSteamInventoryEligiblePromoItemDefIDs_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamInventory_GetEligiblePromoItemDefinitionIDs(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punItemDefIDsArraySize = check_uint32(L, 3); /*out_param*/
	CSteamID steamID = check_CSteamID(L, 1); /*normal*/
	SteamItemDef_t pItemDefIDs[punItemDefIDsArraySize];
	check_SteamItemDef_t_array(L, 2, pItemDefIDs, punItemDefIDsArraySize); /*out_array_count*/

	bool r = inventory->GetEligiblePromoItemDefinitionIDs(steamID, pItemDefIDs, &punItemDefIDsArraySize);
	push_bool(L, r);
	push_uint32(L, punItemDefIDsArraySize); /*out_param*/
	push_SteamItemDef_t_array(L, pItemDefIDs, punItemDefIDsArraySize);  /*out_array_count*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamInventory_StartPurchase(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unArrayLength = check_uint32(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	uint32 punArrayQuantity[unArrayLength];
	for(int i=1; i<=unArrayLength; i++) {
		lua_rawgeti(L, 2, i);
		punArrayQuantity[i] = check_uint32(L, 2 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 1, LUA_TTABLE); /*array_count*/
	SteamItemDef_t pArrayItemDefs[unArrayLength];
	for(int i=1; i<=unArrayLength; i++) {
		lua_rawgeti(L, 1, i);
		pArrayItemDefs[i] = check_SteamItemDef_t(L, 1 + 1);
		lua_pop(L, 1);
	}

	SteamAPICall_t r = inventory->StartPurchase(pArrayItemDefs, punArrayQuantity, unArrayLength);
	steamCallbackWrapper->TrackSteamAPICallSteamInventoryStartPurchaseResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamInventory_RequestPrices(lua_State* L) {
	int top = lua_gettop(L);

	SteamAPICall_t r = inventory->RequestPrices();
	steamCallbackWrapper->TrackSteamAPICallSteamInventoryRequestPricesResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamInventory_GetNumItemsWithPrices(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = inventory->GetNumItemsWithPrices();
	push_uint32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_GetItemsWithPrices(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unArrayLength = check_uint32(L, 4); /*normal*/
	luaL_checktype(L, 1, LUA_TTABLE); /*array_count*/
	SteamItemDef_t pArrayItemDefs[unArrayLength];
	for(int i=1; i<=unArrayLength; i++) {
		lua_rawgeti(L, 1, i);
		pArrayItemDefs[i] = check_SteamItemDef_t(L, 1 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	uint64 pCurrentPrices[unArrayLength];
	for(int i=1; i<=unArrayLength; i++) {
		lua_rawgeti(L, 2, i);
		pCurrentPrices[i] = check_uint64(L, 2 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 3, LUA_TTABLE); /*array_count*/
	uint64 pBasePrices[unArrayLength];
	for(int i=1; i<=unArrayLength; i++) {
		lua_rawgeti(L, 3, i);
		pBasePrices[i] = check_uint64(L, 3 + 1);
		lua_pop(L, 1);
	}

	bool r = inventory->GetItemsWithPrices(pArrayItemDefs, pCurrentPrices, pBasePrices, unArrayLength);
	push_bool(L, r);
	push_SteamItemDef_t_array(L, pArrayItemDefs, unArrayLength);  /*out_array_count*/
	push_uint64_array(L, pCurrentPrices, unArrayLength);  /*out_array_count*/
	push_uint64_array(L, pBasePrices, unArrayLength);  /*out_array_count*/
	
	assert(top + 1 + 3 == lua_gettop(L));
	return 1 + 3;
}

static int ISteamInventory_GetItemPrice(lua_State* L) {
	int top = lua_gettop(L);
	uint64 pBasePrice = check_uint64(L, 3); /*out_param*/
	uint64 pCurrentPrice = check_uint64(L, 2); /*out_param*/
	SteamItemDef_t iDefinition = check_SteamItemDef_t(L, 1); /*normal*/

	bool r = inventory->GetItemPrice(iDefinition, &pCurrentPrice, &pBasePrice);
	push_bool(L, r);
	push_uint64(L, pBasePrice); /*out_param*/
	push_uint64(L, pCurrentPrice); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamInventory_StartUpdateProperties(lua_State* L) {
	int top = lua_gettop(L);

	SteamInventoryUpdateHandle_t r = inventory->StartUpdateProperties();
	push_SteamInventoryUpdateHandle_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_RemoveProperty(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchPropertyName = check_const_char_ptr(L, 3); /*normal*/
	SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2); /*normal*/
	SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1); /*normal*/

	bool r = inventory->RemoveProperty(handle, nItemID, pchPropertyName);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_SetPropertyString(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchPropertyValue = check_const_char_ptr(L, 4); /*normal*/
	const char * pchPropertyName = check_const_char_ptr(L, 3); /*normal*/
	SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2); /*normal*/
	SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1); /*normal*/

	bool r = inventory->SetProperty(handle, nItemID, pchPropertyName, pchPropertyValue);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_SetPropertyBool(lua_State* L) {
	int top = lua_gettop(L);
	bool bValue = check_bool(L, 4); /*normal*/
	const char * pchPropertyName = check_const_char_ptr(L, 3); /*normal*/
	SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2); /*normal*/
	SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1); /*normal*/

	bool r = inventory->SetProperty(handle, nItemID, pchPropertyName, bValue);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_SetPropertyInt64(lua_State* L) {
	int top = lua_gettop(L);
	int64 nValue = check_int64(L, 4); /*normal*/
	const char * pchPropertyName = check_const_char_ptr(L, 3); /*normal*/
	SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2); /*normal*/
	SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1); /*normal*/

	bool r = inventory->SetProperty(handle, nItemID, pchPropertyName, nValue);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_SetPropertyFloat(lua_State* L) {
	int top = lua_gettop(L);
	float flValue = check_float(L, 4); /*normal*/
	const char * pchPropertyName = check_const_char_ptr(L, 3); /*normal*/
	SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2); /*normal*/
	SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1); /*normal*/

	bool r = inventory->SetProperty(handle, nItemID, pchPropertyName, flValue);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamInventory_SubmitUpdateProperties(lua_State* L) {
	int top = lua_gettop(L);
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 2); /*out_param*/
	SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1); /*normal*/

	bool r = inventory->SubmitUpdateProperties(handle, &pResultHandle);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_InspectItem(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchItemToken = check_const_char_ptr(L, 2); /*normal*/
	SteamInventoryResult_t pResultHandle = check_SteamInventoryResult_t(L, 1); /*out_param*/

	bool r = inventory->InspectItem(&pResultHandle, pchItemToken);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}




extern "C" void __cdecl SteamAPIDebugTextHook( int nSeverity, const char *pchDebugText )
{
	if (nSeverity == 0) {
		dmLogInfo("%s", pchDebugText);
	}
	else {
		dmLogWarning("%s", pchDebugText);
	}
}

static int Init(lua_State* L) {
	DM_LUA_STACK_CHECK(L, 0);
	dmLogInfo("Init");
	if(!SteamAPI_Init()) {
		luaL_error(L, "Error initialising SteamAPI");
	}
	if (!SteamAPI_IsSteamRunning()) {
		luaL_error(L, "Steam is not running");
	}
	apps = SteamApps();
	friends = SteamFriends();
	inventory = SteamInventory();
	matchmaking = SteamMatchmaking();
	music = SteamMusic();
	remote_storage = SteamRemoteStorage();
	user = SteamUser();
	utils = SteamUtils();
	utils->SetWarningMessageHook(&SteamAPIDebugTextHook);
	user_stats = SteamUserStats();
	ugc = SteamUGC();
	parties = SteamParties();
	input = SteamInput();
	return 0;
}

static int Update(lua_State* L) {
	SteamAPI_RunCallbacks();
	return 0;
}

static int Restart(lua_State* L) {
	DM_LUA_STACK_CHECK(L, 1);
	uint32_t appid = check_uint32(L, 1);
	int result = SteamAPI_RestartAppIfNecessary(appid);
	lua_pushboolean(L, result);
	return 1;
}

static int Final(lua_State* L) {
	DM_LUA_STACK_CHECK(L, 0);
	SteamAPI_Shutdown();
	return 0;
}

static int SetListener(lua_State* L) {
	DM_LUA_STACK_CHECK(L, 0);
	luaL_checklistener(L, 1, steamworksListener);
	return 0;
}

static const luaL_reg Module_methods[] = {
	{ "init", Init },
	{ "restart", Restart },
	{ "update", Update },
	{ "final", Final },
	{ "set_listener", SetListener },
	{ "user_get_h_steam_user", ISteamUser_GetHSteamUser },
	{ "user_logged_on", ISteamUser_BLoggedOn },
	{ "user_get_steam_id", ISteamUser_GetSteamID },
	{ "user_track_app_usage_event", ISteamUser_TrackAppUsageEvent },
	{ "user_get_user_data_folder", ISteamUser_GetUserDataFolder },
	{ "user_get_auth_session_ticket", ISteamUser_GetAuthSessionTicket },
	{ "user_begin_auth_session", ISteamUser_BeginAuthSession },
	{ "user_end_auth_session", ISteamUser_EndAuthSession },
	{ "user_cancel_auth_ticket", ISteamUser_CancelAuthTicket },
	{ "user_user_has_license_for_app", ISteamUser_UserHasLicenseForApp },
	{ "user_is_behind_nat", ISteamUser_BIsBehindNAT },
	{ "user_advertise_game", ISteamUser_AdvertiseGame },
	{ "user_request_encrypted_app_ticket", ISteamUser_RequestEncryptedAppTicket },
	{ "user_get_encrypted_app_ticket", ISteamUser_GetEncryptedAppTicket },
	{ "user_get_game_badge_level", ISteamUser_GetGameBadgeLevel },
	{ "user_get_player_steam_level", ISteamUser_GetPlayerSteamLevel },
	{ "user_request_store_auth_url", ISteamUser_RequestStoreAuthURL },
	{ "user_is_phone_verified", ISteamUser_BIsPhoneVerified },
	{ "user_is_two_factor_enabled", ISteamUser_BIsTwoFactorEnabled },
	{ "user_is_phone_identifying", ISteamUser_BIsPhoneIdentifying },
	{ "user_is_phone_requiring_verification", ISteamUser_BIsPhoneRequiringVerification },
	{ "user_get_market_eligibility", ISteamUser_GetMarketEligibility },
	{ "user_get_duration_control", ISteamUser_GetDurationControl },
	{ "user_set_duration_control_online_state", ISteamUser_BSetDurationControlOnlineState },
	{ "friends_get_persona_name", ISteamFriends_GetPersonaName },
	{ "friends_set_persona_name", ISteamFriends_SetPersonaName },
	{ "friends_get_persona_state", ISteamFriends_GetPersonaState },
	{ "friends_get_friend_count", ISteamFriends_GetFriendCount },
	{ "friends_get_friend_by_index", ISteamFriends_GetFriendByIndex },
	{ "friends_get_friend_relationship", ISteamFriends_GetFriendRelationship },
	{ "friends_get_friend_persona_state", ISteamFriends_GetFriendPersonaState },
	{ "friends_get_friend_persona_name", ISteamFriends_GetFriendPersonaName },
	{ "friends_get_friend_game_played", ISteamFriends_GetFriendGamePlayed },
	{ "friends_get_friend_persona_name_history", ISteamFriends_GetFriendPersonaNameHistory },
	{ "friends_get_friend_steam_level", ISteamFriends_GetFriendSteamLevel },
	{ "friends_get_player_nickname", ISteamFriends_GetPlayerNickname },
	{ "friends_get_friends_group_count", ISteamFriends_GetFriendsGroupCount },
	{ "friends_get_friends_group_id_by_index", ISteamFriends_GetFriendsGroupIDByIndex },
	{ "friends_get_friends_group_name", ISteamFriends_GetFriendsGroupName },
	{ "friends_get_friends_group_members_count", ISteamFriends_GetFriendsGroupMembersCount },
	{ "friends_get_friends_group_members_list", ISteamFriends_GetFriendsGroupMembersList },
	{ "friends_has_friend", ISteamFriends_HasFriend },
	{ "friends_get_clan_count", ISteamFriends_GetClanCount },
	{ "friends_get_clan_by_index", ISteamFriends_GetClanByIndex },
	{ "friends_get_clan_name", ISteamFriends_GetClanName },
	{ "friends_get_clan_tag", ISteamFriends_GetClanTag },
	{ "friends_get_clan_activity_counts", ISteamFriends_GetClanActivityCounts },
	{ "friends_download_clan_activity_counts", ISteamFriends_DownloadClanActivityCounts },
	{ "friends_get_friend_count_from_source", ISteamFriends_GetFriendCountFromSource },
	{ "friends_get_friend_from_source_by_index", ISteamFriends_GetFriendFromSourceByIndex },
	{ "friends_is_user_in_source", ISteamFriends_IsUserInSource },
	{ "friends_set_in_game_voice_speaking", ISteamFriends_SetInGameVoiceSpeaking },
	{ "friends_activate_game_overlay", ISteamFriends_ActivateGameOverlay },
	{ "friends_activate_game_overlay_to_user", ISteamFriends_ActivateGameOverlayToUser },
	{ "friends_activate_game_overlay_to_web_page", ISteamFriends_ActivateGameOverlayToWebPage },
	{ "friends_activate_game_overlay_to_store", ISteamFriends_ActivateGameOverlayToStore },
	{ "friends_set_played_with", ISteamFriends_SetPlayedWith },
	{ "friends_activate_game_overlay_invite_dialog", ISteamFriends_ActivateGameOverlayInviteDialog },
	{ "friends_get_small_friend_avatar", ISteamFriends_GetSmallFriendAvatar },
	{ "friends_get_medium_friend_avatar", ISteamFriends_GetMediumFriendAvatar },
	{ "friends_get_large_friend_avatar", ISteamFriends_GetLargeFriendAvatar },
	{ "friends_request_user_information", ISteamFriends_RequestUserInformation },
	{ "friends_request_clan_officer_list", ISteamFriends_RequestClanOfficerList },
	{ "friends_get_clan_owner", ISteamFriends_GetClanOwner },
	{ "friends_get_clan_officer_count", ISteamFriends_GetClanOfficerCount },
	{ "friends_get_clan_officer_by_index", ISteamFriends_GetClanOfficerByIndex },
	{ "friends_get_user_restrictions", ISteamFriends_GetUserRestrictions },
	{ "friends_set_rich_presence", ISteamFriends_SetRichPresence },
	{ "friends_clear_rich_presence", ISteamFriends_ClearRichPresence },
	{ "friends_get_friend_rich_presence", ISteamFriends_GetFriendRichPresence },
	{ "friends_get_friend_rich_presence_key_count", ISteamFriends_GetFriendRichPresenceKeyCount },
	{ "friends_get_friend_rich_presence_key_by_index", ISteamFriends_GetFriendRichPresenceKeyByIndex },
	{ "friends_request_friend_rich_presence", ISteamFriends_RequestFriendRichPresence },
	{ "friends_invite_user_to_game", ISteamFriends_InviteUserToGame },
	{ "friends_get_coplay_friend_count", ISteamFriends_GetCoplayFriendCount },
	{ "friends_get_coplay_friend", ISteamFriends_GetCoplayFriend },
	{ "friends_get_friend_coplay_time", ISteamFriends_GetFriendCoplayTime },
	{ "friends_get_friend_coplay_game", ISteamFriends_GetFriendCoplayGame },
	{ "friends_join_clan_chat_room", ISteamFriends_JoinClanChatRoom },
	{ "friends_leave_clan_chat_room", ISteamFriends_LeaveClanChatRoom },
	{ "friends_get_clan_chat_member_count", ISteamFriends_GetClanChatMemberCount },
	{ "friends_get_chat_member_by_index", ISteamFriends_GetChatMemberByIndex },
	{ "friends_send_clan_chat_message", ISteamFriends_SendClanChatMessage },
	{ "friends_get_clan_chat_message", ISteamFriends_GetClanChatMessage },
	{ "friends_is_clan_chat_admin", ISteamFriends_IsClanChatAdmin },
	{ "friends_is_clan_chat_window_open_in_steam", ISteamFriends_IsClanChatWindowOpenInSteam },
	{ "friends_open_clan_chat_window_in_steam", ISteamFriends_OpenClanChatWindowInSteam },
	{ "friends_close_clan_chat_window_in_steam", ISteamFriends_CloseClanChatWindowInSteam },
	{ "friends_set_listen_for_friends_messages", ISteamFriends_SetListenForFriendsMessages },
	{ "friends_reply_to_friend_message", ISteamFriends_ReplyToFriendMessage },
	{ "friends_get_friend_message", ISteamFriends_GetFriendMessage },
	{ "friends_get_follower_count", ISteamFriends_GetFollowerCount },
	{ "friends_is_following", ISteamFriends_IsFollowing },
	{ "friends_enumerate_following_list", ISteamFriends_EnumerateFollowingList },
	{ "friends_is_clan_public", ISteamFriends_IsClanPublic },
	{ "friends_is_clan_official_game_group", ISteamFriends_IsClanOfficialGameGroup },
	{ "friends_get_num_chats_with_unread_priority_messages", ISteamFriends_GetNumChatsWithUnreadPriorityMessages },
	{ "friends_activate_game_overlay_remote_play_together_invite_dialog", ISteamFriends_ActivateGameOverlayRemotePlayTogetherInviteDialog },
	{ "friends_register_protocol_in_overlay_browser", ISteamFriends_RegisterProtocolInOverlayBrowser },
	{ "friends_activate_game_overlay_invite_dialog_connect_string", ISteamFriends_ActivateGameOverlayInviteDialogConnectString },
	{ "friends_request_equipped_profile_items", ISteamFriends_RequestEquippedProfileItems },
	{ "friends_has_equipped_profile_item", ISteamFriends_BHasEquippedProfileItem },
	{ "friends_get_profile_item_property_string", ISteamFriends_GetProfileItemPropertyString },
	{ "friends_get_profile_item_property_uint", ISteamFriends_GetProfileItemPropertyUint },
	{ "utils_get_seconds_since_app_active", ISteamUtils_GetSecondsSinceAppActive },
	{ "utils_get_seconds_since_computer_active", ISteamUtils_GetSecondsSinceComputerActive },
	{ "utils_get_connected_universe", ISteamUtils_GetConnectedUniverse },
	{ "utils_get_server_real_time", ISteamUtils_GetServerRealTime },
	{ "utils_get_ip_country", ISteamUtils_GetIPCountry },
	{ "utils_get_image_size", ISteamUtils_GetImageSize },
	{ "utils_get_image_rgba", ISteamUtils_GetImageRGBA },
	{ "utils_get_current_battery_power", ISteamUtils_GetCurrentBatteryPower },
	{ "utils_get_app_id", ISteamUtils_GetAppID },
	{ "utils_set_overlay_notification_position", ISteamUtils_SetOverlayNotificationPosition },
	{ "utils_is_api_call_completed", ISteamUtils_IsAPICallCompleted },
	{ "utils_get_api_call_failure_reason", ISteamUtils_GetAPICallFailureReason },
	{ "utils_get_api_call_result", ISteamUtils_GetAPICallResult },
	{ "utils_get_ipc_call_count", ISteamUtils_GetIPCCallCount },
	{ "utils_is_overlay_enabled", ISteamUtils_IsOverlayEnabled },
	{ "utils_overlay_needs_present", ISteamUtils_BOverlayNeedsPresent },
	{ "utils_check_file_signature", ISteamUtils_CheckFileSignature },
	{ "utils_show_gamepad_text_input", ISteamUtils_ShowGamepadTextInput },
	{ "utils_get_entered_gamepad_text_length", ISteamUtils_GetEnteredGamepadTextLength },
	{ "utils_get_entered_gamepad_text_input", ISteamUtils_GetEnteredGamepadTextInput },
	{ "utils_get_steam_ui_language", ISteamUtils_GetSteamUILanguage },
	{ "utils_is_steam_running_in_vr", ISteamUtils_IsSteamRunningInVR },
	{ "utils_set_overlay_notification_inset", ISteamUtils_SetOverlayNotificationInset },
	{ "utils_is_steam_in_big_picture_mode", ISteamUtils_IsSteamInBigPictureMode },
	{ "utils_start_vr_dashboard", ISteamUtils_StartVRDashboard },
	{ "utils_is_vr_headset_streaming_enabled", ISteamUtils_IsVRHeadsetStreamingEnabled },
	{ "utils_set_vr_headset_streaming_enabled", ISteamUtils_SetVRHeadsetStreamingEnabled },
	{ "utils_is_steam_china_launcher", ISteamUtils_IsSteamChinaLauncher },
	{ "utils_init_filter_text", ISteamUtils_InitFilterText },
	{ "utils_filter_text", ISteamUtils_FilterText },
	{ "utils_get_i_pv6_connectivity_state", ISteamUtils_GetIPv6ConnectivityState },
	{ "utils_is_steam_running_on_steam_deck", ISteamUtils_IsSteamRunningOnSteamDeck },
	{ "utils_show_floating_gamepad_text_input", ISteamUtils_ShowFloatingGamepadTextInput },
	{ "utils_set_game_launcher_mode", ISteamUtils_SetGameLauncherMode },
	{ "utils_dismiss_floating_gamepad_text_input", ISteamUtils_DismissFloatingGamepadTextInput },
	{ "matchmaking_get_favorite_game_count", ISteamMatchmaking_GetFavoriteGameCount },
	{ "matchmaking_get_favorite_game", ISteamMatchmaking_GetFavoriteGame },
	{ "matchmaking_add_favorite_game", ISteamMatchmaking_AddFavoriteGame },
	{ "matchmaking_remove_favorite_game", ISteamMatchmaking_RemoveFavoriteGame },
	{ "matchmaking_request_lobby_list", ISteamMatchmaking_RequestLobbyList },
	{ "matchmaking_add_request_lobby_list_string_filter", ISteamMatchmaking_AddRequestLobbyListStringFilter },
	{ "matchmaking_add_request_lobby_list_numerical_filter", ISteamMatchmaking_AddRequestLobbyListNumericalFilter },
	{ "matchmaking_add_request_lobby_list_near_value_filter", ISteamMatchmaking_AddRequestLobbyListNearValueFilter },
	{ "matchmaking_add_request_lobby_list_filter_slots_available", ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable },
	{ "matchmaking_add_request_lobby_list_distance_filter", ISteamMatchmaking_AddRequestLobbyListDistanceFilter },
	{ "matchmaking_add_request_lobby_list_result_count_filter", ISteamMatchmaking_AddRequestLobbyListResultCountFilter },
	{ "matchmaking_add_request_lobby_list_compatible_members_filter", ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter },
	{ "matchmaking_get_lobby_by_index", ISteamMatchmaking_GetLobbyByIndex },
	{ "matchmaking_create_lobby", ISteamMatchmaking_CreateLobby },
	{ "matchmaking_join_lobby", ISteamMatchmaking_JoinLobby },
	{ "matchmaking_leave_lobby", ISteamMatchmaking_LeaveLobby },
	{ "matchmaking_invite_user_to_lobby", ISteamMatchmaking_InviteUserToLobby },
	{ "matchmaking_get_num_lobby_members", ISteamMatchmaking_GetNumLobbyMembers },
	{ "matchmaking_get_lobby_member_by_index", ISteamMatchmaking_GetLobbyMemberByIndex },
	{ "matchmaking_get_lobby_data", ISteamMatchmaking_GetLobbyData },
	{ "matchmaking_set_lobby_data", ISteamMatchmaking_SetLobbyData },
	{ "matchmaking_get_lobby_data_count", ISteamMatchmaking_GetLobbyDataCount },
	{ "matchmaking_get_lobby_data_by_index", ISteamMatchmaking_GetLobbyDataByIndex },
	{ "matchmaking_delete_lobby_data", ISteamMatchmaking_DeleteLobbyData },
	{ "matchmaking_get_lobby_member_data", ISteamMatchmaking_GetLobbyMemberData },
	{ "matchmaking_set_lobby_member_data", ISteamMatchmaking_SetLobbyMemberData },
	{ "matchmaking_send_lobby_chat_msg", ISteamMatchmaking_SendLobbyChatMsg },
	{ "matchmaking_get_lobby_chat_entry", ISteamMatchmaking_GetLobbyChatEntry },
	{ "matchmaking_request_lobby_data", ISteamMatchmaking_RequestLobbyData },
	{ "matchmaking_set_lobby_game_server", ISteamMatchmaking_SetLobbyGameServer },
	{ "matchmaking_get_lobby_game_server", ISteamMatchmaking_GetLobbyGameServer },
	{ "matchmaking_set_lobby_member_limit", ISteamMatchmaking_SetLobbyMemberLimit },
	{ "matchmaking_get_lobby_member_limit", ISteamMatchmaking_GetLobbyMemberLimit },
	{ "matchmaking_set_lobby_type", ISteamMatchmaking_SetLobbyType },
	{ "matchmaking_set_lobby_joinable", ISteamMatchmaking_SetLobbyJoinable },
	{ "matchmaking_get_lobby_owner", ISteamMatchmaking_GetLobbyOwner },
	{ "matchmaking_set_lobby_owner", ISteamMatchmaking_SetLobbyOwner },
	{ "matchmaking_set_linked_lobby", ISteamMatchmaking_SetLinkedLobby },
	{ "parties_get_num_active_beacons", ISteamParties_GetNumActiveBeacons },
	{ "parties_get_beacon_by_index", ISteamParties_GetBeaconByIndex },
	{ "parties_get_beacon_details", ISteamParties_GetBeaconDetails },
	{ "parties_join_party", ISteamParties_JoinParty },
	{ "parties_get_num_available_beacon_locations", ISteamParties_GetNumAvailableBeaconLocations },
	{ "parties_get_available_beacon_locations", ISteamParties_GetAvailableBeaconLocations },
	{ "parties_create_beacon", ISteamParties_CreateBeacon },
	{ "parties_on_reservation_completed", ISteamParties_OnReservationCompleted },
	{ "parties_cancel_reservation", ISteamParties_CancelReservation },
	{ "parties_change_num_open_slots", ISteamParties_ChangeNumOpenSlots },
	{ "parties_destroy_beacon", ISteamParties_DestroyBeacon },
	{ "parties_get_beacon_location_data", ISteamParties_GetBeaconLocationData },
	{ "remote_storage_file_write", ISteamRemoteStorage_FileWrite },
	{ "remote_storage_file_read", ISteamRemoteStorage_FileRead },
	{ "remote_storage_file_write_async", ISteamRemoteStorage_FileWriteAsync },
	{ "remote_storage_file_read_async", ISteamRemoteStorage_FileReadAsync },
	{ "remote_storage_file_read_async_complete", ISteamRemoteStorage_FileReadAsyncComplete },
	{ "remote_storage_file_forget", ISteamRemoteStorage_FileForget },
	{ "remote_storage_file_delete", ISteamRemoteStorage_FileDelete },
	{ "remote_storage_file_share", ISteamRemoteStorage_FileShare },
	{ "remote_storage_set_sync_platforms", ISteamRemoteStorage_SetSyncPlatforms },
	{ "remote_storage_file_write_stream_open", ISteamRemoteStorage_FileWriteStreamOpen },
	{ "remote_storage_file_write_stream_write_chunk", ISteamRemoteStorage_FileWriteStreamWriteChunk },
	{ "remote_storage_file_write_stream_close", ISteamRemoteStorage_FileWriteStreamClose },
	{ "remote_storage_file_write_stream_cancel", ISteamRemoteStorage_FileWriteStreamCancel },
	{ "remote_storage_file_exists", ISteamRemoteStorage_FileExists },
	{ "remote_storage_file_persisted", ISteamRemoteStorage_FilePersisted },
	{ "remote_storage_get_file_size", ISteamRemoteStorage_GetFileSize },
	{ "remote_storage_get_file_timestamp", ISteamRemoteStorage_GetFileTimestamp },
	{ "remote_storage_get_sync_platforms", ISteamRemoteStorage_GetSyncPlatforms },
	{ "remote_storage_get_file_count", ISteamRemoteStorage_GetFileCount },
	{ "remote_storage_get_file_name_and_size", ISteamRemoteStorage_GetFileNameAndSize },
	{ "remote_storage_get_quota", ISteamRemoteStorage_GetQuota },
	{ "remote_storage_is_cloud_enabled_for_account", ISteamRemoteStorage_IsCloudEnabledForAccount },
	{ "remote_storage_is_cloud_enabled_for_app", ISteamRemoteStorage_IsCloudEnabledForApp },
	{ "remote_storage_set_cloud_enabled_for_app", ISteamRemoteStorage_SetCloudEnabledForApp },
	{ "remote_storage_ugc_download", ISteamRemoteStorage_UGCDownload },
	{ "remote_storage_get_ugc_download_progress", ISteamRemoteStorage_GetUGCDownloadProgress },
	{ "remote_storage_get_ugc_details", ISteamRemoteStorage_GetUGCDetails },
	{ "remote_storage_ugc_read", ISteamRemoteStorage_UGCRead },
	{ "remote_storage_get_cached_ugc_count", ISteamRemoteStorage_GetCachedUGCCount },
	{ "remote_storage_get_cached_ugc_handle", ISteamRemoteStorage_GetCachedUGCHandle },
	{ "remote_storage_publish_workshop_file", ISteamRemoteStorage_PublishWorkshopFile },
	{ "remote_storage_create_published_file_update_request", ISteamRemoteStorage_CreatePublishedFileUpdateRequest },
	{ "remote_storage_update_published_file_file", ISteamRemoteStorage_UpdatePublishedFileFile },
	{ "remote_storage_update_published_file_preview_file", ISteamRemoteStorage_UpdatePublishedFilePreviewFile },
	{ "remote_storage_update_published_file_title", ISteamRemoteStorage_UpdatePublishedFileTitle },
	{ "remote_storage_update_published_file_description", ISteamRemoteStorage_UpdatePublishedFileDescription },
	{ "remote_storage_update_published_file_visibility", ISteamRemoteStorage_UpdatePublishedFileVisibility },
	{ "remote_storage_update_published_file_tags", ISteamRemoteStorage_UpdatePublishedFileTags },
	{ "remote_storage_commit_published_file_update", ISteamRemoteStorage_CommitPublishedFileUpdate },
	{ "remote_storage_get_published_file_details", ISteamRemoteStorage_GetPublishedFileDetails },
	{ "remote_storage_delete_published_file", ISteamRemoteStorage_DeletePublishedFile },
	{ "remote_storage_enumerate_user_published_files", ISteamRemoteStorage_EnumerateUserPublishedFiles },
	{ "remote_storage_subscribe_published_file", ISteamRemoteStorage_SubscribePublishedFile },
	{ "remote_storage_enumerate_user_subscribed_files", ISteamRemoteStorage_EnumerateUserSubscribedFiles },
	{ "remote_storage_unsubscribe_published_file", ISteamRemoteStorage_UnsubscribePublishedFile },
	{ "remote_storage_update_published_file_set_change_description", ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription },
	{ "remote_storage_get_published_item_vote_details", ISteamRemoteStorage_GetPublishedItemVoteDetails },
	{ "remote_storage_update_user_published_item_vote", ISteamRemoteStorage_UpdateUserPublishedItemVote },
	{ "remote_storage_get_user_published_item_vote_details", ISteamRemoteStorage_GetUserPublishedItemVoteDetails },
	{ "remote_storage_enumerate_user_shared_workshop_files", ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles },
	{ "remote_storage_publish_video", ISteamRemoteStorage_PublishVideo },
	{ "remote_storage_set_user_published_file_action", ISteamRemoteStorage_SetUserPublishedFileAction },
	{ "remote_storage_enumerate_published_files_by_user_action", ISteamRemoteStorage_EnumeratePublishedFilesByUserAction },
	{ "remote_storage_enumerate_published_workshop_files", ISteamRemoteStorage_EnumeratePublishedWorkshopFiles },
	{ "remote_storage_ugc_download_to_location", ISteamRemoteStorage_UGCDownloadToLocation },
	{ "remote_storage_get_local_file_change_count", ISteamRemoteStorage_GetLocalFileChangeCount },
	{ "remote_storage_get_local_file_change", ISteamRemoteStorage_GetLocalFileChange },
	{ "remote_storage_begin_file_write_batch", ISteamRemoteStorage_BeginFileWriteBatch },
	{ "remote_storage_end_file_write_batch", ISteamRemoteStorage_EndFileWriteBatch },
	{ "user_stats_request_current_stats", ISteamUserStats_RequestCurrentStats },
	{ "user_stats_get_stat", ISteamUserStats_GetStatInt32 },
	{ "user_stats_get_stat", ISteamUserStats_GetStatFloat },
	{ "user_stats_set_stat", ISteamUserStats_SetStatInt32 },
	{ "user_stats_set_stat", ISteamUserStats_SetStatFloat },
	{ "user_stats_update_avg_rate_stat", ISteamUserStats_UpdateAvgRateStat },
	{ "user_stats_get_achievement", ISteamUserStats_GetAchievement },
	{ "user_stats_set_achievement", ISteamUserStats_SetAchievement },
	{ "user_stats_clear_achievement", ISteamUserStats_ClearAchievement },
	{ "user_stats_get_achievement_and_unlock_time", ISteamUserStats_GetAchievementAndUnlockTime },
	{ "user_stats_store_stats", ISteamUserStats_StoreStats },
	{ "user_stats_get_achievement_icon", ISteamUserStats_GetAchievementIcon },
	{ "user_stats_get_achievement_display_attribute", ISteamUserStats_GetAchievementDisplayAttribute },
	{ "user_stats_indicate_achievement_progress", ISteamUserStats_IndicateAchievementProgress },
	{ "user_stats_get_num_achievements", ISteamUserStats_GetNumAchievements },
	{ "user_stats_get_achievement_name", ISteamUserStats_GetAchievementName },
	{ "user_stats_request_user_stats", ISteamUserStats_RequestUserStats },
	{ "user_stats_get_user_stat", ISteamUserStats_GetUserStatInt32 },
	{ "user_stats_get_user_stat", ISteamUserStats_GetUserStatFloat },
	{ "user_stats_get_user_achievement", ISteamUserStats_GetUserAchievement },
	{ "user_stats_get_user_achievement_and_unlock_time", ISteamUserStats_GetUserAchievementAndUnlockTime },
	{ "user_stats_reset_all_stats", ISteamUserStats_ResetAllStats },
	{ "user_stats_find_or_create_leaderboard", ISteamUserStats_FindOrCreateLeaderboard },
	{ "user_stats_find_leaderboard", ISteamUserStats_FindLeaderboard },
	{ "user_stats_get_leaderboard_name", ISteamUserStats_GetLeaderboardName },
	{ "user_stats_get_leaderboard_entry_count", ISteamUserStats_GetLeaderboardEntryCount },
	{ "user_stats_get_leaderboard_sort_method", ISteamUserStats_GetLeaderboardSortMethod },
	{ "user_stats_get_leaderboard_display_type", ISteamUserStats_GetLeaderboardDisplayType },
	{ "user_stats_download_leaderboard_entries", ISteamUserStats_DownloadLeaderboardEntries },
	{ "user_stats_download_leaderboard_entries_for_users", ISteamUserStats_DownloadLeaderboardEntriesForUsers },
	{ "user_stats_get_downloaded_leaderboard_entry", ISteamUserStats_GetDownloadedLeaderboardEntry },
	{ "user_stats_upload_leaderboard_score", ISteamUserStats_UploadLeaderboardScore },
	{ "user_stats_attach_leaderboard_ugc", ISteamUserStats_AttachLeaderboardUGC },
	{ "user_stats_get_number_of_current_players", ISteamUserStats_GetNumberOfCurrentPlayers },
	{ "user_stats_request_global_achievement_percentages", ISteamUserStats_RequestGlobalAchievementPercentages },
	{ "user_stats_get_most_achieved_achievement_info", ISteamUserStats_GetMostAchievedAchievementInfo },
	{ "user_stats_get_next_most_achieved_achievement_info", ISteamUserStats_GetNextMostAchievedAchievementInfo },
	{ "user_stats_get_achievement_achieved_percent", ISteamUserStats_GetAchievementAchievedPercent },
	{ "user_stats_request_global_stats", ISteamUserStats_RequestGlobalStats },
	{ "user_stats_get_global_stat", ISteamUserStats_GetGlobalStatInt64 },
	{ "user_stats_get_global_stat", ISteamUserStats_GetGlobalStatDouble },
	{ "user_stats_get_global_stat_history", ISteamUserStats_GetGlobalStatHistoryInt64 },
	{ "user_stats_get_global_stat_history", ISteamUserStats_GetGlobalStatHistoryDouble },
	{ "user_stats_get_achievement_progress_limits", ISteamUserStats_GetAchievementProgressLimitsInt32 },
	{ "user_stats_get_achievement_progress_limits", ISteamUserStats_GetAchievementProgressLimitsFloat },
	{ "apps_is_subscribed", ISteamApps_BIsSubscribed },
	{ "apps_is_low_violence", ISteamApps_BIsLowViolence },
	{ "apps_is_cybercafe", ISteamApps_BIsCybercafe },
	{ "apps_is_vac_banned", ISteamApps_BIsVACBanned },
	{ "apps_get_current_game_language", ISteamApps_GetCurrentGameLanguage },
	{ "apps_get_available_game_languages", ISteamApps_GetAvailableGameLanguages },
	{ "apps_is_subscribed_app", ISteamApps_BIsSubscribedApp },
	{ "apps_is_dlc_installed", ISteamApps_BIsDlcInstalled },
	{ "apps_get_earliest_purchase_unix_time", ISteamApps_GetEarliestPurchaseUnixTime },
	{ "apps_is_subscribed_from_free_weekend", ISteamApps_BIsSubscribedFromFreeWeekend },
	{ "apps_get_dlc_count", ISteamApps_GetDLCCount },
	{ "apps_get_dlc_data_by_index", ISteamApps_BGetDLCDataByIndex },
	{ "apps_install_dlc", ISteamApps_InstallDLC },
	{ "apps_uninstall_dlc", ISteamApps_UninstallDLC },
	{ "apps_request_app_proof_of_purchase_key", ISteamApps_RequestAppProofOfPurchaseKey },
	{ "apps_get_current_beta_name", ISteamApps_GetCurrentBetaName },
	{ "apps_mark_content_corrupt", ISteamApps_MarkContentCorrupt },
	{ "apps_get_installed_depots", ISteamApps_GetInstalledDepots },
	{ "apps_get_app_install_dir", ISteamApps_GetAppInstallDir },
	{ "apps_is_app_installed", ISteamApps_BIsAppInstalled },
	{ "apps_get_app_owner", ISteamApps_GetAppOwner },
	{ "apps_get_launch_query_param", ISteamApps_GetLaunchQueryParam },
	{ "apps_get_dlc_download_progress", ISteamApps_GetDlcDownloadProgress },
	{ "apps_get_app_build_id", ISteamApps_GetAppBuildId },
	{ "apps_request_all_proof_of_purchase_keys", ISteamApps_RequestAllProofOfPurchaseKeys },
	{ "apps_get_file_details", ISteamApps_GetFileDetails },
	{ "apps_get_launch_command_line", ISteamApps_GetLaunchCommandLine },
	{ "apps_is_subscribed_from_family_sharing", ISteamApps_BIsSubscribedFromFamilySharing },
	{ "apps_is_timed_trial", ISteamApps_BIsTimedTrial },
	{ "apps_set_dlc_context", ISteamApps_SetDlcContext },
	{ "music_is_enabled", ISteamMusic_BIsEnabled },
	{ "music_is_playing", ISteamMusic_BIsPlaying },
	{ "music_get_playback_status", ISteamMusic_GetPlaybackStatus },
	{ "music_play", ISteamMusic_Play },
	{ "music_pause", ISteamMusic_Pause },
	{ "music_play_previous", ISteamMusic_PlayPrevious },
	{ "music_play_next", ISteamMusic_PlayNext },
	{ "music_set_volume", ISteamMusic_SetVolume },
	{ "music_get_volume", ISteamMusic_GetVolume },
	{ "ugc_create_query_user_ugc_request", ISteamUGC_CreateQueryUserUGCRequest },
	{ "ugc_create_query_all_ugc_request", ISteamUGC_CreateQueryAllUGCRequestPage },
	{ "ugc_create_query_all_ugc_request", ISteamUGC_CreateQueryAllUGCRequestCursor },
	{ "ugc_create_query_ugc_details_request", ISteamUGC_CreateQueryUGCDetailsRequest },
	{ "ugc_send_query_ugc_request", ISteamUGC_SendQueryUGCRequest },
	{ "ugc_get_query_ugc_result", ISteamUGC_GetQueryUGCResult },
	{ "ugc_get_query_ugc_num_tags", ISteamUGC_GetQueryUGCNumTags },
	{ "ugc_get_query_ugc_tag", ISteamUGC_GetQueryUGCTag },
	{ "ugc_get_query_ugc_tag_display_name", ISteamUGC_GetQueryUGCTagDisplayName },
	{ "ugc_get_query_ugc_preview_url", ISteamUGC_GetQueryUGCPreviewURL },
	{ "ugc_get_query_ugc_metadata", ISteamUGC_GetQueryUGCMetadata },
	{ "ugc_get_query_ugc_children", ISteamUGC_GetQueryUGCChildren },
	{ "ugc_get_query_ugc_statistic", ISteamUGC_GetQueryUGCStatistic },
	{ "ugc_get_query_ugc_num_additional_previews", ISteamUGC_GetQueryUGCNumAdditionalPreviews },
	{ "ugc_get_query_ugc_additional_preview", ISteamUGC_GetQueryUGCAdditionalPreview },
	{ "ugc_get_query_ugc_num_key_value_tags", ISteamUGC_GetQueryUGCNumKeyValueTags },
	{ "ugc_get_query_ugc_key_value_tag", ISteamUGC_GetQueryUGCKeyValueTag },
	{ "ugc_get_query_ugc_key_value_tag", ISteamUGC_GetQueryFirstUGCKeyValueTag },
	{ "ugc_release_query_ugc_request", ISteamUGC_ReleaseQueryUGCRequest },
	{ "ugc_add_required_tag", ISteamUGC_AddRequiredTag },
	{ "ugc_add_required_tag_group", ISteamUGC_AddRequiredTagGroup },
	{ "ugc_add_excluded_tag", ISteamUGC_AddExcludedTag },
	{ "ugc_set_return_only_i_ds", ISteamUGC_SetReturnOnlyIDs },
	{ "ugc_set_return_key_value_tags", ISteamUGC_SetReturnKeyValueTags },
	{ "ugc_set_return_long_description", ISteamUGC_SetReturnLongDescription },
	{ "ugc_set_return_metadata", ISteamUGC_SetReturnMetadata },
	{ "ugc_set_return_children", ISteamUGC_SetReturnChildren },
	{ "ugc_set_return_additional_previews", ISteamUGC_SetReturnAdditionalPreviews },
	{ "ugc_set_return_total_only", ISteamUGC_SetReturnTotalOnly },
	{ "ugc_set_return_playtime_stats", ISteamUGC_SetReturnPlaytimeStats },
	{ "ugc_set_language", ISteamUGC_SetLanguage },
	{ "ugc_set_allow_cached_response", ISteamUGC_SetAllowCachedResponse },
	{ "ugc_set_cloud_file_name_filter", ISteamUGC_SetCloudFileNameFilter },
	{ "ugc_set_match_any_tag", ISteamUGC_SetMatchAnyTag },
	{ "ugc_set_search_text", ISteamUGC_SetSearchText },
	{ "ugc_set_ranked_by_trend_days", ISteamUGC_SetRankedByTrendDays },
	{ "ugc_set_time_created_date_range", ISteamUGC_SetTimeCreatedDateRange },
	{ "ugc_set_time_updated_date_range", ISteamUGC_SetTimeUpdatedDateRange },
	{ "ugc_add_required_key_value_tag", ISteamUGC_AddRequiredKeyValueTag },
	{ "ugc_request_ugc_details", ISteamUGC_RequestUGCDetails },
	{ "ugc_create_item", ISteamUGC_CreateItem },
	{ "ugc_start_item_update", ISteamUGC_StartItemUpdate },
	{ "ugc_set_item_title", ISteamUGC_SetItemTitle },
	{ "ugc_set_item_description", ISteamUGC_SetItemDescription },
	{ "ugc_set_item_update_language", ISteamUGC_SetItemUpdateLanguage },
	{ "ugc_set_item_metadata", ISteamUGC_SetItemMetadata },
	{ "ugc_set_item_visibility", ISteamUGC_SetItemVisibility },
	{ "ugc_set_item_tags", ISteamUGC_SetItemTags },
	{ "ugc_set_item_content", ISteamUGC_SetItemContent },
	{ "ugc_set_item_preview", ISteamUGC_SetItemPreview },
	{ "ugc_set_allow_legacy_upload", ISteamUGC_SetAllowLegacyUpload },
	{ "ugc_remove_all_item_key_value_tags", ISteamUGC_RemoveAllItemKeyValueTags },
	{ "ugc_remove_item_key_value_tags", ISteamUGC_RemoveItemKeyValueTags },
	{ "ugc_add_item_key_value_tag", ISteamUGC_AddItemKeyValueTag },
	{ "ugc_add_item_preview_file", ISteamUGC_AddItemPreviewFile },
	{ "ugc_add_item_preview_video", ISteamUGC_AddItemPreviewVideo },
	{ "ugc_update_item_preview_file", ISteamUGC_UpdateItemPreviewFile },
	{ "ugc_update_item_preview_video", ISteamUGC_UpdateItemPreviewVideo },
	{ "ugc_remove_item_preview", ISteamUGC_RemoveItemPreview },
	{ "ugc_submit_item_update", ISteamUGC_SubmitItemUpdate },
	{ "ugc_get_item_update_progress", ISteamUGC_GetItemUpdateProgress },
	{ "ugc_set_user_item_vote", ISteamUGC_SetUserItemVote },
	{ "ugc_get_user_item_vote", ISteamUGC_GetUserItemVote },
	{ "ugc_add_item_to_favorites", ISteamUGC_AddItemToFavorites },
	{ "ugc_remove_item_from_favorites", ISteamUGC_RemoveItemFromFavorites },
	{ "ugc_subscribe_item", ISteamUGC_SubscribeItem },
	{ "ugc_unsubscribe_item", ISteamUGC_UnsubscribeItem },
	{ "ugc_get_num_subscribed_items", ISteamUGC_GetNumSubscribedItems },
	{ "ugc_get_subscribed_items", ISteamUGC_GetSubscribedItems },
	{ "ugc_get_item_state", ISteamUGC_GetItemState },
	{ "ugc_get_item_install_info", ISteamUGC_GetItemInstallInfo },
	{ "ugc_get_item_download_info", ISteamUGC_GetItemDownloadInfo },
	{ "ugc_download_item", ISteamUGC_DownloadItem },
	{ "ugc_init_workshop_for_game_server", ISteamUGC_BInitWorkshopForGameServer },
	{ "ugc_suspend_downloads", ISteamUGC_SuspendDownloads },
	{ "ugc_start_playtime_tracking", ISteamUGC_StartPlaytimeTracking },
	{ "ugc_stop_playtime_tracking", ISteamUGC_StopPlaytimeTracking },
	{ "ugc_stop_playtime_tracking_for_all_items", ISteamUGC_StopPlaytimeTrackingForAllItems },
	{ "ugc_add_dependency", ISteamUGC_AddDependency },
	{ "ugc_remove_dependency", ISteamUGC_RemoveDependency },
	{ "ugc_add_app_dependency", ISteamUGC_AddAppDependency },
	{ "ugc_remove_app_dependency", ISteamUGC_RemoveAppDependency },
	{ "ugc_get_app_dependencies", ISteamUGC_GetAppDependencies },
	{ "ugc_delete_item", ISteamUGC_DeleteItem },
	{ "ugc_show_workshop_eula", ISteamUGC_ShowWorkshopEULA },
	{ "ugc_get_workshop_eula_status", ISteamUGC_GetWorkshopEULAStatus },
	{ "inventory_get_result_status", ISteamInventory_GetResultStatus },
	{ "inventory_get_result_items", ISteamInventory_GetResultItems },
	{ "inventory_get_result_item_property", ISteamInventory_GetResultItemProperty },
	{ "inventory_get_result_timestamp", ISteamInventory_GetResultTimestamp },
	{ "inventory_check_result_steam_id", ISteamInventory_CheckResultSteamID },
	{ "inventory_destroy_result", ISteamInventory_DestroyResult },
	{ "inventory_get_all_items", ISteamInventory_GetAllItems },
	{ "inventory_get_items_by_id", ISteamInventory_GetItemsByID },
	{ "inventory_serialize_result", ISteamInventory_SerializeResult },
	{ "inventory_deserialize_result", ISteamInventory_DeserializeResult },
	{ "inventory_generate_items", ISteamInventory_GenerateItems },
	{ "inventory_grant_promo_items", ISteamInventory_GrantPromoItems },
	{ "inventory_add_promo_item", ISteamInventory_AddPromoItem },
	{ "inventory_add_promo_items", ISteamInventory_AddPromoItems },
	{ "inventory_consume_item", ISteamInventory_ConsumeItem },
	{ "inventory_exchange_items", ISteamInventory_ExchangeItems },
	{ "inventory_transfer_item_quantity", ISteamInventory_TransferItemQuantity },
	{ "inventory_send_item_drop_heartbeat", ISteamInventory_SendItemDropHeartbeat },
	{ "inventory_trigger_item_drop", ISteamInventory_TriggerItemDrop },
	{ "inventory_trade_items", ISteamInventory_TradeItems },
	{ "inventory_load_item_definitions", ISteamInventory_LoadItemDefinitions },
	{ "inventory_get_item_definition_i_ds", ISteamInventory_GetItemDefinitionIDs },
	{ "inventory_get_item_definition_property", ISteamInventory_GetItemDefinitionProperty },
	{ "inventory_request_eligible_promo_item_definitions_i_ds", ISteamInventory_RequestEligiblePromoItemDefinitionsIDs },
	{ "inventory_get_eligible_promo_item_definition_i_ds", ISteamInventory_GetEligiblePromoItemDefinitionIDs },
	{ "inventory_start_purchase", ISteamInventory_StartPurchase },
	{ "inventory_request_prices", ISteamInventory_RequestPrices },
	{ "inventory_get_num_items_with_prices", ISteamInventory_GetNumItemsWithPrices },
	{ "inventory_get_items_with_prices", ISteamInventory_GetItemsWithPrices },
	{ "inventory_get_item_price", ISteamInventory_GetItemPrice },
	{ "inventory_start_update_properties", ISteamInventory_StartUpdateProperties },
	{ "inventory_remove_property", ISteamInventory_RemoveProperty },
	{ "inventory_set_property", ISteamInventory_SetPropertyString },
	{ "inventory_set_property", ISteamInventory_SetPropertyBool },
	{ "inventory_set_property", ISteamInventory_SetPropertyInt64 },
	{ "inventory_set_property", ISteamInventory_SetPropertyFloat },
	{ "inventory_submit_update_properties", ISteamInventory_SubmitUpdateProperties },
	{ "inventory_inspect_item", ISteamInventory_InspectItem },
	{ 0, 0 }
};

static void LuaInit(lua_State* L) {
	int top = lua_gettop(L);
	luaL_register(L, MODULE_NAME, Module_methods);

	#define SETCONSTANT(name, val) \
	lua_pushnumber(L, (lua_Number) val); \
	lua_setfield(L, -2, #name);

	// ESteamIPType
	SETCONSTANT(STEAM_IP_TYPE_I_PV4, 0);
	SETCONSTANT(STEAM_IP_TYPE_I_PV6, 1);
	// EUniverse
	SETCONSTANT(UNIVERSE_INVALID, 0);
	SETCONSTANT(UNIVERSE_PUBLIC, 1);
	SETCONSTANT(UNIVERSE_BETA, 2);
	SETCONSTANT(UNIVERSE_INTERNAL, 3);
	SETCONSTANT(UNIVERSE_DEV, 4);
	SETCONSTANT(UNIVERSE_MAX, 5);
	// EResult
	SETCONSTANT(RESULT_NONE, 0);
	SETCONSTANT(RESULT_OK, 1);
	SETCONSTANT(RESULT_FAIL, 2);
	SETCONSTANT(RESULT_NO_CONNECTION, 3);
	SETCONSTANT(RESULT_INVALID_PASSWORD, 5);
	SETCONSTANT(RESULT_LOGGED_IN_ELSEWHERE, 6);
	SETCONSTANT(RESULT_INVALID_PROTOCOL_VER, 7);
	SETCONSTANT(RESULT_INVALID_PARAM, 8);
	SETCONSTANT(RESULT_FILE_NOT_FOUND, 9);
	SETCONSTANT(RESULT_BUSY, 10);
	SETCONSTANT(RESULT_INVALID_STATE, 11);
	SETCONSTANT(RESULT_INVALID_NAME, 12);
	SETCONSTANT(RESULT_INVALID_EMAIL, 13);
	SETCONSTANT(RESULT_DUPLICATE_NAME, 14);
	SETCONSTANT(RESULT_ACCESS_DENIED, 15);
	SETCONSTANT(RESULT_TIMEOUT, 16);
	SETCONSTANT(RESULT_BANNED, 17);
	SETCONSTANT(RESULT_ACCOUNT_NOT_FOUND, 18);
	SETCONSTANT(RESULT_INVALID_STEAM_ID, 19);
	SETCONSTANT(RESULT_SERVICE_UNAVAILABLE, 20);
	SETCONSTANT(RESULT_NOT_LOGGED_ON, 21);
	SETCONSTANT(RESULT_PENDING, 22);
	SETCONSTANT(RESULT_ENCRYPTION_FAILURE, 23);
	SETCONSTANT(RESULT_INSUFFICIENT_PRIVILEGE, 24);
	SETCONSTANT(RESULT_LIMIT_EXCEEDED, 25);
	SETCONSTANT(RESULT_REVOKED, 26);
	SETCONSTANT(RESULT_EXPIRED, 27);
	SETCONSTANT(RESULT_ALREADY_REDEEMED, 28);
	SETCONSTANT(RESULT_DUPLICATE_REQUEST, 29);
	SETCONSTANT(RESULT_ALREADY_OWNED, 30);
	SETCONSTANT(RESULT_IP_NOT_FOUND, 31);
	SETCONSTANT(RESULT_PERSIST_FAILED, 32);
	SETCONSTANT(RESULT_LOCKING_FAILED, 33);
	SETCONSTANT(RESULT_LOGON_SESSION_REPLACED, 34);
	SETCONSTANT(RESULT_CONNECT_FAILED, 35);
	SETCONSTANT(RESULT_HANDSHAKE_FAILED, 36);
	SETCONSTANT(RESULT_IO_FAILURE, 37);
	SETCONSTANT(RESULT_REMOTE_DISCONNECT, 38);
	SETCONSTANT(RESULT_SHOPPING_CART_NOT_FOUND, 39);
	SETCONSTANT(RESULT_BLOCKED, 40);
	SETCONSTANT(RESULT_IGNORED, 41);
	SETCONSTANT(RESULT_NO_MATCH, 42);
	SETCONSTANT(RESULT_ACCOUNT_DISABLED, 43);
	SETCONSTANT(RESULT_SERVICE_READ_ONLY, 44);
	SETCONSTANT(RESULT_ACCOUNT_NOT_FEATURED, 45);
	SETCONSTANT(RESULT_ADMINISTRATOR_OK, 46);
	SETCONSTANT(RESULT_CONTENT_VERSION, 47);
	SETCONSTANT(RESULT_TRY_ANOTHER_CM, 48);
	SETCONSTANT(RESULT_PASSWORD_REQUIRED_TO_KICK_SESSION, 49);
	SETCONSTANT(RESULT_ALREADY_LOGGED_IN_ELSEWHERE, 50);
	SETCONSTANT(RESULT_SUSPENDED, 51);
	SETCONSTANT(RESULT_CANCELLED, 52);
	SETCONSTANT(RESULT_DATA_CORRUPTION, 53);
	SETCONSTANT(RESULT_DISK_FULL, 54);
	SETCONSTANT(RESULT_REMOTE_CALL_FAILED, 55);
	SETCONSTANT(RESULT_PASSWORD_UNSET, 56);
	SETCONSTANT(RESULT_EXTERNAL_ACCOUNT_UNLINKED, 57);
	SETCONSTANT(RESULT_PSN_TICKET_INVALID, 58);
	SETCONSTANT(RESULT_EXTERNAL_ACCOUNT_ALREADY_LINKED, 59);
	SETCONSTANT(RESULT_REMOTE_FILE_CONFLICT, 60);
	SETCONSTANT(RESULT_ILLEGAL_PASSWORD, 61);
	SETCONSTANT(RESULT_SAME_AS_PREVIOUS_VALUE, 62);
	SETCONSTANT(RESULT_ACCOUNT_LOGON_DENIED, 63);
	SETCONSTANT(RESULT_CANNOT_USE_OLD_PASSWORD, 64);
	SETCONSTANT(RESULT_INVALID_LOGIN_AUTH_CODE, 65);
	SETCONSTANT(RESULT_ACCOUNT_LOGON_DENIED_NO_MAIL, 66);
	SETCONSTANT(RESULT_HARDWARE_NOT_CAPABLE_OF_IPT, 67);
	SETCONSTANT(RESULT_IPT_INIT_ERROR, 68);
	SETCONSTANT(RESULT_PARENTAL_CONTROL_RESTRICTED, 69);
	SETCONSTANT(RESULT_FACEBOOK_QUERY_ERROR, 70);
	SETCONSTANT(RESULT_EXPIRED_LOGIN_AUTH_CODE, 71);
	SETCONSTANT(RESULT_IP_LOGIN_RESTRICTION_FAILED, 72);
	SETCONSTANT(RESULT_ACCOUNT_LOCKED_DOWN, 73);
	SETCONSTANT(RESULT_ACCOUNT_LOGON_DENIED_VERIFIED_EMAIL_REQUIRED, 74);
	SETCONSTANT(RESULT_NO_MATCHING_URL, 75);
	SETCONSTANT(RESULT_BAD_RESPONSE, 76);
	SETCONSTANT(RESULT_REQUIRE_PASSWORD_RE_ENTRY, 77);
	SETCONSTANT(RESULT_VALUE_OUT_OF_RANGE, 78);
	SETCONSTANT(RESULT_UNEXPECTED_ERROR, 79);
	SETCONSTANT(RESULT_DISABLED, 80);
	SETCONSTANT(RESULT_INVALID_CEG_SUBMISSION, 81);
	SETCONSTANT(RESULT_RESTRICTED_DEVICE, 82);
	SETCONSTANT(RESULT_REGION_LOCKED, 83);
	SETCONSTANT(RESULT_RATE_LIMIT_EXCEEDED, 84);
	SETCONSTANT(RESULT_ACCOUNT_LOGIN_DENIED_NEED_TWO_FACTOR, 85);
	SETCONSTANT(RESULT_ITEM_DELETED, 86);
	SETCONSTANT(RESULT_ACCOUNT_LOGIN_DENIED_THROTTLE, 87);
	SETCONSTANT(RESULT_TWO_FACTOR_CODE_MISMATCH, 88);
	SETCONSTANT(RESULT_TWO_FACTOR_ACTIVATION_CODE_MISMATCH, 89);
	SETCONSTANT(RESULT_ACCOUNT_ASSOCIATED_TO_MULTIPLE_PARTNERS, 90);
	SETCONSTANT(RESULT_NOT_MODIFIED, 91);
	SETCONSTANT(RESULT_NO_MOBILE_DEVICE, 92);
	SETCONSTANT(RESULT_TIME_NOT_SYNCED, 93);
	SETCONSTANT(RESULT_SMS_CODE_FAILED, 94);
	SETCONSTANT(RESULT_ACCOUNT_LIMIT_EXCEEDED, 95);
	SETCONSTANT(RESULT_ACCOUNT_ACTIVITY_LIMIT_EXCEEDED, 96);
	SETCONSTANT(RESULT_PHONE_ACTIVITY_LIMIT_EXCEEDED, 97);
	SETCONSTANT(RESULT_REFUND_TO_WALLET, 98);
	SETCONSTANT(RESULT_EMAIL_SEND_FAILURE, 99);
	SETCONSTANT(RESULT_NOT_SETTLED, 100);
	SETCONSTANT(RESULT_NEED_CAPTCHA, 101);
	SETCONSTANT(RESULT_GSLT_DENIED, 102);
	SETCONSTANT(RESULT_GS_OWNER_DENIED, 103);
	SETCONSTANT(RESULT_INVALID_ITEM_TYPE, 104);
	SETCONSTANT(RESULT_IP_BANNED, 105);
	SETCONSTANT(RESULT_GSLT_EXPIRED, 106);
	SETCONSTANT(RESULT_INSUFFICIENT_FUNDS, 107);
	SETCONSTANT(RESULT_TOO_MANY_PENDING, 108);
	SETCONSTANT(RESULT_NO_SITE_LICENSES_FOUND, 109);
	SETCONSTANT(RESULT_WG_NETWORK_SEND_EXCEEDED, 110);
	SETCONSTANT(RESULT_ACCOUNT_NOT_FRIENDS, 111);
	SETCONSTANT(RESULT_LIMITED_USER_ACCOUNT, 112);
	SETCONSTANT(RESULT_CANT_REMOVE_ITEM, 113);
	SETCONSTANT(RESULT_ACCOUNT_DELETED, 114);
	SETCONSTANT(RESULT_EXISTING_USER_CANCELLED_LICENSE, 115);
	SETCONSTANT(RESULT_COMMUNITY_COOLDOWN, 116);
	SETCONSTANT(RESULT_NO_LAUNCHER_SPECIFIED, 117);
	SETCONSTANT(RESULT_MUST_AGREE_TO_SSA, 118);
	SETCONSTANT(RESULT_LAUNCHER_MIGRATED, 119);
	SETCONSTANT(RESULT_STEAM_REALM_MISMATCH, 120);
	SETCONSTANT(RESULT_INVALID_SIGNATURE, 121);
	SETCONSTANT(RESULT_PARSE_FAILURE, 122);
	SETCONSTANT(RESULT_NO_VERIFIED_PHONE, 123);
	SETCONSTANT(RESULT_INSUFFICIENT_BATTERY, 124);
	SETCONSTANT(RESULT_CHARGER_REQUIRED, 125);
	SETCONSTANT(RESULT_CACHED_CREDENTIAL_INVALID, 126);
	SETCONSTANT(K_E_RESULT_PHONE_NUMBER_IS_VOIP, 127);
	// EVoiceResult
	SETCONSTANT(VOICE_RESULT_OK, 0);
	SETCONSTANT(VOICE_RESULT_NOT_INITIALIZED, 1);
	SETCONSTANT(VOICE_RESULT_NOT_RECORDING, 2);
	SETCONSTANT(VOICE_RESULT_NO_DATA, 3);
	SETCONSTANT(VOICE_RESULT_BUFFER_TOO_SMALL, 4);
	SETCONSTANT(VOICE_RESULT_DATA_CORRUPTED, 5);
	SETCONSTANT(VOICE_RESULT_RESTRICTED, 6);
	SETCONSTANT(VOICE_RESULT_UNSUPPORTED_CODEC, 7);
	SETCONSTANT(VOICE_RESULT_RECEIVER_OUT_OF_DATE, 8);
	SETCONSTANT(VOICE_RESULT_RECEIVER_DID_NOT_ANSWER, 9);
	// EDenyReason
	SETCONSTANT(DENY_INVALID, 0);
	SETCONSTANT(DENY_INVALID_VERSION, 1);
	SETCONSTANT(DENY_GENERIC, 2);
	SETCONSTANT(DENY_NOT_LOGGED_ON, 3);
	SETCONSTANT(DENY_NO_LICENSE, 4);
	SETCONSTANT(DENY_CHEATER, 5);
	SETCONSTANT(DENY_LOGGED_IN_ELSE_WHERE, 6);
	SETCONSTANT(DENY_UNKNOWN_TEXT, 7);
	SETCONSTANT(DENY_INCOMPATIBLE_ANTICHEAT, 8);
	SETCONSTANT(DENY_MEMORY_CORRUPTION, 9);
	SETCONSTANT(DENY_INCOMPATIBLE_SOFTWARE, 10);
	SETCONSTANT(DENY_STEAM_CONNECTION_LOST, 11);
	SETCONSTANT(DENY_STEAM_CONNECTION_ERROR, 12);
	SETCONSTANT(DENY_STEAM_RESPONSE_TIMED_OUT, 13);
	SETCONSTANT(DENY_STEAM_VALIDATION_STALLED, 14);
	SETCONSTANT(DENY_STEAM_OWNER_LEFT_GUEST_USER, 15);
	// EBeginAuthSessionResult
	SETCONSTANT(BEGIN_AUTH_SESSION_RESULT_OK, 0);
	SETCONSTANT(BEGIN_AUTH_SESSION_RESULT_INVALID_TICKET, 1);
	SETCONSTANT(BEGIN_AUTH_SESSION_RESULT_DUPLICATE_REQUEST, 2);
	SETCONSTANT(BEGIN_AUTH_SESSION_RESULT_INVALID_VERSION, 3);
	SETCONSTANT(BEGIN_AUTH_SESSION_RESULT_GAME_MISMATCH, 4);
	SETCONSTANT(BEGIN_AUTH_SESSION_RESULT_EXPIRED_TICKET, 5);
	// EAuthSessionResponse
	SETCONSTANT(AUTH_SESSION_RESPONSE_OK, 0);
	SETCONSTANT(AUTH_SESSION_RESPONSE_USER_NOT_CONNECTED_TO_STEAM, 1);
	SETCONSTANT(AUTH_SESSION_RESPONSE_NO_LICENSE_OR_EXPIRED, 2);
	SETCONSTANT(AUTH_SESSION_RESPONSE_VAC_BANNED, 3);
	SETCONSTANT(AUTH_SESSION_RESPONSE_LOGGED_IN_ELSE_WHERE, 4);
	SETCONSTANT(AUTH_SESSION_RESPONSE_VAC_CHECK_TIMED_OUT, 5);
	SETCONSTANT(AUTH_SESSION_RESPONSE_AUTH_TICKET_CANCELED, 6);
	SETCONSTANT(AUTH_SESSION_RESPONSE_AUTH_TICKET_INVALID_ALREADY_USED, 7);
	SETCONSTANT(AUTH_SESSION_RESPONSE_AUTH_TICKET_INVALID, 8);
	SETCONSTANT(AUTH_SESSION_RESPONSE_PUBLISHER_ISSUED_BAN, 9);
	// EUserHasLicenseForAppResult
	SETCONSTANT(USER_HAS_LICENSE_RESULT_HAS_LICENSE, 0);
	SETCONSTANT(USER_HAS_LICENSE_RESULT_DOES_NOT_HAVE_LICENSE, 1);
	SETCONSTANT(USER_HAS_LICENSE_RESULT_NO_AUTH, 2);
	// EAccountType
	SETCONSTANT(ACCOUNT_TYPE_INVALID, 0);
	SETCONSTANT(ACCOUNT_TYPE_INDIVIDUAL, 1);
	SETCONSTANT(ACCOUNT_TYPE_MULTISEAT, 2);
	SETCONSTANT(ACCOUNT_TYPE_GAME_SERVER, 3);
	SETCONSTANT(ACCOUNT_TYPE_ANON_GAME_SERVER, 4);
	SETCONSTANT(ACCOUNT_TYPE_PENDING, 5);
	SETCONSTANT(ACCOUNT_TYPE_CONTENT_SERVER, 6);
	SETCONSTANT(ACCOUNT_TYPE_CLAN, 7);
	SETCONSTANT(ACCOUNT_TYPE_CHAT, 8);
	SETCONSTANT(ACCOUNT_TYPE_CONSOLE_USER, 9);
	SETCONSTANT(ACCOUNT_TYPE_ANON_USER, 10);
	SETCONSTANT(ACCOUNT_TYPE_MAX, 11);
	// EChatEntryType
	SETCONSTANT(CHAT_ENTRY_TYPE_INVALID, 0);
	SETCONSTANT(CHAT_ENTRY_TYPE_CHAT_MSG, 1);
	SETCONSTANT(CHAT_ENTRY_TYPE_TYPING, 2);
	SETCONSTANT(CHAT_ENTRY_TYPE_INVITE_GAME, 3);
	SETCONSTANT(CHAT_ENTRY_TYPE_EMOTE, 4);
	SETCONSTANT(CHAT_ENTRY_TYPE_LEFT_CONVERSATION, 6);
	SETCONSTANT(CHAT_ENTRY_TYPE_ENTERED, 7);
	SETCONSTANT(CHAT_ENTRY_TYPE_WAS_KICKED, 8);
	SETCONSTANT(CHAT_ENTRY_TYPE_WAS_BANNED, 9);
	SETCONSTANT(CHAT_ENTRY_TYPE_DISCONNECTED, 10);
	SETCONSTANT(CHAT_ENTRY_TYPE_HISTORICAL_CHAT, 11);
	SETCONSTANT(CHAT_ENTRY_TYPE_LINK_BLOCKED, 14);
	// EChatRoomEnterResponse
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_SUCCESS, 1);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_DOESNT_EXIST, 2);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_NOT_ALLOWED, 3);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_FULL, 4);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_ERROR, 5);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_BANNED, 6);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_LIMITED, 7);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_CLAN_DISABLED, 8);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_COMMUNITY_BAN, 9);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_MEMBER_BLOCKED_YOU, 10);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_YOU_BLOCKED_MEMBER, 11);
	SETCONSTANT(CHAT_ROOM_ENTER_RESPONSE_RATELIMIT_EXCEEDED, 15);
	// EChatSteamIDInstanceFlags
	SETCONSTANT(CHAT_ACCOUNT_INSTANCE_MASK, 4095);
	SETCONSTANT(CHAT_INSTANCE_FLAG_CLAN, 524288);
	SETCONSTANT(CHAT_INSTANCE_FLAG_LOBBY, 262144);
	SETCONSTANT(CHAT_INSTANCE_FLAG_MMS_LOBBY, 131072);
	// ENotificationPosition
	SETCONSTANT(POSITION_TOP_LEFT, 0);
	SETCONSTANT(POSITION_TOP_RIGHT, 1);
	SETCONSTANT(POSITION_BOTTOM_LEFT, 2);
	SETCONSTANT(POSITION_BOTTOM_RIGHT, 3);
	// EBroadcastUploadResult
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_NONE, 0);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_OK, 1);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_INIT_FAILED, 2);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_FRAME_FAILED, 3);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_TIMEOUT, 4);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_BANDWIDTH_EXCEEDED, 5);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_LOW_FPS, 6);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_MISSING_KEY_FRAMES, 7);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_NO_CONNECTION, 8);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_RELAY_FAILED, 9);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_SETTINGS_CHANGED, 10);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_MISSING_AUDIO, 11);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_TOO_FAR_BEHIND, 12);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_TRANSCODE_BEHIND, 13);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_NOT_ALLOWED_TO_PLAY, 14);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_BUSY, 15);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_BANNED, 16);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_ALREADY_ACTIVE, 17);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_FORCED_OFF, 18);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_AUDIO_BEHIND, 19);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_SHUTDOWN, 20);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_DISCONNECT, 21);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_VIDEO_INIT_FAILED, 22);
	SETCONSTANT(BROADCAST_UPLOAD_RESULT_AUDIO_INIT_FAILED, 23);
	// EMarketNotAllowedReasonFlags
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_NONE, 0);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_TEMPORARY_FAILURE, 1);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_ACCOUNT_DISABLED, 2);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_ACCOUNT_LOCKED_DOWN, 4);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_ACCOUNT_LIMITED, 8);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_TRADE_BANNED, 16);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_ACCOUNT_NOT_TRUSTED, 32);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_STEAM_GUARD_NOT_ENABLED, 64);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_STEAM_GUARD_ONLY_RECENTLY_ENABLED, 128);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_RECENT_PASSWORD_RESET, 256);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_NEW_PAYMENT_METHOD, 512);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_INVALID_COOKIE, 1024);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_USING_NEW_DEVICE, 2048);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_RECENT_SELF_REFUND, 4096);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_NEW_PAYMENT_METHOD_CANNOT_BE_VERIFIED, 8192);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_NO_RECENT_PURCHASES, 16384);
	SETCONSTANT(MARKET_NOT_ALLOWED_REASON_ACCEPTED_WALLET_GIFT, 32768);
	// EDurationControlProgress
	SETCONSTANT(DURATION_CONTROL_PROGRESS_FULL, 0);
	SETCONSTANT(DURATION_CONTROL_PROGRESS_HALF, 1);
	SETCONSTANT(DURATION_CONTROL_PROGRESS_NONE, 2);
	SETCONSTANT(DURATION_CONTROL_EXIT_SOON_3H, 3);
	SETCONSTANT(DURATION_CONTROL_EXIT_SOON_5H, 4);
	SETCONSTANT(DURATION_CONTROL_EXIT_SOON_NIGHT, 5);
	// EDurationControlNotification
	SETCONSTANT(DURATION_CONTROL_NOTIFICATION_NONE, 0);
	SETCONSTANT(DURATION_CONTROL_NOTIFICATION_1_HOUR, 1);
	SETCONSTANT(DURATION_CONTROL_NOTIFICATION_3_HOURS, 2);
	SETCONSTANT(DURATION_CONTROL_NOTIFICATION_HALF_PROGRESS, 3);
	SETCONSTANT(DURATION_CONTROL_NOTIFICATION_NO_PROGRESS, 4);
	SETCONSTANT(DURATION_CONTROL_NOTIFICATION_EXIT_SOON_3H, 5);
	SETCONSTANT(DURATION_CONTROL_NOTIFICATION_EXIT_SOON_5H, 6);
	SETCONSTANT(DURATION_CONTROL_NOTIFICATION_EXIT_SOON_NIGHT, 7);
	// EDurationControlOnlineState
	SETCONSTANT(DURATION_CONTROL_ONLINE_STATE_INVALID, 0);
	SETCONSTANT(DURATION_CONTROL_ONLINE_STATE_OFFLINE, 1);
	SETCONSTANT(DURATION_CONTROL_ONLINE_STATE_ONLINE, 2);
	SETCONSTANT(DURATION_CONTROL_ONLINE_STATE_ONLINE_HIGH_PRI, 3);
	// EGameSearchErrorCode_t
	SETCONSTANT(GAME_SEARCH_ERROR_CODE_OK, 1);
	SETCONSTANT(GAME_SEARCH_ERROR_CODE_FAILED_SEARCH_ALREADY_IN_PROGRESS, 2);
	SETCONSTANT(GAME_SEARCH_ERROR_CODE_FAILED_NO_SEARCH_IN_PROGRESS, 3);
	SETCONSTANT(GAME_SEARCH_ERROR_CODE_FAILED_NOT_LOBBY_LEADER, 4);
	SETCONSTANT(GAME_SEARCH_ERROR_CODE_FAILED_NO_HOST_AVAILABLE, 5);
	SETCONSTANT(GAME_SEARCH_ERROR_CODE_FAILED_SEARCH_PARAMS_INVALID, 6);
	SETCONSTANT(GAME_SEARCH_ERROR_CODE_FAILED_OFFLINE, 7);
	SETCONSTANT(GAME_SEARCH_ERROR_CODE_FAILED_NOT_AUTHORIZED, 8);
	SETCONSTANT(GAME_SEARCH_ERROR_CODE_FAILED_UNKNOWN_ERROR, 9);
	// EPlayerResult_t
	SETCONSTANT(PLAYER_RESULT_FAILED_TO_CONNECT, 1);
	SETCONSTANT(PLAYER_RESULT_ABANDONED, 2);
	SETCONSTANT(PLAYER_RESULT_KICKED, 3);
	SETCONSTANT(PLAYER_RESULT_INCOMPLETE, 4);
	SETCONSTANT(PLAYER_RESULT_COMPLETED, 5);
	// ESteamIPv6ConnectivityProtocol
	SETCONSTANT(STEAM_I_PV6_CONNECTIVITY_PROTOCOL_INVALID, 0);
	SETCONSTANT(STEAM_I_PV6_CONNECTIVITY_PROTOCOL_HTTP, 1);
	SETCONSTANT(STEAM_I_PV6_CONNECTIVITY_PROTOCOL_UDP, 2);
	// ESteamIPv6ConnectivityState
	SETCONSTANT(STEAM_I_PV6_CONNECTIVITY_STATE_UNKNOWN, 0);
	SETCONSTANT(STEAM_I_PV6_CONNECTIVITY_STATE_GOOD, 1);
	SETCONSTANT(STEAM_I_PV6_CONNECTIVITY_STATE_BAD, 2);
	// EFriendRelationship
	SETCONSTANT(FRIEND_RELATIONSHIP_NONE, 0);
	SETCONSTANT(FRIEND_RELATIONSHIP_BLOCKED, 1);
	SETCONSTANT(FRIEND_RELATIONSHIP_REQUEST_RECIPIENT, 2);
	SETCONSTANT(FRIEND_RELATIONSHIP_FRIEND, 3);
	SETCONSTANT(FRIEND_RELATIONSHIP_REQUEST_INITIATOR, 4);
	SETCONSTANT(FRIEND_RELATIONSHIP_IGNORED, 5);
	SETCONSTANT(FRIEND_RELATIONSHIP_IGNORED_FRIEND, 6);
	SETCONSTANT(FRIEND_RELATIONSHIP_SUGGESTED_DEPRECATED, 7);
	SETCONSTANT(FRIEND_RELATIONSHIP_MAX, 8);
	// EPersonaState
	SETCONSTANT(PERSONA_STATE_OFFLINE, 0);
	SETCONSTANT(PERSONA_STATE_ONLINE, 1);
	SETCONSTANT(PERSONA_STATE_BUSY, 2);
	SETCONSTANT(PERSONA_STATE_AWAY, 3);
	SETCONSTANT(PERSONA_STATE_SNOOZE, 4);
	SETCONSTANT(PERSONA_STATE_LOOKING_TO_TRADE, 5);
	SETCONSTANT(PERSONA_STATE_LOOKING_TO_PLAY, 6);
	SETCONSTANT(PERSONA_STATE_INVISIBLE, 7);
	SETCONSTANT(PERSONA_STATE_MAX, 8);
	// EFriendFlags
	SETCONSTANT(FRIEND_FLAG_NONE, 0);
	SETCONSTANT(FRIEND_FLAG_BLOCKED, 1);
	SETCONSTANT(FRIEND_FLAG_FRIENDSHIP_REQUESTED, 2);
	SETCONSTANT(FRIEND_FLAG_IMMEDIATE, 4);
	SETCONSTANT(FRIEND_FLAG_CLAN_MEMBER, 8);
	SETCONSTANT(FRIEND_FLAG_ON_GAME_SERVER, 16);
	SETCONSTANT(FRIEND_FLAG_REQUESTING_FRIENDSHIP, 128);
	SETCONSTANT(FRIEND_FLAG_REQUESTING_INFO, 256);
	SETCONSTANT(FRIEND_FLAG_IGNORED, 512);
	SETCONSTANT(FRIEND_FLAG_IGNORED_FRIEND, 1024);
	SETCONSTANT(FRIEND_FLAG_CHAT_MEMBER, 4096);
	SETCONSTANT(FRIEND_FLAG_ALL, 65535);
	// EUserRestriction
	SETCONSTANT(USER_RESTRICTION_NONE, 0);
	SETCONSTANT(USER_RESTRICTION_UNKNOWN, 1);
	SETCONSTANT(USER_RESTRICTION_ANY_CHAT, 2);
	SETCONSTANT(USER_RESTRICTION_VOICE_CHAT, 4);
	SETCONSTANT(USER_RESTRICTION_GROUP_CHAT, 8);
	SETCONSTANT(USER_RESTRICTION_RATING, 16);
	SETCONSTANT(USER_RESTRICTION_GAME_INVITES, 32);
	SETCONSTANT(USER_RESTRICTION_TRADING, 64);
	// EOverlayToStoreFlag
	SETCONSTANT(OVERLAY_TO_STORE_FLAG_NONE, 0);
	SETCONSTANT(OVERLAY_TO_STORE_FLAG_ADD_TO_CART, 1);
	SETCONSTANT(OVERLAY_TO_STORE_FLAG_ADD_TO_CART_AND_SHOW, 2);
	// EActivateGameOverlayToWebPageMode
	SETCONSTANT(ACTIVATE_GAME_OVERLAY_TO_WEB_PAGE_MODE_DEFAULT, 0);
	SETCONSTANT(ACTIVATE_GAME_OVERLAY_TO_WEB_PAGE_MODE_MODAL, 1);
	// ECommunityProfileItemType
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_TYPE_ANIMATED_AVATAR, 0);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_TYPE_AVATAR_FRAME, 1);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_TYPE_PROFILE_MODIFIER, 2);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_TYPE_PROFILE_BACKGROUND, 3);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_TYPE_MINI_PROFILE_BACKGROUND, 4);
	// ECommunityProfileItemProperty
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_IMAGE_SMALL, 0);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_IMAGE_LARGE, 1);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_INTERNAL_NAME, 2);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_TITLE, 3);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_DESCRIPTION, 4);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_APP_ID, 5);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_TYPE_ID, 6);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_CLASS, 7);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_MOVIE_WEB_M, 8);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_MOVIE_MP4, 9);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_MOVIE_WEB_M_SMALL, 10);
	SETCONSTANT(COMMUNITY_PROFILE_ITEM_PROPERTY_MOVIE_MP4_SMALL, 11);
	// EPersonaChange
	SETCONSTANT(PERSONA_CHANGE_NAME, 1);
	SETCONSTANT(PERSONA_CHANGE_STATUS, 2);
	SETCONSTANT(PERSONA_CHANGE_COME_ONLINE, 4);
	SETCONSTANT(PERSONA_CHANGE_GONE_OFFLINE, 8);
	SETCONSTANT(PERSONA_CHANGE_GAME_PLAYED, 16);
	SETCONSTANT(PERSONA_CHANGE_GAME_SERVER, 32);
	SETCONSTANT(PERSONA_CHANGE_AVATAR, 64);
	SETCONSTANT(PERSONA_CHANGE_JOINED_SOURCE, 128);
	SETCONSTANT(PERSONA_CHANGE_LEFT_SOURCE, 256);
	SETCONSTANT(PERSONA_CHANGE_RELATIONSHIP_CHANGED, 512);
	SETCONSTANT(PERSONA_CHANGE_NAME_FIRST_SET, 1024);
	SETCONSTANT(PERSONA_CHANGE_BROADCAST, 2048);
	SETCONSTANT(PERSONA_CHANGE_NICKNAME, 4096);
	SETCONSTANT(PERSONA_CHANGE_STEAM_LEVEL, 8192);
	SETCONSTANT(PERSONA_CHANGE_RICH_PRESENCE, 16384);
	// ESteamAPICallFailure
	SETCONSTANT(STEAM_API_CALL_FAILURE_NONE, -1);
	SETCONSTANT(STEAM_API_CALL_FAILURE_STEAM_GONE, 0);
	SETCONSTANT(STEAM_API_CALL_FAILURE_NETWORK_FAILURE, 1);
	SETCONSTANT(STEAM_API_CALL_FAILURE_INVALID_HANDLE, 2);
	SETCONSTANT(STEAM_API_CALL_FAILURE_MISMATCHED_CALLBACK, 3);
	// EGamepadTextInputMode
	SETCONSTANT(GAMEPAD_TEXT_INPUT_MODE_NORMAL, 0);
	SETCONSTANT(GAMEPAD_TEXT_INPUT_MODE_PASSWORD, 1);
	// EGamepadTextInputLineMode
	SETCONSTANT(GAMEPAD_TEXT_INPUT_LINE_MODE_SINGLE_LINE, 0);
	SETCONSTANT(GAMEPAD_TEXT_INPUT_LINE_MODE_MULTIPLE_LINES, 1);
	// EFloatingGamepadTextInputMode
	SETCONSTANT(FLOATING_GAMEPAD_TEXT_INPUT_MODE_MODE_SINGLE_LINE, 0);
	SETCONSTANT(FLOATING_GAMEPAD_TEXT_INPUT_MODE_MODE_MULTIPLE_LINES, 1);
	SETCONSTANT(FLOATING_GAMEPAD_TEXT_INPUT_MODE_MODE_EMAIL, 2);
	SETCONSTANT(FLOATING_GAMEPAD_TEXT_INPUT_MODE_MODE_NUMERIC, 3);
	// ETextFilteringContext
	SETCONSTANT(TEXT_FILTERING_CONTEXT_UNKNOWN, 0);
	SETCONSTANT(TEXT_FILTERING_CONTEXT_GAME_CONTENT, 1);
	SETCONSTANT(TEXT_FILTERING_CONTEXT_CHAT, 2);
	SETCONSTANT(TEXT_FILTERING_CONTEXT_NAME, 3);
	// ECheckFileSignature
	SETCONSTANT(CHECK_FILE_SIGNATURE_INVALID_SIGNATURE, 0);
	SETCONSTANT(CHECK_FILE_SIGNATURE_VALID_SIGNATURE, 1);
	SETCONSTANT(CHECK_FILE_SIGNATURE_FILE_NOT_FOUND, 2);
	SETCONSTANT(CHECK_FILE_SIGNATURE_NO_SIGNATURES_FOUND_FOR_THIS_APP, 3);
	SETCONSTANT(CHECK_FILE_SIGNATURE_NO_SIGNATURES_FOUND_FOR_THIS_FILE, 4);
	// EMatchMakingServerResponse
	SETCONSTANT(E_SERVER_RESPONDED, 0);
	SETCONSTANT(E_SERVER_FAILED_TO_RESPOND, 1);
	SETCONSTANT(E_NO_SERVERS_LISTED_ON_MASTER_SERVER, 2);
	// ELobbyType
	SETCONSTANT(LOBBY_TYPE_PRIVATE, 0);
	SETCONSTANT(LOBBY_TYPE_FRIENDS_ONLY, 1);
	SETCONSTANT(LOBBY_TYPE_PUBLIC, 2);
	SETCONSTANT(LOBBY_TYPE_INVISIBLE, 3);
	SETCONSTANT(LOBBY_TYPE_PRIVATE_UNIQUE, 4);
	// ELobbyComparison
	SETCONSTANT(LOBBY_COMPARISON_EQUAL_TO_OR_LESS_THAN, -2);
	SETCONSTANT(LOBBY_COMPARISON_LESS_THAN, -1);
	SETCONSTANT(LOBBY_COMPARISON_EQUAL, 0);
	SETCONSTANT(LOBBY_COMPARISON_GREATER_THAN, 1);
	SETCONSTANT(LOBBY_COMPARISON_EQUAL_TO_OR_GREATER_THAN, 2);
	SETCONSTANT(LOBBY_COMPARISON_NOT_EQUAL, 3);
	// ELobbyDistanceFilter
	SETCONSTANT(LOBBY_DISTANCE_FILTER_CLOSE, 0);
	SETCONSTANT(LOBBY_DISTANCE_FILTER_DEFAULT, 1);
	SETCONSTANT(LOBBY_DISTANCE_FILTER_FAR, 2);
	SETCONSTANT(LOBBY_DISTANCE_FILTER_WORLDWIDE, 3);
	// EChatMemberStateChange
	SETCONSTANT(CHAT_MEMBER_STATE_CHANGE_ENTERED, 1);
	SETCONSTANT(CHAT_MEMBER_STATE_CHANGE_LEFT, 2);
	SETCONSTANT(CHAT_MEMBER_STATE_CHANGE_DISCONNECTED, 4);
	SETCONSTANT(CHAT_MEMBER_STATE_CHANGE_KICKED, 8);
	SETCONSTANT(CHAT_MEMBER_STATE_CHANGE_BANNED, 16);
	// ESteamPartyBeaconLocationType
	SETCONSTANT(STEAM_PARTY_BEACON_LOCATION_TYPE_INVALID, 0);
	SETCONSTANT(STEAM_PARTY_BEACON_LOCATION_TYPE_CHAT_GROUP, 1);
	SETCONSTANT(STEAM_PARTY_BEACON_LOCATION_TYPE_MAX, 2);
	// ESteamPartyBeaconLocationData
	SETCONSTANT(STEAM_PARTY_BEACON_LOCATION_DATA_INVALID, 0);
	SETCONSTANT(STEAM_PARTY_BEACON_LOCATION_DATA_NAME, 1);
	SETCONSTANT(STEAM_PARTY_BEACON_LOCATION_DATA_ICON_URL_SMALL, 2);
	SETCONSTANT(STEAM_PARTY_BEACON_LOCATION_DATA_ICON_URL_MEDIUM, 3);
	SETCONSTANT(STEAM_PARTY_BEACON_LOCATION_DATA_ICON_URL_LARGE, 4);
	// ERemoteStoragePlatform
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_NONE, 0);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_WINDOWS, 1);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_OSX, 2);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_PS3, 4);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_LINUX, 8);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_SWITCH, 16);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_ANDROID, 32);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_IOS, 64);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_ALL, -1);
	// ERemoteStoragePublishedFileVisibility
	SETCONSTANT(REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_PUBLIC, 0);
	SETCONSTANT(REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_FRIENDS_ONLY, 1);
	SETCONSTANT(REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_PRIVATE, 2);
	SETCONSTANT(REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_UNLISTED, 3);
	// EWorkshopFileType
	SETCONSTANT(WORKSHOP_FILE_TYPE_FIRST, 0);
	SETCONSTANT(WORKSHOP_FILE_TYPE_COMMUNITY, 0);
	SETCONSTANT(WORKSHOP_FILE_TYPE_MICROTRANSACTION, 1);
	SETCONSTANT(WORKSHOP_FILE_TYPE_COLLECTION, 2);
	SETCONSTANT(WORKSHOP_FILE_TYPE_ART, 3);
	SETCONSTANT(WORKSHOP_FILE_TYPE_VIDEO, 4);
	SETCONSTANT(WORKSHOP_FILE_TYPE_SCREENSHOT, 5);
	SETCONSTANT(WORKSHOP_FILE_TYPE_GAME, 6);
	SETCONSTANT(WORKSHOP_FILE_TYPE_SOFTWARE, 7);
	SETCONSTANT(WORKSHOP_FILE_TYPE_CONCEPT, 8);
	SETCONSTANT(WORKSHOP_FILE_TYPE_WEB_GUIDE, 9);
	SETCONSTANT(WORKSHOP_FILE_TYPE_INTEGRATED_GUIDE, 10);
	SETCONSTANT(WORKSHOP_FILE_TYPE_MERCH, 11);
	SETCONSTANT(WORKSHOP_FILE_TYPE_CONTROLLER_BINDING, 12);
	SETCONSTANT(WORKSHOP_FILE_TYPE_STEAMWORKS_ACCESS_INVITE, 13);
	SETCONSTANT(WORKSHOP_FILE_TYPE_STEAM_VIDEO, 14);
	SETCONSTANT(WORKSHOP_FILE_TYPE_GAME_MANAGED_ITEM, 15);
	SETCONSTANT(WORKSHOP_FILE_TYPE_MAX, 16);
	// EWorkshopVote
	SETCONSTANT(WORKSHOP_VOTE_UNVOTED, 0);
	SETCONSTANT(WORKSHOP_VOTE_FOR, 1);
	SETCONSTANT(WORKSHOP_VOTE_AGAINST, 2);
	SETCONSTANT(WORKSHOP_VOTE_LATER, 3);
	// EWorkshopFileAction
	SETCONSTANT(WORKSHOP_FILE_ACTION_PLAYED, 0);
	SETCONSTANT(WORKSHOP_FILE_ACTION_COMPLETED, 1);
	// EWorkshopEnumerationType
	SETCONSTANT(WORKSHOP_ENUMERATION_TYPE_RANKED_BY_VOTE, 0);
	SETCONSTANT(WORKSHOP_ENUMERATION_TYPE_RECENT, 1);
	SETCONSTANT(WORKSHOP_ENUMERATION_TYPE_TRENDING, 2);
	SETCONSTANT(WORKSHOP_ENUMERATION_TYPE_FAVORITES_OF_FRIENDS, 3);
	SETCONSTANT(WORKSHOP_ENUMERATION_TYPE_VOTED_BY_FRIENDS, 4);
	SETCONSTANT(WORKSHOP_ENUMERATION_TYPE_CONTENT_BY_FRIENDS, 5);
	SETCONSTANT(WORKSHOP_ENUMERATION_TYPE_RECENT_FROM_FOLLOWED_USERS, 6);
	// EWorkshopVideoProvider
	SETCONSTANT(WORKSHOP_VIDEO_PROVIDER_NONE, 0);
	SETCONSTANT(WORKSHOP_VIDEO_PROVIDER_YOUTUBE, 1);
	// EUGCReadAction
	SETCONSTANT(UGC_READ_CONTINUE_READING_UNTIL_FINISHED, 0);
	SETCONSTANT(UGC_READ_CONTINUE_READING, 1);
	SETCONSTANT(UGC_READ_CLOSE, 2);
	// ERemoteStorageLocalFileChange
	SETCONSTANT(REMOTE_STORAGE_LOCAL_FILE_CHANGE_INVALID, 0);
	SETCONSTANT(REMOTE_STORAGE_LOCAL_FILE_CHANGE_FILE_UPDATED, 1);
	SETCONSTANT(REMOTE_STORAGE_LOCAL_FILE_CHANGE_FILE_DELETED, 2);
	// ERemoteStorageFilePathType
	SETCONSTANT(REMOTE_STORAGE_FILE_PATH_TYPE_INVALID, 0);
	SETCONSTANT(REMOTE_STORAGE_FILE_PATH_TYPE_ABSOLUTE, 1);
	SETCONSTANT(REMOTE_STORAGE_FILE_PATH_TYPE_API_FILENAME, 2);
	// ELeaderboardDataRequest
	SETCONSTANT(LEADERBOARD_DATA_REQUEST_GLOBAL, 0);
	SETCONSTANT(LEADERBOARD_DATA_REQUEST_GLOBAL_AROUND_USER, 1);
	SETCONSTANT(LEADERBOARD_DATA_REQUEST_FRIENDS, 2);
	SETCONSTANT(LEADERBOARD_DATA_REQUEST_USERS, 3);
	// ELeaderboardSortMethod
	SETCONSTANT(LEADERBOARD_SORT_METHOD_NONE, 0);
	SETCONSTANT(LEADERBOARD_SORT_METHOD_ASCENDING, 1);
	SETCONSTANT(LEADERBOARD_SORT_METHOD_DESCENDING, 2);
	// ELeaderboardDisplayType
	SETCONSTANT(LEADERBOARD_DISPLAY_TYPE_NONE, 0);
	SETCONSTANT(LEADERBOARD_DISPLAY_TYPE_NUMERIC, 1);
	SETCONSTANT(LEADERBOARD_DISPLAY_TYPE_TIME_SECONDS, 2);
	SETCONSTANT(LEADERBOARD_DISPLAY_TYPE_TIME_MILLI_SECONDS, 3);
	// ELeaderboardUploadScoreMethod
	SETCONSTANT(LEADERBOARD_UPLOAD_SCORE_METHOD_NONE, 0);
	SETCONSTANT(LEADERBOARD_UPLOAD_SCORE_METHOD_KEEP_BEST, 1);
	SETCONSTANT(LEADERBOARD_UPLOAD_SCORE_METHOD_FORCE_UPDATE, 2);
	// ERegisterActivationCodeResult
	SETCONSTANT(REGISTER_ACTIVATION_CODE_RESULT_OK, 0);
	SETCONSTANT(REGISTER_ACTIVATION_CODE_RESULT_FAIL, 1);
	SETCONSTANT(REGISTER_ACTIVATION_CODE_RESULT_ALREADY_REGISTERED, 2);
	SETCONSTANT(REGISTER_ACTIVATION_CODE_RESULT_TIMEOUT, 3);
	SETCONSTANT(REGISTER_ACTIVATION_CODE_ALREADY_OWNED, 4);
	// EP2PSessionError
	SETCONSTANT(P2P_SESSION_ERROR_NONE, 0);
	SETCONSTANT(P2P_SESSION_ERROR_NO_RIGHTS_TO_APP, 2);
	SETCONSTANT(P2P_SESSION_ERROR_TIMEOUT, 4);
	SETCONSTANT(P2P_SESSION_ERROR_NOT_RUNNING_APP_DELETED, 1);
	SETCONSTANT(P2P_SESSION_ERROR_DESTINATION_NOT_LOGGED_IN_DELETED, 3);
	SETCONSTANT(P2P_SESSION_ERROR_MAX, 5);
	// EP2PSend
	SETCONSTANT(P2P_SEND_UNRELIABLE, 0);
	SETCONSTANT(P2P_SEND_UNRELIABLE_NO_DELAY, 1);
	SETCONSTANT(P2P_SEND_RELIABLE, 2);
	SETCONSTANT(P2P_SEND_RELIABLE_WITH_BUFFERING, 3);
	// ESNetSocketState
	SETCONSTANT(S_NET_SOCKET_STATE_INVALID, 0);
	SETCONSTANT(S_NET_SOCKET_STATE_CONNECTED, 1);
	SETCONSTANT(S_NET_SOCKET_STATE_INITIATED, 10);
	SETCONSTANT(S_NET_SOCKET_STATE_LOCAL_CANDIDATES_FOUND, 11);
	SETCONSTANT(S_NET_SOCKET_STATE_RECEIVED_REMOTE_CANDIDATES, 12);
	SETCONSTANT(S_NET_SOCKET_STATE_CHALLENGE_HANDSHAKE, 15);
	SETCONSTANT(S_NET_SOCKET_STATE_DISCONNECTING, 21);
	SETCONSTANT(S_NET_SOCKET_STATE_LOCAL_DISCONNECT, 22);
	SETCONSTANT(S_NET_SOCKET_STATE_TIMEOUT_DURING_CONNECT, 23);
	SETCONSTANT(S_NET_SOCKET_STATE_REMOTE_END_DISCONNECTED, 24);
	SETCONSTANT(S_NET_SOCKET_STATE_CONNECTION_BROKEN, 25);
	// ESNetSocketConnectionType
	SETCONSTANT(S_NET_SOCKET_CONNECTION_TYPE_NOT_CONNECTED, 0);
	SETCONSTANT(S_NET_SOCKET_CONNECTION_TYPE_UDP, 1);
	SETCONSTANT(S_NET_SOCKET_CONNECTION_TYPE_UDP_RELAY, 2);
	// EVRScreenshotType
	SETCONSTANT(VR_SCREENSHOT_TYPE_NONE, 0);
	SETCONSTANT(VR_SCREENSHOT_TYPE_MONO, 1);
	SETCONSTANT(VR_SCREENSHOT_TYPE_STEREO, 2);
	SETCONSTANT(VR_SCREENSHOT_TYPE_MONO_CUBEMAP, 3);
	SETCONSTANT(VR_SCREENSHOT_TYPE_MONO_PANORAMA, 4);
	SETCONSTANT(VR_SCREENSHOT_TYPE_STEREO_PANORAMA, 5);
	// AudioPlayback_Status
	SETCONSTANT(AUDIO_PLAYBACK_UNDEFINED, 0);
	SETCONSTANT(AUDIO_PLAYBACK_PLAYING, 1);
	SETCONSTANT(AUDIO_PLAYBACK_PAUSED, 2);
	SETCONSTANT(AUDIO_PLAYBACK_IDLE, 3);
	// EHTTPMethod
	SETCONSTANT(HTTP_METHOD_INVALID, 0);
	SETCONSTANT(HTTP_METHOD_GET, 1);
	SETCONSTANT(HTTP_METHOD_HEAD, 2);
	SETCONSTANT(HTTP_METHOD_POST, 3);
	SETCONSTANT(HTTP_METHOD_PUT, 4);
	SETCONSTANT(HTTP_METHOD_DELETE, 5);
	SETCONSTANT(HTTP_METHOD_OPTIONS, 6);
	SETCONSTANT(HTTP_METHOD_PATCH, 7);
	// EHTTPStatusCode
	SETCONSTANT(HTTP_STATUS_CODE_INVALID, 0);
	SETCONSTANT(HTTP_STATUS_CODE100_CONTINUE, 100);
	SETCONSTANT(HTTP_STATUS_CODE101_SWITCHING_PROTOCOLS, 101);
	SETCONSTANT(HTTP_STATUS_CODE200OK, 200);
	SETCONSTANT(HTTP_STATUS_CODE201_CREATED, 201);
	SETCONSTANT(HTTP_STATUS_CODE202_ACCEPTED, 202);
	SETCONSTANT(HTTP_STATUS_CODE203_NON_AUTHORITATIVE, 203);
	SETCONSTANT(HTTP_STATUS_CODE204_NO_CONTENT, 204);
	SETCONSTANT(HTTP_STATUS_CODE205_RESET_CONTENT, 205);
	SETCONSTANT(HTTP_STATUS_CODE206_PARTIAL_CONTENT, 206);
	SETCONSTANT(HTTP_STATUS_CODE300_MULTIPLE_CHOICES, 300);
	SETCONSTANT(HTTP_STATUS_CODE301_MOVED_PERMANENTLY, 301);
	SETCONSTANT(HTTP_STATUS_CODE302_FOUND, 302);
	SETCONSTANT(HTTP_STATUS_CODE303_SEE_OTHER, 303);
	SETCONSTANT(HTTP_STATUS_CODE304_NOT_MODIFIED, 304);
	SETCONSTANT(HTTP_STATUS_CODE305_USE_PROXY, 305);
	SETCONSTANT(HTTP_STATUS_CODE307_TEMPORARY_REDIRECT, 307);
	SETCONSTANT(HTTP_STATUS_CODE400_BAD_REQUEST, 400);
	SETCONSTANT(HTTP_STATUS_CODE401_UNAUTHORIZED, 401);
	SETCONSTANT(HTTP_STATUS_CODE402_PAYMENT_REQUIRED, 402);
	SETCONSTANT(HTTP_STATUS_CODE403_FORBIDDEN, 403);
	SETCONSTANT(HTTP_STATUS_CODE404_NOT_FOUND, 404);
	SETCONSTANT(HTTP_STATUS_CODE405_METHOD_NOT_ALLOWED, 405);
	SETCONSTANT(HTTP_STATUS_CODE406_NOT_ACCEPTABLE, 406);
	SETCONSTANT(HTTP_STATUS_CODE407_PROXY_AUTH_REQUIRED, 407);
	SETCONSTANT(HTTP_STATUS_CODE408_REQUEST_TIMEOUT, 408);
	SETCONSTANT(HTTP_STATUS_CODE409_CONFLICT, 409);
	SETCONSTANT(HTTP_STATUS_CODE410_GONE, 410);
	SETCONSTANT(HTTP_STATUS_CODE411_LENGTH_REQUIRED, 411);
	SETCONSTANT(HTTP_STATUS_CODE412_PRECONDITION_FAILED, 412);
	SETCONSTANT(HTTP_STATUS_CODE413_REQUEST_ENTITY_TOO_LARGE, 413);
	SETCONSTANT(HTTP_STATUS_CODE414_REQUEST_URI_TOO_LONG, 414);
	SETCONSTANT(HTTP_STATUS_CODE415_UNSUPPORTED_MEDIA_TYPE, 415);
	SETCONSTANT(HTTP_STATUS_CODE416_REQUESTED_RANGE_NOT_SATISFIABLE, 416);
	SETCONSTANT(HTTP_STATUS_CODE417_EXPECTATION_FAILED, 417);
	SETCONSTANT(HTTP_STATUS_CODE4XX_UNKNOWN, 418);
	SETCONSTANT(HTTP_STATUS_CODE429_TOO_MANY_REQUESTS, 429);
	SETCONSTANT(HTTP_STATUS_CODE444_CONNECTION_CLOSED, 444);
	SETCONSTANT(HTTP_STATUS_CODE500_INTERNAL_SERVER_ERROR, 500);
	SETCONSTANT(HTTP_STATUS_CODE501_NOT_IMPLEMENTED, 501);
	SETCONSTANT(HTTP_STATUS_CODE502_BAD_GATEWAY, 502);
	SETCONSTANT(HTTP_STATUS_CODE503_SERVICE_UNAVAILABLE, 503);
	SETCONSTANT(HTTP_STATUS_CODE504_GATEWAY_TIMEOUT, 504);
	SETCONSTANT(HTTP_STATUS_CODE505HTTP_VERSION_NOT_SUPPORTED, 505);
	SETCONSTANT(HTTP_STATUS_CODE5XX_UNKNOWN, 599);
	// EInputSourceMode
	SETCONSTANT(INPUT_SOURCE_MODE_NONE, 0);
	SETCONSTANT(INPUT_SOURCE_MODE_DPAD, 1);
	SETCONSTANT(INPUT_SOURCE_MODE_BUTTONS, 2);
	SETCONSTANT(INPUT_SOURCE_MODE_FOUR_BUTTONS, 3);
	SETCONSTANT(INPUT_SOURCE_MODE_ABSOLUTE_MOUSE, 4);
	SETCONSTANT(INPUT_SOURCE_MODE_RELATIVE_MOUSE, 5);
	SETCONSTANT(INPUT_SOURCE_MODE_JOYSTICK_MOVE, 6);
	SETCONSTANT(INPUT_SOURCE_MODE_JOYSTICK_MOUSE, 7);
	SETCONSTANT(INPUT_SOURCE_MODE_JOYSTICK_CAMERA, 8);
	SETCONSTANT(INPUT_SOURCE_MODE_SCROLL_WHEEL, 9);
	SETCONSTANT(INPUT_SOURCE_MODE_TRIGGER, 10);
	SETCONSTANT(INPUT_SOURCE_MODE_TOUCH_MENU, 11);
	SETCONSTANT(INPUT_SOURCE_MODE_MOUSE_JOYSTICK, 12);
	SETCONSTANT(INPUT_SOURCE_MODE_MOUSE_REGION, 13);
	SETCONSTANT(INPUT_SOURCE_MODE_RADIAL_MENU, 14);
	SETCONSTANT(INPUT_SOURCE_MODE_SINGLE_BUTTON, 15);
	SETCONSTANT(INPUT_SOURCE_MODE_SWITCHES, 16);
	// EInputActionOrigin
	SETCONSTANT(INPUT_ACTION_ORIGIN_NONE, 0);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_A, 1);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_B, 2);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_X, 3);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_Y, 4);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_BUMPER, 5);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_BUMPER, 6);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_GRIP, 7);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_GRIP, 8);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_START, 9);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_BACK, 10);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_PAD_TOUCH, 11);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_PAD_SWIPE, 12);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_PAD_CLICK, 13);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_PAD_D_PAD_NORTH, 14);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_PAD_D_PAD_SOUTH, 15);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_PAD_D_PAD_WEST, 16);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_PAD_D_PAD_EAST, 17);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_PAD_TOUCH, 18);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_PAD_SWIPE, 19);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_PAD_CLICK, 20);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_PAD_D_PAD_NORTH, 21);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_PAD_D_PAD_SOUTH, 22);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_PAD_D_PAD_WEST, 23);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_PAD_D_PAD_EAST, 24);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_TRIGGER_PULL, 25);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_TRIGGER_CLICK, 26);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_TRIGGER_PULL, 27);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RIGHT_TRIGGER_CLICK, 28);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_STICK_MOVE, 29);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_STICK_CLICK, 30);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_STICK_D_PAD_NORTH, 31);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_STICK_D_PAD_SOUTH, 32);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_STICK_D_PAD_WEST, 33);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_LEFT_STICK_D_PAD_EAST, 34);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_GYRO_MOVE, 35);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_GYRO_PITCH, 36);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_GYRO_YAW, 37);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_GYRO_ROLL, 38);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED0, 39);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED1, 40);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED2, 41);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED3, 42);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED4, 43);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED5, 44);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED6, 45);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED7, 46);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED8, 47);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED9, 48);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_CONTROLLER_RESERVED10, 49);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_X, 50);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_CIRCLE, 51);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_TRIANGLE, 52);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_SQUARE, 53);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_BUMPER, 54);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_BUMPER, 55);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_OPTIONS, 56);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_SHARE, 57);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_PAD_TOUCH, 58);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_PAD_SWIPE, 59);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_PAD_CLICK, 60);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_NORTH, 61);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_SOUTH, 62);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_WEST, 63);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_EAST, 64);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_PAD_TOUCH, 65);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_PAD_SWIPE, 66);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_PAD_CLICK, 67);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_NORTH, 68);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_SOUTH, 69);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_WEST, 70);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_EAST, 71);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_CENTER_PAD_TOUCH, 72);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_CENTER_PAD_SWIPE, 73);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_CENTER_PAD_CLICK, 74);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_NORTH, 75);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_SOUTH, 76);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_WEST, 77);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_EAST, 78);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_TRIGGER_PULL, 79);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_TRIGGER_CLICK, 80);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_TRIGGER_PULL, 81);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_TRIGGER_CLICK, 82);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_STICK_MOVE, 83);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_STICK_CLICK, 84);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_NORTH, 85);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_SOUTH, 86);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_WEST, 87);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_EAST, 88);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_STICK_MOVE, 89);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_STICK_CLICK, 90);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_NORTH, 91);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_SOUTH, 92);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_WEST, 93);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_EAST, 94);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_D_PAD_NORTH, 95);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_D_PAD_SOUTH, 96);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_D_PAD_WEST, 97);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_D_PAD_EAST, 98);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_GYRO_MOVE, 99);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_GYRO_PITCH, 100);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_GYRO_YAW, 101);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_GYRO_ROLL, 102);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_D_PAD_MOVE, 103);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED1, 104);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED2, 105);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED3, 106);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED4, 107);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED5, 108);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED6, 109);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED7, 110);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED8, 111);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED9, 112);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS4_RESERVED10, 113);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_A, 114);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_B, 115);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_X, 116);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_Y, 117);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_BUMPER, 118);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_BUMPER, 119);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_MENU, 120);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_VIEW, 121);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_TRIGGER_PULL, 122);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_TRIGGER_CLICK, 123);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_TRIGGER_PULL, 124);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_TRIGGER_CLICK, 125);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_MOVE, 126);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_CLICK, 127);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_NORTH, 128);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_SOUTH, 129);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_WEST, 130);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_EAST, 131);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_MOVE, 132);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_CLICK, 133);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_NORTH, 134);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_SOUTH, 135);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_WEST, 136);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_EAST, 137);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_D_PAD_NORTH, 138);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_D_PAD_SOUTH, 139);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_D_PAD_WEST, 140);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_D_PAD_EAST, 141);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_D_PAD_MOVE, 142);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_GRIP_LOWER, 143);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_LEFT_GRIP_UPPER, 144);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_GRIP_LOWER, 145);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RIGHT_GRIP_UPPER, 146);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_SHARE, 147);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RESERVED6, 148);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RESERVED7, 149);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RESERVED8, 150);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RESERVED9, 151);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX_ONE_RESERVED10, 152);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_A, 153);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_B, 154);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_X, 155);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_Y, 156);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_LEFT_BUMPER, 157);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RIGHT_BUMPER, 158);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_START, 159);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_BACK, 160);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_LEFT_TRIGGER_PULL, 161);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_LEFT_TRIGGER_CLICK, 162);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RIGHT_TRIGGER_PULL, 163);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RIGHT_TRIGGER_CLICK, 164);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_LEFT_STICK_MOVE, 165);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_LEFT_STICK_CLICK, 166);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_NORTH, 167);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_SOUTH, 168);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_WEST, 169);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_EAST, 170);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_MOVE, 171);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_CLICK, 172);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_NORTH, 173);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_SOUTH, 174);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_WEST, 175);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_EAST, 176);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_D_PAD_NORTH, 177);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_D_PAD_SOUTH, 178);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_D_PAD_WEST, 179);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_D_PAD_EAST, 180);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_D_PAD_MOVE, 181);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED1, 182);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED2, 183);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED3, 184);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED4, 185);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED5, 186);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED6, 187);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED7, 188);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED8, 189);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED9, 190);
	SETCONSTANT(INPUT_ACTION_ORIGIN_X_BOX360_RESERVED10, 191);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_A, 192);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_B, 193);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_X, 194);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_Y, 195);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_BUMPER, 196);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_BUMPER, 197);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_PLUS, 198);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_MINUS, 199);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_CAPTURE, 200);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_TRIGGER_PULL, 201);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_TRIGGER_CLICK, 202);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_TRIGGER_PULL, 203);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_TRIGGER_CLICK, 204);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_STICK_MOVE, 205);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_STICK_CLICK, 206);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_STICK_D_PAD_NORTH, 207);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_STICK_D_PAD_SOUTH, 208);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_STICK_D_PAD_WEST, 209);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_STICK_D_PAD_EAST, 210);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_STICK_MOVE, 211);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_STICK_CLICK, 212);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_STICK_D_PAD_NORTH, 213);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_STICK_D_PAD_SOUTH, 214);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_STICK_D_PAD_WEST, 215);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_STICK_D_PAD_EAST, 216);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_D_PAD_NORTH, 217);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_D_PAD_SOUTH, 218);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_D_PAD_WEST, 219);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_D_PAD_EAST, 220);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_PRO_GYRO_MOVE, 221);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_PRO_GYRO_PITCH, 222);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_PRO_GYRO_YAW, 223);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_PRO_GYRO_ROLL, 224);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_D_PAD_MOVE, 225);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED1, 226);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED2, 227);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED3, 228);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED4, 229);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED5, 230);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED6, 231);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED7, 232);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED8, 233);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED9, 234);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED10, 235);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_GYRO_MOVE, 236);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_GYRO_PITCH, 237);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_GYRO_YAW, 238);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_GYRO_ROLL, 239);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_GYRO_MOVE, 240);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_GYRO_PITCH, 241);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_GYRO_YAW, 242);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_GYRO_ROLL, 243);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_GRIP_LOWER, 244);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_LEFT_GRIP_UPPER, 245);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_GRIP_LOWER, 246);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RIGHT_GRIP_UPPER, 247);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED11, 248);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED12, 249);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED13, 250);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED14, 251);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED15, 252);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED16, 253);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED17, 254);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED18, 255);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED19, 256);
	SETCONSTANT(INPUT_ACTION_ORIGIN_SWITCH_RESERVED20, 257);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_X, 258);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_CIRCLE, 259);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_TRIANGLE, 260);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_SQUARE, 261);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_BUMPER, 262);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_BUMPER, 263);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_OPTION, 264);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_CREATE, 265);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_MUTE, 266);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_PAD_TOUCH, 267);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_PAD_SWIPE, 268);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_PAD_CLICK, 269);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_PAD_D_PAD_NORTH, 270);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_PAD_D_PAD_SOUTH, 271);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_PAD_D_PAD_WEST, 272);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_PAD_D_PAD_EAST, 273);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_PAD_TOUCH, 274);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_PAD_SWIPE, 275);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_PAD_CLICK, 276);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_PAD_D_PAD_NORTH, 277);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_PAD_D_PAD_SOUTH, 278);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_PAD_D_PAD_WEST, 279);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_PAD_D_PAD_EAST, 280);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_CENTER_PAD_TOUCH, 281);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_CENTER_PAD_SWIPE, 282);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_CENTER_PAD_CLICK, 283);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_CENTER_PAD_D_PAD_NORTH, 284);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_CENTER_PAD_D_PAD_SOUTH, 285);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_CENTER_PAD_D_PAD_WEST, 286);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_CENTER_PAD_D_PAD_EAST, 287);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_TRIGGER_PULL, 288);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_TRIGGER_CLICK, 289);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_TRIGGER_PULL, 290);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_TRIGGER_CLICK, 291);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_STICK_MOVE, 292);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_STICK_CLICK, 293);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_STICK_D_PAD_NORTH, 294);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_STICK_D_PAD_SOUTH, 295);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_STICK_D_PAD_WEST, 296);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_LEFT_STICK_D_PAD_EAST, 297);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_STICK_MOVE, 298);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_STICK_CLICK, 299);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_STICK_D_PAD_NORTH, 300);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_STICK_D_PAD_SOUTH, 301);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_STICK_D_PAD_WEST, 302);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RIGHT_STICK_D_PAD_EAST, 303);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_D_PAD_NORTH, 304);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_D_PAD_SOUTH, 305);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_D_PAD_WEST, 306);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_D_PAD_EAST, 307);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_GYRO_MOVE, 308);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_GYRO_PITCH, 309);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_GYRO_YAW, 310);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_GYRO_ROLL, 311);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_D_PAD_MOVE, 312);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED1, 313);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED2, 314);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED3, 315);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED4, 316);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED5, 317);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED6, 318);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED7, 319);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED8, 320);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED9, 321);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED10, 322);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED11, 323);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED12, 324);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED13, 325);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED14, 326);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED15, 327);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED16, 328);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED17, 329);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED18, 330);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED19, 331);
	SETCONSTANT(INPUT_ACTION_ORIGIN_PS5_RESERVED20, 332);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_A, 333);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_B, 334);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_X, 335);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_Y, 336);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_L1, 337);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_R1, 338);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_MENU, 339);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_VIEW, 340);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_TOUCH, 341);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_SWIPE, 342);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_CLICK, 343);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_D_PAD_NORTH, 344);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_D_PAD_SOUTH, 345);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_D_PAD_WEST, 346);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_D_PAD_EAST, 347);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_TOUCH, 348);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_SWIPE, 349);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_CLICK, 350);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_D_PAD_NORTH, 351);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_D_PAD_SOUTH, 352);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_D_PAD_WEST, 353);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_D_PAD_EAST, 354);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_L2_SOFT_PULL, 355);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_L2, 356);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_R2_SOFT_PULL, 357);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_R2, 358);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_MOVE, 359);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_L3, 360);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_D_PAD_NORTH, 361);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_D_PAD_SOUTH, 362);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_D_PAD_WEST, 363);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_D_PAD_EAST, 364);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_TOUCH, 365);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_MOVE, 366);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_R3, 367);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_D_PAD_NORTH, 368);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_D_PAD_SOUTH, 369);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_D_PAD_WEST, 370);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_D_PAD_EAST, 371);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_TOUCH, 372);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_L4, 373);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_R4, 374);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_L5, 375);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_R5, 376);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_D_PAD_MOVE, 377);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_D_PAD_NORTH, 378);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_D_PAD_SOUTH, 379);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_D_PAD_WEST, 380);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_D_PAD_EAST, 381);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_GYRO_MOVE, 382);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_GYRO_PITCH, 383);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_GYRO_YAW, 384);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_GYRO_ROLL, 385);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED1, 386);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED2, 387);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED3, 388);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED4, 389);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED5, 390);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED6, 391);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED7, 392);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED8, 393);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED9, 394);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED10, 395);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED11, 396);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED12, 397);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED13, 398);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED14, 399);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED15, 400);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED16, 401);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED17, 402);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED18, 403);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED19, 404);
	SETCONSTANT(INPUT_ACTION_ORIGIN_STEAM_DECK_RESERVED20, 405);
	SETCONSTANT(INPUT_ACTION_ORIGIN_COUNT, 406);
	SETCONSTANT(INPUT_ACTION_ORIGIN_MAXIMUM_POSSIBLE_VALUE, 32767);
	// EXboxOrigin
	SETCONSTANT(XBOX_ORIGIN_A, 0);
	SETCONSTANT(XBOX_ORIGIN_B, 1);
	SETCONSTANT(XBOX_ORIGIN_X, 2);
	SETCONSTANT(XBOX_ORIGIN_Y, 3);
	SETCONSTANT(XBOX_ORIGIN_LEFT_BUMPER, 4);
	SETCONSTANT(XBOX_ORIGIN_RIGHT_BUMPER, 5);
	SETCONSTANT(XBOX_ORIGIN_MENU, 6);
	SETCONSTANT(XBOX_ORIGIN_VIEW, 7);
	SETCONSTANT(XBOX_ORIGIN_LEFT_TRIGGER_PULL, 8);
	SETCONSTANT(XBOX_ORIGIN_LEFT_TRIGGER_CLICK, 9);
	SETCONSTANT(XBOX_ORIGIN_RIGHT_TRIGGER_PULL, 10);
	SETCONSTANT(XBOX_ORIGIN_RIGHT_TRIGGER_CLICK, 11);
	SETCONSTANT(XBOX_ORIGIN_LEFT_STICK_MOVE, 12);
	SETCONSTANT(XBOX_ORIGIN_LEFT_STICK_CLICK, 13);
	SETCONSTANT(XBOX_ORIGIN_LEFT_STICK_D_PAD_NORTH, 14);
	SETCONSTANT(XBOX_ORIGIN_LEFT_STICK_D_PAD_SOUTH, 15);
	SETCONSTANT(XBOX_ORIGIN_LEFT_STICK_D_PAD_WEST, 16);
	SETCONSTANT(XBOX_ORIGIN_LEFT_STICK_D_PAD_EAST, 17);
	SETCONSTANT(XBOX_ORIGIN_RIGHT_STICK_MOVE, 18);
	SETCONSTANT(XBOX_ORIGIN_RIGHT_STICK_CLICK, 19);
	SETCONSTANT(XBOX_ORIGIN_RIGHT_STICK_D_PAD_NORTH, 20);
	SETCONSTANT(XBOX_ORIGIN_RIGHT_STICK_D_PAD_SOUTH, 21);
	SETCONSTANT(XBOX_ORIGIN_RIGHT_STICK_D_PAD_WEST, 22);
	SETCONSTANT(XBOX_ORIGIN_RIGHT_STICK_D_PAD_EAST, 23);
	SETCONSTANT(XBOX_ORIGIN_D_PAD_NORTH, 24);
	SETCONSTANT(XBOX_ORIGIN_D_PAD_SOUTH, 25);
	SETCONSTANT(XBOX_ORIGIN_D_PAD_WEST, 26);
	SETCONSTANT(XBOX_ORIGIN_D_PAD_EAST, 27);
	SETCONSTANT(XBOX_ORIGIN_COUNT, 28);
	// ESteamControllerPad
	SETCONSTANT(STEAM_CONTROLLER_PAD_LEFT, 0);
	SETCONSTANT(STEAM_CONTROLLER_PAD_RIGHT, 1);
	// EControllerHapticLocation
	SETCONSTANT(CONTROLLER_HAPTIC_LOCATION_LEFT, 1);
	SETCONSTANT(CONTROLLER_HAPTIC_LOCATION_RIGHT, 2);
	SETCONSTANT(CONTROLLER_HAPTIC_LOCATION_BOTH, 3);
	// EControllerHapticType
	SETCONSTANT(CONTROLLER_HAPTIC_TYPE_OFF, 0);
	SETCONSTANT(CONTROLLER_HAPTIC_TYPE_TICK, 1);
	SETCONSTANT(CONTROLLER_HAPTIC_TYPE_CLICK, 2);
	// ESteamInputType
	SETCONSTANT(STEAM_INPUT_TYPE_UNKNOWN, 0);
	SETCONSTANT(STEAM_INPUT_TYPE_STEAM_CONTROLLER, 1);
	SETCONSTANT(STEAM_INPUT_TYPE_X_BOX360_CONTROLLER, 2);
	SETCONSTANT(STEAM_INPUT_TYPE_X_BOX_ONE_CONTROLLER, 3);
	SETCONSTANT(STEAM_INPUT_TYPE_GENERIC_GAMEPAD, 4);
	SETCONSTANT(STEAM_INPUT_TYPE_PS4_CONTROLLER, 5);
	SETCONSTANT(STEAM_INPUT_TYPE_APPLE_M_FI_CONTROLLER, 6);
	SETCONSTANT(STEAM_INPUT_TYPE_ANDROID_CONTROLLER, 7);
	SETCONSTANT(STEAM_INPUT_TYPE_SWITCH_JOY_CON_PAIR, 8);
	SETCONSTANT(STEAM_INPUT_TYPE_SWITCH_JOY_CON_SINGLE, 9);
	SETCONSTANT(STEAM_INPUT_TYPE_SWITCH_PRO_CONTROLLER, 10);
	SETCONSTANT(STEAM_INPUT_TYPE_MOBILE_TOUCH, 11);
	SETCONSTANT(STEAM_INPUT_TYPE_PS3_CONTROLLER, 12);
	SETCONSTANT(STEAM_INPUT_TYPE_PS5_CONTROLLER, 13);
	SETCONSTANT(STEAM_INPUT_TYPE_STEAM_DECK_CONTROLLER, 14);
	SETCONSTANT(STEAM_INPUT_TYPE_COUNT, 15);
	SETCONSTANT(STEAM_INPUT_TYPE_MAXIMUM_POSSIBLE_VALUE, 255);
	// ESteamInputConfigurationEnableType
	SETCONSTANT(STEAM_INPUT_CONFIGURATION_ENABLE_TYPE_NONE, 0);
	SETCONSTANT(STEAM_INPUT_CONFIGURATION_ENABLE_TYPE_PLAYSTATION, 1);
	SETCONSTANT(STEAM_INPUT_CONFIGURATION_ENABLE_TYPE_XBOX, 2);
	SETCONSTANT(STEAM_INPUT_CONFIGURATION_ENABLE_TYPE_GENERIC, 4);
	SETCONSTANT(STEAM_INPUT_CONFIGURATION_ENABLE_TYPE_SWITCH, 8);
	// ESteamInputLEDFlag
	SETCONSTANT(STEAM_INPUT_LED_FLAG_SET_COLOR, 0);
	SETCONSTANT(STEAM_INPUT_LED_FLAG_RESTORE_USER_DEFAULT, 1);
	// ESteamInputGlyphSize
	SETCONSTANT(STEAM_INPUT_GLYPH_SIZE_SMALL, 0);
	SETCONSTANT(STEAM_INPUT_GLYPH_SIZE_MEDIUM, 1);
	SETCONSTANT(STEAM_INPUT_GLYPH_SIZE_LARGE, 2);
	SETCONSTANT(STEAM_INPUT_GLYPH_SIZE_COUNT, 3);
	// ESteamInputGlyphStyle
	SETCONSTANT(E_STEAM_INPUT_GLYPH_STYLE_KNOCKOUT, 0);
	SETCONSTANT(E_STEAM_INPUT_GLYPH_STYLE_LIGHT, 1);
	SETCONSTANT(E_STEAM_INPUT_GLYPH_STYLE_DARK, 2);
	SETCONSTANT(E_STEAM_INPUT_GLYPH_STYLE_NEUTRAL_COLOR_ABXY, 16);
	SETCONSTANT(E_STEAM_INPUT_GLYPH_STYLE_SOLID_ABXY, 32);
	// ESteamInputActionEventType
	SETCONSTANT(E_STEAM_INPUT_ACTION_EVENT_TYPE_DIGITAL_ACTION, 0);
	SETCONSTANT(E_STEAM_INPUT_ACTION_EVENT_TYPE_ANALOG_ACTION, 1);
	// EControllerActionOrigin
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_NONE, 0);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_A, 1);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_B, 2);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X, 3);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_Y, 4);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_BUMPER, 5);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_BUMPER, 6);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_GRIP, 7);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_GRIP, 8);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_START, 9);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_BACK, 10);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_PAD_TOUCH, 11);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_PAD_SWIPE, 12);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_PAD_CLICK, 13);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_PAD_D_PAD_NORTH, 14);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_PAD_D_PAD_SOUTH, 15);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_PAD_D_PAD_WEST, 16);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_PAD_D_PAD_EAST, 17);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_TOUCH, 18);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_SWIPE, 19);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_CLICK, 20);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_D_PAD_NORTH, 21);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_D_PAD_SOUTH, 22);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_D_PAD_WEST, 23);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_D_PAD_EAST, 24);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_TRIGGER_PULL, 25);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_TRIGGER_CLICK, 26);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_TRIGGER_PULL, 27);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_RIGHT_TRIGGER_CLICK, 28);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_STICK_MOVE, 29);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_STICK_CLICK, 30);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_STICK_D_PAD_NORTH, 31);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_STICK_D_PAD_SOUTH, 32);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_STICK_D_PAD_WEST, 33);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_LEFT_STICK_D_PAD_EAST, 34);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_GYRO_MOVE, 35);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_GYRO_PITCH, 36);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_GYRO_YAW, 37);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_GYRO_ROLL, 38);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_X, 39);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_CIRCLE, 40);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_TRIANGLE, 41);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_SQUARE, 42);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_BUMPER, 43);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_BUMPER, 44);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_OPTIONS, 45);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_SHARE, 46);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_TOUCH, 47);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_SWIPE, 48);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_CLICK, 49);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_NORTH, 50);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_SOUTH, 51);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_WEST, 52);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_EAST, 53);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_TOUCH, 54);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_SWIPE, 55);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_CLICK, 56);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_NORTH, 57);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_SOUTH, 58);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_WEST, 59);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_EAST, 60);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_TOUCH, 61);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_SWIPE, 62);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_CLICK, 63);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_NORTH, 64);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_SOUTH, 65);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_WEST, 66);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_EAST, 67);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_TRIGGER_PULL, 68);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_TRIGGER_CLICK, 69);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_TRIGGER_PULL, 70);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_TRIGGER_CLICK, 71);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_MOVE, 72);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_CLICK, 73);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_NORTH, 74);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_SOUTH, 75);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_WEST, 76);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_EAST, 77);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_MOVE, 78);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_CLICK, 79);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_NORTH, 80);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_SOUTH, 81);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_WEST, 82);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_EAST, 83);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_D_PAD_NORTH, 84);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_D_PAD_SOUTH, 85);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_D_PAD_WEST, 86);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_D_PAD_EAST, 87);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_GYRO_MOVE, 88);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_GYRO_PITCH, 89);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_GYRO_YAW, 90);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_GYRO_ROLL, 91);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_A, 92);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_B, 93);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_X, 94);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_Y, 95);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_BUMPER, 96);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_BUMPER, 97);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_MENU, 98);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_VIEW, 99);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_TRIGGER_PULL, 100);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_TRIGGER_CLICK, 101);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_TRIGGER_PULL, 102);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_TRIGGER_CLICK, 103);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_MOVE, 104);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_CLICK, 105);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_NORTH, 106);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_SOUTH, 107);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_WEST, 108);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_EAST, 109);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_MOVE, 110);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_CLICK, 111);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_NORTH, 112);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_SOUTH, 113);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_WEST, 114);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_EAST, 115);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_D_PAD_NORTH, 116);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_D_PAD_SOUTH, 117);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_D_PAD_WEST, 118);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_D_PAD_EAST, 119);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_A, 120);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_B, 121);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_X, 122);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_Y, 123);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_BUMPER, 124);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_BUMPER, 125);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_START, 126);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_BACK, 127);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_TRIGGER_PULL, 128);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_TRIGGER_CLICK, 129);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_TRIGGER_PULL, 130);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_TRIGGER_CLICK, 131);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_MOVE, 132);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_CLICK, 133);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_NORTH, 134);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_SOUTH, 135);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_WEST, 136);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_EAST, 137);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_MOVE, 138);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_CLICK, 139);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_NORTH, 140);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_SOUTH, 141);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_WEST, 142);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_EAST, 143);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_D_PAD_NORTH, 144);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_D_PAD_SOUTH, 145);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_D_PAD_WEST, 146);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_D_PAD_EAST, 147);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_A, 148);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_B, 149);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_X, 150);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_Y, 151);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_BUMPER, 152);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_BUMPER, 153);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP_LOWER, 154);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP_UPPER, 155);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_GRIP_LOWER, 156);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_GRIP_UPPER, 157);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_BUMPER_PRESSURE, 158);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_BUMPER_PRESSURE, 159);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP_PRESSURE, 160);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_GRIP_PRESSURE, 161);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP_UPPER_PRESSURE, 162);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_GRIP_UPPER_PRESSURE, 163);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_START, 164);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_BACK, 165);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_TOUCH, 166);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_SWIPE, 167);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_CLICK, 168);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_PRESSURE, 169);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_D_PAD_NORTH, 170);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_D_PAD_SOUTH, 171);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_D_PAD_WEST, 172);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_D_PAD_EAST, 173);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_TOUCH, 174);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_SWIPE, 175);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_CLICK, 176);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_PRESSURE, 177);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_D_PAD_NORTH, 178);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_D_PAD_SOUTH, 179);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_D_PAD_WEST, 180);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_D_PAD_EAST, 181);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_TRIGGER_PULL, 182);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_TRIGGER_CLICK, 183);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_TRIGGER_PULL, 184);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_TRIGGER_CLICK, 185);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_MOVE, 186);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_CLICK, 187);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_D_PAD_NORTH, 188);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_D_PAD_SOUTH, 189);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_D_PAD_WEST, 190);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_D_PAD_EAST, 191);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_GYRO_MOVE, 192);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_GYRO_PITCH, 193);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_GYRO_YAW, 194);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_GYRO_ROLL, 195);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_A, 196);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_B, 197);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_X, 198);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_Y, 199);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_BUMPER, 200);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_BUMPER, 201);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_PLUS, 202);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_MINUS, 203);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_CAPTURE, 204);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_TRIGGER_PULL, 205);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_TRIGGER_CLICK, 206);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_TRIGGER_PULL, 207);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_TRIGGER_CLICK, 208);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_STICK_MOVE, 209);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_STICK_CLICK, 210);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_STICK_D_PAD_NORTH, 211);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_STICK_D_PAD_SOUTH, 212);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_STICK_D_PAD_WEST, 213);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_STICK_D_PAD_EAST, 214);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_STICK_MOVE, 215);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_STICK_CLICK, 216);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_STICK_D_PAD_NORTH, 217);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_STICK_D_PAD_SOUTH, 218);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_STICK_D_PAD_WEST, 219);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_STICK_D_PAD_EAST, 220);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_D_PAD_NORTH, 221);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_D_PAD_SOUTH, 222);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_D_PAD_WEST, 223);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_D_PAD_EAST, 224);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_PRO_GYRO_MOVE, 225);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_PRO_GYRO_PITCH, 226);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_PRO_GYRO_YAW, 227);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_PRO_GYRO_ROLL, 228);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_GYRO_MOVE, 229);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_GYRO_PITCH, 230);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_GYRO_YAW, 231);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_GYRO_ROLL, 232);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_GYRO_MOVE, 233);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_GYRO_PITCH, 234);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_GYRO_YAW, 235);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_GYRO_ROLL, 236);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_GRIP_LOWER, 237);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_LEFT_GRIP_UPPER, 238);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_GRIP_LOWER, 239);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_RIGHT_GRIP_UPPER, 240);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS4_D_PAD_MOVE, 241);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_D_PAD_MOVE, 242);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX360_D_PAD_MOVE, 243);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_SWITCH_D_PAD_MOVE, 244);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_X, 245);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_CIRCLE, 246);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_TRIANGLE, 247);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_SQUARE, 248);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_BUMPER, 249);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_BUMPER, 250);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_OPTION, 251);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_CREATE, 252);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_MUTE, 253);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_PAD_TOUCH, 254);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_PAD_SWIPE, 255);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_PAD_CLICK, 256);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_PAD_D_PAD_NORTH, 257);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_PAD_D_PAD_SOUTH, 258);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_PAD_D_PAD_WEST, 259);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_PAD_D_PAD_EAST, 260);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_PAD_TOUCH, 261);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_PAD_SWIPE, 262);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_PAD_CLICK, 263);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_PAD_D_PAD_NORTH, 264);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_PAD_D_PAD_SOUTH, 265);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_PAD_D_PAD_WEST, 266);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_PAD_D_PAD_EAST, 267);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_CENTER_PAD_TOUCH, 268);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_CENTER_PAD_SWIPE, 269);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_CENTER_PAD_CLICK, 270);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_CENTER_PAD_D_PAD_NORTH, 271);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_CENTER_PAD_D_PAD_SOUTH, 272);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_CENTER_PAD_D_PAD_WEST, 273);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_CENTER_PAD_D_PAD_EAST, 274);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_TRIGGER_PULL, 275);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_TRIGGER_CLICK, 276);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_TRIGGER_PULL, 277);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_TRIGGER_CLICK, 278);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_STICK_MOVE, 279);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_STICK_CLICK, 280);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_STICK_D_PAD_NORTH, 281);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_STICK_D_PAD_SOUTH, 282);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_STICK_D_PAD_WEST, 283);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_LEFT_STICK_D_PAD_EAST, 284);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_STICK_MOVE, 285);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_STICK_CLICK, 286);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_STICK_D_PAD_NORTH, 287);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_STICK_D_PAD_SOUTH, 288);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_STICK_D_PAD_WEST, 289);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_RIGHT_STICK_D_PAD_EAST, 290);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_D_PAD_MOVE, 291);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_D_PAD_NORTH, 292);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_D_PAD_SOUTH, 293);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_D_PAD_WEST, 294);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_D_PAD_EAST, 295);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_GYRO_MOVE, 296);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_GYRO_PITCH, 297);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_GYRO_YAW, 298);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_PS5_GYRO_ROLL, 299);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_GRIP_LOWER, 300);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_GRIP_UPPER, 301);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_GRIP_LOWER, 302);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_GRIP_UPPER, 303);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_SHARE, 304);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_A, 305);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_B, 306);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_X, 307);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_Y, 308);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_L1, 309);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_R1, 310);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_MENU, 311);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_VIEW, 312);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_TOUCH, 313);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_SWIPE, 314);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_CLICK, 315);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_D_PAD_NORTH, 316);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_D_PAD_SOUTH, 317);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_D_PAD_WEST, 318);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_PAD_D_PAD_EAST, 319);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_TOUCH, 320);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_SWIPE, 321);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_CLICK, 322);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_D_PAD_NORTH, 323);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_D_PAD_SOUTH, 324);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_D_PAD_WEST, 325);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_PAD_D_PAD_EAST, 326);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_L2_SOFT_PULL, 327);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_L2, 328);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_R2_SOFT_PULL, 329);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_R2, 330);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_MOVE, 331);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_L3, 332);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_D_PAD_NORTH, 333);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_D_PAD_SOUTH, 334);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_D_PAD_WEST, 335);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_D_PAD_EAST, 336);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_LEFT_STICK_TOUCH, 337);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_MOVE, 338);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_R3, 339);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_D_PAD_NORTH, 340);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_D_PAD_SOUTH, 341);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_D_PAD_WEST, 342);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_D_PAD_EAST, 343);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RIGHT_STICK_TOUCH, 344);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_L4, 345);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_R4, 346);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_L5, 347);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_R5, 348);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_D_PAD_MOVE, 349);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_D_PAD_NORTH, 350);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_D_PAD_SOUTH, 351);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_D_PAD_WEST, 352);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_D_PAD_EAST, 353);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_GYRO_MOVE, 354);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_GYRO_PITCH, 355);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_GYRO_YAW, 356);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_GYRO_ROLL, 357);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED1, 358);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED2, 359);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED3, 360);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED4, 361);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED5, 362);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED6, 363);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED7, 364);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED8, 365);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED9, 366);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED10, 367);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED11, 368);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED12, 369);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED13, 370);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED14, 371);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED15, 372);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED16, 373);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED17, 374);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED18, 375);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED19, 376);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_DECK_RESERVED20, 377);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_COUNT, 378);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_MAXIMUM_POSSIBLE_VALUE, 32767);
	// ESteamControllerLEDFlag
	SETCONSTANT(STEAM_CONTROLLER_LED_FLAG_SET_COLOR, 0);
	SETCONSTANT(STEAM_CONTROLLER_LED_FLAG_RESTORE_USER_DEFAULT, 1);
	// EUGCMatchingUGCType
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_ITEMS, 0);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_ITEMS_MTX, 1);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_ITEMS_READY_TO_USE, 2);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_COLLECTIONS, 3);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_ARTWORK, 4);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_VIDEOS, 5);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_SCREENSHOTS, 6);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_ALL_GUIDES, 7);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_WEB_GUIDES, 8);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_INTEGRATED_GUIDES, 9);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_USABLE_IN_GAME, 10);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_CONTROLLER_BINDINGS, 11);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_GAME_MANAGED_ITEMS, 12);
	SETCONSTANT(UGC_MATCHING_UGC_TYPE_ALL, -1);
	// EUserUGCList
	SETCONSTANT(USER_UGC_LIST_PUBLISHED, 0);
	SETCONSTANT(USER_UGC_LIST_VOTED_ON, 1);
	SETCONSTANT(USER_UGC_LIST_VOTED_UP, 2);
	SETCONSTANT(USER_UGC_LIST_VOTED_DOWN, 3);
	SETCONSTANT(USER_UGC_LIST_WILL_VOTE_LATER, 4);
	SETCONSTANT(USER_UGC_LIST_FAVORITED, 5);
	SETCONSTANT(USER_UGC_LIST_SUBSCRIBED, 6);
	SETCONSTANT(USER_UGC_LIST_USED_OR_PLAYED, 7);
	SETCONSTANT(USER_UGC_LIST_FOLLOWED, 8);
	// EUserUGCListSortOrder
	SETCONSTANT(USER_UGC_LIST_SORT_ORDER_CREATION_ORDER_DESC, 0);
	SETCONSTANT(USER_UGC_LIST_SORT_ORDER_CREATION_ORDER_ASC, 1);
	SETCONSTANT(USER_UGC_LIST_SORT_ORDER_TITLE_ASC, 2);
	SETCONSTANT(USER_UGC_LIST_SORT_ORDER_LAST_UPDATED_DESC, 3);
	SETCONSTANT(USER_UGC_LIST_SORT_ORDER_SUBSCRIPTION_DATE_DESC, 4);
	SETCONSTANT(USER_UGC_LIST_SORT_ORDER_VOTE_SCORE_DESC, 5);
	SETCONSTANT(USER_UGC_LIST_SORT_ORDER_FOR_MODERATION, 6);
	// EUGCQuery
	SETCONSTANT(UGC_QUERY_RANKED_BY_VOTE, 0);
	SETCONSTANT(UGC_QUERY_RANKED_BY_PUBLICATION_DATE, 1);
	SETCONSTANT(UGC_QUERY_ACCEPTED_FOR_GAME_RANKED_BY_ACCEPTANCE_DATE, 2);
	SETCONSTANT(UGC_QUERY_RANKED_BY_TREND, 3);
	SETCONSTANT(UGC_QUERY_FAVORITED_BY_FRIENDS_RANKED_BY_PUBLICATION_DATE, 4);
	SETCONSTANT(UGC_QUERY_CREATED_BY_FRIENDS_RANKED_BY_PUBLICATION_DATE, 5);
	SETCONSTANT(UGC_QUERY_RANKED_BY_NUM_TIMES_REPORTED, 6);
	SETCONSTANT(UGC_QUERY_CREATED_BY_FOLLOWED_USERS_RANKED_BY_PUBLICATION_DATE, 7);
	SETCONSTANT(UGC_QUERY_NOT_YET_RATED, 8);
	SETCONSTANT(UGC_QUERY_RANKED_BY_TOTAL_VOTES_ASC, 9);
	SETCONSTANT(UGC_QUERY_RANKED_BY_VOTES_UP, 10);
	SETCONSTANT(UGC_QUERY_RANKED_BY_TEXT_SEARCH, 11);
	SETCONSTANT(UGC_QUERY_RANKED_BY_TOTAL_UNIQUE_SUBSCRIPTIONS, 12);
	SETCONSTANT(UGC_QUERY_RANKED_BY_PLAYTIME_TREND, 13);
	SETCONSTANT(UGC_QUERY_RANKED_BY_TOTAL_PLAYTIME, 14);
	SETCONSTANT(UGC_QUERY_RANKED_BY_AVERAGE_PLAYTIME_TREND, 15);
	SETCONSTANT(UGC_QUERY_RANKED_BY_LIFETIME_AVERAGE_PLAYTIME, 16);
	SETCONSTANT(UGC_QUERY_RANKED_BY_PLAYTIME_SESSIONS_TREND, 17);
	SETCONSTANT(UGC_QUERY_RANKED_BY_LIFETIME_PLAYTIME_SESSIONS, 18);
	SETCONSTANT(UGC_QUERY_RANKED_BY_LAST_UPDATED_DATE, 19);
	// EItemUpdateStatus
	SETCONSTANT(ITEM_UPDATE_STATUS_INVALID, 0);
	SETCONSTANT(ITEM_UPDATE_STATUS_PREPARING_CONFIG, 1);
	SETCONSTANT(ITEM_UPDATE_STATUS_PREPARING_CONTENT, 2);
	SETCONSTANT(ITEM_UPDATE_STATUS_UPLOADING_CONTENT, 3);
	SETCONSTANT(ITEM_UPDATE_STATUS_UPLOADING_PREVIEW_FILE, 4);
	SETCONSTANT(ITEM_UPDATE_STATUS_COMMITTING_CHANGES, 5);
	// EItemState
	SETCONSTANT(ITEM_STATE_NONE, 0);
	SETCONSTANT(ITEM_STATE_SUBSCRIBED, 1);
	SETCONSTANT(ITEM_STATE_LEGACY_ITEM, 2);
	SETCONSTANT(ITEM_STATE_INSTALLED, 4);
	SETCONSTANT(ITEM_STATE_NEEDS_UPDATE, 8);
	SETCONSTANT(ITEM_STATE_DOWNLOADING, 16);
	SETCONSTANT(ITEM_STATE_DOWNLOAD_PENDING, 32);
	// EItemStatistic
	SETCONSTANT(ITEM_STATISTIC_NUM_SUBSCRIPTIONS, 0);
	SETCONSTANT(ITEM_STATISTIC_NUM_FAVORITES, 1);
	SETCONSTANT(ITEM_STATISTIC_NUM_FOLLOWERS, 2);
	SETCONSTANT(ITEM_STATISTIC_NUM_UNIQUE_SUBSCRIPTIONS, 3);
	SETCONSTANT(ITEM_STATISTIC_NUM_UNIQUE_FAVORITES, 4);
	SETCONSTANT(ITEM_STATISTIC_NUM_UNIQUE_FOLLOWERS, 5);
	SETCONSTANT(ITEM_STATISTIC_NUM_UNIQUE_WEBSITE_VIEWS, 6);
	SETCONSTANT(ITEM_STATISTIC_REPORT_SCORE, 7);
	SETCONSTANT(ITEM_STATISTIC_NUM_SECONDS_PLAYED, 8);
	SETCONSTANT(ITEM_STATISTIC_NUM_PLAYTIME_SESSIONS, 9);
	SETCONSTANT(ITEM_STATISTIC_NUM_COMMENTS, 10);
	SETCONSTANT(ITEM_STATISTIC_NUM_SECONDS_PLAYED_DURING_TIME_PERIOD, 11);
	SETCONSTANT(ITEM_STATISTIC_NUM_PLAYTIME_SESSIONS_DURING_TIME_PERIOD, 12);
	// EItemPreviewType
	SETCONSTANT(ITEM_PREVIEW_TYPE_IMAGE, 0);
	SETCONSTANT(ITEM_PREVIEW_TYPE_YOU_TUBE_VIDEO, 1);
	SETCONSTANT(ITEM_PREVIEW_TYPE_SKETCHFAB, 2);
	SETCONSTANT(ITEM_PREVIEW_TYPE_ENVIRONMENT_MAP_HORIZONTAL_CROSS, 3);
	SETCONSTANT(ITEM_PREVIEW_TYPE_ENVIRONMENT_MAP_LAT_LONG, 4);
	SETCONSTANT(ITEM_PREVIEW_TYPE_RESERVED_MAX, 255);
	// ESteamItemFlags
	SETCONSTANT(STEAM_ITEM_NO_TRADE, 1);
	SETCONSTANT(STEAM_ITEM_REMOVED, 256);
	SETCONSTANT(STEAM_ITEM_CONSUMED, 512);
	// EParentalFeature
	SETCONSTANT(FEATURE_INVALID, 0);
	SETCONSTANT(FEATURE_STORE, 1);
	SETCONSTANT(FEATURE_COMMUNITY, 2);
	SETCONSTANT(FEATURE_PROFILE, 3);
	SETCONSTANT(FEATURE_FRIENDS, 4);
	SETCONSTANT(FEATURE_NEWS, 5);
	SETCONSTANT(FEATURE_TRADING, 6);
	SETCONSTANT(FEATURE_SETTINGS, 7);
	SETCONSTANT(FEATURE_CONSOLE, 8);
	SETCONSTANT(FEATURE_BROWSER, 9);
	SETCONSTANT(FEATURE_PARENTAL_SETUP, 10);
	SETCONSTANT(FEATURE_LIBRARY, 11);
	SETCONSTANT(FEATURE_TEST, 12);
	SETCONSTANT(FEATURE_SITE_LICENSE, 13);
	SETCONSTANT(FEATURE_MAX, 14);
	// ESteamDeviceFormFactor
	SETCONSTANT(STEAM_DEVICE_FORM_FACTOR_UNKNOWN, 0);
	SETCONSTANT(STEAM_DEVICE_FORM_FACTOR_PHONE, 1);
	SETCONSTANT(STEAM_DEVICE_FORM_FACTOR_TABLET, 2);
	SETCONSTANT(STEAM_DEVICE_FORM_FACTOR_COMPUTER, 3);
	SETCONSTANT(STEAM_DEVICE_FORM_FACTOR_TV, 4);
	// ESteamNetworkingAvailability
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY_CANNOT_TRY, -102);
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY_FAILED, -101);
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY_PREVIOUSLY, -100);
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY_RETRYING, -10);
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY_NEVER_TRIED, 1);
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY_WAITING, 2);
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY_ATTEMPTING, 3);
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY_CURRENT, 100);
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY_UNKNOWN, 0);
	SETCONSTANT(STEAM_NETWORKING_AVAILABILITY__FORCE32BIT, 2147483647);
	// ESteamNetworkingIdentityType
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE_INVALID, 0);
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE_STEAM_ID, 16);
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE_XBOX_PAIRWISE_ID, 17);
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE_SONY_PSN, 18);
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE_GOOGLE_STADIA, 19);
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE_IP_ADDRESS, 1);
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE_GENERIC_STRING, 2);
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE_GENERIC_BYTES, 3);
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE_UNKNOWN_TYPE, 4);
	SETCONSTANT(STEAM_NETWORKING_IDENTITY_TYPE__FORCE32BIT, 2147483647);
	// ESteamNetworkingFakeIPType
	SETCONSTANT(STEAM_NETWORKING_FAKE_IP_TYPE_INVALID, 0);
	SETCONSTANT(STEAM_NETWORKING_FAKE_IP_TYPE_NOT_FAKE, 1);
	SETCONSTANT(STEAM_NETWORKING_FAKE_IP_TYPE_GLOBAL_I_PV4, 2);
	SETCONSTANT(STEAM_NETWORKING_FAKE_IP_TYPE_LOCAL_I_PV4, 3);
	SETCONSTANT(STEAM_NETWORKING_FAKE_IP_TYPE__FORCE32_BIT, 2147483647);
	// ESteamNetworkingConnectionState
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE_NONE, 0);
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE_CONNECTING, 1);
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE_FINDING_ROUTE, 2);
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE_CONNECTED, 3);
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE_CLOSED_BY_PEER, 4);
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE_PROBLEM_DETECTED_LOCALLY, 5);
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE_FIN_WAIT, -1);
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE_LINGER, -2);
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE_DEAD, -3);
	SETCONSTANT(STEAM_NETWORKING_CONNECTION_STATE__FORCE32_BIT, 2147483647);
	// ESteamNetConnectionEnd
	SETCONSTANT(STEAM_NET_CONNECTION_END_INVALID, 0);
	SETCONSTANT(STEAM_NET_CONNECTION_END_APP_MIN, 1000);
	SETCONSTANT(STEAM_NET_CONNECTION_END_APP_GENERIC, 1000);
	SETCONSTANT(STEAM_NET_CONNECTION_END_APP_MAX, 1999);
	SETCONSTANT(STEAM_NET_CONNECTION_END_APP_EXCEPTION_MIN, 2000);
	SETCONSTANT(STEAM_NET_CONNECTION_END_APP_EXCEPTION_GENERIC, 2000);
	SETCONSTANT(STEAM_NET_CONNECTION_END_APP_EXCEPTION_MAX, 2999);
	SETCONSTANT(STEAM_NET_CONNECTION_END_LOCAL_MIN, 3000);
	SETCONSTANT(STEAM_NET_CONNECTION_END_LOCAL_OFFLINE_MODE, 3001);
	SETCONSTANT(STEAM_NET_CONNECTION_END_LOCAL_MANY_RELAY_CONNECTIVITY, 3002);
	SETCONSTANT(STEAM_NET_CONNECTION_END_LOCAL_HOSTED_SERVER_PRIMARY_RELAY, 3003);
	SETCONSTANT(STEAM_NET_CONNECTION_END_LOCAL_NETWORK_CONFIG, 3004);
	SETCONSTANT(STEAM_NET_CONNECTION_END_LOCAL_RIGHTS, 3005);
	SETCONSTANT(STEAM_NET_CONNECTION_END_LOCAL_P2P_ICE_NO_PUBLIC_ADDRESSES, 3006);
	SETCONSTANT(STEAM_NET_CONNECTION_END_LOCAL_MAX, 3999);
	SETCONSTANT(STEAM_NET_CONNECTION_END_REMOTE_MIN, 4000);
	SETCONSTANT(STEAM_NET_CONNECTION_END_REMOTE_TIMEOUT, 4001);
	SETCONSTANT(STEAM_NET_CONNECTION_END_REMOTE_BAD_CRYPT, 4002);
	SETCONSTANT(STEAM_NET_CONNECTION_END_REMOTE_BAD_CERT, 4003);
	SETCONSTANT(STEAM_NET_CONNECTION_END_REMOTE_BAD_PROTOCOL_VERSION, 4006);
	SETCONSTANT(STEAM_NET_CONNECTION_END_REMOTE_P2P_ICE_NO_PUBLIC_ADDRESSES, 4007);
	SETCONSTANT(STEAM_NET_CONNECTION_END_REMOTE_MAX, 4999);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_MIN, 5000);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_GENERIC, 5001);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_INTERNAL_ERROR, 5002);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_TIMEOUT, 5003);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_STEAM_CONNECTIVITY, 5005);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_NO_RELAY_SESSIONS_TO_CLIENT, 5006);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_P2P_RENDEZVOUS, 5008);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_P2P_NAT_FIREWALL, 5009);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_PEER_SENT_NO_CONNECTION, 5010);
	SETCONSTANT(STEAM_NET_CONNECTION_END_MISC_MAX, 5999);
	SETCONSTANT(STEAM_NET_CONNECTION_END__FORCE32_BIT, 2147483647);
	// ESteamNetworkingConfigScope
	SETCONSTANT(STEAM_NETWORKING_CONFIG_GLOBAL, 1);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SOCKETS_INTERFACE, 2);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_LISTEN_SOCKET, 3);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_CONNECTION, 4);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SCOPE__FORCE32_BIT, 2147483647);
	// ESteamNetworkingConfigDataType
	SETCONSTANT(STEAM_NETWORKING_CONFIG_INT32, 1);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_INT64, 2);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FLOAT, 3);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_STRING, 4);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_PTR, 5);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_DATA_TYPE__FORCE32_BIT, 2147483647);
	// ESteamNetworkingConfigValue
	SETCONSTANT(STEAM_NETWORKING_CONFIG_INVALID, 0);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_TIMEOUT_INITIAL, 24);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_TIMEOUT_CONNECTED, 25);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SEND_BUFFER_SIZE, 9);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_CONNECTION_USER_DATA, 40);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SEND_RATE_MIN, 10);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SEND_RATE_MAX, 11);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_NAGLE_TIME, 12);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_IP_ALLOW_WITHOUT_AUTH, 23);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_MTU_PACKET_SIZE, 32);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_MTU_DATA_SIZE, 33);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_UNENCRYPTED, 34);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SYMMETRIC_CONNECT, 37);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_LOCAL_VIRTUAL_PORT, 38);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_DUAL_WIFI_ENABLE, 39);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_ENABLE_DIAGNOSTICS_UI, 46);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_LOSS_SEND, 2);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_LOSS_RECV, 3);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_LAG_SEND, 4);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_LAG_RECV, 5);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_REORDER_SEND, 6);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_REORDER_RECV, 7);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_REORDER_TIME, 8);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_DUP_SEND, 26);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_DUP_RECV, 27);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_PACKET_DUP_TIME_MAX, 28);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_PACKET_TRACE_MAX_BYTES, 41);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_RATE_LIMIT_SEND_RATE, 42);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_RATE_LIMIT_SEND_BURST, 43);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_RATE_LIMIT_RECV_RATE, 44);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_FAKE_RATE_LIMIT_RECV_BURST, 45);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_CALLBACK_CONNECTION_STATUS_CHANGED, 201);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_CALLBACK_AUTH_STATUS_CHANGED, 202);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_CALLBACK_RELAY_NETWORK_STATUS_CHANGED, 203);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_CALLBACK_MESSAGES_SESSION_REQUEST, 204);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_CALLBACK_MESSAGES_SESSION_FAILED, 205);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_CALLBACK_CREATE_CONNECTION_SIGNALING, 206);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_CALLBACK_FAKE_IP_RESULT, 207);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_P2P_STUN_SERVER_LIST, 103);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_P2P_TRANSPORT_ICE_ENABLE, 104);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_P2P_TRANSPORT_ICE_PENALTY, 105);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_P2P_TRANSPORT_SDR_PENALTY, 106);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_P2P_TURN_SERVER_LIST, 107);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_P2P_TURN_USER_LIST, 108);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_P2P_TURN_PASS_LIST, 109);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_P2P_TRANSPORT_ICE_IMPLEMENTATION, 110);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SDR_CLIENT_CONSECUTITIVE_PING_TIMEOUTS_FAIL_INITIAL, 19);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SDR_CLIENT_CONSECUTITIVE_PING_TIMEOUTS_FAIL, 20);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SDR_CLIENT_MIN_PINGS_BEFORE_PING_ACCURATE, 21);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SDR_CLIENT_SINGLE_SOCKET, 22);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SDR_CLIENT_FORCE_RELAY_CLUSTER, 29);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SDR_CLIENT_DEBUG_TICKET_ADDRESS, 30);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SDR_CLIENT_FORCE_PROXY_ADDR, 31);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_SDR_CLIENT_FAKE_CLUSTER_PING, 36);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_LOG_LEVEL_ACK_RTT, 13);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_LOG_LEVEL_PACKET_DECODE, 14);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_LOG_LEVEL_MESSAGE, 15);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_LOG_LEVEL_PACKET_GAPS, 16);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_LOG_LEVEL_P2P_RENDEZVOUS, 17);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_LOG_LEVEL_SDR_RELAY_PINGS, 18);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_DELETED_ENUMERATE_DEV_VARS, 35);
	SETCONSTANT(STEAM_NETWORKING_CONFIG_VALUE__FORCE32_BIT, 2147483647);
	// ESteamNetworkingGetConfigValueResult
	SETCONSTANT(STEAM_NETWORKING_GET_CONFIG_VALUE_BAD_VALUE, -1);
	SETCONSTANT(STEAM_NETWORKING_GET_CONFIG_VALUE_BAD_SCOPE_OBJ, -2);
	SETCONSTANT(STEAM_NETWORKING_GET_CONFIG_VALUE_BUFFER_TOO_SMALL, -3);
	SETCONSTANT(STEAM_NETWORKING_GET_CONFIG_VALUE_OK, 1);
	SETCONSTANT(STEAM_NETWORKING_GET_CONFIG_VALUE_OK_INHERITED, 2);
	SETCONSTANT(STEAM_NETWORKING_GET_CONFIG_VALUE_RESULT__FORCE32_BIT, 2147483647);
	// ESteamNetworkingSocketsDebugOutputType
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE_NONE, 0);
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE_BUG, 1);
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE_ERROR, 2);
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE_IMPORTANT, 3);
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE_WARNING, 4);
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE_MSG, 5);
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE_VERBOSE, 6);
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE_DEBUG, 7);
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE_EVERYTHING, 8);
	SETCONSTANT(STEAM_NETWORKING_SOCKETS_DEBUG_OUTPUT_TYPE__FORCE32_BIT, 2147483647);
	// EServerMode
	SETCONSTANT(E_SERVER_MODE_INVALID, 0);
	SETCONSTANT(E_SERVER_MODE_NO_AUTHENTICATION, 1);
	SETCONSTANT(E_SERVER_MODE_AUTHENTICATION, 2);
	SETCONSTANT(E_SERVER_MODE_AUTHENTICATION_AND_SECURE, 3);
	// EFailureType
	SETCONSTANT(FAILURE_FLUSHED_CALLBACK_QUEUE, 0);
	SETCONSTANT(FAILURE_PIPE_FAIL, 1);
	// PlayerAcceptState_t
	SETCONSTANT(STATE_UNKNOWN, 0);
	SETCONSTANT(STATE_PLAYER_ACCEPTED, 1);
	SETCONSTANT(STATE_PLAYER_DECLINED, 2);
	#undef SETCONSTANT

	lua_pop(L, 1);
	assert(top == lua_gettop(L));
}

dmExtension::Result AppInitializeSteamworks(dmExtension::AppParams* params) {
	return dmExtension::RESULT_OK;
}

dmExtension::Result InitializeSteamworks(dmExtension::Params* params) {
	LuaInit(params->m_L);
	dmLogInfo("Registered %s Extension", MODULE_NAME);
	return dmExtension::RESULT_OK;
}

dmExtension::Result AppFinalizeSteamworks(dmExtension::AppParams* params) {
	return dmExtension::RESULT_OK;
}

dmExtension::Result FinalizeSteamworks(dmExtension::Params* params) {
	return dmExtension::RESULT_OK;
}

#else

static dmExtension::Result AppInitializeSteamworks(dmExtension::AppParams* params)
{
    dmLogWarning("Registered %s (null) Extension", MODULE_NAME);
    return dmExtension::RESULT_OK;
}

static dmExtension::Result InitializeSteamworks(dmExtension::Params* params)
{
    return dmExtension::RESULT_OK;
}

static dmExtension::Result AppFinalizeSteamworks(dmExtension::AppParams* params)
{
    return dmExtension::RESULT_OK;
}

static dmExtension::Result FinalizeSteamworks(dmExtension::Params* params)
{
    return dmExtension::RESULT_OK;
}

#endif

DM_DECLARE_EXTENSION(steamworks, LIB_NAME, AppInitializeSteamworks, AppFinalizeSteamworks, InitializeSteamworks, 0, 0, FinalizeSteamworks)
