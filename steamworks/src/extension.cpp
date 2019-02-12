// GENERATED CODE - DO NOT MODIFY
// Copyright 2016 Bjorn Ritzl

#include <dmsdk/sdk.h>

#define LIB_NAME "Steamworks"
#define MODULE_NAME "steamworks"

#ifndef DLIB_LOG_DOMAIN
#define DLIB_LOG_DOMAIN "steamworks"
#include <dmsdk/dlib/log.h>
#endif

#ifdef DM_PLATFORM_OSX || DM_PLATFORM_WIN32 || DM_PLATFORM_LINUX

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "steam_api.h"
#include "steam_gameserver.h"
#include "luautils.h"



#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_INT 0
#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_FLOAT 1
#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_AVERAGERATE 2

static ISteamApps *apps;
static ISteamFriends *friends;
static ISteamMatchmaking *matchmaking;
static ISteamMusic *music;
static ISteamNetworking *networking;
static ISteamUser *user;
static ISteamUserStats *user_stats;
static ISteamUtils *utils;
static ISteamRemoteStorage *remote_storage;
static ISteamInventory *inventory;



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
static void push_PackageId_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_PackageId_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PackageId_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_BundleId_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_BundleId_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_BundleId_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AppId_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_AppId_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AppId_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_PhysicalItemId_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_PhysicalItemId_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PhysicalItemId_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_DepotId_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_DepotId_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_DepotId_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RTime32(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_RTime32_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RTime32(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_CellID_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_CellID_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_CellID_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_AccountID_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_AccountID_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AccountID_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_PartnerId_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_PartnerId_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_PartnerId_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HAuthTicket(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_HAuthTicket_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HAuthTicket(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HSteamPipe(lua_State* L, int32 n) {
	lua_pushinteger(L, n);
}
static void push_HSteamPipe_array(lua_State* L, int32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HSteamPipe(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HSteamUser(lua_State* L, int32 n) {
	lua_pushinteger(L, n);
}
static void push_HSteamUser_array(lua_State* L, int32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HSteamUser(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_FriendsGroupID_t(lua_State* L, int16 n) {
	lua_pushinteger(L, n);
}
static void push_FriendsGroupID_t_array(lua_State* L, int16 arr[], unsigned int size) {
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
static void push_SNetSocket_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_SNetSocket_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SNetSocket_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SNetListenSocket_t(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_SNetListenSocket_t_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SNetListenSocket_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ScreenshotHandle(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_ScreenshotHandle_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ScreenshotHandle(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTTPRequestHandle(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_HTTPRequestHandle_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTTPRequestHandle(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HTTPCookieContainerHandle(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_HTTPCookieContainerHandle_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HTTPCookieContainerHandle(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_HHTMLBrowser(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_HHTMLBrowser_array(lua_State* L, uint32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_HHTMLBrowser(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamItemDef_t(lua_State* L, int32 n) {
	lua_pushinteger(L, n);
}
static void push_SteamItemDef_t_array(lua_State* L, int32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamItemDef_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_SteamInventoryResult_t(lua_State* L, int32 n) {
	lua_pushinteger(L, n);
}
static void push_SteamInventoryResult_t_array(lua_State* L, int32 arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SteamInventoryResult_t(L, arr[i]);
		lua_settable(L, -3);
	}
}

/*****************************
* PUSH (u)int64 (to strings)
******************************/
static void push_int64(lua_State* L, int64 n) {
	char buf[22];
	snprintf(buf, sizeof(buf), "%ld", n);
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
static void push_GID_t(lua_State* L, GID_t n) {
	push_uint64(L, n);
}
static void push_GID_t_array(lua_State* L, GID_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_GID_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_JobID_t(lua_State* L, JobID_t n) {
	push_uint64(L, n);
}
static void push_JobID_t_array(lua_State* L, JobID_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_JobID_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_AssetClassId_t(lua_State* L, AssetClassId_t n) {
	push_uint64(L, n);
}
static void push_AssetClassId_t_array(lua_State* L, AssetClassId_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_AssetClassId_t(L, arr[i]);
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
static void push_ManifestId_t(lua_State* L, ManifestId_t n) {
	push_uint64(L, n);
}
static void push_ManifestId_t_array(lua_State* L, ManifestId_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ManifestId_t(L, arr[i]);
		lua_settable(L, -3);
	}

}
static void push_SiteId_t(lua_State* L, SiteId_t n) {
	push_uint64(L, n);
}
static void push_SiteId_t_array(lua_State* L, SiteId_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_SiteId_t(L, arr[i]);
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
static void push_EAppReleaseState(lua_State* L, EAppReleaseState n) {
	lua_pushinteger(L, n);
}
static void push_EAppOwnershipFlags(lua_State* L, EAppOwnershipFlags n) {
	lua_pushinteger(L, n);
}
static void push_EAppType(lua_State* L, EAppType n) {
	lua_pushinteger(L, n);
}
static void push_ESteamUserStatType(lua_State* L, ESteamUserStatType n) {
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
static void push_EMarketingMessageFlags(lua_State* L, EMarketingMessageFlags n) {
	lua_pushinteger(L, n);
}
static void push_ENotificationPosition(lua_State* L, ENotificationPosition n) {
	lua_pushinteger(L, n);
}
static void push_EBroadcastUploadResult(lua_State* L, EBroadcastUploadResult n) {
	lua_pushinteger(L, n);
}
static void push_ELaunchOptionType(lua_State* L, ELaunchOptionType n) {
	lua_pushinteger(L, n);
}
static void push_EVRHMDType(lua_State* L, EVRHMDType n) {
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
static void push_ERemoteStoragePlatform(lua_State* L, ERemoteStoragePlatform n) {
	lua_pushinteger(L, n);
}
static void push_ERemoteStoragePublishedFileVisibility(lua_State* L, ERemoteStoragePublishedFileVisibility n) {
	lua_pushinteger(L, n);
}
static void push_EWorkshopFileType(lua_State* L, EWorkshopFileType n) {
	lua_pushinteger(L, n);
}
static void push_EUGCReadAction(lua_State* L, EUGCReadAction n) {
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
static void push_ESteamControllerPad(lua_State* L, ESteamControllerPad n) {
	lua_pushinteger(L, n);
}
static void push_EControllerSource(lua_State* L, EControllerSource n) {
	lua_pushinteger(L, n);
}
static void push_EControllerSourceMode(lua_State* L, EControllerSourceMode n) {
	lua_pushinteger(L, n);
}
static void push_EControllerActionOrigin(lua_State* L, EControllerActionOrigin n) {
	lua_pushinteger(L, n);
}
static void push_ESteamControllerLEDFlag(lua_State* L, ESteamControllerLEDFlag n) {
	lua_pushinteger(L, n);
}
static void push_ESteamInputType(lua_State* L, ESteamInputType n) {
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
static void push_ValvePackingSentinel_t(lua_State* L, ValvePackingSentinel_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_u32");
	push_uint32(L, s.m_u32);
	lua_settable(L, -3);
	lua_pushstring(L, "m_u64");
	push_uint64(L, s.m_u64);
	lua_settable(L, -3);
	lua_pushstring(L, "m_u16");
	push_uint16(L, s.m_u16);
	lua_settable(L, -3);
	lua_pushstring(L, "m_d");
	push_double(L, s.m_d);
	lua_settable(L, -3);
}
static void push_ValvePackingSentinel_t_array(lua_State* L, ValvePackingSentinel_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ValvePackingSentinel_t(L, arr[i]);
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
static void push_FriendSessionStateInfo_t(lua_State* L, FriendSessionStateInfo_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_uiOnlineSessionInstances");
	push_uint32(L, s.m_uiOnlineSessionInstances);
	lua_settable(L, -3);
	lua_pushstring(L, "m_uiPublishedToFriendsSessionInstance");
	push_uint8(L, s.m_uiPublishedToFriendsSessionInstance);
	lua_settable(L, -3);
}
static void push_FriendSessionStateInfo_t_array(lua_State* L, FriendSessionStateInfo_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_FriendSessionStateInfo_t(L, arr[i]);
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
static void push_ControllerAnalogActionData_t(lua_State* L, ControllerAnalogActionData_t s) {
	lua_newtable(L);
	lua_pushstring(L, "eMode");
	push_EControllerSourceMode(L, s.eMode);
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
static void push_ControllerAnalogActionData_t_array(lua_State* L, ControllerAnalogActionData_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ControllerAnalogActionData_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ControllerDigitalActionData_t(lua_State* L, ControllerDigitalActionData_t s) {
	lua_newtable(L);
	lua_pushstring(L, "bState");
	push_bool(L, s.bState);
	lua_settable(L, -3);
	lua_pushstring(L, "bActive");
	push_bool(L, s.bActive);
	lua_settable(L, -3);
}
static void push_ControllerDigitalActionData_t_array(lua_State* L, ControllerDigitalActionData_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ControllerDigitalActionData_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_ControllerMotionData_t(lua_State* L, ControllerMotionData_t s) {
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
static void push_ControllerMotionData_t_array(lua_State* L, ControllerMotionData_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_ControllerMotionData_t(L, arr[i]);
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
static void push_SteamAppInstalled_t(lua_State* L, SteamAppInstalled_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
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
	lua_pushstring(L, "unNewWindow_BrowserHandle");
	push_HHTMLBrowser(L, s.unNewWindow_BrowserHandle);
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
static void push_BroadcastUploadStop_t(lua_State* L, BroadcastUploadStop_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EBroadcastUploadResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_BroadcastUploadStop_t_array(lua_State* L, BroadcastUploadStop_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_BroadcastUploadStop_t(L, arr[i]);
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
	return luaL_checknumber(L, index);
}
static lua_Number check_bool(lua_State* L, int index) {
	return lua_toboolean(L, index);
}
static lua_Number check_float(lua_State* L, int index) {
	return luaL_checknumber(L, index);
}
static void check_float_array(lua_State* L, int index, float * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (uint8)luaL_checknumber(L, index);
}
static void check_uint8_array(lua_State* L, int index, uint8 * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (int8)luaL_checknumber(L, index);
}
static void check_int8_array(lua_State* L, int index, int8 * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (int16)luaL_checknumber(L, index);
}
static void check_int16_array(lua_State* L, int index, int16 * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (uint16)luaL_checknumber(L, index);
}
static void check_uint16_array(lua_State* L, int index, uint16 * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (int32)luaL_checknumber(L, index);
}
static void check_int32_array(lua_State* L, int index, int32 * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (uint32)luaL_checknumber(L, index);
}
static void check_uint32_array(lua_State* L, int index, uint32 * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
static PackageId_t check_PackageId_t(lua_State* L, int index) {
	return (PackageId_t)luaL_checknumber(L, index);
}
static void check_PackageId_t_array(lua_State* L, int index, PackageId_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_PackageId_t(L, -1);
	}
}
static BundleId_t check_BundleId_t(lua_State* L, int index) {
	return (BundleId_t)luaL_checknumber(L, index);
}
static void check_BundleId_t_array(lua_State* L, int index, BundleId_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_BundleId_t(L, -1);
	}
}
static AppId_t check_AppId_t(lua_State* L, int index) {
	return (AppId_t)luaL_checknumber(L, index);
}
static void check_AppId_t_array(lua_State* L, int index, AppId_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
static PhysicalItemId_t check_PhysicalItemId_t(lua_State* L, int index) {
	return (PhysicalItemId_t)luaL_checknumber(L, index);
}
static void check_PhysicalItemId_t_array(lua_State* L, int index, PhysicalItemId_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_PhysicalItemId_t(L, -1);
	}
}
static DepotId_t check_DepotId_t(lua_State* L, int index) {
	return (DepotId_t)luaL_checknumber(L, index);
}
static void check_DepotId_t_array(lua_State* L, int index, DepotId_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (RTime32)luaL_checknumber(L, index);
}
static void check_RTime32_array(lua_State* L, int index, RTime32 * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
static CellID_t check_CellID_t(lua_State* L, int index) {
	return (CellID_t)luaL_checknumber(L, index);
}
static void check_CellID_t_array(lua_State* L, int index, CellID_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_CellID_t(L, -1);
	}
}
static AccountID_t check_AccountID_t(lua_State* L, int index) {
	return (AccountID_t)luaL_checknumber(L, index);
}
static void check_AccountID_t_array(lua_State* L, int index, AccountID_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
static PartnerId_t check_PartnerId_t(lua_State* L, int index) {
	return (PartnerId_t)luaL_checknumber(L, index);
}
static void check_PartnerId_t_array(lua_State* L, int index, PartnerId_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_PartnerId_t(L, -1);
	}
}
static HAuthTicket check_HAuthTicket(lua_State* L, int index) {
	return (HAuthTicket)luaL_checknumber(L, index);
}
static void check_HAuthTicket_array(lua_State* L, int index, HAuthTicket * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (HSteamPipe)luaL_checknumber(L, index);
}
static void check_HSteamPipe_array(lua_State* L, int index, HSteamPipe * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (HSteamUser)luaL_checknumber(L, index);
}
static void check_HSteamUser_array(lua_State* L, int index, HSteamUser * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (FriendsGroupID_t)luaL_checknumber(L, index);
}
static void check_FriendsGroupID_t_array(lua_State* L, int index, FriendsGroupID_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (HServerQuery)luaL_checknumber(L, index);
}
static void check_HServerQuery_array(lua_State* L, int index, HServerQuery * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (SNetSocket_t)luaL_checknumber(L, index);
}
static void check_SNetSocket_t_array(lua_State* L, int index, SNetSocket_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (SNetListenSocket_t)luaL_checknumber(L, index);
}
static void check_SNetListenSocket_t_array(lua_State* L, int index, SNetListenSocket_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (ScreenshotHandle)luaL_checknumber(L, index);
}
static void check_ScreenshotHandle_array(lua_State* L, int index, ScreenshotHandle * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (HTTPRequestHandle)luaL_checknumber(L, index);
}
static void check_HTTPRequestHandle_array(lua_State* L, int index, HTTPRequestHandle * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (HTTPCookieContainerHandle)luaL_checknumber(L, index);
}
static void check_HTTPCookieContainerHandle_array(lua_State* L, int index, HTTPCookieContainerHandle * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (HHTMLBrowser)luaL_checknumber(L, index);
}
static void check_HHTMLBrowser_array(lua_State* L, int index, HHTMLBrowser * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (SteamItemDef_t)luaL_checknumber(L, index);
}
static void check_SteamItemDef_t_array(lua_State* L, int index, SteamItemDef_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	return (SteamInventoryResult_t)luaL_checknumber(L, index);
}
static void check_SteamInventoryResult_t_array(lua_State* L, int index, SteamInventoryResult_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	const char * s = luaL_checkstring(L, index);
	return strtoull(s, NULL, 10);
}
static int64 check_int64(lua_State* L, int index) {
	const char * s = luaL_checkstring(L, index);
	return strtoll(s, NULL, 10);
}
static ulint64 check_ulint64(lua_State* L, int index) {
	return (ulint64)check_uint64(L, index);
}
static void check_ulint64_array(lua_State* L, int index, ulint64 * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
static GID_t check_GID_t(lua_State* L, int index) {
	return (GID_t)check_uint64(L, index);
}
static void check_GID_t_array(lua_State* L, int index, GID_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_GID_t(L, -1);
	}
}
static JobID_t check_JobID_t(lua_State* L, int index) {
	return (JobID_t)check_uint64(L, index);
}
static void check_JobID_t_array(lua_State* L, int index, JobID_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_JobID_t(L, -1);
	}
}
static AssetClassId_t check_AssetClassId_t(lua_State* L, int index) {
	return (AssetClassId_t)check_uint64(L, index);
}
static void check_AssetClassId_t_array(lua_State* L, int index, AssetClassId_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_AssetClassId_t(L, -1);
	}
}
static SteamAPICall_t check_SteamAPICall_t(lua_State* L, int index) {
	return (SteamAPICall_t)check_uint64(L, index);
}
static void check_SteamAPICall_t_array(lua_State* L, int index, SteamAPICall_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
static ManifestId_t check_ManifestId_t(lua_State* L, int index) {
	return (ManifestId_t)check_uint64(L, index);
}
static void check_ManifestId_t_array(lua_State* L, int index, ManifestId_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_ManifestId_t(L, -1);
	}
}
static SiteId_t check_SiteId_t(lua_State* L, int index) {
	return (SiteId_t)check_uint64(L, index);
}
static void check_SiteId_t_array(lua_State* L, int index, SiteId_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	int table_size = lua_objlen(L, index);
	if(table_size > size) {
		table_size = size;
	}
	for(int i=1; i<=table_size; i++) {
		lua_pushnumber(L, i);
		lua_gettable(L, index);
		arr[i] = check_SiteId_t(L, -1);
	}
}
static UGCHandle_t check_UGCHandle_t(lua_State* L, int index) {
	return (UGCHandle_t)check_uint64(L, index);
}
static void check_UGCHandle_t_array(lua_State* L, int index, UGCHandle_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
static ControllerHandle_t check_ControllerHandle_t(lua_State* L, int index) {
	return (ControllerHandle_t)check_uint64(L, index);
}
static void check_ControllerHandle_t_array(lua_State* L, int index, ControllerHandle_t * arr, unsigned int size) {
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
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

/*****************************
* CHECK enums
******************************/
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
static EAppReleaseState check_EAppReleaseState(lua_State* L, int index) {
	return EAppReleaseState(luaL_checkinteger(L, index));
}
static EAppOwnershipFlags check_EAppOwnershipFlags(lua_State* L, int index) {
	return EAppOwnershipFlags(luaL_checkinteger(L, index));
}
static EAppType check_EAppType(lua_State* L, int index) {
	return EAppType(luaL_checkinteger(L, index));
}
static ESteamUserStatType check_ESteamUserStatType(lua_State* L, int index) {
	return ESteamUserStatType(luaL_checkinteger(L, index));
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
static EMarketingMessageFlags check_EMarketingMessageFlags(lua_State* L, int index) {
	return EMarketingMessageFlags(luaL_checkinteger(L, index));
}
static ENotificationPosition check_ENotificationPosition(lua_State* L, int index) {
	return ENotificationPosition(luaL_checkinteger(L, index));
}
static EBroadcastUploadResult check_EBroadcastUploadResult(lua_State* L, int index) {
	return EBroadcastUploadResult(luaL_checkinteger(L, index));
}
static ELaunchOptionType check_ELaunchOptionType(lua_State* L, int index) {
	return ELaunchOptionType(luaL_checkinteger(L, index));
}
static EVRHMDType check_EVRHMDType(lua_State* L, int index) {
	return EVRHMDType(luaL_checkinteger(L, index));
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
static ERemoteStoragePlatform check_ERemoteStoragePlatform(lua_State* L, int index) {
	return ERemoteStoragePlatform(luaL_checkinteger(L, index));
}
static ERemoteStoragePublishedFileVisibility check_ERemoteStoragePublishedFileVisibility(lua_State* L, int index) {
	return ERemoteStoragePublishedFileVisibility(luaL_checkinteger(L, index));
}
static EWorkshopFileType check_EWorkshopFileType(lua_State* L, int index) {
	return EWorkshopFileType(luaL_checkinteger(L, index));
}
static EUGCReadAction check_EUGCReadAction(lua_State* L, int index) {
	return EUGCReadAction(luaL_checkinteger(L, index));
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
static ESteamControllerPad check_ESteamControllerPad(lua_State* L, int index) {
	return ESteamControllerPad(luaL_checkinteger(L, index));
}
static EControllerSource check_EControllerSource(lua_State* L, int index) {
	return EControllerSource(luaL_checkinteger(L, index));
}
static EControllerSourceMode check_EControllerSourceMode(lua_State* L, int index) {
	return EControllerSourceMode(luaL_checkinteger(L, index));
}
static EControllerActionOrigin check_EControllerActionOrigin(lua_State* L, int index) {
	return EControllerActionOrigin(luaL_checkinteger(L, index));
}
static ESteamControllerLEDFlag check_ESteamControllerLEDFlag(lua_State* L, int index) {
	return ESteamControllerLEDFlag(luaL_checkinteger(L, index));
}
static ESteamInputType check_ESteamInputType(lua_State* L, int index) {
	return ESteamInputType(luaL_checkinteger(L, index));
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
	if(!lua_istable(L, index)) {
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
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	servernetadr_t s;
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
static ValvePackingSentinel_t check_ValvePackingSentinel_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	ValvePackingSentinel_t s;
	lua_pushstring(L, "m_u32");
	lua_gettable(L, index);
	s.m_u32 = check_uint32(L, -1);
	lua_pushstring(L, "m_u64");
	lua_gettable(L, index);
	s.m_u64 = check_uint64(L, -1);
	lua_pushstring(L, "m_u16");
	lua_gettable(L, index);
	s.m_u16 = check_uint16(L, -1);
	lua_pushstring(L, "m_d");
	lua_gettable(L, index);
	s.m_d = check_double(L, -1);
	return s;
}

static SteamServerConnectFailure_t check_SteamServerConnectFailure_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamServerConnectFailure_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_bStillRetrying");
	lua_gettable(L, index);
	s.m_bStillRetrying = check_bool(L, -1);
	return s;
}

static SteamServersDisconnected_t check_SteamServersDisconnected_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamServersDisconnected_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static ClientGameServerDeny_t check_ClientGameServerDeny_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	ClientGameServerDeny_t s;
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

static ValidateAuthTicketResponse_t check_ValidateAuthTicketResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	ValidateAuthTicketResponse_t s;
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

static MicroTxnAuthorizationResponse_t check_MicroTxnAuthorizationResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	MicroTxnAuthorizationResponse_t s;
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

static EncryptedAppTicketResponse_t check_EncryptedAppTicketResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	EncryptedAppTicketResponse_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static GetAuthSessionTicketResponse_t check_GetAuthSessionTicketResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GetAuthSessionTicketResponse_t s;
	lua_pushstring(L, "m_hAuthTicket");
	lua_gettable(L, index);
	s.m_hAuthTicket = check_HAuthTicket(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static GameWebCallback_t check_GameWebCallback_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GameWebCallback_t s;
	lua_pushstring(L, "m_szURL");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szURL, 256);
	return s;
}

static StoreAuthURLResponse_t check_StoreAuthURLResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	StoreAuthURLResponse_t s;
	lua_pushstring(L, "m_szURL");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szURL, 512);
	return s;
}

static FriendGameInfo_t check_FriendGameInfo_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	FriendGameInfo_t s;
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

static FriendSessionStateInfo_t check_FriendSessionStateInfo_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	FriendSessionStateInfo_t s;
	lua_pushstring(L, "m_uiOnlineSessionInstances");
	lua_gettable(L, index);
	s.m_uiOnlineSessionInstances = check_uint32(L, -1);
	lua_pushstring(L, "m_uiPublishedToFriendsSessionInstance");
	lua_gettable(L, index);
	s.m_uiPublishedToFriendsSessionInstance = check_uint8(L, -1);
	return s;
}

static PersonaStateChange_t check_PersonaStateChange_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	PersonaStateChange_t s;
	lua_pushstring(L, "m_ulSteamID");
	lua_gettable(L, index);
	s.m_ulSteamID = check_uint64(L, -1);
	lua_pushstring(L, "m_nChangeFlags");
	lua_gettable(L, index);
	s.m_nChangeFlags = check_int(L, -1);
	return s;
}

static GameOverlayActivated_t check_GameOverlayActivated_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GameOverlayActivated_t s;
	lua_pushstring(L, "m_bActive");
	lua_gettable(L, index);
	s.m_bActive = check_uint8(L, -1);
	return s;
}

static GameServerChangeRequested_t check_GameServerChangeRequested_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GameServerChangeRequested_t s;
	lua_pushstring(L, "m_rgchServer");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchServer, 64);
	lua_pushstring(L, "m_rgchPassword");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchPassword, 64);
	return s;
}

static GameLobbyJoinRequested_t check_GameLobbyJoinRequested_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GameLobbyJoinRequested_t s;
	lua_pushstring(L, "m_steamIDLobby");
	lua_gettable(L, index);
	s.m_steamIDLobby = check_CSteamID(L, -1);
	lua_pushstring(L, "m_steamIDFriend");
	lua_gettable(L, index);
	s.m_steamIDFriend = check_CSteamID(L, -1);
	return s;
}

static AvatarImageLoaded_t check_AvatarImageLoaded_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	AvatarImageLoaded_t s;
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

static ClanOfficerListResponse_t check_ClanOfficerListResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	ClanOfficerListResponse_t s;
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

static FriendRichPresenceUpdate_t check_FriendRichPresenceUpdate_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	FriendRichPresenceUpdate_t s;
	lua_pushstring(L, "m_steamIDFriend");
	lua_gettable(L, index);
	s.m_steamIDFriend = check_CSteamID(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static GameRichPresenceJoinRequested_t check_GameRichPresenceJoinRequested_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GameRichPresenceJoinRequested_t s;
	lua_pushstring(L, "m_steamIDFriend");
	lua_gettable(L, index);
	s.m_steamIDFriend = check_CSteamID(L, -1);
	lua_pushstring(L, "m_rgchConnect");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchConnect, 256);
	return s;
}

static GameConnectedClanChatMsg_t check_GameConnectedClanChatMsg_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GameConnectedClanChatMsg_t s;
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

static GameConnectedChatJoin_t check_GameConnectedChatJoin_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GameConnectedChatJoin_t s;
	lua_pushstring(L, "m_steamIDClanChat");
	lua_gettable(L, index);
	s.m_steamIDClanChat = check_CSteamID(L, -1);
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static GameConnectedChatLeave_t check_GameConnectedChatLeave_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GameConnectedChatLeave_t s;
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

static DownloadClanActivityCountsResult_t check_DownloadClanActivityCountsResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	DownloadClanActivityCountsResult_t s;
	lua_pushstring(L, "m_bSuccess");
	lua_gettable(L, index);
	s.m_bSuccess = check_bool(L, -1);
	return s;
}

static JoinClanChatRoomCompletionResult_t check_JoinClanChatRoomCompletionResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	JoinClanChatRoomCompletionResult_t s;
	lua_pushstring(L, "m_steamIDClanChat");
	lua_gettable(L, index);
	s.m_steamIDClanChat = check_CSteamID(L, -1);
	lua_pushstring(L, "m_eChatRoomEnterResponse");
	lua_gettable(L, index);
	s.m_eChatRoomEnterResponse = check_EChatRoomEnterResponse(L, -1);
	return s;
}

static GameConnectedFriendChatMsg_t check_GameConnectedFriendChatMsg_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GameConnectedFriendChatMsg_t s;
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	lua_pushstring(L, "m_iMessageID");
	lua_gettable(L, index);
	s.m_iMessageID = check_int(L, -1);
	return s;
}

static FriendsGetFollowerCount_t check_FriendsGetFollowerCount_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	FriendsGetFollowerCount_t s;
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

static FriendsIsFollowing_t check_FriendsIsFollowing_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	FriendsIsFollowing_t s;
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

static FriendsEnumerateFollowingList_t check_FriendsEnumerateFollowingList_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	FriendsEnumerateFollowingList_t s;
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

static SetPersonaNameResponse_t check_SetPersonaNameResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SetPersonaNameResponse_t s;
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

static LowBatteryPower_t check_LowBatteryPower_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LowBatteryPower_t s;
	lua_pushstring(L, "m_nMinutesBatteryLeft");
	lua_gettable(L, index);
	s.m_nMinutesBatteryLeft = check_uint8(L, -1);
	return s;
}

static SteamAPICallCompleted_t check_SteamAPICallCompleted_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamAPICallCompleted_t s;
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

static CheckFileSignature_t check_CheckFileSignature_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	CheckFileSignature_t s;
	lua_pushstring(L, "m_eCheckFileSignature");
	lua_gettable(L, index);
	s.m_eCheckFileSignature = check_ECheckFileSignature(L, -1);
	return s;
}

static GamepadTextInputDismissed_t check_GamepadTextInputDismissed_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GamepadTextInputDismissed_t s;
	lua_pushstring(L, "m_bSubmitted");
	lua_gettable(L, index);
	s.m_bSubmitted = check_bool(L, -1);
	lua_pushstring(L, "m_unSubmittedText");
	lua_gettable(L, index);
	s.m_unSubmittedText = check_uint32(L, -1);
	return s;
}

static MatchMakingKeyValuePair_t check_MatchMakingKeyValuePair_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	MatchMakingKeyValuePair_t s;
	lua_pushstring(L, "m_szKey");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szKey, 256);
	lua_pushstring(L, "m_szValue");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_szValue, 256);
	return s;
}

static FavoritesListChanged_t check_FavoritesListChanged_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	FavoritesListChanged_t s;
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

static LobbyInvite_t check_LobbyInvite_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LobbyInvite_t s;
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

static LobbyEnter_t check_LobbyEnter_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LobbyEnter_t s;
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

static LobbyDataUpdate_t check_LobbyDataUpdate_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LobbyDataUpdate_t s;
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

static LobbyChatUpdate_t check_LobbyChatUpdate_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LobbyChatUpdate_t s;
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

static LobbyChatMsg_t check_LobbyChatMsg_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LobbyChatMsg_t s;
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

static LobbyGameCreated_t check_LobbyGameCreated_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LobbyGameCreated_t s;
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

static LobbyMatchList_t check_LobbyMatchList_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LobbyMatchList_t s;
	lua_pushstring(L, "m_nLobbiesMatching");
	lua_gettable(L, index);
	s.m_nLobbiesMatching = check_uint32(L, -1);
	return s;
}

static LobbyKicked_t check_LobbyKicked_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LobbyKicked_t s;
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

static LobbyCreated_t check_LobbyCreated_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LobbyCreated_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_ulSteamIDLobby");
	lua_gettable(L, index);
	s.m_ulSteamIDLobby = check_uint64(L, -1);
	return s;
}

static PSNGameBootInviteResult_t check_PSNGameBootInviteResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	PSNGameBootInviteResult_t s;
	lua_pushstring(L, "m_bGameBootInviteExists");
	lua_gettable(L, index);
	s.m_bGameBootInviteExists = check_bool(L, -1);
	lua_pushstring(L, "m_steamIDLobby");
	lua_gettable(L, index);
	s.m_steamIDLobby = check_CSteamID(L, -1);
	return s;
}

static FavoritesListAccountsUpdated_t check_FavoritesListAccountsUpdated_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	FavoritesListAccountsUpdated_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static RemoteStorageFileShareResult_t check_RemoteStorageFileShareResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageFileShareResult_t s;
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

static RemoteStorageSubscribePublishedFileResult_t check_RemoteStorageSubscribePublishedFileResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageSubscribePublishedFileResult_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static RemoteStorageUnsubscribePublishedFileResult_t check_RemoteStorageUnsubscribePublishedFileResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageUnsubscribePublishedFileResult_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static RemoteStorageDownloadUGCResult_t check_RemoteStorageDownloadUGCResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageDownloadUGCResult_t s;
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

static RemoteStorageFileWriteAsyncComplete_t check_RemoteStorageFileWriteAsyncComplete_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageFileWriteAsyncComplete_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static RemoteStorageFileReadAsyncComplete_t check_RemoteStorageFileReadAsyncComplete_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageFileReadAsyncComplete_t s;
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

static LeaderboardEntry_t check_LeaderboardEntry_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LeaderboardEntry_t s;
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

static UserStatsReceived_t check_UserStatsReceived_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	UserStatsReceived_t s;
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

static UserStatsStored_t check_UserStatsStored_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	UserStatsStored_t s;
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static UserAchievementStored_t check_UserAchievementStored_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	UserAchievementStored_t s;
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

static LeaderboardFindResult_t check_LeaderboardFindResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LeaderboardFindResult_t s;
	lua_pushstring(L, "m_hSteamLeaderboard");
	lua_gettable(L, index);
	s.m_hSteamLeaderboard = check_SteamLeaderboard_t(L, -1);
	lua_pushstring(L, "m_bLeaderboardFound");
	lua_gettable(L, index);
	s.m_bLeaderboardFound = check_uint8(L, -1);
	return s;
}

static LeaderboardScoresDownloaded_t check_LeaderboardScoresDownloaded_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LeaderboardScoresDownloaded_t s;
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

static LeaderboardScoreUploaded_t check_LeaderboardScoreUploaded_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LeaderboardScoreUploaded_t s;
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

static NumberOfCurrentPlayers_t check_NumberOfCurrentPlayers_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	NumberOfCurrentPlayers_t s;
	lua_pushstring(L, "m_bSuccess");
	lua_gettable(L, index);
	s.m_bSuccess = check_uint8(L, -1);
	lua_pushstring(L, "m_cPlayers");
	lua_gettable(L, index);
	s.m_cPlayers = check_int32(L, -1);
	return s;
}

static UserStatsUnloaded_t check_UserStatsUnloaded_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	UserStatsUnloaded_t s;
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static UserAchievementIconFetched_t check_UserAchievementIconFetched_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	UserAchievementIconFetched_t s;
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

static GlobalAchievementPercentagesReady_t check_GlobalAchievementPercentagesReady_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GlobalAchievementPercentagesReady_t s;
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static LeaderboardUGCSet_t check_LeaderboardUGCSet_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	LeaderboardUGCSet_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_hSteamLeaderboard");
	lua_gettable(L, index);
	s.m_hSteamLeaderboard = check_SteamLeaderboard_t(L, -1);
	return s;
}

static PS3TrophiesInstalled_t check_PS3TrophiesInstalled_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	PS3TrophiesInstalled_t s;
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

static GlobalStatsReceived_t check_GlobalStatsReceived_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GlobalStatsReceived_t s;
	lua_pushstring(L, "m_nGameID");
	lua_gettable(L, index);
	s.m_nGameID = check_uint64(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static DlcInstalled_t check_DlcInstalled_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	DlcInstalled_t s;
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static RegisterActivationCodeResponse_t check_RegisterActivationCodeResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RegisterActivationCodeResponse_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_ERegisterActivationCodeResult(L, -1);
	lua_pushstring(L, "m_unPackageRegistered");
	lua_gettable(L, index);
	s.m_unPackageRegistered = check_uint32(L, -1);
	return s;
}

static AppProofOfPurchaseKeyResponse_t check_AppProofOfPurchaseKeyResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	AppProofOfPurchaseKeyResponse_t s;
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

static FileDetailsResult_t check_FileDetailsResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	FileDetailsResult_t s;
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

static P2PSessionState_t check_P2PSessionState_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	P2PSessionState_t s;
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

static P2PSessionRequest_t check_P2PSessionRequest_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	P2PSessionRequest_t s;
	lua_pushstring(L, "m_steamIDRemote");
	lua_gettable(L, index);
	s.m_steamIDRemote = check_CSteamID(L, -1);
	return s;
}

static P2PSessionConnectFail_t check_P2PSessionConnectFail_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	P2PSessionConnectFail_t s;
	lua_pushstring(L, "m_steamIDRemote");
	lua_gettable(L, index);
	s.m_steamIDRemote = check_CSteamID(L, -1);
	lua_pushstring(L, "m_eP2PSessionError");
	lua_gettable(L, index);
	s.m_eP2PSessionError = check_uint8(L, -1);
	return s;
}

static SocketStatusCallback_t check_SocketStatusCallback_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SocketStatusCallback_t s;
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

static ScreenshotReady_t check_ScreenshotReady_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	ScreenshotReady_t s;
	lua_pushstring(L, "m_hLocal");
	lua_gettable(L, index);
	s.m_hLocal = check_ScreenshotHandle(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static VolumeHasChanged_t check_VolumeHasChanged_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	VolumeHasChanged_t s;
	lua_pushstring(L, "m_flNewVolume");
	lua_gettable(L, index);
	s.m_flNewVolume = check_float(L, -1);
	return s;
}

static MusicPlayerWantsShuffled_t check_MusicPlayerWantsShuffled_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	MusicPlayerWantsShuffled_t s;
	lua_pushstring(L, "m_bShuffled");
	lua_gettable(L, index);
	s.m_bShuffled = check_bool(L, -1);
	return s;
}

static MusicPlayerWantsLooped_t check_MusicPlayerWantsLooped_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	MusicPlayerWantsLooped_t s;
	lua_pushstring(L, "m_bLooped");
	lua_gettable(L, index);
	s.m_bLooped = check_bool(L, -1);
	return s;
}

static MusicPlayerWantsVolume_t check_MusicPlayerWantsVolume_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	MusicPlayerWantsVolume_t s;
	lua_pushstring(L, "m_flNewVolume");
	lua_gettable(L, index);
	s.m_flNewVolume = check_float(L, -1);
	return s;
}

static MusicPlayerSelectsQueueEntry_t check_MusicPlayerSelectsQueueEntry_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	MusicPlayerSelectsQueueEntry_t s;
	lua_pushstring(L, "nID");
	lua_gettable(L, index);
	s.nID = check_int(L, -1);
	return s;
}

static MusicPlayerSelectsPlaylistEntry_t check_MusicPlayerSelectsPlaylistEntry_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	MusicPlayerSelectsPlaylistEntry_t s;
	lua_pushstring(L, "nID");
	lua_gettable(L, index);
	s.nID = check_int(L, -1);
	return s;
}

static MusicPlayerWantsPlayingRepeatStatus_t check_MusicPlayerWantsPlayingRepeatStatus_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	MusicPlayerWantsPlayingRepeatStatus_t s;
	lua_pushstring(L, "m_nPlayingRepeatStatus");
	lua_gettable(L, index);
	s.m_nPlayingRepeatStatus = check_int(L, -1);
	return s;
}

static HTTPRequestCompleted_t check_HTTPRequestCompleted_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTTPRequestCompleted_t s;
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

static HTTPRequestHeadersReceived_t check_HTTPRequestHeadersReceived_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTTPRequestHeadersReceived_t s;
	lua_pushstring(L, "m_hRequest");
	lua_gettable(L, index);
	s.m_hRequest = check_HTTPRequestHandle(L, -1);
	lua_pushstring(L, "m_ulContextValue");
	lua_gettable(L, index);
	s.m_ulContextValue = check_uint64(L, -1);
	return s;
}

static HTTPRequestDataReceived_t check_HTTPRequestDataReceived_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTTPRequestDataReceived_t s;
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

static ControllerAnalogActionData_t check_ControllerAnalogActionData_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	ControllerAnalogActionData_t s;
	lua_pushstring(L, "eMode");
	lua_gettable(L, index);
	s.eMode = check_EControllerSourceMode(L, -1);
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

static ControllerDigitalActionData_t check_ControllerDigitalActionData_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	ControllerDigitalActionData_t s;
	lua_pushstring(L, "bState");
	lua_gettable(L, index);
	s.bState = check_bool(L, -1);
	lua_pushstring(L, "bActive");
	lua_gettable(L, index);
	s.bActive = check_bool(L, -1);
	return s;
}

static ControllerMotionData_t check_ControllerMotionData_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	ControllerMotionData_t s;
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

static SteamUGCDetails_t check_SteamUGCDetails_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamUGCDetails_t s;
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

static SteamUGCQueryCompleted_t check_SteamUGCQueryCompleted_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamUGCQueryCompleted_t s;
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
	return s;
}

static SteamUGCRequestUGCDetailsResult_t check_SteamUGCRequestUGCDetailsResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamUGCRequestUGCDetailsResult_t s;
	lua_pushstring(L, "m_details");
	lua_gettable(L, index);
	s.m_details = check_SteamUGCDetails_t(L, -1);
	lua_pushstring(L, "m_bCachedData");
	lua_gettable(L, index);
	s.m_bCachedData = check_bool(L, -1);
	return s;
}

static CreateItemResult_t check_CreateItemResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	CreateItemResult_t s;
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

static SubmitItemUpdateResult_t check_SubmitItemUpdateResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SubmitItemUpdateResult_t s;
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

static DownloadItemResult_t check_DownloadItemResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	DownloadItemResult_t s;
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

static UserFavoriteItemsListChanged_t check_UserFavoriteItemsListChanged_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	UserFavoriteItemsListChanged_t s;
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

static SetUserItemVoteResult_t check_SetUserItemVoteResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SetUserItemVoteResult_t s;
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

static GetUserItemVoteResult_t check_GetUserItemVoteResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GetUserItemVoteResult_t s;
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

static StartPlaytimeTrackingResult_t check_StartPlaytimeTrackingResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	StartPlaytimeTrackingResult_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static StopPlaytimeTrackingResult_t check_StopPlaytimeTrackingResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	StopPlaytimeTrackingResult_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static AddUGCDependencyResult_t check_AddUGCDependencyResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	AddUGCDependencyResult_t s;
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

static RemoveUGCDependencyResult_t check_RemoveUGCDependencyResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoveUGCDependencyResult_t s;
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

static AddAppDependencyResult_t check_AddAppDependencyResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	AddAppDependencyResult_t s;
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

static RemoveAppDependencyResult_t check_RemoveAppDependencyResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoveAppDependencyResult_t s;
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

static GetAppDependenciesResult_t check_GetAppDependenciesResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GetAppDependenciesResult_t s;
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

static DeleteItemResult_t check_DeleteItemResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	DeleteItemResult_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static SteamAppInstalled_t check_SteamAppInstalled_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamAppInstalled_t s;
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static SteamAppUninstalled_t check_SteamAppUninstalled_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamAppUninstalled_t s;
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static HTML_BrowserReady_t check_HTML_BrowserReady_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_BrowserReady_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	return s;
}

static HTML_NeedsPaint_t check_HTML_NeedsPaint_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_NeedsPaint_t s;
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

static HTML_StartRequest_t check_HTML_StartRequest_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_StartRequest_t s;
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

static HTML_CloseBrowser_t check_HTML_CloseBrowser_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_CloseBrowser_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	return s;
}

static HTML_URLChanged_t check_HTML_URLChanged_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_URLChanged_t s;
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

static HTML_FinishedRequest_t check_HTML_FinishedRequest_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_FinishedRequest_t s;
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

static HTML_OpenLinkInNewTab_t check_HTML_OpenLinkInNewTab_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_OpenLinkInNewTab_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchURL");
	lua_gettable(L, index);
	s.pchURL = check_const_char_ptr(L, -1);
	return s;
}

static HTML_ChangedTitle_t check_HTML_ChangedTitle_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_ChangedTitle_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchTitle");
	lua_gettable(L, index);
	s.pchTitle = check_const_char_ptr(L, -1);
	return s;
}

static HTML_SearchResults_t check_HTML_SearchResults_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_SearchResults_t s;
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

static HTML_CanGoBackAndForward_t check_HTML_CanGoBackAndForward_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_CanGoBackAndForward_t s;
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

static HTML_HorizontalScroll_t check_HTML_HorizontalScroll_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_HorizontalScroll_t s;
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

static HTML_VerticalScroll_t check_HTML_VerticalScroll_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_VerticalScroll_t s;
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

static HTML_LinkAtPosition_t check_HTML_LinkAtPosition_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_LinkAtPosition_t s;
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

static HTML_JSAlert_t check_HTML_JSAlert_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_JSAlert_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMessage");
	lua_gettable(L, index);
	s.pchMessage = check_const_char_ptr(L, -1);
	return s;
}

static HTML_JSConfirm_t check_HTML_JSConfirm_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_JSConfirm_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMessage");
	lua_gettable(L, index);
	s.pchMessage = check_const_char_ptr(L, -1);
	return s;
}

static HTML_FileOpenDialog_t check_HTML_FileOpenDialog_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_FileOpenDialog_t s;
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

static HTML_NewWindow_t check_HTML_NewWindow_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_NewWindow_t s;
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
	lua_pushstring(L, "unNewWindow_BrowserHandle");
	lua_gettable(L, index);
	s.unNewWindow_BrowserHandle = check_HHTMLBrowser(L, -1);
	return s;
}

static HTML_SetCursor_t check_HTML_SetCursor_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_SetCursor_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "eMouseCursor");
	lua_gettable(L, index);
	s.eMouseCursor = check_uint32(L, -1);
	return s;
}

static HTML_StatusText_t check_HTML_StatusText_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_StatusText_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMsg");
	lua_gettable(L, index);
	s.pchMsg = check_const_char_ptr(L, -1);
	return s;
}

static HTML_ShowToolTip_t check_HTML_ShowToolTip_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_ShowToolTip_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMsg");
	lua_gettable(L, index);
	s.pchMsg = check_const_char_ptr(L, -1);
	return s;
}

static HTML_UpdateToolTip_t check_HTML_UpdateToolTip_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_UpdateToolTip_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "pchMsg");
	lua_gettable(L, index);
	s.pchMsg = check_const_char_ptr(L, -1);
	return s;
}

static HTML_HideToolTip_t check_HTML_HideToolTip_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_HideToolTip_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	return s;
}

static HTML_BrowserRestarted_t check_HTML_BrowserRestarted_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	HTML_BrowserRestarted_t s;
	lua_pushstring(L, "unBrowserHandle");
	lua_gettable(L, index);
	s.unBrowserHandle = check_HHTMLBrowser(L, -1);
	lua_pushstring(L, "unOldBrowserHandle");
	lua_gettable(L, index);
	s.unOldBrowserHandle = check_HHTMLBrowser(L, -1);
	return s;
}

static SteamItemDetails_t check_SteamItemDetails_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamItemDetails_t s;
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

static SteamInventoryResultReady_t check_SteamInventoryResultReady_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamInventoryResultReady_t s;
	lua_pushstring(L, "m_handle");
	lua_gettable(L, index);
	s.m_handle = check_SteamInventoryResult_t(L, -1);
	lua_pushstring(L, "m_result");
	lua_gettable(L, index);
	s.m_result = check_EResult(L, -1);
	return s;
}

static SteamInventoryFullUpdate_t check_SteamInventoryFullUpdate_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamInventoryFullUpdate_t s;
	lua_pushstring(L, "m_handle");
	lua_gettable(L, index);
	s.m_handle = check_SteamInventoryResult_t(L, -1);
	return s;
}

static SteamInventoryEligiblePromoItemDefIDs_t check_SteamInventoryEligiblePromoItemDefIDs_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamInventoryEligiblePromoItemDefIDs_t s;
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

static SteamInventoryStartPurchaseResult_t check_SteamInventoryStartPurchaseResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamInventoryStartPurchaseResult_t s;
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

static SteamInventoryRequestPricesResult_t check_SteamInventoryRequestPricesResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	SteamInventoryRequestPricesResult_t s;
	lua_pushstring(L, "m_result");
	lua_gettable(L, index);
	s.m_result = check_EResult(L, -1);
	lua_pushstring(L, "m_rgchCurrency");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchCurrency, 4);
	return s;
}

static BroadcastUploadStop_t check_BroadcastUploadStop_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	BroadcastUploadStop_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EBroadcastUploadResult(L, -1);
	return s;
}

static GetVideoURLResult_t check_GetVideoURLResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GetVideoURLResult_t s;
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

static GetOPFSettingsResult_t check_GetOPFSettingsResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GetOPFSettingsResult_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_unVideoAppID");
	lua_gettable(L, index);
	s.m_unVideoAppID = check_AppId_t(L, -1);
	return s;
}

static GSClientApprove_t check_GSClientApprove_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSClientApprove_t s;
	lua_pushstring(L, "m_SteamID");
	lua_gettable(L, index);
	s.m_SteamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_OwnerSteamID");
	lua_gettable(L, index);
	s.m_OwnerSteamID = check_CSteamID(L, -1);
	return s;
}

static GSClientDeny_t check_GSClientDeny_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSClientDeny_t s;
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

static GSClientKick_t check_GSClientKick_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSClientKick_t s;
	lua_pushstring(L, "m_SteamID");
	lua_gettable(L, index);
	s.m_SteamID = check_CSteamID(L, -1);
	lua_pushstring(L, "m_eDenyReason");
	lua_gettable(L, index);
	s.m_eDenyReason = check_EDenyReason(L, -1);
	return s;
}

static GSClientAchievementStatus_t check_GSClientAchievementStatus_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSClientAchievementStatus_t s;
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

static GSPolicyResponse_t check_GSPolicyResponse_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSPolicyResponse_t s;
	lua_pushstring(L, "m_bSecure");
	lua_gettable(L, index);
	s.m_bSecure = check_uint8(L, -1);
	return s;
}

static GSGameplayStats_t check_GSGameplayStats_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSGameplayStats_t s;
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

static GSClientGroupStatus_t check_GSClientGroupStatus_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSClientGroupStatus_t s;
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

static GSReputation_t check_GSReputation_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSReputation_t s;
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

static AssociateWithClanResult_t check_AssociateWithClanResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	AssociateWithClanResult_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	return s;
}

static ComputeNewPlayerCompatibilityResult_t check_ComputeNewPlayerCompatibilityResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	ComputeNewPlayerCompatibilityResult_t s;
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

static GSStatsReceived_t check_GSStatsReceived_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSStatsReceived_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static GSStatsStored_t check_GSStatsStored_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSStatsStored_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
}

static GSStatsUnloaded_t check_GSStatsUnloaded_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	GSStatsUnloaded_t s;
	lua_pushstring(L, "m_steamIDUser");
	lua_gettable(L, index);
	s.m_steamIDUser = check_CSteamID(L, -1);
	return s;
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

	class CSteamID r = user->GetSteamID();
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_TerminateGameConnection(lua_State* L) {
	int top = lua_gettop(L);
	uint16 usPortServer = check_uint16(L, 2); /*normal*/
	uint32 unIPServer = check_uint32(L, 1); /*normal*/

	user->TerminateGameConnection(unIPServer, usPortServer);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_GetAuthSessionTicket(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pcbTicket; /*out_param*/
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
	class CSteamID steamID = check_class_CSteamID(L, 3); /*normal*/
	int cbAuthTicket = check_int(L, 2); /*normal*/
	const void * pAuthTicket = check_const_void_ptr(L, 1); /*normal*/

	EBeginAuthSessionResult r = user->BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
	push_EBeginAuthSessionResult(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUser_EndAuthSession(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamID = check_class_CSteamID(L, 1); /*normal*/

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
	class CSteamID steamID = check_class_CSteamID(L, 1); /*normal*/

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
	class CSteamID steamIDGameServer = check_class_CSteamID(L, 1); /*normal*/

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
	uint32 pcbTicket; /*out_param*/
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

	class CSteamID r = friends->GetFriendByIndex(iFriend, iFriendFlags);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendRelationship(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	EFriendRelationship r = friends->GetFriendRelationship(steamIDFriend);
	push_EFriendRelationship(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendPersonaState(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	EPersonaState r = friends->GetFriendPersonaState(steamIDFriend);
	push_EPersonaState(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendPersonaName(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendPersonaName(steamIDFriend);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendGamePlayed(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/
	struct FriendGameInfo_t pFriendGameInfo; /*out_struct*/

	bool r = friends->GetFriendGamePlayed(steamIDFriend, &pFriendGameInfo);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendPersonaNameHistory(lua_State* L) {
	int top = lua_gettop(L);
	int iPersonaName = check_int(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendPersonaNameHistory(steamIDFriend, iPersonaName);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendSteamLevel(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendSteamLevel(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetPlayerNickname(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDPlayer = check_class_CSteamID(L, 1); /*normal*/

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
	CSteamID pOutSteamIDMembers[nMembersCount];

	friends->GetFriendsGroupMembersList(friendsGroupID, pOutSteamIDMembers, nMembersCount);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_HasFriend(lua_State* L) {
	int top = lua_gettop(L);
	int iFriendFlags = check_int(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

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

	class CSteamID r = friends->GetClanByIndex(iClan);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanName(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetClanName(steamIDClan);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanTag(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetClanTag(steamIDClan);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanActivityCounts(lua_State* L) {
	int top = lua_gettop(L);
	int pnChatting; /*out_param*/
	int pnInGame; /*out_param*/
	int pnOnline; /*out_param*/
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

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
	class CSteamID steamIDSource = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendCountFromSource(steamIDSource);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendFromSourceByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iFriend = check_int(L, 2); /*normal*/
	class CSteamID steamIDSource = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = friends->GetFriendFromSourceByIndex(steamIDSource, iFriend);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_IsUserInSource(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDSource = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsUserInSource(steamIDUser, steamIDSource);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_SetInGameVoiceSpeaking(lua_State* L) {
	int top = lua_gettop(L);
	bool bSpeaking = check_bool(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	friends->SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_SetPlayedWith(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDUserPlayedWith = check_class_CSteamID(L, 1); /*normal*/

	friends->SetPlayedWith(steamIDUserPlayedWith);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_ActivateGameOverlayInviteDialog(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	friends->ActivateGameOverlayInviteDialog(steamIDLobby);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_GetSmallFriendAvatar(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetSmallFriendAvatar(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetMediumFriendAvatar(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetMediumFriendAvatar(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetLargeFriendAvatar(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetLargeFriendAvatar(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_RequestUserInformation(lua_State* L) {
	int top = lua_gettop(L);
	bool bRequireNameOnly = check_bool(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->RequestUserInformation(steamIDUser, bRequireNameOnly);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_RequestClanOfficerList(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = friends->RequestClanOfficerList(steamIDClan);
	steamCallbackWrapper->TrackSteamAPICallClanOfficerListResponse_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_GetClanOwner(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = friends->GetClanOwner(steamIDClan);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanOfficerCount(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetClanOfficerCount(steamIDClan);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanOfficerByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iOfficer = check_int(L, 2); /*normal*/
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = friends->GetClanOfficerByIndex(steamIDClan, iOfficer);
	push_class_CSteamID(L, r);
	
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
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendRichPresence(steamIDFriend, pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendRichPresenceKeyCount(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendRichPresenceKeyCount(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendRichPresenceKeyByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iKey = check_int(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendRichPresenceKeyByIndex(steamIDFriend, iKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_RequestFriendRichPresence(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	friends->RequestFriendRichPresence(steamIDFriend);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_InviteUserToGame(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchConnectString = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

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

	class CSteamID r = friends->GetCoplayFriend(iCoplayFriend);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendCoplayTime(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendCoplayTime(steamIDFriend);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendCoplayGame(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	AppId_t r = friends->GetFriendCoplayGame(steamIDFriend);
	push_AppId_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_JoinClanChatRoom(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = friends->JoinClanChatRoom(steamIDClan);
	steamCallbackWrapper->TrackSteamAPICallJoinClanChatRoomCompletionResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_LeaveClanChatRoom(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->LeaveClanChatRoom(steamIDClan);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanChatMemberCount(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetClanChatMemberCount(steamIDClan);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetChatMemberByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iUser = check_int(L, 2); /*normal*/
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = friends->GetChatMemberByIndex(steamIDClan, iUser);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_SendClanChatMessage(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchText = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->SendClanChatMessage(steamIDClanChat, pchText);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetClanChatMessage(lua_State* L) {
	int top = lua_gettop(L);
	EChatEntryType peChatEntryType; /*out_param*/
	int cchTextMax = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * prgchText_buffer = check_buffer(L, 3); /*buffer_param*/
	void * prgchText = 0x0;
	uint32_t prgchText_buffersize = 0;
	dmBuffer::Result prgchText_buffer_result = dmBuffer::GetBytes(prgchText_buffer->m_Buffer, (void**)&prgchText, &prgchText_buffersize);
	int iMessage = check_int(L, 2); /*normal*/
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/
	class CSteamID psteamidChatter; /*out_struct*/

	int r = friends->GetClanChatMessage(steamIDClanChat, iMessage, prgchText, cchTextMax, &peChatEntryType, &psteamidChatter);
	push_int(L, r);
	push_EChatEntryType(L, peChatEntryType); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamFriends_IsClanChatAdmin(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDUser = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanChatAdmin(steamIDClanChat, steamIDUser);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_IsClanChatWindowOpenInSteam(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanChatWindowOpenInSteam(steamIDClanChat);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_OpenClanChatWindowInSteam(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->OpenClanChatWindowInSteam(steamIDClanChat);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_CloseClanChatWindowInSteam(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

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
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->ReplyToFriendMessage(steamIDFriend, pchMsgToSend);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendMessage(lua_State* L) {
	int top = lua_gettop(L);
	EChatEntryType peChatEntryType; /*out_param*/
	int cubData = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * pvData_buffer = check_buffer(L, 3); /*buffer_param*/
	void * pvData = 0x0;
	uint32_t pvData_buffersize = 0;
	dmBuffer::Result pvData_buffer_result = dmBuffer::GetBytes(pvData_buffer->m_Buffer, (void**)&pvData, &pvData_buffersize);
	int iMessageID = check_int(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendMessage(steamIDFriend, iMessageID, pvData, cubData, &peChatEntryType);
	push_int(L, r);
	push_EChatEntryType(L, peChatEntryType); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamFriends_GetFollowerCount(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamID = check_class_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = friends->GetFollowerCount(steamID);
	steamCallbackWrapper->TrackSteamAPICallFriendsGetFollowerCount_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_IsFollowing(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamID = check_class_CSteamID(L, 1); /*normal*/

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
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanPublic(steamIDClan);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_IsClanOfficialGameGroup(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanOfficialGameGroup(steamIDClan);
	push_bool(L, r);
	
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
	uint32 pnHeight; /*out_param*/
	uint32 pnWidth; /*out_param*/
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

static int ISteamUtils_GetCSERIPPort(lua_State* L) {
	int top = lua_gettop(L);
	uint16 usPort; /*out_param*/
	uint32 unIP; /*out_param*/

	bool r = utils->GetCSERIPPort(&unIP, &usPort);
	push_bool(L, r);
	push_uint16(L, usPort); /*out_param*/
	push_uint32(L, unIP); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
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

static int ISteamUtils_IsAPICallCompleted(lua_State* L) {
	int top = lua_gettop(L);
	bool pbFailed; /*out_param*/
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
	bool pbFailed; /*out_param*/
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

static int ISteamMatchmaking_GetFavoriteGameCount(lua_State* L) {
	int top = lua_gettop(L);

	int r = matchmaking->GetFavoriteGameCount();
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetFavoriteGame(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pRTime32LastPlayedOnServer; /*out_param*/
	uint32 punFlags; /*out_param*/
	uint16 pnQueryPort; /*out_param*/
	uint16 pnConnPort; /*out_param*/
	uint32 pnIP; /*out_param*/
	AppId_t pnAppID; /*out_param*/
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
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListCompatibleMembersFilter(steamIDLobby);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_GetLobbyByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iLobby = check_int(L, 1); /*normal*/

	class CSteamID r = matchmaking->GetLobbyByIndex(iLobby);
	push_class_CSteamID(L, r);
	
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
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = matchmaking->JoinLobby(steamIDLobby);
	steamCallbackWrapper->TrackSteamAPICallLobbyEnter_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_LeaveLobby(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	matchmaking->LeaveLobby(steamIDLobby);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_InviteUserToLobby(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDInvitee = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->InviteUserToLobby(steamIDLobby, steamIDInvitee);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetNumLobbyMembers(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	int r = matchmaking->GetNumLobbyMembers(steamIDLobby);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyMemberByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iMember = check_int(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = matchmaking->GetLobbyMemberByIndex(steamIDLobby, iMember);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	const char * r = matchmaking->GetLobbyData(steamIDLobby, pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchValue = check_const_char_ptr(L, 3); /*normal*/
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyData(steamIDLobby, pchKey, pchValue);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyDataCount(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

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
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->GetLobbyDataByIndex(steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_DeleteLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->DeleteLobbyData(steamIDLobby, pchKey);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyMemberData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 3); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	const char * r = matchmaking->GetLobbyMemberData(steamIDLobby, steamIDUser, pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyMemberData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchValue = check_const_char_ptr(L, 3); /*normal*/
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	matchmaking->SetLobbyMemberData(steamIDLobby, pchKey, pchValue);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_SendLobbyChatMsg(lua_State* L) {
	int top = lua_gettop(L);
	int cubMsgBody = check_int(L, 3); /*normal*/
	const void * pvMsgBody = check_const_void_ptr(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SendLobbyChatMsg(steamIDLobby, pvMsgBody, cubMsgBody);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyChatEntry(lua_State* L) {
	int top = lua_gettop(L);
	EChatEntryType peChatEntryType; /*out_param*/
	int cubData = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * pvData_buffer = check_buffer(L, 3); /*buffer_param*/
	void * pvData = 0x0;
	uint32_t pvData_buffersize = 0;
	dmBuffer::Result pvData_buffer_result = dmBuffer::GetBytes(pvData_buffer->m_Buffer, (void**)&pvData, &pvData_buffersize);
	int iChatID = check_int(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/
	class CSteamID pSteamIDUser; /*out_struct*/

	int r = matchmaking->GetLobbyChatEntry(steamIDLobby, iChatID, &pSteamIDUser, pvData, cubData, &peChatEntryType);
	push_int(L, r);
	push_EChatEntryType(L, peChatEntryType); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamMatchmaking_RequestLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->RequestLobbyData(steamIDLobby);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyGameServer(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDGameServer = check_class_CSteamID(L, 4); /*normal*/
	uint16 unGameServerPort = check_uint16(L, 3); /*normal*/
	uint32 unGameServerIP = check_uint32(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	matchmaking->SetLobbyGameServer(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_GetLobbyGameServer(lua_State* L) {
	int top = lua_gettop(L);
	uint16 punGameServerPort; /*out_param*/
	uint32 punGameServerIP; /*out_param*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/
	class CSteamID psteamIDGameServer; /*out_struct*/

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
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyMemberLimit(steamIDLobby, cMaxMembers);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyMemberLimit(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	int r = matchmaking->GetLobbyMemberLimit(steamIDLobby);
	push_int(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyType(lua_State* L) {
	int top = lua_gettop(L);
	ELobbyType eLobbyType = check_ELobbyType(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyType(steamIDLobby, eLobbyType);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyJoinable(lua_State* L) {
	int top = lua_gettop(L);
	bool bLobbyJoinable = check_bool(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyJoinable(steamIDLobby, bLobbyJoinable);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyOwner(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = matchmaking->GetLobbyOwner(steamIDLobby);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyOwner(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDNewOwner = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyOwner(steamIDLobby, steamIDNewOwner);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLinkedLobby(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDLobbyDependent = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLinkedLobby(steamIDLobby, steamIDLobbyDependent);
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
	int32 pnFileSizeInBytes; /*out_param*/
	int iFile = check_int(L, 1); /*normal*/

	const char * r = remote_storage->GetFileNameAndSize(iFile, &pnFileSizeInBytes);
	push_const_char_ptr(L, r);
	push_int32(L, pnFileSizeInBytes); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamRemoteStorage_GetQuota(lua_State* L) {
	int top = lua_gettop(L);
	uint64 puAvailableBytes; /*out_param*/
	uint64 pnTotalBytes; /*out_param*/

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
	int32 pnBytesExpected; /*out_param*/
	int32 pnBytesDownloaded; /*out_param*/
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
	int32 pnFileSizeInBytes; /*out_param*/
	AppId_t pnAppID; /*out_param*/
	UGCHandle_t hContent = check_UGCHandle_t(L, 1); /*normal*/
	char ** ppchName; /*out_string*/
	class CSteamID pSteamIDOwner; /*out_struct*/

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

static int ISteamUserStats_RequestCurrentStats(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user_stats->RequestCurrentStats();
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetStatInt(lua_State* L) {
	int top = lua_gettop(L);
	int32 pData; /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetStat(pchName, &pData);
	push_bool(L, r);
	push_int32(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetStatFloat(lua_State* L) {
	int top = lua_gettop(L);
	float pData; /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetStat(pchName, &pData);
	push_bool(L, r);
	push_float(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_SetStatInt(lua_State* L) {
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
	bool pbAchieved; /*out_param*/
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
	uint32 punUnlockTime; /*out_param*/
	bool pbAchieved; /*out_param*/
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
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->RequestUserStats(steamIDUser);
	steamCallbackWrapper->TrackSteamAPICallUserStatsReceived_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_GetUserStatInt(lua_State* L) {
	int top = lua_gettop(L);
	int32 pData; /*out_param*/
	const char * pchName = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	bool r = user_stats->GetUserStat(steamIDUser, pchName, &pData);
	push_bool(L, r);
	push_int32(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetUserStatFloat(lua_State* L) {
	int top = lua_gettop(L);
	float pData; /*out_param*/
	const char * pchName = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	bool r = user_stats->GetUserStat(steamIDUser, pchName, &pData);
	push_bool(L, r);
	push_float(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetUserAchievement(lua_State* L) {
	int top = lua_gettop(L);
	bool pbAchieved; /*out_param*/
	const char * pchName = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	bool r = user_stats->GetUserAchievement(steamIDUser, pchName, &pbAchieved);
	push_bool(L, r);
	push_bool(L, pbAchieved); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetUserAchievementAndUnlockTime(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punUnlockTime; /*out_param*/
	bool pbAchieved; /*out_param*/
	const char * pchName = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

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
	int cDetailsMax = check_int(L, 3); /*normal*/
	struct LeaderboardEntry_t pLeaderboardEntry; /*out_param*/
	int index = check_int(L, 2); /*normal*/
	SteamLeaderboardEntries_t hSteamLeaderboardEntries = check_SteamLeaderboardEntries_t(L, 1); /*normal*/
	int32 pDetails[cDetailsMax]; /*out_array_count*/

	bool r = user_stats->GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries, index, &pLeaderboardEntry, pDetails, cDetailsMax);
	push_bool(L, r);
	push_LeaderboardEntry_t(L, pLeaderboardEntry); /*out_param*/
	push_int32_array(L, pDetails, cDetailsMax);  /*out_array_count*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
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
	bool pbAchieved; /*out_param*/
	float pflPercent; /*out_param*/
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
	bool pbAchieved; /*out_param*/
	float pflPercent; /*out_param*/
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
	float pflPercent; /*out_param*/
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

static int ISteamUserStats_GetGlobalStatInt(lua_State* L) {
	int top = lua_gettop(L);
	int64 pData; /*out_param*/
	const char * pchStatName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetGlobalStat(pchStatName, &pData);
	push_bool(L, r);
	push_int64(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetGlobalStatFloat(lua_State* L) {
	int top = lua_gettop(L);
	double pData; /*out_param*/
	const char * pchStatName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetGlobalStat(pchStatName, &pData);
	push_bool(L, r);
	push_double(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetGlobalStatIntHistory(lua_State* L) {
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

static int ISteamUserStats_GetGlobalStatFloatHistory(lua_State* L) {
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
	int cchNameBufferSize = check_int(L, 3); /*normal*/
	dmScript::LuaHBuffer * pchName_buffer = check_buffer(L, 2); /*buffer_param*/
	char * pchName = 0x0;
	uint32_t pchName_buffersize = 0;
	dmBuffer::Result pchName_buffer_result = dmBuffer::GetBytes(pchName_buffer->m_Buffer, (void**)&pchName, &pchName_buffersize);
	bool pbAvailable; /*out_param*/
	AppId_t pAppID; /*out_param*/
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
	uint32 cMaxDepots = check_uint32(L, 2); /*normal*/
	DepotId_t pvecDepots; /*out_param*/
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

	class CSteamID r = apps->GetAppOwner();
	push_class_CSteamID(L, r);
	
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
	uint64 punBytesTotal; /*out_param*/
	uint64 punBytesDownloaded; /*out_param*/
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

static int ISteamNetworking_SendP2PPacket(lua_State* L) {
	int top = lua_gettop(L);
	int nChannel = check_int(L, 5); /*normal*/
	EP2PSend eP2PSendType = check_EP2PSend(L, 4); /*normal*/
	uint32 cubData = check_uint32(L, 3); /*normal*/
	const void * pubData = check_const_void_ptr(L, 2); /*normal*/
	class CSteamID steamIDRemote = check_class_CSteamID(L, 1); /*normal*/

	bool r = networking->SendP2PPacket(steamIDRemote, pubData, cubData, eP2PSendType, nChannel);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_IsP2PPacketAvailable(lua_State* L) {
	int top = lua_gettop(L);
	int nChannel = check_int(L, 1); /*normal*/
	uint32 pcubMsgSize; /*out_param*/

	bool r = networking->IsP2PPacketAvailable(&pcubMsgSize, nChannel);
	push_bool(L, r);
	push_uint32(L, pcubMsgSize); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamNetworking_ReadP2PPacket(lua_State* L) {
	int top = lua_gettop(L);
	int nChannel = check_int(L, 3); /*normal*/
	CSteamID psteamIDRemote; /*out_param*/
	uint32 pcubMsgSize; /*out_param*/
	uint32 cubDest = check_uint32(L, 2); /*normal*/
	dmScript::LuaHBuffer * pubDest_buffer = check_buffer(L, 1); /*buffer_param*/
	void * pubDest = 0x0;
	uint32_t pubDest_buffersize = 0;
	dmBuffer::Result pubDest_buffer_result = dmBuffer::GetBytes(pubDest_buffer->m_Buffer, (void**)&pubDest, &pubDest_buffersize);

	bool r = networking->ReadP2PPacket(pubDest, cubDest, &pcubMsgSize, &psteamIDRemote, nChannel);
	push_bool(L, r);
	push_class_CSteamID(L, psteamIDRemote); /*out_param*/
	push_uint32(L, pcubMsgSize); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamNetworking_AcceptP2PSessionWithUser(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDRemote = check_class_CSteamID(L, 1); /*normal*/

	bool r = networking->AcceptP2PSessionWithUser(steamIDRemote);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_CloseP2PSessionWithUser(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDRemote = check_class_CSteamID(L, 1); /*normal*/

	bool r = networking->CloseP2PSessionWithUser(steamIDRemote);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_CloseP2PChannelWithUser(lua_State* L) {
	int top = lua_gettop(L);
	int nChannel = check_int(L, 2); /*normal*/
	class CSteamID steamIDRemote = check_class_CSteamID(L, 1); /*normal*/

	bool r = networking->CloseP2PChannelWithUser(steamIDRemote, nChannel);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_GetP2PSessionState(lua_State* L) {
	int top = lua_gettop(L);
	struct P2PSessionState_t pConnectionState; /*out_param*/
	class CSteamID steamIDRemote = check_class_CSteamID(L, 1); /*normal*/

	bool r = networking->GetP2PSessionState(steamIDRemote, &pConnectionState);
	push_bool(L, r);
	push_P2PSessionState_t(L, pConnectionState); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamNetworking_AllowP2PPacketRelay(lua_State* L) {
	int top = lua_gettop(L);
	bool bAllow = check_bool(L, 1); /*normal*/

	bool r = networking->AllowP2PPacketRelay(bAllow);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_CreateListenSocket(lua_State* L) {
	int top = lua_gettop(L);
	bool bAllowUseOfPacketRelay = check_bool(L, 4); /*normal*/
	uint16 nPort = check_uint16(L, 3); /*normal*/
	uint32 nIP = check_uint32(L, 2); /*normal*/
	int nVirtualP2PPort = check_int(L, 1); /*normal*/

	SNetListenSocket_t r = networking->CreateListenSocket(nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay);
	push_SNetListenSocket_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_CreateP2PConnectionSocket(lua_State* L) {
	int top = lua_gettop(L);
	bool bAllowUseOfPacketRelay = check_bool(L, 4); /*normal*/
	int nTimeoutSec = check_int(L, 3); /*normal*/
	int nVirtualPort = check_int(L, 2); /*normal*/
	class CSteamID steamIDTarget = check_class_CSteamID(L, 1); /*normal*/

	SNetSocket_t r = networking->CreateP2PConnectionSocket(steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay);
	push_SNetSocket_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_CreateConnectionSocket(lua_State* L) {
	int top = lua_gettop(L);
	int nTimeoutSec = check_int(L, 3); /*normal*/
	uint16 nPort = check_uint16(L, 2); /*normal*/
	uint32 nIP = check_uint32(L, 1); /*normal*/

	SNetSocket_t r = networking->CreateConnectionSocket(nIP, nPort, nTimeoutSec);
	push_SNetSocket_t(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_DestroySocket(lua_State* L) {
	int top = lua_gettop(L);
	bool bNotifyRemoteEnd = check_bool(L, 2); /*normal*/
	SNetSocket_t hSocket = check_SNetSocket_t(L, 1); /*normal*/

	bool r = networking->DestroySocket(hSocket, bNotifyRemoteEnd);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_DestroyListenSocket(lua_State* L) {
	int top = lua_gettop(L);
	bool bNotifyRemoteEnd = check_bool(L, 2); /*normal*/
	SNetListenSocket_t hSocket = check_SNetListenSocket_t(L, 1); /*normal*/

	bool r = networking->DestroyListenSocket(hSocket, bNotifyRemoteEnd);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_SendDataOnSocket(lua_State* L) {
	int top = lua_gettop(L);
	bool bReliable = check_bool(L, 4); /*normal*/
	uint32 cubData = check_uint32(L, 3); /*normal*/
	dmScript::LuaHBuffer * pubData_buffer = check_buffer(L, 2); /*buffer_param*/
	void * pubData = 0x0;
	uint32_t pubData_buffersize = 0;
	dmBuffer::Result pubData_buffer_result = dmBuffer::GetBytes(pubData_buffer->m_Buffer, (void**)&pubData, &pubData_buffersize);
	SNetSocket_t hSocket = check_SNetSocket_t(L, 1); /*normal*/

	bool r = networking->SendDataOnSocket(hSocket, pubData, cubData, bReliable);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_IsDataAvailableOnSocket(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pcubMsgSize; /*out_param*/
	SNetSocket_t hSocket = check_SNetSocket_t(L, 1); /*normal*/

	bool r = networking->IsDataAvailableOnSocket(hSocket, &pcubMsgSize);
	push_bool(L, r);
	push_uint32(L, pcubMsgSize); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamNetworking_RetrieveDataFromSocket(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pcubMsgSize; /*out_param*/
	uint32 cubDest = check_uint32(L, 3); /*normal*/
	dmScript::LuaHBuffer * pubDest_buffer = check_buffer(L, 2); /*buffer_param*/
	void * pubDest = 0x0;
	uint32_t pubDest_buffersize = 0;
	dmBuffer::Result pubDest_buffer_result = dmBuffer::GetBytes(pubDest_buffer->m_Buffer, (void**)&pubDest, &pubDest_buffersize);
	SNetSocket_t hSocket = check_SNetSocket_t(L, 1); /*normal*/

	bool r = networking->RetrieveDataFromSocket(hSocket, pubDest, cubDest, &pcubMsgSize);
	push_bool(L, r);
	push_uint32(L, pcubMsgSize); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamNetworking_IsDataAvailable(lua_State* L) {
	int top = lua_gettop(L);
	SNetSocket_t phSocket; /*out_param*/
	uint32 pcubMsgSize; /*out_param*/
	SNetListenSocket_t hListenSocket = check_SNetListenSocket_t(L, 1); /*normal*/

	bool r = networking->IsDataAvailable(hListenSocket, &pcubMsgSize, &phSocket);
	push_bool(L, r);
	push_SNetSocket_t(L, phSocket); /*out_param*/
	push_uint32(L, pcubMsgSize); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamNetworking_RetrieveData(lua_State* L) {
	int top = lua_gettop(L);
	SNetSocket_t phSocket; /*out_param*/
	uint32 pcubMsgSize; /*out_param*/
	uint32 cubDest = check_uint32(L, 3); /*normal*/
	dmScript::LuaHBuffer * pubDest_buffer = check_buffer(L, 2); /*buffer_param*/
	void * pubDest = 0x0;
	uint32_t pubDest_buffersize = 0;
	dmBuffer::Result pubDest_buffer_result = dmBuffer::GetBytes(pubDest_buffer->m_Buffer, (void**)&pubDest, &pubDest_buffersize);
	SNetListenSocket_t hListenSocket = check_SNetListenSocket_t(L, 1); /*normal*/

	bool r = networking->RetrieveData(hListenSocket, pubDest, cubDest, &pcubMsgSize, &phSocket);
	push_bool(L, r);
	push_SNetSocket_t(L, phSocket); /*out_param*/
	push_uint32(L, pcubMsgSize); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamNetworking_GetSocketInfo(lua_State* L) {
	int top = lua_gettop(L);
	uint16 punPortRemote; /*out_param*/
	uint32 punIPRemote; /*out_param*/
	int peSocketStatus; /*out_param*/
	CSteamID pSteamIDRemote; /*out_param*/
	SNetSocket_t hSocket = check_SNetSocket_t(L, 1); /*normal*/

	bool r = networking->GetSocketInfo(hSocket, &pSteamIDRemote, &peSocketStatus, &punIPRemote, &punPortRemote);
	push_bool(L, r);
	push_uint16(L, punPortRemote); /*out_param*/
	push_uint32(L, punIPRemote); /*out_param*/
	push_int(L, peSocketStatus); /*out_param*/
	push_class_CSteamID(L, pSteamIDRemote); /*out_param*/
	
	assert(top + 1 + 4 == lua_gettop(L));
	return 1 + 4;
}

static int ISteamNetworking_GetListenSocketInfo(lua_State* L) {
	int top = lua_gettop(L);
	uint16 pnPort; /*out_param*/
	uint32 pnIP; /*out_param*/
	SNetListenSocket_t hListenSocket = check_SNetListenSocket_t(L, 1); /*normal*/

	bool r = networking->GetListenSocketInfo(hListenSocket, &pnIP, &pnPort);
	push_bool(L, r);
	push_uint16(L, pnPort); /*out_param*/
	push_uint32(L, pnIP); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamNetworking_GetSocketConnectionType(lua_State* L) {
	int top = lua_gettop(L);
	SNetSocket_t hSocket = check_SNetSocket_t(L, 1); /*normal*/

	ESNetSocketConnectionType r = networking->GetSocketConnectionType(hSocket);
	push_ESNetSocketConnectionType(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamNetworking_GetMaxPacketSize(lua_State* L) {
	int top = lua_gettop(L);
	SNetSocket_t hSocket = check_SNetSocket_t(L, 1); /*normal*/

	int r = networking->GetMaxPacketSize(hSocket);
	push_int(L, r);
	
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
	uint32 punOutItemsArraySize; /*out_param*/
	SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1); /*normal*/
	struct SteamItemDetails_t pOutItemsArray[punOutItemsArraySize]; /*out_array_count*/

	bool r = inventory->GetResultItems(resultHandle, pOutItemsArray, &punOutItemsArraySize);
	push_bool(L, r);
	push_uint32(L, punOutItemsArraySize); /*out_param*/
	push_SteamItemDetails_t_array(L, pOutItemsArray, punOutItemsArraySize);  /*out_array_count*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamInventory_GetResultItemProperty(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punValueBufferSizeOut; /*out_param*/
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
	class CSteamID steamIDExpected = check_class_CSteamID(L, 2); /*normal*/
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
	SteamInventoryResult_t pResultHandle; /*out_param*/

	bool r = inventory->GetAllItems(&pResultHandle);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_GetItemsByID(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unCountInstanceIDs = check_uint32(L, 2); /*normal*/
	luaL_checktype(L, 1, LUA_TTABLE); /*array_count*/
	SteamItemInstanceID_t pInstanceIDs[unCountInstanceIDs];
	for(int i=1; i<=unCountInstanceIDs; i++) {
		lua_rawgeti(L, 1, i);
		pInstanceIDs[i] = check_SteamItemInstanceID_t(L, 1 + 1);
		lua_pop(L, 1);
	}
	SteamInventoryResult_t pResultHandle; /*out_param*/

	bool r = inventory->GetItemsByID(&pResultHandle, pInstanceIDs, unCountInstanceIDs);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_SerializeResult(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punOutBufferSize; /*out_param*/
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
	bool bRESERVED_MUST_BE_FALSE = check_bool(L, 3); /*normal*/
	uint32 unBufferSize = check_uint32(L, 2); /*normal*/
	const void * pBuffer = check_const_void_ptr(L, 1); /*normal*/
	SteamInventoryResult_t pOutResultHandle; /*out_param*/

	bool r = inventory->DeserializeResult(&pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pOutResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_GenerateItems(lua_State* L) {
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
	SteamInventoryResult_t pResultHandle; /*out_param*/

	bool r = inventory->GenerateItems(&pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_GrantPromoItems(lua_State* L) {
	int top = lua_gettop(L);
	SteamInventoryResult_t pResultHandle; /*out_param*/

	bool r = inventory->GrantPromoItems(&pResultHandle);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_AddPromoItem(lua_State* L) {
	int top = lua_gettop(L);
	SteamItemDef_t itemDef = check_SteamItemDef_t(L, 1); /*normal*/
	SteamInventoryResult_t pResultHandle; /*out_param*/

	bool r = inventory->AddPromoItem(&pResultHandle, itemDef);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_AddPromoItems(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unArrayLength = check_uint32(L, 2); /*normal*/
	luaL_checktype(L, 1, LUA_TTABLE); /*array_count*/
	SteamItemDef_t pArrayItemDefs[unArrayLength];
	for(int i=1; i<=unArrayLength; i++) {
		lua_rawgeti(L, 1, i);
		pArrayItemDefs[i] = check_SteamItemDef_t(L, 1 + 1);
		lua_pop(L, 1);
	}
	SteamInventoryResult_t pResultHandle; /*out_param*/

	bool r = inventory->AddPromoItems(&pResultHandle, pArrayItemDefs, unArrayLength);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_ConsumeItem(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unQuantity = check_uint32(L, 2); /*normal*/
	SteamItemInstanceID_t itemConsume = check_SteamItemInstanceID_t(L, 1); /*normal*/
	SteamInventoryResult_t pResultHandle; /*out_param*/

	bool r = inventory->ConsumeItem(&pResultHandle, itemConsume, unQuantity);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_ExchangeItems(lua_State* L) {
	int top = lua_gettop(L);
	uint32 unArrayDestroyLength = check_uint32(L, 6); /*normal*/
	luaL_checktype(L, 5, LUA_TTABLE); /*array_count*/
	uint32 punArrayDestroyQuantity[unArrayDestroyLength];
	for(int i=1; i<=unArrayDestroyLength; i++) {
		lua_rawgeti(L, 5, i);
		punArrayDestroyQuantity[i] = check_uint32(L, 5 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 4, LUA_TTABLE); /*array_count*/
	SteamItemInstanceID_t pArrayDestroy[unArrayDestroyLength];
	for(int i=1; i<=unArrayDestroyLength; i++) {
		lua_rawgeti(L, 4, i);
		pArrayDestroy[i] = check_SteamItemInstanceID_t(L, 4 + 1);
		lua_pop(L, 1);
	}
	uint32 unArrayGenerateLength = check_uint32(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	uint32 punArrayGenerateQuantity[unArrayGenerateLength];
	for(int i=1; i<=unArrayGenerateLength; i++) {
		lua_rawgeti(L, 2, i);
		punArrayGenerateQuantity[i] = check_uint32(L, 2 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 1, LUA_TTABLE); /*array_count*/
	SteamItemDef_t pArrayGenerate[unArrayGenerateLength];
	for(int i=1; i<=unArrayGenerateLength; i++) {
		lua_rawgeti(L, 1, i);
		pArrayGenerate[i] = check_SteamItemDef_t(L, 1 + 1);
		lua_pop(L, 1);
	}
	SteamInventoryResult_t pResultHandle; /*out_param*/

	bool r = inventory->ExchangeItems(&pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_TransferItemQuantity(lua_State* L) {
	int top = lua_gettop(L);
	SteamItemInstanceID_t itemIdDest = check_SteamItemInstanceID_t(L, 3); /*normal*/
	uint32 unQuantity = check_uint32(L, 2); /*normal*/
	SteamItemInstanceID_t itemIdSource = check_SteamItemInstanceID_t(L, 1); /*normal*/
	SteamInventoryResult_t pResultHandle; /*out_param*/

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
	SteamItemDef_t dropListDefinition = check_SteamItemDef_t(L, 1); /*normal*/
	SteamInventoryResult_t pResultHandle; /*out_param*/

	bool r = inventory->TriggerItemDrop(&pResultHandle, dropListDefinition);
	push_bool(L, r);
	push_SteamInventoryResult_t(L, pResultHandle); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamInventory_TradeItems(lua_State* L) {
	int top = lua_gettop(L);
	uint32 nArrayGetLength = check_uint32(L, 7); /*normal*/
	luaL_checktype(L, 6, LUA_TTABLE); /*array_count*/
	uint32 pArrayGetQuantity[nArrayGetLength];
	for(int i=1; i<=nArrayGetLength; i++) {
		lua_rawgeti(L, 6, i);
		pArrayGetQuantity[i] = check_uint32(L, 6 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 5, LUA_TTABLE); /*array_count*/
	SteamItemInstanceID_t pArrayGet[nArrayGetLength];
	for(int i=1; i<=nArrayGetLength; i++) {
		lua_rawgeti(L, 5, i);
		pArrayGet[i] = check_SteamItemInstanceID_t(L, 5 + 1);
		lua_pop(L, 1);
	}
	uint32 nArrayGiveLength = check_uint32(L, 4); /*normal*/
	luaL_checktype(L, 3, LUA_TTABLE); /*array_count*/
	uint32 pArrayGiveQuantity[nArrayGiveLength];
	for(int i=1; i<=nArrayGiveLength; i++) {
		lua_rawgeti(L, 3, i);
		pArrayGiveQuantity[i] = check_uint32(L, 3 + 1);
		lua_pop(L, 1);
	}
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	SteamItemInstanceID_t pArrayGive[nArrayGiveLength];
	for(int i=1; i<=nArrayGiveLength; i++) {
		lua_rawgeti(L, 2, i);
		pArrayGive[i] = check_SteamItemInstanceID_t(L, 2 + 1);
		lua_pop(L, 1);
	}
	class CSteamID steamIDTradePartner = check_class_CSteamID(L, 1); /*normal*/
	SteamInventoryResult_t pResultHandle; /*out_param*/

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
	uint32 punItemDefIDsArraySize; /*out_param*/
	SteamItemDef_t pItemDefIDs[punItemDefIDsArraySize]; /*out_array_count*/

	bool r = inventory->GetItemDefinitionIDs(pItemDefIDs, &punItemDefIDsArraySize);
	push_bool(L, r);
	push_uint32(L, punItemDefIDsArraySize); /*out_param*/
	push_SteamItemDef_t_array(L, pItemDefIDs, punItemDefIDsArraySize);  /*out_array_count*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamInventory_GetItemDefinitionProperty(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punValueBufferSizeOut; /*out_param*/
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
	class CSteamID steamID = check_class_CSteamID(L, 1); /*normal*/

	SteamAPICall_t r = inventory->RequestEligiblePromoItemDefinitionsIDs(steamID);
	steamCallbackWrapper->TrackSteamAPICallSteamInventoryEligiblePromoItemDefIDs_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamInventory_GetEligiblePromoItemDefinitionIDs(lua_State* L) {
	int top = lua_gettop(L);
	uint32 punItemDefIDsArraySize; /*out_param*/
	class CSteamID steamID = check_class_CSteamID(L, 1); /*normal*/
	SteamItemDef_t pItemDefIDs[punItemDefIDsArraySize]; /*out_array_count*/

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
	uint32 unArrayLength = check_uint32(L, 1); /*normal*/
	SteamItemDef_t pArrayItemDefs[unArrayLength]; /*out_array_count*/
	uint64 pPrices[unArrayLength]; /*out_array_count*/

	bool r = inventory->GetItemsWithPrices(pArrayItemDefs, pPrices, unArrayLength);
	push_bool(L, r);
	push_SteamItemDef_t_array(L, pArrayItemDefs, unArrayLength);  /*out_array_count*/
	push_uint64_array(L, pPrices, unArrayLength);  /*out_array_count*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamInventory_GetItemPrice(lua_State* L) {
	int top = lua_gettop(L);
	uint64 pPrice; /*out_param*/
	SteamItemDef_t iDefinition = check_SteamItemDef_t(L, 1); /*normal*/

	bool r = inventory->GetItemPrice(iDefinition, &pPrice);
	push_bool(L, r);
	push_uint64(L, pPrice); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
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

static int ISteamInventory_SetPropertyInt(lua_State* L) {
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
	SteamInventoryResult_t pResultHandle; /*out_param*/
	SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1); /*normal*/

	bool r = inventory->SubmitUpdateProperties(handle, &pResultHandle);
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
	dmLogInfo("Init");
	SteamAPI_Init();
	if (!SteamAPI_IsSteamRunning()) {
		luaL_error(L, "Steam is not running");
	}
	apps = SteamApps();
	friends = SteamFriends();
	inventory = SteamInventory();
	matchmaking = SteamMatchmaking();
	music = SteamMusic();
	networking = SteamNetworking();
	remote_storage = SteamRemoteStorage();
	user = SteamUser();
	utils = SteamUtils();
	utils->SetWarningMessageHook(&SteamAPIDebugTextHook);
	user_stats = SteamUserStats();
	return 0;
}

static int Update(lua_State* L) {
	SteamAPI_RunCallbacks();
	return 0;
}

static int Final(lua_State* L) {
	SteamAPI_Shutdown();
	return 0;
}

static int SetListener(lua_State* L) {
	int top = lua_gettop(L);

	luaL_checklistener(L, 1, steamworksListener);

	assert(top == lua_gettop(L));
	return 0;
}

static const luaL_reg Module_methods[] = {
	{ "init", Init },
	{ "update", Update },
	{ "final", Final },
	{ "set_listener", SetListener },
	{ "user_get_h_steam_user", ISteamUser_GetHSteamUser },
	{ "user_logged_on", ISteamUser_BLoggedOn },
	{ "user_get_steam_id", ISteamUser_GetSteamID },
	{ "user_terminate_game_connection", ISteamUser_TerminateGameConnection },
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
	{ "utils_get_seconds_since_app_active", ISteamUtils_GetSecondsSinceAppActive },
	{ "utils_get_seconds_since_computer_active", ISteamUtils_GetSecondsSinceComputerActive },
	{ "utils_get_connected_universe", ISteamUtils_GetConnectedUniverse },
	{ "utils_get_server_real_time", ISteamUtils_GetServerRealTime },
	{ "utils_get_ip_country", ISteamUtils_GetIPCountry },
	{ "utils_get_image_size", ISteamUtils_GetImageSize },
	{ "utils_get_image_rgba", ISteamUtils_GetImageRGBA },
	{ "utils_get_cserip_port", ISteamUtils_GetCSERIPPort },
	{ "utils_get_current_battery_power", ISteamUtils_GetCurrentBatteryPower },
	{ "utils_get_app_id", ISteamUtils_GetAppID },
	{ "utils_is_api_call_completed", ISteamUtils_IsAPICallCompleted },
	{ "utils_get_api_call_failure_reason", ISteamUtils_GetAPICallFailureReason },
	{ "utils_get_api_call_result", ISteamUtils_GetAPICallResult },
	{ "utils_get_ipc_call_count", ISteamUtils_GetIPCCallCount },
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
	{ "remote_storage_ugc_download_to_location", ISteamRemoteStorage_UGCDownloadToLocation },
	{ "user_stats_request_current_stats", ISteamUserStats_RequestCurrentStats },
	{ "user_stats_get_stat_int", ISteamUserStats_GetStatInt },
	{ "user_stats_get_stat_float", ISteamUserStats_GetStatFloat },
	{ "user_stats_set_stat_int", ISteamUserStats_SetStatInt },
	{ "user_stats_set_stat_float", ISteamUserStats_SetStatFloat },
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
	{ "user_stats_get_user_stat_int", ISteamUserStats_GetUserStatInt },
	{ "user_stats_get_user_stat_float", ISteamUserStats_GetUserStatFloat },
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
	{ "user_stats_get_global_stat_int", ISteamUserStats_GetGlobalStatInt },
	{ "user_stats_get_global_stat_float", ISteamUserStats_GetGlobalStatFloat },
	{ "user_stats_get_global_stat_int_history", ISteamUserStats_GetGlobalStatIntHistory },
	{ "user_stats_get_global_stat_float_history", ISteamUserStats_GetGlobalStatFloatHistory },
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
	{ "networking_send_p2p_packet", ISteamNetworking_SendP2PPacket },
	{ "networking_is_p2p_packet_available", ISteamNetworking_IsP2PPacketAvailable },
	{ "networking_read_p2p_packet", ISteamNetworking_ReadP2PPacket },
	{ "networking_accept_p2p_session_with_user", ISteamNetworking_AcceptP2PSessionWithUser },
	{ "networking_close_p2p_session_with_user", ISteamNetworking_CloseP2PSessionWithUser },
	{ "networking_close_p2p_channel_with_user", ISteamNetworking_CloseP2PChannelWithUser },
	{ "networking_get_p2p_session_state", ISteamNetworking_GetP2PSessionState },
	{ "networking_allow_p2p_packet_relay", ISteamNetworking_AllowP2PPacketRelay },
	{ "networking_create_listen_socket", ISteamNetworking_CreateListenSocket },
	{ "networking_create_p2p_connection_socket", ISteamNetworking_CreateP2PConnectionSocket },
	{ "networking_create_connection_socket", ISteamNetworking_CreateConnectionSocket },
	{ "networking_destroy_socket", ISteamNetworking_DestroySocket },
	{ "networking_destroy_listen_socket", ISteamNetworking_DestroyListenSocket },
	{ "networking_send_data_on_socket", ISteamNetworking_SendDataOnSocket },
	{ "networking_is_data_available_on_socket", ISteamNetworking_IsDataAvailableOnSocket },
	{ "networking_retrieve_data_from_socket", ISteamNetworking_RetrieveDataFromSocket },
	{ "networking_is_data_available", ISteamNetworking_IsDataAvailable },
	{ "networking_retrieve_data", ISteamNetworking_RetrieveData },
	{ "networking_get_socket_info", ISteamNetworking_GetSocketInfo },
	{ "networking_get_listen_socket_info", ISteamNetworking_GetListenSocketInfo },
	{ "networking_get_socket_connection_type", ISteamNetworking_GetSocketConnectionType },
	{ "networking_get_max_packet_size", ISteamNetworking_GetMaxPacketSize },
	{ "music_is_enabled", ISteamMusic_BIsEnabled },
	{ "music_is_playing", ISteamMusic_BIsPlaying },
	{ "music_get_playback_status", ISteamMusic_GetPlaybackStatus },
	{ "music_play", ISteamMusic_Play },
	{ "music_pause", ISteamMusic_Pause },
	{ "music_play_previous", ISteamMusic_PlayPrevious },
	{ "music_play_next", ISteamMusic_PlayNext },
	{ "music_set_volume", ISteamMusic_SetVolume },
	{ "music_get_volume", ISteamMusic_GetVolume },
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
	{ "inventory_set_property_string", ISteamInventory_SetPropertyString },
	{ "inventory_set_property_bool", ISteamInventory_SetPropertyBool },
	{ "inventory_set_property_int", ISteamInventory_SetPropertyInt },
	{ "inventory_set_property_float", ISteamInventory_SetPropertyFloat },
	{ "inventory_submit_update_properties", ISteamInventory_SubmitUpdateProperties },
	{ 0, 0 }
};

static void LuaInit(lua_State* L) {
	int top = lua_gettop(L);
	luaL_register(L, MODULE_NAME, Module_methods);

	#define SETCONSTANT(name, val) \
	lua_pushnumber(L, (lua_Number) val); \
	lua_setfield(L, -2, #name);

	// EUniverse
	SETCONSTANT(UNIVERSE_INVALID, 0);
	SETCONSTANT(UNIVERSE_PUBLIC, 1);
	SETCONSTANT(UNIVERSE_BETA, 2);
	SETCONSTANT(UNIVERSE_INTERNAL, 3);
	SETCONSTANT(UNIVERSE_DEV, 4);
	SETCONSTANT(UNIVERSE_MAX, 5);
	// EResult
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
	// EAppReleaseState
	SETCONSTANT(APP_RELEASE_STATE_UNKNOWN, 0);
	SETCONSTANT(APP_RELEASE_STATE_UNAVAILABLE, 1);
	SETCONSTANT(APP_RELEASE_STATE_PRERELEASE, 2);
	SETCONSTANT(APP_RELEASE_STATE_PRELOAD_ONLY, 3);
	SETCONSTANT(APP_RELEASE_STATE_RELEASED, 4);
	// EAppOwnershipFlags
	SETCONSTANT(APP_OWNERSHIP_FLAGS_NONE, 0);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_OWNS_LICENSE, 1);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_FREE_LICENSE, 2);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_REGION_RESTRICTED, 4);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_LOW_VIOLENCE, 8);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_INVALID_PLATFORM, 16);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_SHARED_LICENSE, 32);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_FREE_WEEKEND, 64);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_RETAIL_LICENSE, 128);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_LICENSE_LOCKED, 256);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_LICENSE_PENDING, 512);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_LICENSE_EXPIRED, 1024);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_LICENSE_PERMANENT, 2048);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_LICENSE_RECURRING, 4096);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_LICENSE_CANCELED, 8192);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_AUTO_GRANT, 16384);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_PENDING_GIFT, 32768);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_RENTAL_NOT_ACTIVATED, 65536);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_RENTAL, 131072);
	SETCONSTANT(APP_OWNERSHIP_FLAGS_SITE_LICENSE, 262144);
	// EAppType
	SETCONSTANT(APP_TYPE_INVALID, 0);
	SETCONSTANT(APP_TYPE_GAME, 1);
	SETCONSTANT(APP_TYPE_APPLICATION, 2);
	SETCONSTANT(APP_TYPE_TOOL, 4);
	SETCONSTANT(APP_TYPE_DEMO, 8);
	SETCONSTANT(APP_TYPE_MEDIA_DEPRECATED, 16);
	SETCONSTANT(APP_TYPE_DLC, 32);
	SETCONSTANT(APP_TYPE_GUIDE, 64);
	SETCONSTANT(APP_TYPE_DRIVER, 128);
	SETCONSTANT(APP_TYPE_CONFIG, 256);
	SETCONSTANT(APP_TYPE_HARDWARE, 512);
	SETCONSTANT(APP_TYPE_FRANCHISE, 1024);
	SETCONSTANT(APP_TYPE_VIDEO, 2048);
	SETCONSTANT(APP_TYPE_PLUGIN, 4096);
	SETCONSTANT(APP_TYPE_MUSIC, 8192);
	SETCONSTANT(APP_TYPE_SERIES, 16384);
	SETCONSTANT(APP_TYPE_COMIC, 32768);
	SETCONSTANT(APP_TYPE_SHORTCUT, 1073741824);
	SETCONSTANT(APP_TYPE_DEPOT_ONLY, -2147483648);
	// ESteamUserStatType
	SETCONSTANT(STEAM_USER_STAT_TYPE_INVALID, 0);
	SETCONSTANT(STEAM_USER_STAT_TYPE_INT, 1);
	SETCONSTANT(STEAM_USER_STAT_TYPE_FLOAT, 2);
	SETCONSTANT(STEAM_USER_STAT_TYPE_AVGRATE, 3);
	SETCONSTANT(STEAM_USER_STAT_TYPE_ACHIEVEMENTS, 4);
	SETCONSTANT(STEAM_USER_STAT_TYPE_GROUPACHIEVEMENTS, 5);
	SETCONSTANT(STEAM_USER_STAT_TYPE_MAX, 6);
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
	// EMarketingMessageFlags
	SETCONSTANT(MARKETING_MESSAGE_FLAGS_NONE, 0);
	SETCONSTANT(MARKETING_MESSAGE_FLAGS_HIGH_PRIORITY, 1);
	SETCONSTANT(MARKETING_MESSAGE_FLAGS_PLATFORM_WINDOWS, 2);
	SETCONSTANT(MARKETING_MESSAGE_FLAGS_PLATFORM_MAC, 4);
	SETCONSTANT(MARKETING_MESSAGE_FLAGS_PLATFORM_LINUX, 8);
	SETCONSTANT(MARKETING_MESSAGE_FLAGS_PLATFORM_RESTRICTIONS, 14);
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
	// ELaunchOptionType
	SETCONSTANT(LAUNCH_OPTION_TYPE_NONE, 0);
	SETCONSTANT(LAUNCH_OPTION_TYPE_DEFAULT, 1);
	SETCONSTANT(LAUNCH_OPTION_TYPE_SAFE_MODE, 2);
	SETCONSTANT(LAUNCH_OPTION_TYPE_MULTIPLAYER, 3);
	SETCONSTANT(LAUNCH_OPTION_TYPE_CONFIG, 4);
	SETCONSTANT(LAUNCH_OPTION_TYPE_OPEN_VR, 5);
	SETCONSTANT(LAUNCH_OPTION_TYPE_SERVER, 6);
	SETCONSTANT(LAUNCH_OPTION_TYPE_EDITOR, 7);
	SETCONSTANT(LAUNCH_OPTION_TYPE_MANUAL, 8);
	SETCONSTANT(LAUNCH_OPTION_TYPE_BENCHMARK, 9);
	SETCONSTANT(LAUNCH_OPTION_TYPE_OPTION1, 10);
	SETCONSTANT(LAUNCH_OPTION_TYPE_OPTION2, 11);
	SETCONSTANT(LAUNCH_OPTION_TYPE_OPTION3, 12);
	SETCONSTANT(LAUNCH_OPTION_TYPE_OCULUS_VR, 13);
	SETCONSTANT(LAUNCH_OPTION_TYPE_OPEN_VR_OVERLAY, 14);
	SETCONSTANT(LAUNCH_OPTION_TYPE_OSVR, 15);
	SETCONSTANT(LAUNCH_OPTION_TYPE_DIALOG, 1000);
	// EVRHMDType
	SETCONSTANT(EVRHMD_TYPE_NONE, -1);
	SETCONSTANT(EVRHMD_TYPE_UNKNOWN, 0);
	SETCONSTANT(EVRHMD_TYPE_HTC_DEV, 1);
	SETCONSTANT(EVRHMD_TYPE_HTC_VIVE_PRE, 2);
	SETCONSTANT(EVRHMD_TYPE_HTC_VIVE, 3);
	SETCONSTANT(EVRHMD_TYPE_HTC_UNKNOWN, 20);
	SETCONSTANT(EVRHMD_TYPE_OCULUS_DK1, 21);
	SETCONSTANT(EVRHMD_TYPE_OCULUS_DK2, 22);
	SETCONSTANT(EVRHMD_TYPE_OCULUS_RIFT, 23);
	SETCONSTANT(EVRHMD_TYPE_OCULUS_UNKNOWN, 40);
	SETCONSTANT(EVRHMD_TYPE_ACER_UNKNOWN, 50);
	SETCONSTANT(EVRHMD_TYPE_ACER_WINDOWS_MR, 51);
	SETCONSTANT(EVRHMD_TYPE_DELL_UNKNOWN, 60);
	SETCONSTANT(EVRHMD_TYPE_DELL_VISOR, 61);
	SETCONSTANT(EVRHMD_TYPE_LENOVO_UNKNOWN, 70);
	SETCONSTANT(EVRHMD_TYPE_LENOVO_EXPLORER, 71);
	SETCONSTANT(EVRHMD_TYPE_HP_UNKNOWN, 80);
	SETCONSTANT(EVRHMD_TYPE_HP_WINDOWS_MR, 81);
	SETCONSTANT(EVRHMD_TYPE_SAMSUNG_UNKNOWN, 90);
	SETCONSTANT(EVRHMD_TYPE_SAMSUNG_ODYSSEY, 91);
	SETCONSTANT(EVRHMD_TYPE_UNANNOUNCED_UNKNOWN, 100);
	SETCONSTANT(EVRHMD_TYPE_UNANNOUNCED_WINDOWS_MR, 101);
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
	SETCONSTANT(PERSONA_STATE_MAX, 7);
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
	SETCONSTANT(PERSONA_CHANGE_FACEBOOK_INFO, 2048);
	SETCONSTANT(PERSONA_CHANGE_NICKNAME, 4096);
	SETCONSTANT(PERSONA_CHANGE_STEAM_LEVEL, 8192);
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
	// ERemoteStoragePlatform
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_NONE, 0);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_WINDOWS, 1);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_OSX, 2);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_PS3, 4);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_LINUX, 8);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_RESERVED2, 16);
	SETCONSTANT(REMOTE_STORAGE_PLATFORM_ALL, -1);
	// ERemoteStoragePublishedFileVisibility
	SETCONSTANT(REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_PUBLIC, 0);
	SETCONSTANT(REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_FRIENDS_ONLY, 1);
	SETCONSTANT(REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_PRIVATE, 2);
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
	// EUGCReadAction
	SETCONSTANT(UGC_READ_CONTINUE_READING_UNTIL_FINISHED, 0);
	SETCONSTANT(UGC_READ_CONTINUE_READING, 1);
	SETCONSTANT(UGC_READ_CLOSE, 2);
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
	SETCONSTANT(P2P_SESSION_ERROR_NOT_RUNNING_APP, 1);
	SETCONSTANT(P2P_SESSION_ERROR_NO_RIGHTS_TO_APP, 2);
	SETCONSTANT(P2P_SESSION_ERROR_DESTINATION_NOT_LOGGED_IN, 3);
	SETCONSTANT(P2P_SESSION_ERROR_TIMEOUT, 4);
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
	SETCONSTANT(HTTP_STATUS_CODE500_INTERNAL_SERVER_ERROR, 500);
	SETCONSTANT(HTTP_STATUS_CODE501_NOT_IMPLEMENTED, 501);
	SETCONSTANT(HTTP_STATUS_CODE502_BAD_GATEWAY, 502);
	SETCONSTANT(HTTP_STATUS_CODE503_SERVICE_UNAVAILABLE, 503);
	SETCONSTANT(HTTP_STATUS_CODE504_GATEWAY_TIMEOUT, 504);
	SETCONSTANT(HTTP_STATUS_CODE505HTTP_VERSION_NOT_SUPPORTED, 505);
	SETCONSTANT(HTTP_STATUS_CODE5XX_UNKNOWN, 599);
	// ESteamControllerPad
	SETCONSTANT(STEAM_CONTROLLER_PAD_LEFT, 0);
	SETCONSTANT(STEAM_CONTROLLER_PAD_RIGHT, 1);
	// EControllerSource
	SETCONSTANT(CONTROLLER_SOURCE_NONE, 0);
	SETCONSTANT(CONTROLLER_SOURCE_LEFT_TRACKPAD, 1);
	SETCONSTANT(CONTROLLER_SOURCE_RIGHT_TRACKPAD, 2);
	SETCONSTANT(CONTROLLER_SOURCE_JOYSTICK, 3);
	SETCONSTANT(CONTROLLER_SOURCE_ABXY, 4);
	SETCONSTANT(CONTROLLER_SOURCE_SWITCH, 5);
	SETCONSTANT(CONTROLLER_SOURCE_LEFT_TRIGGER, 6);
	SETCONSTANT(CONTROLLER_SOURCE_RIGHT_TRIGGER, 7);
	SETCONSTANT(CONTROLLER_SOURCE_GYRO, 8);
	SETCONSTANT(CONTROLLER_SOURCE_CENTER_TRACKPAD, 9);
	SETCONSTANT(CONTROLLER_SOURCE_RIGHT_JOYSTICK, 10);
	SETCONSTANT(CONTROLLER_SOURCE_D_PAD, 11);
	SETCONSTANT(CONTROLLER_SOURCE_KEY, 12);
	SETCONSTANT(CONTROLLER_SOURCE_MOUSE, 13);
	SETCONSTANT(CONTROLLER_SOURCE_COUNT, 14);
	// EControllerSourceMode
	SETCONSTANT(CONTROLLER_SOURCE_MODE_NONE, 0);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_DPAD, 1);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_BUTTONS, 2);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_FOUR_BUTTONS, 3);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_ABSOLUTE_MOUSE, 4);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_RELATIVE_MOUSE, 5);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_JOYSTICK_MOVE, 6);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_JOYSTICK_MOUSE, 7);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_JOYSTICK_CAMERA, 8);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_SCROLL_WHEEL, 9);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_TRIGGER, 10);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_TOUCH_MENU, 11);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_MOUSE_JOYSTICK, 12);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_MOUSE_REGION, 13);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_RADIAL_MENU, 14);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_SINGLE_BUTTON, 15);
	SETCONSTANT(CONTROLLER_SOURCE_MODE_SWITCHES, 16);
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
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP, 154);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_GRIP, 155);
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP_UPPER, 156);
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
	SETCONSTANT(CONTROLLER_ACTION_ORIGIN_COUNT, 196);
	// ESteamControllerLEDFlag
	SETCONSTANT(STEAM_CONTROLLER_LED_FLAG_SET_COLOR, 0);
	SETCONSTANT(STEAM_CONTROLLER_LED_FLAG_RESTORE_USER_DEFAULT, 1);
	// ESteamInputType
	SETCONSTANT(STEAM_INPUT_TYPE_UNKNOWN, 0);
	SETCONSTANT(STEAM_INPUT_TYPE_STEAM_CONTROLLER, 1);
	SETCONSTANT(STEAM_INPUT_TYPE_X_BOX360_CONTROLLER, 2);
	SETCONSTANT(STEAM_INPUT_TYPE_X_BOX_ONE_CONTROLLER, 3);
	SETCONSTANT(STEAM_INPUT_TYPE_GENERIC_X_INPUT, 4);
	SETCONSTANT(STEAM_INPUT_TYPE_PS4_CONTROLLER, 5);
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
	SETCONSTANT(FEATURE_MAX, 13);
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
