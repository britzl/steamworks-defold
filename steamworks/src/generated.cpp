// GENERATED CODE - DO NOT MODIFY
// Copyright 2016 Bjorn Ritzl


#include <dmsdk/sdk.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "steam_api.h"
#include "luautils.h"

#define LIB_NAME "Steamworks"
#define MODULE_NAME "steamworks"

#ifndef DLIB_LOG_DOMAIN
#define DLIB_LOG_DOMAIN "steamworks"
#include <dmsdk/dlib/log.h>
#endif




typedef uint8 unsigned char;
typedef uint8 unsigned char;
typedef int8 signed char;
typedef int16 short;
typedef uint16 unsigned short;
typedef int32 int;
typedef uint32 unsigned int;
typedef int64 long long;
typedef uint64 unsigned long long;
typedef lint64 int64;
typedef ulint64 uint64;
typedef intp long long;
typedef uintp unsigned long long;
typedef Salt_t uint8 [8];
typedef GID_t uint64;
typedef JobID_t uint64;
typedef TxnID_t GID_t;
typedef PackageId_t uint32;
typedef BundleId_t uint32;
typedef AppId_t uint32;
typedef AssetClassId_t uint64;
typedef PhysicalItemId_t uint32;
typedef DepotId_t uint32;
typedef RTime32 uint32;
typedef CellID_t uint32;
typedef SteamAPICall_t uint64;
typedef AccountID_t uint32;
typedef PartnerId_t uint32;
typedef ManifestId_t uint64;
typedef SiteId_t uint64;
typedef HAuthTicket uint32;
typedef PFNLegacyKeyRegistration void (*)(const char *, const char *);
typedef PFNLegacyKeyInstalled _Bool (*)(void);
typedef PFNPreMinidumpCallback void (*)(void *);
typedef BREAKPAD_HANDLE void *;
typedef ValvePackingSentinel_t struct ValvePackingSentinel_t;
typedef compile_time_assert_type char [1];
typedef HSteamPipe int32;
typedef HSteamUser int32;
typedef SteamAPIWarningMessageHook_t void (*)(int, const char *) __attribute__((cdecl));
typedef SteamAPI_CheckCallbackRegistered_t uint32 (*)(int);
typedef FriendsGroupID_t int16;
typedef SteamAPIWarningMessageHook_t void (*)(int, const char *) __attribute__((cdecl));
typedef HServerListRequest void *;
typedef HServerQuery int;
typedef UGCHandle_t uint64;
typedef PublishedFileUpdateHandle_t uint64;
typedef PublishedFileId_t uint64;
typedef UGCFileWriteStreamHandle_t uint64;
typedef compile_time_assert_type char [1];
typedef SteamLeaderboard_t uint64;
typedef SteamLeaderboardEntries_t uint64;
typedef SNetSocket_t uint32;
typedef SNetListenSocket_t uint32;
typedef ScreenshotHandle uint32;
typedef PlaybackStatusHasChanged_t::SteamCallback_t struct PlaybackStatusHasChanged_t;
typedef VolumeHasChanged_t::SteamCallback_t struct VolumeHasChanged_t;
typedef MusicPlayerRemoteWillActivate_t::SteamCallback_t struct MusicPlayerRemoteWillActivate_t;
typedef MusicPlayerRemoteWillDeactivate_t::SteamCallback_t struct MusicPlayerRemoteWillDeactivate_t;
typedef MusicPlayerRemoteToFront_t::SteamCallback_t struct MusicPlayerRemoteToFront_t;
typedef MusicPlayerWillQuit_t::SteamCallback_t struct MusicPlayerWillQuit_t;
typedef MusicPlayerWantsPlay_t::SteamCallback_t struct MusicPlayerWantsPlay_t;
typedef MusicPlayerWantsPause_t::SteamCallback_t struct MusicPlayerWantsPause_t;
typedef MusicPlayerWantsPlayPrevious_t::SteamCallback_t struct MusicPlayerWantsPlayPrevious_t;
typedef MusicPlayerWantsPlayNext_t::SteamCallback_t struct MusicPlayerWantsPlayNext_t;
typedef MusicPlayerWantsShuffled_t::SteamCallback_t struct MusicPlayerWantsShuffled_t;
typedef MusicPlayerWantsLooped_t::SteamCallback_t struct MusicPlayerWantsLooped_t;
typedef MusicPlayerWantsVolume_t::SteamCallback_t struct MusicPlayerWantsVolume_t;
typedef MusicPlayerSelectsQueueEntry_t::SteamCallback_t struct MusicPlayerSelectsQueueEntry_t;
typedef MusicPlayerSelectsPlaylistEntry_t::SteamCallback_t struct MusicPlayerSelectsPlaylistEntry_t;
typedef MusicPlayerWantsPlayingRepeatStatus_t::SteamCallback_t struct MusicPlayerWantsPlayingRepeatStatus_t;
typedef HTTPRequestHandle uint32;
typedef HTTPCookieContainerHandle uint32;
typedef ControllerHandle_t uint64;
typedef ControllerActionSetHandle_t uint64;
typedef ControllerDigitalActionHandle_t uint64;
typedef ControllerAnalogActionHandle_t uint64;
typedef UGCQueryHandle_t uint64;
typedef UGCUpdateHandle_t uint64;
typedef SteamAppInstalled_t::SteamCallback_t struct SteamAppInstalled_t;
typedef SteamAppUninstalled_t::SteamCallback_t struct SteamAppUninstalled_t;
typedef HHTMLBrowser uint32;
typedef HTML_BrowserReady_t::SteamCallback_t struct HTML_BrowserReady_t;
typedef HTML_NeedsPaint_t::SteamCallback_t struct HTML_NeedsPaint_t;
typedef HTML_StartRequest_t::SteamCallback_t struct HTML_StartRequest_t;
typedef HTML_CloseBrowser_t::SteamCallback_t struct HTML_CloseBrowser_t;
typedef HTML_URLChanged_t::SteamCallback_t struct HTML_URLChanged_t;
typedef HTML_FinishedRequest_t::SteamCallback_t struct HTML_FinishedRequest_t;
typedef HTML_OpenLinkInNewTab_t::SteamCallback_t struct HTML_OpenLinkInNewTab_t;
typedef HTML_ChangedTitle_t::SteamCallback_t struct HTML_ChangedTitle_t;
typedef HTML_SearchResults_t::SteamCallback_t struct HTML_SearchResults_t;
typedef HTML_CanGoBackAndForward_t::SteamCallback_t struct HTML_CanGoBackAndForward_t;
typedef HTML_HorizontalScroll_t::SteamCallback_t struct HTML_HorizontalScroll_t;
typedef HTML_VerticalScroll_t::SteamCallback_t struct HTML_VerticalScroll_t;
typedef HTML_LinkAtPosition_t::SteamCallback_t struct HTML_LinkAtPosition_t;
typedef HTML_JSAlert_t::SteamCallback_t struct HTML_JSAlert_t;
typedef HTML_JSConfirm_t::SteamCallback_t struct HTML_JSConfirm_t;
typedef HTML_FileOpenDialog_t::SteamCallback_t struct HTML_FileOpenDialog_t;
typedef HTML_NewWindow_t::SteamCallback_t struct HTML_NewWindow_t;
typedef HTML_SetCursor_t::SteamCallback_t struct HTML_SetCursor_t;
typedef HTML_StatusText_t::SteamCallback_t struct HTML_StatusText_t;
typedef HTML_ShowToolTip_t::SteamCallback_t struct HTML_ShowToolTip_t;
typedef HTML_UpdateToolTip_t::SteamCallback_t struct HTML_UpdateToolTip_t;
typedef HTML_HideToolTip_t::SteamCallback_t struct HTML_HideToolTip_t;
typedef HTML_BrowserRestarted_t::SteamCallback_t struct HTML_BrowserRestarted_t;
typedef SteamItemInstanceID_t uint64;
typedef SteamItemDef_t int32;
typedef SteamInventoryResult_t int32;
typedef SteamInventoryUpdateHandle_t uint64;
typedef BroadcastUploadStart_t::SteamCallback_t struct BroadcastUploadStart_t;
typedef BroadcastUploadStop_t::SteamCallback_t struct BroadcastUploadStop_t;
typedef GetVideoURLResult_t::SteamCallback_t struct GetVideoURLResult_t;
typedef GetOPFSettingsResult_t::SteamCallback_t struct GetOPFSettingsResult_t;
typedef CCallResult::func_t void (T::*)(P *, _Bool);
typedef CCallback::func_t void (T::*)(P *);


#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_INT 0
#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_FLOAT 1
#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_AVERAGERATE 2

static ISteamFriends *steamFriends;
static ISteamUser *steamUser;
static ISteamUserStats *steamUserStats;
static ISteamMatchmaking *steamMatchmaking;



static lua_Listener steamworksListener;


static void NotifyListener(const char* event, LeaderboardFindResult_t *result) {

	lua_State* L = steamworksListener.m_L;
	if (!L) {
		return;
	}
	int top = lua_gettop(L);

	lua_pushlistener(L, steamworksListener);
	lua_pushstring(L, event);
	lua_newtable(L);
	lua_pushstring(L, steamUserStats->GetLeaderboardName(result->m_hSteamLeaderboard));
	lua_setfield(L, -2, "leaderboardName");
	lua_pushnumber(L, steamUserStats->GetLeaderboardEntryCount(result->m_hSteamLeaderboard));
	lua_setfield(L, -2, "entryCount");

	int ret = lua_pcall(L, 3, LUA_MULTRET, 0);
	if (ret != 0) {
		lua_pop(L, 2);
	}
	assert(top == lua_gettop(L));
}


static int SetListener(lua_State* L) {
	int top = lua_gettop(L);

	luaL_checklistener(L, 1, steamworksListener);

	assert(top == lua_gettop(L));
	return 0;
}





class SteamCallbackWrapper {
	public:
		SteamCallbackWrapper();

		// General
		STEAM_CALLBACK(SteamCallbackWrapper, OnGameOverlayActivated, GameOverlayActivated_t, m_CallbackGameOverlayActivated);

		// Networking
		STEAM_CALLBACK(SteamCallbackWrapper, OnLobbyChatMsg, LobbyChatMsg_t, m_CallbackLobbyChatMsg);

		// User Stats
		STEAM_CALLBACK(SteamCallbackWrapper, OnUserStatsReceived, UserStatsReceived_t, m_CallbackUserStatsReceived);
		STEAM_CALLBACK(SteamCallbackWrapper, OnUserStatsStored, UserStatsStored_t, m_CallbackUserStatsStored);
		STEAM_CALLBACK(SteamCallbackWrapper, OnAchievementStored, UserAchievementStored_t, m_CallbackAchievementStored);
		STEAM_CALLBACK(SteamCallbackWrapper, OnPS3TrophiesInstalled, PS3TrophiesInstalled_t, m_CallbackPS3TrophiesInstalled);

		void OnFindLeaderboard(LeaderboardFindResult_t *pFindLearderboardResult, bool bIOFailure);
		CCallResult<SteamCallbackWrapper, LeaderboardFindResult_t> m_SteamCallResultCreateLeaderboard;
};

SteamCallbackWrapper::SteamCallbackWrapper() :

	// General
	m_CallbackGameOverlayActivated(this, &SteamCallbackWrapper::OnGameOverlayActivated),


	// Networking
	m_CallbackLobbyChatMsg(this, &SteamCallbackWrapper::OnLobbyChatMsg),

	// User Stats
	m_CallbackUserStatsReceived(this, &SteamCallbackWrapper::OnUserStatsReceived),
	m_CallbackUserStatsStored(this, &SteamCallbackWrapper::OnUserStatsStored),
	m_CallbackAchievementStored(this, &SteamCallbackWrapper::OnAchievementStored),
	m_CallbackPS3TrophiesInstalled(this, &SteamCallbackWrapper::OnPS3TrophiesInstalled) {
}

// General
void SteamCallbackWrapper::OnGameOverlayActivated(GameOverlayActivated_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnGameOverlayActivated\n");
	NotifyListener("OnGameOverlayActivated", pCallback);
}

// Networking
void SteamCallbackWrapper::OnLobbyChatMsg(LobbyChatMsg_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnLobbyChatMsg\n");
	NotifyListener("OnLobbyChatMsg", pCallback);
}

// User Stats
void SteamCallbackWrapper::OnUserStatsReceived(UserStatsReceived_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnUserStatsReceived\n");
	NotifyListener("OnUserStatsReceived");
}
void SteamCallbackWrapper::OnUserStatsStored(UserStatsStored_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnUserStatsStored\n");
	NotifyListener("OnUserStatsStored");
}
void SteamCallbackWrapper::OnAchievementStored(UserAchievementStored_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnAchievementStored\n");
	NotifyListener("OnAchievementStored");
}
void SteamCallbackWrapper::OnPS3TrophiesInstalled(PS3TrophiesInstalled_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnPS3TrophiesInstalled\n");
	NotifyListener("OnPS3TrophiesInstalled");
}
void SteamCallbackWrapper::OnFindLeaderboard(LeaderboardFindResult_t *pFindLeaderboardResult, bool bIOFailure) {
	dmLogInfo("SteamCallbackWrapper::OnFindLeaderboard\n");
	NotifyListener("OnFindLeaderboard", pFindLeaderboardResult);
}

static SteamCallbackWrapper *steamCallbackWrapper = new SteamCallbackWrapper();









/**
 * Push a CSteamID on the stack
 * The 64 bit representation of the steam id will be
 * converted into a string
 */
static int PushSteamID(lua_State* L, CSteamID steamId) {
	char buf[22];
	snprintf(buf, sizeof(buf), "%llu", steamId.ConvertToUint64());
	lua_pushstring(L, buf);
	return 1;
}

/**
 * Get a CSteamID from the stack
 */
static CSteamID* GetSteamID(lua_State* L, int index) {
	char * pEnd;
	const char * s = lua_tostring(L, index);
	uint64 id = strtoull(s, &pEnd, 10);
	CSteamID *steamId = new CSteamID(id);
	return steamId;
}

static int IsLoggedInUserId(lua_State* L, int index) {
	printf("IsLoggedInUserId %d\n", index);
	if (lua_isnoneornil(L, index)) {
		return 1;
	}
	if (lua_gettop(L) == 0) {
		return 1;
	}
	if (lua_isstring(L, index)) {
		CSteamID* id = GetSteamID(L, index);
		if (steamUser->GetSteamID().ConvertToUint64() == id->ConvertToUint64()) {
			return 1;
		}
	}
	return 0;
}


static CSteamID* GetSteamID(lua_State* L, int index) {
	char * pEnd;
	const char * s = lua_tostring(L, index);
	uint64 id = strtoull(s, &pEnd, 10);
	CSteamID *steamId = new CSteamID(id);
	return steamId;
}


static ISteamClient_CreateSteamPipe(lua_State* L) {
    int top = lua_gettop(L);


    HSteamPipe r = client->CreateSteamPipe();

    push_HSteamPipe(L, r);

    // return HSteamPipe
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_BReleaseSteamPipe(lua_State* L) {
    int top = lua_gettop(L);

    HSteamPipe hSteamPipe = check_HSteamPipe(L, 1);

    bool r = client->BReleaseSteamPipe(hSteamPipe);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_ConnectToGlobalUser(lua_State* L) {
    int top = lua_gettop(L);

    HSteamPipe hSteamPipe = check_HSteamPipe(L, 1);

    HSteamUser r = client->ConnectToGlobalUser(hSteamPipe);

    push_HSteamUser(L, r);

    // return HSteamUser
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_CreateLocalUser(lua_State* L) {
    int top = lua_gettop(L);

    HSteamPipe * phSteamPipe = check_HSteamPipe_ptr(L, 1);
    EAccountType eAccountType = check_EAccountType(L, 2);

    HSteamUser r = client->CreateLocalUser(phSteamPipe,eAccountType);

    push_HSteamUser(L, r);

    // return HSteamUser
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_ReleaseUser(lua_State* L) {
    int top = lua_gettop(L);

    HSteamPipe hSteamPipe = check_HSteamPipe(L, 1);
    HSteamUser hUser = check_HSteamUser(L, 2);

    void r = client->ReleaseUser(hSteamPipe,hUser);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamUser(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamUser * r = client->GetISteamUser(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamUser *(L, r);

    // return class ISteamUser *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamGameServer(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamGameServer * r = client->GetISteamGameServer(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamGameServer *(L, r);

    // return class ISteamGameServer *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_SetLocalIPBinding(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unIP = check_uint32(L, 1);
    uint16 usPort = check_uint16(L, 2);

    void r = client->SetLocalIPBinding(unIP,usPort);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamFriends(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamFriends * r = client->GetISteamFriends(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamFriends *(L, r);

    // return class ISteamFriends *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamUtils(lua_State* L) {
    int top = lua_gettop(L);

    HSteamPipe hSteamPipe = check_HSteamPipe(L, 1);
    const char * pchVersion = check_const_char_ptr(L, 2);

    class ISteamUtils * r = client->GetISteamUtils(hSteamPipe,pchVersion);

    push_class ISteamUtils *(L, r);

    // return class ISteamUtils *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamMatchmaking(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamMatchmaking * r = client->GetISteamMatchmaking(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamMatchmaking *(L, r);

    // return class ISteamMatchmaking *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamMatchmakingServers(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamMatchmakingServers * r = client->GetISteamMatchmakingServers(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamMatchmakingServers *(L, r);

    // return class ISteamMatchmakingServers *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamGenericInterface(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    void * r = client->GetISteamGenericInterface(hSteamUser,hSteamPipe,pchVersion);

    push_void *(L, r);

    // return void *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamUserStats(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamUserStats * r = client->GetISteamUserStats(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamUserStats *(L, r);

    // return class ISteamUserStats *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamGameServerStats(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamGameServerStats * r = client->GetISteamGameServerStats(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamGameServerStats *(L, r);

    // return class ISteamGameServerStats *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamApps(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamApps * r = client->GetISteamApps(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamApps *(L, r);

    // return class ISteamApps *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamNetworking(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamNetworking * r = client->GetISteamNetworking(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamNetworking *(L, r);

    // return class ISteamNetworking *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamRemoteStorage(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamRemoteStorage * r = client->GetISteamRemoteStorage(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamRemoteStorage *(L, r);

    // return class ISteamRemoteStorage *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamScreenshots(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamScreenshots * r = client->GetISteamScreenshots(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamScreenshots *(L, r);

    // return class ISteamScreenshots *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetIPCCallCount(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = client->GetIPCCallCount();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_SetWarningMessageHook(lua_State* L) {
    int top = lua_gettop(L);

    SteamAPIWarningMessageHook_t pFunction = check_SteamAPIWarningMessageHook_t(L, 1);

    void r = client->SetWarningMessageHook(pFunction);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_BShutdownIfAllPipesClosed(lua_State* L) {
    int top = lua_gettop(L);


    bool r = client->BShutdownIfAllPipesClosed();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamHTTP(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamHTTP * r = client->GetISteamHTTP(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamHTTP *(L, r);

    // return class ISteamHTTP *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamController(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamController * r = client->GetISteamController(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamController *(L, r);

    // return class ISteamController *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamUGC(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamUGC * r = client->GetISteamUGC(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamUGC *(L, r);

    // return class ISteamUGC *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamAppList(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamUser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamAppList * r = client->GetISteamAppList(hSteamUser,hSteamPipe,pchVersion);

    push_class ISteamAppList *(L, r);

    // return class ISteamAppList *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamMusic(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamMusic * r = client->GetISteamMusic(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamMusic *(L, r);

    // return class ISteamMusic *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamMusicRemote(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamMusicRemote * r = client->GetISteamMusicRemote(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamMusicRemote *(L, r);

    // return class ISteamMusicRemote *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamHTMLSurface(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamHTMLSurface * r = client->GetISteamHTMLSurface(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamHTMLSurface *(L, r);

    // return class ISteamHTMLSurface *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamInventory(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamInventory * r = client->GetISteamInventory(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamInventory *(L, r);

    // return class ISteamInventory *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamVideo(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamVideo * r = client->GetISteamVideo(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamVideo *(L, r);

    // return class ISteamVideo *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamClient_GetISteamParentalSettings(lua_State* L) {
    int top = lua_gettop(L);

    HSteamUser hSteamuser = check_HSteamUser(L, 1);
    HSteamPipe hSteamPipe = check_HSteamPipe(L, 2);
    const char * pchVersion = check_const_char_ptr(L, 3);

    class ISteamParentalSettings * r = client->GetISteamParentalSettings(hSteamuser,hSteamPipe,pchVersion);

    push_class ISteamParentalSettings *(L, r);

    // return class ISteamParentalSettings *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetHSteamUser(lua_State* L) {
    int top = lua_gettop(L);


    HSteamUser r = user->GetHSteamUser();

    push_HSteamUser(L, r);

    // return HSteamUser
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_BLoggedOn(lua_State* L) {
    int top = lua_gettop(L);


    bool r = user->BLoggedOn();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetSteamID(lua_State* L) {
    int top = lua_gettop(L);


    class CSteamID r = user->GetSteamID();

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_InitiateGameConnection(lua_State* L) {
    int top = lua_gettop(L);

    void * pAuthBlob = check_void_ptr(L, 1);
    int cbMaxAuthBlob = check_int(L, 2);
    CSteamID * steamIDGameServer = check_class_CSteamID(L, 3);
    uint32 unIPServer = check_uint32(L, 4);
    uint16 usPortServer = check_uint16(L, 5);
    bool bSecure = check_bool(L, 6);

    int r = user->InitiateGameConnection(pAuthBlob,cbMaxAuthBlob,steamIDGameServer,unIPServer,usPortServer,bSecure);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_TerminateGameConnection(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unIPServer = check_uint32(L, 1);
    uint16 usPortServer = check_uint16(L, 2);

    void r = user->TerminateGameConnection(unIPServer,usPortServer);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_TrackAppUsageEvent(lua_State* L) {
    int top = lua_gettop(L);

    CGameID * gameID = check_class_CGameID(L, 1);
    int eAppUsageEvent = check_int(L, 2);
    const char * pchExtraInfo = check_const_char_ptr(L, 3);

    void r = user->TrackAppUsageEvent(gameID,eAppUsageEvent,pchExtraInfo);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetUserDataFolder(lua_State* L) {
    int top = lua_gettop(L);

    char * pchBuffer = check_char_ptr(L, 1);
    int cubBuffer = check_int(L, 2);

    bool r = user->GetUserDataFolder(pchBuffer,cubBuffer);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_StartVoiceRecording(lua_State* L) {
    int top = lua_gettop(L);


    void r = user->StartVoiceRecording();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_StopVoiceRecording(lua_State* L) {
    int top = lua_gettop(L);


    void r = user->StopVoiceRecording();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetAvailableVoice(lua_State* L) {
    int top = lua_gettop(L);

    uint32 * pcbCompressed = check_uint32_ptr(L, 1);
    uint32 * pcbUncompressed_Deprecated = check_uint32_ptr(L, 2);
    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated = check_uint32(L, 3);

    EVoiceResult r = user->GetAvailableVoice(pcbCompressed,pcbUncompressed_Deprecated,nUncompressedVoiceDesiredSampleRate_Deprecated);

    push_EVoiceResult(L, r);

    // return EVoiceResult
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetVoice(lua_State* L) {
    int top = lua_gettop(L);

    bool bWantCompressed = check_bool(L, 1);
    void * pDestBuffer = check_void_ptr(L, 2);
    uint32 cbDestBufferSize = check_uint32(L, 3);
    uint32 * nBytesWritten = check_uint32_ptr(L, 4);
    bool bWantUncompressed_Deprecated = check_bool(L, 5);
    void * pUncompressedDestBuffer_Deprecated = check_void_ptr(L, 6);
    uint32 cbUncompressedDestBufferSize_Deprecated = check_uint32(L, 7);
    uint32 * nUncompressBytesWritten_Deprecated = check_uint32_ptr(L, 8);
    uint32 nUncompressedVoiceDesiredSampleRate_Deprecated = check_uint32(L, 9);

    EVoiceResult r = user->GetVoice(bWantCompressed,pDestBuffer,cbDestBufferSize,nBytesWritten,bWantUncompressed_Deprecated,pUncompressedDestBuffer_Deprecated,cbUncompressedDestBufferSize_Deprecated,nUncompressBytesWritten_Deprecated,nUncompressedVoiceDesiredSampleRate_Deprecated);

    push_EVoiceResult(L, r);

    // return EVoiceResult
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_DecompressVoice(lua_State* L) {
    int top = lua_gettop(L);

    const void * pCompressed = check_const_void_ptr(L, 1);
    uint32 cbCompressed = check_uint32(L, 2);
    void * pDestBuffer = check_void_ptr(L, 3);
    uint32 cbDestBufferSize = check_uint32(L, 4);
    uint32 * nBytesWritten = check_uint32_ptr(L, 5);
    uint32 nDesiredSampleRate = check_uint32(L, 6);

    EVoiceResult r = user->DecompressVoice(pCompressed,cbCompressed,pDestBuffer,cbDestBufferSize,nBytesWritten,nDesiredSampleRate);

    push_EVoiceResult(L, r);

    // return EVoiceResult
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetVoiceOptimalSampleRate(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = user->GetVoiceOptimalSampleRate();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetAuthSessionTicket(lua_State* L) {
    int top = lua_gettop(L);

    void * pTicket = check_void_ptr(L, 1);
    int cbMaxTicket = check_int(L, 2);
    uint32 * pcbTicket = check_uint32_ptr(L, 3);

    HAuthTicket r = user->GetAuthSessionTicket(pTicket,cbMaxTicket,pcbTicket);

    push_HAuthTicket(L, r);

    // return HAuthTicket
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_BeginAuthSession(lua_State* L) {
    int top = lua_gettop(L);

    const void * pAuthTicket = check_const_void_ptr(L, 1);
    int cbAuthTicket = check_int(L, 2);
    CSteamID * steamID = check_class_CSteamID(L, 3);

    EBeginAuthSessionResult r = user->BeginAuthSession(pAuthTicket,cbAuthTicket,steamID);

    push_EBeginAuthSessionResult(L, r);

    // return EBeginAuthSessionResult
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_EndAuthSession(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamID = check_class_CSteamID(L, 1);

    void r = user->EndAuthSession(steamID);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_CancelAuthTicket(lua_State* L) {
    int top = lua_gettop(L);

    HAuthTicket hAuthTicket = check_HAuthTicket(L, 1);

    void r = user->CancelAuthTicket(hAuthTicket);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_UserHasLicenseForApp(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamID = check_class_CSteamID(L, 1);
    AppId_t appID = check_AppId_t(L, 2);

    EUserHasLicenseForAppResult r = user->UserHasLicenseForApp(steamID,appID);

    push_EUserHasLicenseForAppResult(L, r);

    // return EUserHasLicenseForAppResult
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_BIsBehindNAT(lua_State* L) {
    int top = lua_gettop(L);


    bool r = user->BIsBehindNAT();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_AdvertiseGame(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDGameServer = check_class_CSteamID(L, 1);
    uint32 unIPServer = check_uint32(L, 2);
    uint16 usPortServer = check_uint16(L, 3);

    void r = user->AdvertiseGame(steamIDGameServer,unIPServer,usPortServer);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_RequestEncryptedAppTicket(lua_State* L) {
    int top = lua_gettop(L);

    void * pDataToInclude = check_void_ptr(L, 1);
    int cbDataToInclude = check_int(L, 2);

    SteamAPICall_t r = user->RequestEncryptedAppTicket(pDataToInclude,cbDataToInclude);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetEncryptedAppTicket(lua_State* L) {
    int top = lua_gettop(L);

    void * pTicket = check_void_ptr(L, 1);
    int cbMaxTicket = check_int(L, 2);
    uint32 * pcbTicket = check_uint32_ptr(L, 3);

    bool r = user->GetEncryptedAppTicket(pTicket,cbMaxTicket,pcbTicket);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetGameBadgeLevel(lua_State* L) {
    int top = lua_gettop(L);

    int nSeries = check_int(L, 1);
    bool bFoil = check_bool(L, 2);

    int r = user->GetGameBadgeLevel(nSeries,bFoil);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_GetPlayerSteamLevel(lua_State* L) {
    int top = lua_gettop(L);


    int r = user->GetPlayerSteamLevel();

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_RequestStoreAuthURL(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchRedirectURL = check_const_char_ptr(L, 1);

    SteamAPICall_t r = user->RequestStoreAuthURL(pchRedirectURL);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_BIsPhoneVerified(lua_State* L) {
    int top = lua_gettop(L);


    bool r = user->BIsPhoneVerified();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_BIsTwoFactorEnabled(lua_State* L) {
    int top = lua_gettop(L);


    bool r = user->BIsTwoFactorEnabled();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_BIsPhoneIdentifying(lua_State* L) {
    int top = lua_gettop(L);


    bool r = user->BIsPhoneIdentifying();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUser_BIsPhoneRequiringVerification(lua_State* L) {
    int top = lua_gettop(L);


    bool r = user->BIsPhoneRequiringVerification();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetPersonaName(lua_State* L) {
    int top = lua_gettop(L);


    const char * r = friends->GetPersonaName();

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_SetPersonaName(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchPersonaName = check_const_char_ptr(L, 1);

    SteamAPICall_t r = friends->SetPersonaName(pchPersonaName);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetPersonaState(lua_State* L) {
    int top = lua_gettop(L);


    EPersonaState r = friends->GetPersonaState();

    push_EPersonaState(L, r);

    // return EPersonaState
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendCount(lua_State* L) {
    int top = lua_gettop(L);

    int iFriendFlags = check_int(L, 1);

    int r = friends->GetFriendCount(iFriendFlags);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendByIndex(lua_State* L) {
    int top = lua_gettop(L);

    int iFriend = check_int(L, 1);
    int iFriendFlags = check_int(L, 2);

    class CSteamID r = friends->GetFriendByIndex(iFriend,iFriendFlags);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendRelationship(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    EFriendRelationship r = friends->GetFriendRelationship(steamIDFriend);

    push_EFriendRelationship(L, r);

    // return EFriendRelationship
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendPersonaState(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    EPersonaState r = friends->GetFriendPersonaState(steamIDFriend);

    push_EPersonaState(L, r);

    // return EPersonaState
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendPersonaName(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    const char * r = friends->GetFriendPersonaName(steamIDFriend);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendGamePlayed(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);
    struct FriendGameInfo_t * pFriendGameInfo = check_struct FriendGameInfo_t_ptr(L, 2);

    bool r = friends->GetFriendGamePlayed(steamIDFriend,pFriendGameInfo);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendPersonaNameHistory(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);
    int iPersonaName = check_int(L, 2);

    const char * r = friends->GetFriendPersonaNameHistory(steamIDFriend,iPersonaName);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendSteamLevel(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    int r = friends->GetFriendSteamLevel(steamIDFriend);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetPlayerNickname(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDPlayer = check_class_CSteamID(L, 1);

    const char * r = friends->GetPlayerNickname(steamIDPlayer);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendsGroupCount(lua_State* L) {
    int top = lua_gettop(L);


    int r = friends->GetFriendsGroupCount();

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendsGroupIDByIndex(lua_State* L) {
    int top = lua_gettop(L);

    int iFG = check_int(L, 1);

    FriendsGroupID_t r = friends->GetFriendsGroupIDByIndex(iFG);

    push_FriendsGroupID_t(L, r);

    // return FriendsGroupID_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendsGroupName(lua_State* L) {
    int top = lua_gettop(L);

    FriendsGroupID_t friendsGroupID = check_FriendsGroupID_t(L, 1);

    const char * r = friends->GetFriendsGroupName(friendsGroupID);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendsGroupMembersCount(lua_State* L) {
    int top = lua_gettop(L);

    FriendsGroupID_t friendsGroupID = check_FriendsGroupID_t(L, 1);

    int r = friends->GetFriendsGroupMembersCount(friendsGroupID);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendsGroupMembersList(lua_State* L) {
    int top = lua_gettop(L);

    FriendsGroupID_t friendsGroupID = check_FriendsGroupID_t(L, 1);
    CSteamID * * pOutSteamIDMembers = check_class_CSteamID_ptr(L, 2);
    int nMembersCount = check_int(L, 3);

    void r = friends->GetFriendsGroupMembersList(friendsGroupID,pOutSteamIDMembers,nMembersCount);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_HasFriend(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);
    int iFriendFlags = check_int(L, 2);

    bool r = friends->HasFriend(steamIDFriend,iFriendFlags);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanCount(lua_State* L) {
    int top = lua_gettop(L);


    int r = friends->GetClanCount();

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanByIndex(lua_State* L) {
    int top = lua_gettop(L);

    int iClan = check_int(L, 1);

    class CSteamID r = friends->GetClanByIndex(iClan);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanName(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    const char * r = friends->GetClanName(steamIDClan);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanTag(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    const char * r = friends->GetClanTag(steamIDClan);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanActivityCounts(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);
    int * pnOnline = check_int_ptr(L, 2);
    int * pnInGame = check_int_ptr(L, 3);
    int * pnChatting = check_int_ptr(L, 4);

    bool r = friends->GetClanActivityCounts(steamIDClan,pnOnline,pnInGame,pnChatting);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_DownloadClanActivityCounts(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * * psteamIDClans = check_class_CSteamID_ptr(L, 1);
    int cClansToRequest = check_int(L, 2);

    SteamAPICall_t r = friends->DownloadClanActivityCounts(psteamIDClans,cClansToRequest);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendCountFromSource(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDSource = check_class_CSteamID(L, 1);

    int r = friends->GetFriendCountFromSource(steamIDSource);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendFromSourceByIndex(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDSource = check_class_CSteamID(L, 1);
    int iFriend = check_int(L, 2);

    class CSteamID r = friends->GetFriendFromSourceByIndex(steamIDSource,iFriend);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_IsUserInSource(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    CSteamID * steamIDSource = check_class_CSteamID(L, 2);

    bool r = friends->IsUserInSource(steamIDUser,steamIDSource);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_SetInGameVoiceSpeaking(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    bool bSpeaking = check_bool(L, 2);

    void r = friends->SetInGameVoiceSpeaking(steamIDUser,bSpeaking);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_ActivateGameOverlay(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchDialog = check_const_char_ptr(L, 1);

    void r = friends->ActivateGameOverlay(pchDialog);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_ActivateGameOverlayToUser(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchDialog = check_const_char_ptr(L, 1);
    CSteamID * steamID = check_class_CSteamID(L, 2);

    void r = friends->ActivateGameOverlayToUser(pchDialog,steamID);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_ActivateGameOverlayToWebPage(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchURL = check_const_char_ptr(L, 1);

    void r = friends->ActivateGameOverlayToWebPage(pchURL);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_ActivateGameOverlayToStore(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);
    EOverlayToStoreFlag eFlag = check_EOverlayToStoreFlag(L, 2);

    void r = friends->ActivateGameOverlayToStore(nAppID,eFlag);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_SetPlayedWith(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUserPlayedWith = check_class_CSteamID(L, 1);

    void r = friends->SetPlayedWith(steamIDUserPlayedWith);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_ActivateGameOverlayInviteDialog(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);

    void r = friends->ActivateGameOverlayInviteDialog(steamIDLobby);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetSmallFriendAvatar(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    int r = friends->GetSmallFriendAvatar(steamIDFriend);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetMediumFriendAvatar(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    int r = friends->GetMediumFriendAvatar(steamIDFriend);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetLargeFriendAvatar(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    int r = friends->GetLargeFriendAvatar(steamIDFriend);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_RequestUserInformation(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    bool bRequireNameOnly = check_bool(L, 2);

    bool r = friends->RequestUserInformation(steamIDUser,bRequireNameOnly);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_RequestClanOfficerList(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    SteamAPICall_t r = friends->RequestClanOfficerList(steamIDClan);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanOwner(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    class CSteamID r = friends->GetClanOwner(steamIDClan);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanOfficerCount(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    int r = friends->GetClanOfficerCount(steamIDClan);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanOfficerByIndex(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);
    int iOfficer = check_int(L, 2);

    class CSteamID r = friends->GetClanOfficerByIndex(steamIDClan,iOfficer);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetUserRestrictions(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = friends->GetUserRestrictions();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_SetRichPresence(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchKey = check_const_char_ptr(L, 1);
    const char * pchValue = check_const_char_ptr(L, 2);

    bool r = friends->SetRichPresence(pchKey,pchValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_ClearRichPresence(lua_State* L) {
    int top = lua_gettop(L);


    void r = friends->ClearRichPresence();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendRichPresence(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);

    const char * r = friends->GetFriendRichPresence(steamIDFriend,pchKey);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendRichPresenceKeyCount(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    int r = friends->GetFriendRichPresenceKeyCount(steamIDFriend);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendRichPresenceKeyByIndex(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);
    int iKey = check_int(L, 2);

    const char * r = friends->GetFriendRichPresenceKeyByIndex(steamIDFriend,iKey);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_RequestFriendRichPresence(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    void r = friends->RequestFriendRichPresence(steamIDFriend);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_InviteUserToGame(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);
    const char * pchConnectString = check_const_char_ptr(L, 2);

    bool r = friends->InviteUserToGame(steamIDFriend,pchConnectString);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetCoplayFriendCount(lua_State* L) {
    int top = lua_gettop(L);


    int r = friends->GetCoplayFriendCount();

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetCoplayFriend(lua_State* L) {
    int top = lua_gettop(L);

    int iCoplayFriend = check_int(L, 1);

    class CSteamID r = friends->GetCoplayFriend(iCoplayFriend);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendCoplayTime(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    int r = friends->GetFriendCoplayTime(steamIDFriend);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendCoplayGame(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);

    AppId_t r = friends->GetFriendCoplayGame(steamIDFriend);

    push_AppId_t(L, r);

    // return AppId_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_JoinClanChatRoom(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    SteamAPICall_t r = friends->JoinClanChatRoom(steamIDClan);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_LeaveClanChatRoom(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    bool r = friends->LeaveClanChatRoom(steamIDClan);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanChatMemberCount(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    int r = friends->GetClanChatMemberCount(steamIDClan);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetChatMemberByIndex(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);
    int iUser = check_int(L, 2);

    class CSteamID r = friends->GetChatMemberByIndex(steamIDClan,iUser);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_SendClanChatMessage(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClanChat = check_class_CSteamID(L, 1);
    const char * pchText = check_const_char_ptr(L, 2);

    bool r = friends->SendClanChatMessage(steamIDClanChat,pchText);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetClanChatMessage(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClanChat = check_class_CSteamID(L, 1);
    int iMessage = check_int(L, 2);
    void * prgchText = check_void_ptr(L, 3);
    int cchTextMax = check_int(L, 4);
    EChatEntryType * peChatEntryType = check_EChatEntryType_ptr(L, 5);
    CSteamID * * psteamidChatter = check_class_CSteamID_ptr(L, 6);

    int r = friends->GetClanChatMessage(steamIDClanChat,iMessage,prgchText,cchTextMax,peChatEntryType,psteamidChatter);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_IsClanChatAdmin(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClanChat = check_class_CSteamID(L, 1);
    CSteamID * steamIDUser = check_class_CSteamID(L, 2);

    bool r = friends->IsClanChatAdmin(steamIDClanChat,steamIDUser);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_IsClanChatWindowOpenInSteam(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClanChat = check_class_CSteamID(L, 1);

    bool r = friends->IsClanChatWindowOpenInSteam(steamIDClanChat);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_OpenClanChatWindowInSteam(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClanChat = check_class_CSteamID(L, 1);

    bool r = friends->OpenClanChatWindowInSteam(steamIDClanChat);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_CloseClanChatWindowInSteam(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClanChat = check_class_CSteamID(L, 1);

    bool r = friends->CloseClanChatWindowInSteam(steamIDClanChat);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_SetListenForFriendsMessages(lua_State* L) {
    int top = lua_gettop(L);

    bool bInterceptEnabled = check_bool(L, 1);

    bool r = friends->SetListenForFriendsMessages(bInterceptEnabled);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_ReplyToFriendMessage(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);
    const char * pchMsgToSend = check_const_char_ptr(L, 2);

    bool r = friends->ReplyToFriendMessage(steamIDFriend,pchMsgToSend);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFriendMessage(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDFriend = check_class_CSteamID(L, 1);
    int iMessageID = check_int(L, 2);
    void * pvData = check_void_ptr(L, 3);
    int cubData = check_int(L, 4);
    EChatEntryType * peChatEntryType = check_EChatEntryType_ptr(L, 5);

    int r = friends->GetFriendMessage(steamIDFriend,iMessageID,pvData,cubData,peChatEntryType);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_GetFollowerCount(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamID = check_class_CSteamID(L, 1);

    SteamAPICall_t r = friends->GetFollowerCount(steamID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_IsFollowing(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamID = check_class_CSteamID(L, 1);

    SteamAPICall_t r = friends->IsFollowing(steamID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_EnumerateFollowingList(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unStartIndex = check_uint32(L, 1);

    SteamAPICall_t r = friends->EnumerateFollowingList(unStartIndex);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_IsClanPublic(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    bool r = friends->IsClanPublic(steamIDClan);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamFriends_IsClanOfficialGameGroup(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    bool r = friends->IsClanOfficialGameGroup(steamIDClan);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetSecondsSinceAppActive(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = utils->GetSecondsSinceAppActive();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetSecondsSinceComputerActive(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = utils->GetSecondsSinceComputerActive();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetConnectedUniverse(lua_State* L) {
    int top = lua_gettop(L);


    EUniverse r = utils->GetConnectedUniverse();

    push_EUniverse(L, r);

    // return EUniverse
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetServerRealTime(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = utils->GetServerRealTime();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetIPCountry(lua_State* L) {
    int top = lua_gettop(L);


    const char * r = utils->GetIPCountry();

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetImageSize(lua_State* L) {
    int top = lua_gettop(L);

    int iImage = check_int(L, 1);
    uint32 * pnWidth = check_uint32_ptr(L, 2);
    uint32 * pnHeight = check_uint32_ptr(L, 3);

    bool r = utils->GetImageSize(iImage,pnWidth,pnHeight);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetImageRGBA(lua_State* L) {
    int top = lua_gettop(L);

    int iImage = check_int(L, 1);
    uint8 * pubDest = check_uint8_ptr(L, 2);
    int nDestBufferSize = check_int(L, 3);

    bool r = utils->GetImageRGBA(iImage,pubDest,nDestBufferSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetCSERIPPort(lua_State* L) {
    int top = lua_gettop(L);

    uint32 * unIP = check_uint32_ptr(L, 1);
    uint16 * usPort = check_uint16_ptr(L, 2);

    bool r = utils->GetCSERIPPort(unIP,usPort);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetCurrentBatteryPower(lua_State* L) {
    int top = lua_gettop(L);


    uint8 r = utils->GetCurrentBatteryPower();

    push_uint8(L, r);

    // return uint8
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetAppID(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = utils->GetAppID();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_SetOverlayNotificationPosition(lua_State* L) {
    int top = lua_gettop(L);

    ENotificationPosition eNotificationPosition = check_ENotificationPosition(L, 1);

    void r = utils->SetOverlayNotificationPosition(eNotificationPosition);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_IsAPICallCompleted(lua_State* L) {
    int top = lua_gettop(L);

    SteamAPICall_t hSteamAPICall = check_SteamAPICall_t(L, 1);
    bool * pbFailed = check_bool_ptr(L, 2);

    bool r = utils->IsAPICallCompleted(hSteamAPICall,pbFailed);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetAPICallFailureReason(lua_State* L) {
    int top = lua_gettop(L);

    SteamAPICall_t hSteamAPICall = check_SteamAPICall_t(L, 1);

    ESteamAPICallFailure r = utils->GetAPICallFailureReason(hSteamAPICall);

    push_ESteamAPICallFailure(L, r);

    // return ESteamAPICallFailure
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetAPICallResult(lua_State* L) {
    int top = lua_gettop(L);

    SteamAPICall_t hSteamAPICall = check_SteamAPICall_t(L, 1);
    void * pCallback = check_void_ptr(L, 2);
    int cubCallback = check_int(L, 3);
    int iCallbackExpected = check_int(L, 4);
    bool * pbFailed = check_bool_ptr(L, 5);

    bool r = utils->GetAPICallResult(hSteamAPICall,pCallback,cubCallback,iCallbackExpected,pbFailed);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetIPCCallCount(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = utils->GetIPCCallCount();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_SetWarningMessageHook(lua_State* L) {
    int top = lua_gettop(L);

    SteamAPIWarningMessageHook_t pFunction = check_SteamAPIWarningMessageHook_t(L, 1);

    void r = utils->SetWarningMessageHook(pFunction);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_IsOverlayEnabled(lua_State* L) {
    int top = lua_gettop(L);


    bool r = utils->IsOverlayEnabled();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_BOverlayNeedsPresent(lua_State* L) {
    int top = lua_gettop(L);


    bool r = utils->BOverlayNeedsPresent();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_CheckFileSignature(lua_State* L) {
    int top = lua_gettop(L);

    const char * szFileName = check_const_char_ptr(L, 1);

    SteamAPICall_t r = utils->CheckFileSignature(szFileName);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_ShowGamepadTextInput(lua_State* L) {
    int top = lua_gettop(L);

    EGamepadTextInputMode eInputMode = check_EGamepadTextInputMode(L, 1);
    EGamepadTextInputLineMode eLineInputMode = check_EGamepadTextInputLineMode(L, 2);
    const char * pchDescription = check_const_char_ptr(L, 3);
    uint32 unCharMax = check_uint32(L, 4);
    const char * pchExistingText = check_const_char_ptr(L, 5);

    bool r = utils->ShowGamepadTextInput(eInputMode,eLineInputMode,pchDescription,unCharMax,pchExistingText);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetEnteredGamepadTextLength(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = utils->GetEnteredGamepadTextLength();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetEnteredGamepadTextInput(lua_State* L) {
    int top = lua_gettop(L);

    char * pchText = check_char_ptr(L, 1);
    uint32 cchText = check_uint32(L, 2);

    bool r = utils->GetEnteredGamepadTextInput(pchText,cchText);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_GetSteamUILanguage(lua_State* L) {
    int top = lua_gettop(L);


    const char * r = utils->GetSteamUILanguage();

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_IsSteamRunningInVR(lua_State* L) {
    int top = lua_gettop(L);


    bool r = utils->IsSteamRunningInVR();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_SetOverlayNotificationInset(lua_State* L) {
    int top = lua_gettop(L);

    int nHorizontalInset = check_int(L, 1);
    int nVerticalInset = check_int(L, 2);

    void r = utils->SetOverlayNotificationInset(nHorizontalInset,nVerticalInset);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_IsSteamInBigPictureMode(lua_State* L) {
    int top = lua_gettop(L);


    bool r = utils->IsSteamInBigPictureMode();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_StartVRDashboard(lua_State* L) {
    int top = lua_gettop(L);


    void r = utils->StartVRDashboard();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_IsVRHeadsetStreamingEnabled(lua_State* L) {
    int top = lua_gettop(L);


    bool r = utils->IsVRHeadsetStreamingEnabled();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUtils_SetVRHeadsetStreamingEnabled(lua_State* L) {
    int top = lua_gettop(L);

    bool bEnabled = check_bool(L, 1);

    void r = utils->SetVRHeadsetStreamingEnabled(bEnabled);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetFavoriteGameCount(lua_State* L) {
    int top = lua_gettop(L);


    int r = matchmaking->GetFavoriteGameCount();

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetFavoriteGame(lua_State* L) {
    int top = lua_gettop(L);

    int iGame = check_int(L, 1);
    AppId_t * pnAppID = check_AppId_t_ptr(L, 2);
    uint32 * pnIP = check_uint32_ptr(L, 3);
    uint16 * pnConnPort = check_uint16_ptr(L, 4);
    uint16 * pnQueryPort = check_uint16_ptr(L, 5);
    uint32 * punFlags = check_uint32_ptr(L, 6);
    uint32 * pRTime32LastPlayedOnServer = check_uint32_ptr(L, 7);

    bool r = matchmaking->GetFavoriteGame(iGame,pnAppID,pnIP,pnConnPort,pnQueryPort,punFlags,pRTime32LastPlayedOnServer);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_AddFavoriteGame(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);
    uint32 nIP = check_uint32(L, 2);
    uint16 nConnPort = check_uint16(L, 3);
    uint16 nQueryPort = check_uint16(L, 4);
    uint32 unFlags = check_uint32(L, 5);
    uint32 rTime32LastPlayedOnServer = check_uint32(L, 6);

    int r = matchmaking->AddFavoriteGame(nAppID,nIP,nConnPort,nQueryPort,unFlags,rTime32LastPlayedOnServer);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_RemoveFavoriteGame(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);
    uint32 nIP = check_uint32(L, 2);
    uint16 nConnPort = check_uint16(L, 3);
    uint16 nQueryPort = check_uint16(L, 4);
    uint32 unFlags = check_uint32(L, 5);

    bool r = matchmaking->RemoveFavoriteGame(nAppID,nIP,nConnPort,nQueryPort,unFlags);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_RequestLobbyList(lua_State* L) {
    int top = lua_gettop(L);


    SteamAPICall_t r = matchmaking->RequestLobbyList();

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_AddRequestLobbyListStringFilter(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchKeyToMatch = check_const_char_ptr(L, 1);
    const char * pchValueToMatch = check_const_char_ptr(L, 2);
    ELobbyComparison eComparisonType = check_ELobbyComparison(L, 3);

    void r = matchmaking->AddRequestLobbyListStringFilter(pchKeyToMatch,pchValueToMatch,eComparisonType);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_AddRequestLobbyListNumericalFilter(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchKeyToMatch = check_const_char_ptr(L, 1);
    int nValueToMatch = check_int(L, 2);
    ELobbyComparison eComparisonType = check_ELobbyComparison(L, 3);

    void r = matchmaking->AddRequestLobbyListNumericalFilter(pchKeyToMatch,nValueToMatch,eComparisonType);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_AddRequestLobbyListNearValueFilter(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchKeyToMatch = check_const_char_ptr(L, 1);
    int nValueToBeCloseTo = check_int(L, 2);

    void r = matchmaking->AddRequestLobbyListNearValueFilter(pchKeyToMatch,nValueToBeCloseTo);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable(lua_State* L) {
    int top = lua_gettop(L);

    int nSlotsAvailable = check_int(L, 1);

    void r = matchmaking->AddRequestLobbyListFilterSlotsAvailable(nSlotsAvailable);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_AddRequestLobbyListDistanceFilter(lua_State* L) {
    int top = lua_gettop(L);

    ELobbyDistanceFilter eLobbyDistanceFilter = check_ELobbyDistanceFilter(L, 1);

    void r = matchmaking->AddRequestLobbyListDistanceFilter(eLobbyDistanceFilter);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_AddRequestLobbyListResultCountFilter(lua_State* L) {
    int top = lua_gettop(L);

    int cMaxResults = check_int(L, 1);

    void r = matchmaking->AddRequestLobbyListResultCountFilter(cMaxResults);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);

    void r = matchmaking->AddRequestLobbyListCompatibleMembersFilter(steamIDLobby);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyByIndex(lua_State* L) {
    int top = lua_gettop(L);

    int iLobby = check_int(L, 1);

    class CSteamID r = matchmaking->GetLobbyByIndex(iLobby);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_CreateLobby(lua_State* L) {
    int top = lua_gettop(L);

    ELobbyType eLobbyType = check_ELobbyType(L, 1);
    int cMaxMembers = check_int(L, 2);

    SteamAPICall_t r = matchmaking->CreateLobby(eLobbyType,cMaxMembers);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_JoinLobby(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);

    SteamAPICall_t r = matchmaking->JoinLobby(steamIDLobby);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_LeaveLobby(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);

    void r = matchmaking->LeaveLobby(steamIDLobby);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_InviteUserToLobby(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    CSteamID * steamIDInvitee = check_class_CSteamID(L, 2);

    bool r = matchmaking->InviteUserToLobby(steamIDLobby,steamIDInvitee);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetNumLobbyMembers(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);

    int r = matchmaking->GetNumLobbyMembers(steamIDLobby);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyMemberByIndex(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    int iMember = check_int(L, 2);

    class CSteamID r = matchmaking->GetLobbyMemberByIndex(steamIDLobby,iMember);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyData(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);

    const char * r = matchmaking->GetLobbyData(steamIDLobby,pchKey);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_SetLobbyData(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);
    const char * pchValue = check_const_char_ptr(L, 3);

    bool r = matchmaking->SetLobbyData(steamIDLobby,pchKey,pchValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyDataCount(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);

    int r = matchmaking->GetLobbyDataCount(steamIDLobby);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyDataByIndex(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    int iLobbyData = check_int(L, 2);
    char * pchKey = check_char_ptr(L, 3);
    int cchKeyBufferSize = check_int(L, 4);
    char * pchValue = check_char_ptr(L, 5);
    int cchValueBufferSize = check_int(L, 6);

    bool r = matchmaking->GetLobbyDataByIndex(steamIDLobby,iLobbyData,pchKey,cchKeyBufferSize,pchValue,cchValueBufferSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_DeleteLobbyData(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);

    bool r = matchmaking->DeleteLobbyData(steamIDLobby,pchKey);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyMemberData(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    CSteamID * steamIDUser = check_class_CSteamID(L, 2);
    const char * pchKey = check_const_char_ptr(L, 3);

    const char * r = matchmaking->GetLobbyMemberData(steamIDLobby,steamIDUser,pchKey);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_SetLobbyMemberData(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);
    const char * pchValue = check_const_char_ptr(L, 3);

    void r = matchmaking->SetLobbyMemberData(steamIDLobby,pchKey,pchValue);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_SendLobbyChatMsg(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    const void * pvMsgBody = check_const_void_ptr(L, 2);
    int cubMsgBody = check_int(L, 3);

    bool r = matchmaking->SendLobbyChatMsg(steamIDLobby,pvMsgBody,cubMsgBody);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyChatEntry(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    int iChatID = check_int(L, 2);
    CSteamID * * pSteamIDUser = check_class_CSteamID_ptr(L, 3);
    void * pvData = check_void_ptr(L, 4);
    int cubData = check_int(L, 5);
    EChatEntryType * peChatEntryType = check_EChatEntryType_ptr(L, 6);

    int r = matchmaking->GetLobbyChatEntry(steamIDLobby,iChatID,pSteamIDUser,pvData,cubData,peChatEntryType);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_RequestLobbyData(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);

    bool r = matchmaking->RequestLobbyData(steamIDLobby);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_SetLobbyGameServer(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    uint32 unGameServerIP = check_uint32(L, 2);
    uint16 unGameServerPort = check_uint16(L, 3);
    CSteamID * steamIDGameServer = check_class_CSteamID(L, 4);

    void r = matchmaking->SetLobbyGameServer(steamIDLobby,unGameServerIP,unGameServerPort,steamIDGameServer);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyGameServer(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    uint32 * punGameServerIP = check_uint32_ptr(L, 2);
    uint16 * punGameServerPort = check_uint16_ptr(L, 3);
    CSteamID * * psteamIDGameServer = check_class_CSteamID_ptr(L, 4);

    bool r = matchmaking->GetLobbyGameServer(steamIDLobby,punGameServerIP,punGameServerPort,psteamIDGameServer);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_SetLobbyMemberLimit(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    int cMaxMembers = check_int(L, 2);

    bool r = matchmaking->SetLobbyMemberLimit(steamIDLobby,cMaxMembers);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyMemberLimit(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);

    int r = matchmaking->GetLobbyMemberLimit(steamIDLobby);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_SetLobbyType(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    ELobbyType eLobbyType = check_ELobbyType(L, 2);

    bool r = matchmaking->SetLobbyType(steamIDLobby,eLobbyType);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_SetLobbyJoinable(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    bool bLobbyJoinable = check_bool(L, 2);

    bool r = matchmaking->SetLobbyJoinable(steamIDLobby,bLobbyJoinable);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_GetLobbyOwner(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);

    class CSteamID r = matchmaking->GetLobbyOwner(steamIDLobby);

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_SetLobbyOwner(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    CSteamID * steamIDNewOwner = check_class_CSteamID(L, 2);

    bool r = matchmaking->SetLobbyOwner(steamIDLobby,steamIDNewOwner);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmaking_SetLinkedLobby(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDLobby = check_class_CSteamID(L, 1);
    CSteamID * steamIDLobbyDependent = check_class_CSteamID(L, 2);

    bool r = matchmaking->SetLinkedLobby(steamIDLobby,steamIDLobbyDependent);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServerListResponse_ServerResponded(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hRequest = check_HServerListRequest(L, 1);
    int iServer = check_int(L, 2);

    void r = matchmaking_server_list_response->ServerResponded(hRequest,iServer);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServerListResponse_ServerFailedToRespond(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hRequest = check_HServerListRequest(L, 1);
    int iServer = check_int(L, 2);

    void r = matchmaking_server_list_response->ServerFailedToRespond(hRequest,iServer);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServerListResponse_RefreshComplete(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hRequest = check_HServerListRequest(L, 1);
    EMatchMakingServerResponse response = check_EMatchMakingServerResponse(L, 2);

    void r = matchmaking_server_list_response->RefreshComplete(hRequest,response);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingPingResponse_ServerResponded(lua_State* L) {
    int top = lua_gettop(L);

    gameserveritem_t &amp; * server = check_class_gameserveritem_t &amp;(L, 1);

    void r = matchmaking_ping_response->ServerResponded(server);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingPingResponse_ServerFailedToRespond(lua_State* L) {
    int top = lua_gettop(L);


    void r = matchmaking_ping_response->ServerFailedToRespond();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingPlayersResponse_AddPlayerToList(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    int nScore = check_int(L, 2);
    float flTimePlayed = check_float(L, 3);

    void r = matchmaking_players_response->AddPlayerToList(pchName,nScore,flTimePlayed);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingPlayersResponse_PlayersFailedToRespond(lua_State* L) {
    int top = lua_gettop(L);


    void r = matchmaking_players_response->PlayersFailedToRespond();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingPlayersResponse_PlayersRefreshComplete(lua_State* L) {
    int top = lua_gettop(L);


    void r = matchmaking_players_response->PlayersRefreshComplete();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingRulesResponse_RulesResponded(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchRule = check_const_char_ptr(L, 1);
    const char * pchValue = check_const_char_ptr(L, 2);

    void r = matchmaking_rules_response->RulesResponded(pchRule,pchValue);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingRulesResponse_RulesFailedToRespond(lua_State* L) {
    int top = lua_gettop(L);


    void r = matchmaking_rules_response->RulesFailedToRespond();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingRulesResponse_RulesRefreshComplete(lua_State* L) {
    int top = lua_gettop(L);


    void r = matchmaking_rules_response->RulesRefreshComplete();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_RequestInternetServerList(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t iApp = check_AppId_t(L, 1);
    struct MatchMakingKeyValuePair_t ** ppchFilters = check_struct MatchMakingKeyValuePair_t_ptr*(L, 2);
    uint32 nFilters = check_uint32(L, 3);
    ISteamMatchmakingServerListResponse * * pRequestServersResponse = check_class_ISteamMatchmakingServerListResponse_ptr(L, 4);

    HServerListRequest r = matchmaking_servers->RequestInternetServerList(iApp,ppchFilters,nFilters,pRequestServersResponse);

    push_HServerListRequest(L, r);

    // return HServerListRequest
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_RequestLANServerList(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t iApp = check_AppId_t(L, 1);
    ISteamMatchmakingServerListResponse * * pRequestServersResponse = check_class_ISteamMatchmakingServerListResponse_ptr(L, 2);

    HServerListRequest r = matchmaking_servers->RequestLANServerList(iApp,pRequestServersResponse);

    push_HServerListRequest(L, r);

    // return HServerListRequest
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_RequestFriendsServerList(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t iApp = check_AppId_t(L, 1);
    struct MatchMakingKeyValuePair_t ** ppchFilters = check_struct MatchMakingKeyValuePair_t_ptr*(L, 2);
    uint32 nFilters = check_uint32(L, 3);
    ISteamMatchmakingServerListResponse * * pRequestServersResponse = check_class_ISteamMatchmakingServerListResponse_ptr(L, 4);

    HServerListRequest r = matchmaking_servers->RequestFriendsServerList(iApp,ppchFilters,nFilters,pRequestServersResponse);

    push_HServerListRequest(L, r);

    // return HServerListRequest
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_RequestFavoritesServerList(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t iApp = check_AppId_t(L, 1);
    struct MatchMakingKeyValuePair_t ** ppchFilters = check_struct MatchMakingKeyValuePair_t_ptr*(L, 2);
    uint32 nFilters = check_uint32(L, 3);
    ISteamMatchmakingServerListResponse * * pRequestServersResponse = check_class_ISteamMatchmakingServerListResponse_ptr(L, 4);

    HServerListRequest r = matchmaking_servers->RequestFavoritesServerList(iApp,ppchFilters,nFilters,pRequestServersResponse);

    push_HServerListRequest(L, r);

    // return HServerListRequest
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_RequestHistoryServerList(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t iApp = check_AppId_t(L, 1);
    struct MatchMakingKeyValuePair_t ** ppchFilters = check_struct MatchMakingKeyValuePair_t_ptr*(L, 2);
    uint32 nFilters = check_uint32(L, 3);
    ISteamMatchmakingServerListResponse * * pRequestServersResponse = check_class_ISteamMatchmakingServerListResponse_ptr(L, 4);

    HServerListRequest r = matchmaking_servers->RequestHistoryServerList(iApp,ppchFilters,nFilters,pRequestServersResponse);

    push_HServerListRequest(L, r);

    // return HServerListRequest
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_RequestSpectatorServerList(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t iApp = check_AppId_t(L, 1);
    struct MatchMakingKeyValuePair_t ** ppchFilters = check_struct MatchMakingKeyValuePair_t_ptr*(L, 2);
    uint32 nFilters = check_uint32(L, 3);
    ISteamMatchmakingServerListResponse * * pRequestServersResponse = check_class_ISteamMatchmakingServerListResponse_ptr(L, 4);

    HServerListRequest r = matchmaking_servers->RequestSpectatorServerList(iApp,ppchFilters,nFilters,pRequestServersResponse);

    push_HServerListRequest(L, r);

    // return HServerListRequest
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_ReleaseRequest(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hServerListRequest = check_HServerListRequest(L, 1);

    void r = matchmaking_servers->ReleaseRequest(hServerListRequest);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_GetServerDetails(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hRequest = check_HServerListRequest(L, 1);
    int iServer = check_int(L, 2);

    class gameserveritem_t * r = matchmaking_servers->GetServerDetails(hRequest,iServer);

    push_class gameserveritem_t *(L, r);

    // return class gameserveritem_t *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_CancelQuery(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hRequest = check_HServerListRequest(L, 1);

    void r = matchmaking_servers->CancelQuery(hRequest);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_RefreshQuery(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hRequest = check_HServerListRequest(L, 1);

    void r = matchmaking_servers->RefreshQuery(hRequest);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_IsRefreshing(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hRequest = check_HServerListRequest(L, 1);

    bool r = matchmaking_servers->IsRefreshing(hRequest);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_GetServerCount(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hRequest = check_HServerListRequest(L, 1);

    int r = matchmaking_servers->GetServerCount(hRequest);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_RefreshServer(lua_State* L) {
    int top = lua_gettop(L);

    HServerListRequest hRequest = check_HServerListRequest(L, 1);
    int iServer = check_int(L, 2);

    void r = matchmaking_servers->RefreshServer(hRequest,iServer);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_PingServer(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unIP = check_uint32(L, 1);
    uint16 usPort = check_uint16(L, 2);
    ISteamMatchmakingPingResponse * * pRequestServersResponse = check_class_ISteamMatchmakingPingResponse_ptr(L, 3);

    HServerQuery r = matchmaking_servers->PingServer(unIP,usPort,pRequestServersResponse);

    push_HServerQuery(L, r);

    // return HServerQuery
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_PlayerDetails(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unIP = check_uint32(L, 1);
    uint16 usPort = check_uint16(L, 2);
    ISteamMatchmakingPlayersResponse * * pRequestServersResponse = check_class_ISteamMatchmakingPlayersResponse_ptr(L, 3);

    HServerQuery r = matchmaking_servers->PlayerDetails(unIP,usPort,pRequestServersResponse);

    push_HServerQuery(L, r);

    // return HServerQuery
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_ServerRules(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unIP = check_uint32(L, 1);
    uint16 usPort = check_uint16(L, 2);
    ISteamMatchmakingRulesResponse * * pRequestServersResponse = check_class_ISteamMatchmakingRulesResponse_ptr(L, 3);

    HServerQuery r = matchmaking_servers->ServerRules(unIP,usPort,pRequestServersResponse);

    push_HServerQuery(L, r);

    // return HServerQuery
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMatchmakingServers_CancelServerQuery(lua_State* L) {
    int top = lua_gettop(L);

    HServerQuery hServerQuery = check_HServerQuery(L, 1);

    void r = matchmaking_servers->CancelServerQuery(hServerQuery);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileWrite(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);
    const void * pvData = check_const_void_ptr(L, 2);
    int32 cubData = check_int32(L, 3);

    bool r = remote_storage->FileWrite(pchFile,pvData,cubData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileRead(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);
    void * pvData = check_void_ptr(L, 2);
    int32 cubDataToRead = check_int32(L, 3);

    int32 r = remote_storage->FileRead(pchFile,pvData,cubDataToRead);

    push_int32(L, r);

    // return int32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileWriteAsync(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);
    const void * pvData = check_const_void_ptr(L, 2);
    uint32 cubData = check_uint32(L, 3);

    SteamAPICall_t r = remote_storage->FileWriteAsync(pchFile,pvData,cubData);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileReadAsync(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);
    uint32 nOffset = check_uint32(L, 2);
    uint32 cubToRead = check_uint32(L, 3);

    SteamAPICall_t r = remote_storage->FileReadAsync(pchFile,nOffset,cubToRead);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileReadAsyncComplete(lua_State* L) {
    int top = lua_gettop(L);

    SteamAPICall_t hReadCall = check_SteamAPICall_t(L, 1);
    void * pvBuffer = check_void_ptr(L, 2);
    uint32 cubToRead = check_uint32(L, 3);

    bool r = remote_storage->FileReadAsyncComplete(hReadCall,pvBuffer,cubToRead);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileForget(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);

    bool r = remote_storage->FileForget(pchFile);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileDelete(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);

    bool r = remote_storage->FileDelete(pchFile);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileShare(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);

    SteamAPICall_t r = remote_storage->FileShare(pchFile);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_SetSyncPlatforms(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);
    ERemoteStoragePlatform eRemoteStoragePlatform = check_ERemoteStoragePlatform(L, 2);

    bool r = remote_storage->SetSyncPlatforms(pchFile,eRemoteStoragePlatform);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileWriteStreamOpen(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);

    UGCFileWriteStreamHandle_t r = remote_storage->FileWriteStreamOpen(pchFile);

    push_UGCFileWriteStreamHandle_t(L, r);

    // return UGCFileWriteStreamHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileWriteStreamWriteChunk(lua_State* L) {
    int top = lua_gettop(L);

    UGCFileWriteStreamHandle_t writeHandle = check_UGCFileWriteStreamHandle_t(L, 1);
    const void * pvData = check_const_void_ptr(L, 2);
    int32 cubData = check_int32(L, 3);

    bool r = remote_storage->FileWriteStreamWriteChunk(writeHandle,pvData,cubData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileWriteStreamClose(lua_State* L) {
    int top = lua_gettop(L);

    UGCFileWriteStreamHandle_t writeHandle = check_UGCFileWriteStreamHandle_t(L, 1);

    bool r = remote_storage->FileWriteStreamClose(writeHandle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileWriteStreamCancel(lua_State* L) {
    int top = lua_gettop(L);

    UGCFileWriteStreamHandle_t writeHandle = check_UGCFileWriteStreamHandle_t(L, 1);

    bool r = remote_storage->FileWriteStreamCancel(writeHandle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FileExists(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);

    bool r = remote_storage->FileExists(pchFile);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_FilePersisted(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);

    bool r = remote_storage->FilePersisted(pchFile);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetFileSize(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);

    int32 r = remote_storage->GetFileSize(pchFile);

    push_int32(L, r);

    // return int32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetFileTimestamp(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);

    int64 r = remote_storage->GetFileTimestamp(pchFile);

    push_int64(L, r);

    // return int64
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetSyncPlatforms(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);

    ERemoteStoragePlatform r = remote_storage->GetSyncPlatforms(pchFile);

    push_ERemoteStoragePlatform(L, r);

    // return ERemoteStoragePlatform
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetFileCount(lua_State* L) {
    int top = lua_gettop(L);


    int32 r = remote_storage->GetFileCount();

    push_int32(L, r);

    // return int32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetFileNameAndSize(lua_State* L) {
    int top = lua_gettop(L);

    int iFile = check_int(L, 1);
    int32 * pnFileSizeInBytes = check_int32_ptr(L, 2);

    const char * r = remote_storage->GetFileNameAndSize(iFile,pnFileSizeInBytes);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetQuota(lua_State* L) {
    int top = lua_gettop(L);

    uint64 * pnTotalBytes = check_uint64_ptr(L, 1);
    uint64 * puAvailableBytes = check_uint64_ptr(L, 2);

    bool r = remote_storage->GetQuota(pnTotalBytes,puAvailableBytes);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_IsCloudEnabledForAccount(lua_State* L) {
    int top = lua_gettop(L);


    bool r = remote_storage->IsCloudEnabledForAccount();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_IsCloudEnabledForApp(lua_State* L) {
    int top = lua_gettop(L);


    bool r = remote_storage->IsCloudEnabledForApp();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_SetCloudEnabledForApp(lua_State* L) {
    int top = lua_gettop(L);

    bool bEnabled = check_bool(L, 1);

    void r = remote_storage->SetCloudEnabledForApp(bEnabled);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UGCDownload(lua_State* L) {
    int top = lua_gettop(L);

    UGCHandle_t hContent = check_UGCHandle_t(L, 1);
    uint32 unPriority = check_uint32(L, 2);

    SteamAPICall_t r = remote_storage->UGCDownload(hContent,unPriority);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetUGCDownloadProgress(lua_State* L) {
    int top = lua_gettop(L);

    UGCHandle_t hContent = check_UGCHandle_t(L, 1);
    int32 * pnBytesDownloaded = check_int32_ptr(L, 2);
    int32 * pnBytesExpected = check_int32_ptr(L, 3);

    bool r = remote_storage->GetUGCDownloadProgress(hContent,pnBytesDownloaded,pnBytesExpected);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetUGCDetails(lua_State* L) {
    int top = lua_gettop(L);

    UGCHandle_t hContent = check_UGCHandle_t(L, 1);
    AppId_t * pnAppID = check_AppId_t_ptr(L, 2);
    char ** ppchName = check_char_ptr*(L, 3);
    int32 * pnFileSizeInBytes = check_int32_ptr(L, 4);
    CSteamID * * pSteamIDOwner = check_class_CSteamID_ptr(L, 5);

    bool r = remote_storage->GetUGCDetails(hContent,pnAppID,ppchName,pnFileSizeInBytes,pSteamIDOwner);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UGCRead(lua_State* L) {
    int top = lua_gettop(L);

    UGCHandle_t hContent = check_UGCHandle_t(L, 1);
    void * pvData = check_void_ptr(L, 2);
    int32 cubDataToRead = check_int32(L, 3);
    uint32 cOffset = check_uint32(L, 4);
    EUGCReadAction eAction = check_EUGCReadAction(L, 5);

    int32 r = remote_storage->UGCRead(hContent,pvData,cubDataToRead,cOffset,eAction);

    push_int32(L, r);

    // return int32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetCachedUGCCount(lua_State* L) {
    int top = lua_gettop(L);


    int32 r = remote_storage->GetCachedUGCCount();

    push_int32(L, r);

    // return int32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetCachedUGCHandle(lua_State* L) {
    int top = lua_gettop(L);

    int32 iCachedContent = check_int32(L, 1);

    UGCHandle_t r = remote_storage->GetCachedUGCHandle(iCachedContent);

    push_UGCHandle_t(L, r);

    // return UGCHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_PublishWorkshopFile(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFile = check_const_char_ptr(L, 1);
    const char * pchPreviewFile = check_const_char_ptr(L, 2);
    AppId_t nConsumerAppId = check_AppId_t(L, 3);
    const char * pchTitle = check_const_char_ptr(L, 4);
    const char * pchDescription = check_const_char_ptr(L, 5);
    ERemoteStoragePublishedFileVisibility eVisibility = check_ERemoteStoragePublishedFileVisibility(L, 6);
    struct SteamParamStringArray_t * pTags = check_struct SteamParamStringArray_t_ptr(L, 7);
    EWorkshopFileType eWorkshopFileType = check_EWorkshopFileType(L, 8);

    SteamAPICall_t r = remote_storage->PublishWorkshopFile(pchFile,pchPreviewFile,nConsumerAppId,pchTitle,pchDescription,eVisibility,pTags,eWorkshopFileType);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_CreatePublishedFileUpdateRequest(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1);

    PublishedFileUpdateHandle_t r = remote_storage->CreatePublishedFileUpdateRequest(unPublishedFileId);

    push_PublishedFileUpdateHandle_t(L, r);

    // return PublishedFileUpdateHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UpdatePublishedFileFile(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1);
    const char * pchFile = check_const_char_ptr(L, 2);

    bool r = remote_storage->UpdatePublishedFileFile(updateHandle,pchFile);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UpdatePublishedFilePreviewFile(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1);
    const char * pchPreviewFile = check_const_char_ptr(L, 2);

    bool r = remote_storage->UpdatePublishedFilePreviewFile(updateHandle,pchPreviewFile);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UpdatePublishedFileTitle(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1);
    const char * pchTitle = check_const_char_ptr(L, 2);

    bool r = remote_storage->UpdatePublishedFileTitle(updateHandle,pchTitle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UpdatePublishedFileDescription(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1);
    const char * pchDescription = check_const_char_ptr(L, 2);

    bool r = remote_storage->UpdatePublishedFileDescription(updateHandle,pchDescription);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UpdatePublishedFileVisibility(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1);
    ERemoteStoragePublishedFileVisibility eVisibility = check_ERemoteStoragePublishedFileVisibility(L, 2);

    bool r = remote_storage->UpdatePublishedFileVisibility(updateHandle,eVisibility);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UpdatePublishedFileTags(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1);
    struct SteamParamStringArray_t * pTags = check_struct SteamParamStringArray_t_ptr(L, 2);

    bool r = remote_storage->UpdatePublishedFileTags(updateHandle,pTags);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_CommitPublishedFileUpdate(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1);

    SteamAPICall_t r = remote_storage->CommitPublishedFileUpdate(updateHandle);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetPublishedFileDetails(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1);
    uint32 unMaxSecondsOld = check_uint32(L, 2);

    SteamAPICall_t r = remote_storage->GetPublishedFileDetails(unPublishedFileId,unMaxSecondsOld);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_DeletePublishedFile(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = remote_storage->DeletePublishedFile(unPublishedFileId);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_EnumerateUserPublishedFiles(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unStartIndex = check_uint32(L, 1);

    SteamAPICall_t r = remote_storage->EnumerateUserPublishedFiles(unStartIndex);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_SubscribePublishedFile(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = remote_storage->SubscribePublishedFile(unPublishedFileId);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_EnumerateUserSubscribedFiles(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unStartIndex = check_uint32(L, 1);

    SteamAPICall_t r = remote_storage->EnumerateUserSubscribedFiles(unStartIndex);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UnsubscribePublishedFile(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = remote_storage->UnsubscribePublishedFile(unPublishedFileId);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileUpdateHandle_t updateHandle = check_PublishedFileUpdateHandle_t(L, 1);
    const char * pchChangeDescription = check_const_char_ptr(L, 2);

    bool r = remote_storage->UpdatePublishedFileSetChangeDescription(updateHandle,pchChangeDescription);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetPublishedItemVoteDetails(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = remote_storage->GetPublishedItemVoteDetails(unPublishedFileId);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UpdateUserPublishedItemVote(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1);
    bool bVoteUp = check_bool(L, 2);

    SteamAPICall_t r = remote_storage->UpdateUserPublishedItemVote(unPublishedFileId,bVoteUp);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_GetUserPublishedItemVoteDetails(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = remote_storage->GetUserPublishedItemVoteDetails(unPublishedFileId);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamId = check_class_CSteamID(L, 1);
    uint32 unStartIndex = check_uint32(L, 2);
    struct SteamParamStringArray_t * pRequiredTags = check_struct SteamParamStringArray_t_ptr(L, 3);
    struct SteamParamStringArray_t * pExcludedTags = check_struct SteamParamStringArray_t_ptr(L, 4);

    SteamAPICall_t r = remote_storage->EnumerateUserSharedWorkshopFiles(steamId,unStartIndex,pRequiredTags,pExcludedTags);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_PublishVideo(lua_State* L) {
    int top = lua_gettop(L);

    EWorkshopVideoProvider eVideoProvider = check_EWorkshopVideoProvider(L, 1);
    const char * pchVideoAccount = check_const_char_ptr(L, 2);
    const char * pchVideoIdentifier = check_const_char_ptr(L, 3);
    const char * pchPreviewFile = check_const_char_ptr(L, 4);
    AppId_t nConsumerAppId = check_AppId_t(L, 5);
    const char * pchTitle = check_const_char_ptr(L, 6);
    const char * pchDescription = check_const_char_ptr(L, 7);
    ERemoteStoragePublishedFileVisibility eVisibility = check_ERemoteStoragePublishedFileVisibility(L, 8);
    struct SteamParamStringArray_t * pTags = check_struct SteamParamStringArray_t_ptr(L, 9);

    SteamAPICall_t r = remote_storage->PublishVideo(eVideoProvider,pchVideoAccount,pchVideoIdentifier,pchPreviewFile,nConsumerAppId,pchTitle,pchDescription,eVisibility,pTags);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_SetUserPublishedFileAction(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t unPublishedFileId = check_PublishedFileId_t(L, 1);
    EWorkshopFileAction eAction = check_EWorkshopFileAction(L, 2);

    SteamAPICall_t r = remote_storage->SetUserPublishedFileAction(unPublishedFileId,eAction);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_EnumeratePublishedFilesByUserAction(lua_State* L) {
    int top = lua_gettop(L);

    EWorkshopFileAction eAction = check_EWorkshopFileAction(L, 1);
    uint32 unStartIndex = check_uint32(L, 2);

    SteamAPICall_t r = remote_storage->EnumeratePublishedFilesByUserAction(eAction,unStartIndex);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_EnumeratePublishedWorkshopFiles(lua_State* L) {
    int top = lua_gettop(L);

    EWorkshopEnumerationType eEnumerationType = check_EWorkshopEnumerationType(L, 1);
    uint32 unStartIndex = check_uint32(L, 2);
    uint32 unCount = check_uint32(L, 3);
    uint32 unDays = check_uint32(L, 4);
    struct SteamParamStringArray_t * pTags = check_struct SteamParamStringArray_t_ptr(L, 5);
    struct SteamParamStringArray_t * pUserTags = check_struct SteamParamStringArray_t_ptr(L, 6);

    SteamAPICall_t r = remote_storage->EnumeratePublishedWorkshopFiles(eEnumerationType,unStartIndex,unCount,unDays,pTags,pUserTags);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamRemoteStorage_UGCDownloadToLocation(lua_State* L) {
    int top = lua_gettop(L);

    UGCHandle_t hContent = check_UGCHandle_t(L, 1);
    const char * pchLocation = check_const_char_ptr(L, 2);
    uint32 unPriority = check_uint32(L, 3);

    SteamAPICall_t r = remote_storage->UGCDownloadToLocation(hContent,pchLocation,unPriority);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_RequestCurrentStats(lua_State* L) {
    int top = lua_gettop(L);


    bool r = user_stats->RequestCurrentStats();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetStat(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    int32 * pData = check_int32_ptr(L, 2);

    bool r = user_stats->GetStat(pchName,pData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetStat(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    float * pData = check_float_ptr(L, 2);

    bool r = user_stats->GetStat(pchName,pData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_SetStat(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    int32 nData = check_int32(L, 2);

    bool r = user_stats->SetStat(pchName,nData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_SetStat(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    float fData = check_float(L, 2);

    bool r = user_stats->SetStat(pchName,fData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_UpdateAvgRateStat(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    float flCountThisSession = check_float(L, 2);
    double dSessionLength = check_double(L, 3);

    bool r = user_stats->UpdateAvgRateStat(pchName,flCountThisSession,dSessionLength);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetAchievement(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    bool * pbAchieved = check_bool_ptr(L, 2);

    bool r = user_stats->GetAchievement(pchName,pbAchieved);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_SetAchievement(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);

    bool r = user_stats->SetAchievement(pchName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_ClearAchievement(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);

    bool r = user_stats->ClearAchievement(pchName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetAchievementAndUnlockTime(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    bool * pbAchieved = check_bool_ptr(L, 2);
    uint32 * punUnlockTime = check_uint32_ptr(L, 3);

    bool r = user_stats->GetAchievementAndUnlockTime(pchName,pbAchieved,punUnlockTime);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_StoreStats(lua_State* L) {
    int top = lua_gettop(L);


    bool r = user_stats->StoreStats();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetAchievementIcon(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);

    int r = user_stats->GetAchievementIcon(pchName);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetAchievementDisplayAttribute(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);

    const char * r = user_stats->GetAchievementDisplayAttribute(pchName,pchKey);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_IndicateAchievementProgress(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    uint32 nCurProgress = check_uint32(L, 2);
    uint32 nMaxProgress = check_uint32(L, 3);

    bool r = user_stats->IndicateAchievementProgress(pchName,nCurProgress,nMaxProgress);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetNumAchievements(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = user_stats->GetNumAchievements();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetAchievementName(lua_State* L) {
    int top = lua_gettop(L);

    uint32 iAchievement = check_uint32(L, 1);

    const char * r = user_stats->GetAchievementName(iAchievement);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_RequestUserStats(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);

    SteamAPICall_t r = user_stats->RequestUserStats(steamIDUser);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetUserStat(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    int32 * pData = check_int32_ptr(L, 3);

    bool r = user_stats->GetUserStat(steamIDUser,pchName,pData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetUserStat(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    float * pData = check_float_ptr(L, 3);

    bool r = user_stats->GetUserStat(steamIDUser,pchName,pData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetUserAchievement(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    bool * pbAchieved = check_bool_ptr(L, 3);

    bool r = user_stats->GetUserAchievement(steamIDUser,pchName,pbAchieved);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetUserAchievementAndUnlockTime(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    bool * pbAchieved = check_bool_ptr(L, 3);
    uint32 * punUnlockTime = check_uint32_ptr(L, 4);

    bool r = user_stats->GetUserAchievementAndUnlockTime(steamIDUser,pchName,pbAchieved,punUnlockTime);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_ResetAllStats(lua_State* L) {
    int top = lua_gettop(L);

    bool bAchievementsToo = check_bool(L, 1);

    bool r = user_stats->ResetAllStats(bAchievementsToo);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_FindOrCreateLeaderboard(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchLeaderboardName = check_const_char_ptr(L, 1);
    ELeaderboardSortMethod eLeaderboardSortMethod = check_ELeaderboardSortMethod(L, 2);
    ELeaderboardDisplayType eLeaderboardDisplayType = check_ELeaderboardDisplayType(L, 3);

    SteamAPICall_t r = user_stats->FindOrCreateLeaderboard(pchLeaderboardName,eLeaderboardSortMethod,eLeaderboardDisplayType);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_FindLeaderboard(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchLeaderboardName = check_const_char_ptr(L, 1);

    SteamAPICall_t r = user_stats->FindLeaderboard(pchLeaderboardName);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetLeaderboardName(lua_State* L) {
    int top = lua_gettop(L);

    SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1);

    const char * r = user_stats->GetLeaderboardName(hSteamLeaderboard);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetLeaderboardEntryCount(lua_State* L) {
    int top = lua_gettop(L);

    SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1);

    int r = user_stats->GetLeaderboardEntryCount(hSteamLeaderboard);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetLeaderboardSortMethod(lua_State* L) {
    int top = lua_gettop(L);

    SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1);

    ELeaderboardSortMethod r = user_stats->GetLeaderboardSortMethod(hSteamLeaderboard);

    push_ELeaderboardSortMethod(L, r);

    // return ELeaderboardSortMethod
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetLeaderboardDisplayType(lua_State* L) {
    int top = lua_gettop(L);

    SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1);

    ELeaderboardDisplayType r = user_stats->GetLeaderboardDisplayType(hSteamLeaderboard);

    push_ELeaderboardDisplayType(L, r);

    // return ELeaderboardDisplayType
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_DownloadLeaderboardEntries(lua_State* L) {
    int top = lua_gettop(L);

    SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1);
    ELeaderboardDataRequest eLeaderboardDataRequest = check_ELeaderboardDataRequest(L, 2);
    int nRangeStart = check_int(L, 3);
    int nRangeEnd = check_int(L, 4);

    SteamAPICall_t r = user_stats->DownloadLeaderboardEntries(hSteamLeaderboard,eLeaderboardDataRequest,nRangeStart,nRangeEnd);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_DownloadLeaderboardEntriesForUsers(lua_State* L) {
    int top = lua_gettop(L);

    SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1);
    CSteamID * * prgUsers = check_class_CSteamID_ptr(L, 2);
    int cUsers = check_int(L, 3);

    SteamAPICall_t r = user_stats->DownloadLeaderboardEntriesForUsers(hSteamLeaderboard,prgUsers,cUsers);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetDownloadedLeaderboardEntry(lua_State* L) {
    int top = lua_gettop(L);

    SteamLeaderboardEntries_t hSteamLeaderboardEntries = check_SteamLeaderboardEntries_t(L, 1);
    int index = check_int(L, 2);
    struct LeaderboardEntry_t * pLeaderboardEntry = check_struct LeaderboardEntry_t_ptr(L, 3);
    int32 * pDetails = check_int32_ptr(L, 4);
    int cDetailsMax = check_int(L, 5);

    bool r = user_stats->GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries,index,pLeaderboardEntry,pDetails,cDetailsMax);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_UploadLeaderboardScore(lua_State* L) {
    int top = lua_gettop(L);

    SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1);
    ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod = check_ELeaderboardUploadScoreMethod(L, 2);
    int32 nScore = check_int32(L, 3);
    const int32 * pScoreDetails = check_const_int32_ptr(L, 4);
    int cScoreDetailsCount = check_int(L, 5);

    SteamAPICall_t r = user_stats->UploadLeaderboardScore(hSteamLeaderboard,eLeaderboardUploadScoreMethod,nScore,pScoreDetails,cScoreDetailsCount);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_AttachLeaderboardUGC(lua_State* L) {
    int top = lua_gettop(L);

    SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1);
    UGCHandle_t hUGC = check_UGCHandle_t(L, 2);

    SteamAPICall_t r = user_stats->AttachLeaderboardUGC(hSteamLeaderboard,hUGC);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetNumberOfCurrentPlayers(lua_State* L) {
    int top = lua_gettop(L);


    SteamAPICall_t r = user_stats->GetNumberOfCurrentPlayers();

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_RequestGlobalAchievementPercentages(lua_State* L) {
    int top = lua_gettop(L);


    SteamAPICall_t r = user_stats->RequestGlobalAchievementPercentages();

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetMostAchievedAchievementInfo(lua_State* L) {
    int top = lua_gettop(L);

    char * pchName = check_char_ptr(L, 1);
    uint32 unNameBufLen = check_uint32(L, 2);
    float * pflPercent = check_float_ptr(L, 3);
    bool * pbAchieved = check_bool_ptr(L, 4);

    int r = user_stats->GetMostAchievedAchievementInfo(pchName,unNameBufLen,pflPercent,pbAchieved);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetNextMostAchievedAchievementInfo(lua_State* L) {
    int top = lua_gettop(L);

    int iIteratorPrevious = check_int(L, 1);
    char * pchName = check_char_ptr(L, 2);
    uint32 unNameBufLen = check_uint32(L, 3);
    float * pflPercent = check_float_ptr(L, 4);
    bool * pbAchieved = check_bool_ptr(L, 5);

    int r = user_stats->GetNextMostAchievedAchievementInfo(iIteratorPrevious,pchName,unNameBufLen,pflPercent,pbAchieved);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetAchievementAchievedPercent(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);
    float * pflPercent = check_float_ptr(L, 2);

    bool r = user_stats->GetAchievementAchievedPercent(pchName,pflPercent);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_RequestGlobalStats(lua_State* L) {
    int top = lua_gettop(L);

    int nHistoryDays = check_int(L, 1);

    SteamAPICall_t r = user_stats->RequestGlobalStats(nHistoryDays);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetGlobalStat(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchStatName = check_const_char_ptr(L, 1);
    int64 * pData = check_int64_ptr(L, 2);

    bool r = user_stats->GetGlobalStat(pchStatName,pData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetGlobalStat(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchStatName = check_const_char_ptr(L, 1);
    double * pData = check_double_ptr(L, 2);

    bool r = user_stats->GetGlobalStat(pchStatName,pData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetGlobalStatHistory(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchStatName = check_const_char_ptr(L, 1);
    int64 * pData = check_int64_ptr(L, 2);
    uint32 cubData = check_uint32(L, 3);

    int32 r = user_stats->GetGlobalStatHistory(pchStatName,pData,cubData);

    push_int32(L, r);

    // return int32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUserStats_GetGlobalStatHistory(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchStatName = check_const_char_ptr(L, 1);
    double * pData = check_double_ptr(L, 2);
    uint32 cubData = check_uint32(L, 3);

    int32 r = user_stats->GetGlobalStatHistory(pchStatName,pData,cubData);

    push_int32(L, r);

    // return int32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_BIsSubscribed(lua_State* L) {
    int top = lua_gettop(L);


    bool r = apps->BIsSubscribed();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_BIsLowViolence(lua_State* L) {
    int top = lua_gettop(L);


    bool r = apps->BIsLowViolence();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_BIsCybercafe(lua_State* L) {
    int top = lua_gettop(L);


    bool r = apps->BIsCybercafe();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_BIsVACBanned(lua_State* L) {
    int top = lua_gettop(L);


    bool r = apps->BIsVACBanned();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetCurrentGameLanguage(lua_State* L) {
    int top = lua_gettop(L);


    const char * r = apps->GetCurrentGameLanguage();

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetAvailableGameLanguages(lua_State* L) {
    int top = lua_gettop(L);


    const char * r = apps->GetAvailableGameLanguages();

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_BIsSubscribedApp(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t appID = check_AppId_t(L, 1);

    bool r = apps->BIsSubscribedApp(appID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_BIsDlcInstalled(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t appID = check_AppId_t(L, 1);

    bool r = apps->BIsDlcInstalled(appID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetEarliestPurchaseUnixTime(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);

    uint32 r = apps->GetEarliestPurchaseUnixTime(nAppID);

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_BIsSubscribedFromFreeWeekend(lua_State* L) {
    int top = lua_gettop(L);


    bool r = apps->BIsSubscribedFromFreeWeekend();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetDLCCount(lua_State* L) {
    int top = lua_gettop(L);


    int r = apps->GetDLCCount();

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_BGetDLCDataByIndex(lua_State* L) {
    int top = lua_gettop(L);

    int iDLC = check_int(L, 1);
    AppId_t * pAppID = check_AppId_t_ptr(L, 2);
    bool * pbAvailable = check_bool_ptr(L, 3);
    char * pchName = check_char_ptr(L, 4);
    int cchNameBufferSize = check_int(L, 5);

    bool r = apps->BGetDLCDataByIndex(iDLC,pAppID,pbAvailable,pchName,cchNameBufferSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_InstallDLC(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);

    void r = apps->InstallDLC(nAppID);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_UninstallDLC(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);

    void r = apps->UninstallDLC(nAppID);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_RequestAppProofOfPurchaseKey(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);

    void r = apps->RequestAppProofOfPurchaseKey(nAppID);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetCurrentBetaName(lua_State* L) {
    int top = lua_gettop(L);

    char * pchName = check_char_ptr(L, 1);
    int cchNameBufferSize = check_int(L, 2);

    bool r = apps->GetCurrentBetaName(pchName,cchNameBufferSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_MarkContentCorrupt(lua_State* L) {
    int top = lua_gettop(L);

    bool bMissingFilesOnly = check_bool(L, 1);

    bool r = apps->MarkContentCorrupt(bMissingFilesOnly);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetInstalledDepots(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t appID = check_AppId_t(L, 1);
    DepotId_t * pvecDepots = check_DepotId_t_ptr(L, 2);
    uint32 cMaxDepots = check_uint32(L, 3);

    uint32 r = apps->GetInstalledDepots(appID,pvecDepots,cMaxDepots);

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetAppInstallDir(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t appID = check_AppId_t(L, 1);
    char * pchFolder = check_char_ptr(L, 2);
    uint32 cchFolderBufferSize = check_uint32(L, 3);

    uint32 r = apps->GetAppInstallDir(appID,pchFolder,cchFolderBufferSize);

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_BIsAppInstalled(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t appID = check_AppId_t(L, 1);

    bool r = apps->BIsAppInstalled(appID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetAppOwner(lua_State* L) {
    int top = lua_gettop(L);


    class CSteamID r = apps->GetAppOwner();

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetLaunchQueryParam(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchKey = check_const_char_ptr(L, 1);

    const char * r = apps->GetLaunchQueryParam(pchKey);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetDlcDownloadProgress(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);
    uint64 * punBytesDownloaded = check_uint64_ptr(L, 2);
    uint64 * punBytesTotal = check_uint64_ptr(L, 3);

    bool r = apps->GetDlcDownloadProgress(nAppID,punBytesDownloaded,punBytesTotal);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetAppBuildId(lua_State* L) {
    int top = lua_gettop(L);


    int r = apps->GetAppBuildId();

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_RequestAllProofOfPurchaseKeys(lua_State* L) {
    int top = lua_gettop(L);


    void r = apps->RequestAllProofOfPurchaseKeys();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamApps_GetFileDetails(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszFileName = check_const_char_ptr(L, 1);

    SteamAPICall_t r = apps->GetFileDetails(pszFileName);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_SendP2PPacket(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDRemote = check_class_CSteamID(L, 1);
    const void * pubData = check_const_void_ptr(L, 2);
    uint32 cubData = check_uint32(L, 3);
    EP2PSend eP2PSendType = check_EP2PSend(L, 4);
    int nChannel = check_int(L, 5);

    bool r = networking->SendP2PPacket(steamIDRemote,pubData,cubData,eP2PSendType,nChannel);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_IsP2PPacketAvailable(lua_State* L) {
    int top = lua_gettop(L);

    uint32 * pcubMsgSize = check_uint32_ptr(L, 1);
    int nChannel = check_int(L, 2);

    bool r = networking->IsP2PPacketAvailable(pcubMsgSize,nChannel);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_ReadP2PPacket(lua_State* L) {
    int top = lua_gettop(L);

    void * pubDest = check_void_ptr(L, 1);
    uint32 cubDest = check_uint32(L, 2);
    uint32 * pcubMsgSize = check_uint32_ptr(L, 3);
    CSteamID * * psteamIDRemote = check_class_CSteamID_ptr(L, 4);
    int nChannel = check_int(L, 5);

    bool r = networking->ReadP2PPacket(pubDest,cubDest,pcubMsgSize,psteamIDRemote,nChannel);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_AcceptP2PSessionWithUser(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDRemote = check_class_CSteamID(L, 1);

    bool r = networking->AcceptP2PSessionWithUser(steamIDRemote);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_CloseP2PSessionWithUser(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDRemote = check_class_CSteamID(L, 1);

    bool r = networking->CloseP2PSessionWithUser(steamIDRemote);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_CloseP2PChannelWithUser(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDRemote = check_class_CSteamID(L, 1);
    int nChannel = check_int(L, 2);

    bool r = networking->CloseP2PChannelWithUser(steamIDRemote,nChannel);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_GetP2PSessionState(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDRemote = check_class_CSteamID(L, 1);
    struct P2PSessionState_t * pConnectionState = check_struct P2PSessionState_t_ptr(L, 2);

    bool r = networking->GetP2PSessionState(steamIDRemote,pConnectionState);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_AllowP2PPacketRelay(lua_State* L) {
    int top = lua_gettop(L);

    bool bAllow = check_bool(L, 1);

    bool r = networking->AllowP2PPacketRelay(bAllow);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_CreateListenSocket(lua_State* L) {
    int top = lua_gettop(L);

    int nVirtualP2PPort = check_int(L, 1);
    uint32 nIP = check_uint32(L, 2);
    uint16 nPort = check_uint16(L, 3);
    bool bAllowUseOfPacketRelay = check_bool(L, 4);

    SNetListenSocket_t r = networking->CreateListenSocket(nVirtualP2PPort,nIP,nPort,bAllowUseOfPacketRelay);

    push_SNetListenSocket_t(L, r);

    // return SNetListenSocket_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_CreateP2PConnectionSocket(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDTarget = check_class_CSteamID(L, 1);
    int nVirtualPort = check_int(L, 2);
    int nTimeoutSec = check_int(L, 3);
    bool bAllowUseOfPacketRelay = check_bool(L, 4);

    SNetSocket_t r = networking->CreateP2PConnectionSocket(steamIDTarget,nVirtualPort,nTimeoutSec,bAllowUseOfPacketRelay);

    push_SNetSocket_t(L, r);

    // return SNetSocket_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_CreateConnectionSocket(lua_State* L) {
    int top = lua_gettop(L);

    uint32 nIP = check_uint32(L, 1);
    uint16 nPort = check_uint16(L, 2);
    int nTimeoutSec = check_int(L, 3);

    SNetSocket_t r = networking->CreateConnectionSocket(nIP,nPort,nTimeoutSec);

    push_SNetSocket_t(L, r);

    // return SNetSocket_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_DestroySocket(lua_State* L) {
    int top = lua_gettop(L);

    SNetSocket_t hSocket = check_SNetSocket_t(L, 1);
    bool bNotifyRemoteEnd = check_bool(L, 2);

    bool r = networking->DestroySocket(hSocket,bNotifyRemoteEnd);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_DestroyListenSocket(lua_State* L) {
    int top = lua_gettop(L);

    SNetListenSocket_t hSocket = check_SNetListenSocket_t(L, 1);
    bool bNotifyRemoteEnd = check_bool(L, 2);

    bool r = networking->DestroyListenSocket(hSocket,bNotifyRemoteEnd);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_SendDataOnSocket(lua_State* L) {
    int top = lua_gettop(L);

    SNetSocket_t hSocket = check_SNetSocket_t(L, 1);
    void * pubData = check_void_ptr(L, 2);
    uint32 cubData = check_uint32(L, 3);
    bool bReliable = check_bool(L, 4);

    bool r = networking->SendDataOnSocket(hSocket,pubData,cubData,bReliable);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_IsDataAvailableOnSocket(lua_State* L) {
    int top = lua_gettop(L);

    SNetSocket_t hSocket = check_SNetSocket_t(L, 1);
    uint32 * pcubMsgSize = check_uint32_ptr(L, 2);

    bool r = networking->IsDataAvailableOnSocket(hSocket,pcubMsgSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_RetrieveDataFromSocket(lua_State* L) {
    int top = lua_gettop(L);

    SNetSocket_t hSocket = check_SNetSocket_t(L, 1);
    void * pubDest = check_void_ptr(L, 2);
    uint32 cubDest = check_uint32(L, 3);
    uint32 * pcubMsgSize = check_uint32_ptr(L, 4);

    bool r = networking->RetrieveDataFromSocket(hSocket,pubDest,cubDest,pcubMsgSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_IsDataAvailable(lua_State* L) {
    int top = lua_gettop(L);

    SNetListenSocket_t hListenSocket = check_SNetListenSocket_t(L, 1);
    uint32 * pcubMsgSize = check_uint32_ptr(L, 2);
    SNetSocket_t * phSocket = check_SNetSocket_t_ptr(L, 3);

    bool r = networking->IsDataAvailable(hListenSocket,pcubMsgSize,phSocket);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_RetrieveData(lua_State* L) {
    int top = lua_gettop(L);

    SNetListenSocket_t hListenSocket = check_SNetListenSocket_t(L, 1);
    void * pubDest = check_void_ptr(L, 2);
    uint32 cubDest = check_uint32(L, 3);
    uint32 * pcubMsgSize = check_uint32_ptr(L, 4);
    SNetSocket_t * phSocket = check_SNetSocket_t_ptr(L, 5);

    bool r = networking->RetrieveData(hListenSocket,pubDest,cubDest,pcubMsgSize,phSocket);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_GetSocketInfo(lua_State* L) {
    int top = lua_gettop(L);

    SNetSocket_t hSocket = check_SNetSocket_t(L, 1);
    CSteamID * * pSteamIDRemote = check_class_CSteamID_ptr(L, 2);
    int * peSocketStatus = check_int_ptr(L, 3);
    uint32 * punIPRemote = check_uint32_ptr(L, 4);
    uint16 * punPortRemote = check_uint16_ptr(L, 5);

    bool r = networking->GetSocketInfo(hSocket,pSteamIDRemote,peSocketStatus,punIPRemote,punPortRemote);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_GetListenSocketInfo(lua_State* L) {
    int top = lua_gettop(L);

    SNetListenSocket_t hListenSocket = check_SNetListenSocket_t(L, 1);
    uint32 * pnIP = check_uint32_ptr(L, 2);
    uint16 * pnPort = check_uint16_ptr(L, 3);

    bool r = networking->GetListenSocketInfo(hListenSocket,pnIP,pnPort);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_GetSocketConnectionType(lua_State* L) {
    int top = lua_gettop(L);

    SNetSocket_t hSocket = check_SNetSocket_t(L, 1);

    ESNetSocketConnectionType r = networking->GetSocketConnectionType(hSocket);

    push_ESNetSocketConnectionType(L, r);

    // return ESNetSocketConnectionType
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamNetworking_GetMaxPacketSize(lua_State* L) {
    int top = lua_gettop(L);

    SNetSocket_t hSocket = check_SNetSocket_t(L, 1);

    int r = networking->GetMaxPacketSize(hSocket);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamScreenshots_WriteScreenshot(lua_State* L) {
    int top = lua_gettop(L);

    void * pubRGB = check_void_ptr(L, 1);
    uint32 cubRGB = check_uint32(L, 2);
    int nWidth = check_int(L, 3);
    int nHeight = check_int(L, 4);

    ScreenshotHandle r = screenshots->WriteScreenshot(pubRGB,cubRGB,nWidth,nHeight);

    push_ScreenshotHandle(L, r);

    // return ScreenshotHandle
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamScreenshots_AddScreenshotToLibrary(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchFilename = check_const_char_ptr(L, 1);
    const char * pchThumbnailFilename = check_const_char_ptr(L, 2);
    int nWidth = check_int(L, 3);
    int nHeight = check_int(L, 4);

    ScreenshotHandle r = screenshots->AddScreenshotToLibrary(pchFilename,pchThumbnailFilename,nWidth,nHeight);

    push_ScreenshotHandle(L, r);

    // return ScreenshotHandle
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamScreenshots_TriggerScreenshot(lua_State* L) {
    int top = lua_gettop(L);


    void r = screenshots->TriggerScreenshot();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamScreenshots_HookScreenshots(lua_State* L) {
    int top = lua_gettop(L);

    bool bHook = check_bool(L, 1);

    void r = screenshots->HookScreenshots(bHook);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamScreenshots_SetLocation(lua_State* L) {
    int top = lua_gettop(L);

    ScreenshotHandle hScreenshot = check_ScreenshotHandle(L, 1);
    const char * pchLocation = check_const_char_ptr(L, 2);

    bool r = screenshots->SetLocation(hScreenshot,pchLocation);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamScreenshots_TagUser(lua_State* L) {
    int top = lua_gettop(L);

    ScreenshotHandle hScreenshot = check_ScreenshotHandle(L, 1);
    CSteamID * steamID = check_class_CSteamID(L, 2);

    bool r = screenshots->TagUser(hScreenshot,steamID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamScreenshots_TagPublishedFile(lua_State* L) {
    int top = lua_gettop(L);

    ScreenshotHandle hScreenshot = check_ScreenshotHandle(L, 1);
    PublishedFileId_t unPublishedFileID = check_PublishedFileId_t(L, 2);

    bool r = screenshots->TagPublishedFile(hScreenshot,unPublishedFileID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamScreenshots_IsScreenshotsHooked(lua_State* L) {
    int top = lua_gettop(L);


    bool r = screenshots->IsScreenshotsHooked();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamScreenshots_AddVRScreenshotToLibrary(lua_State* L) {
    int top = lua_gettop(L);

    EVRScreenshotType eType = check_EVRScreenshotType(L, 1);
    const char * pchFilename = check_const_char_ptr(L, 2);
    const char * pchVRFilename = check_const_char_ptr(L, 3);

    ScreenshotHandle r = screenshots->AddVRScreenshotToLibrary(eType,pchFilename,pchVRFilename);

    push_ScreenshotHandle(L, r);

    // return ScreenshotHandle
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusic_BIsEnabled(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music->BIsEnabled();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusic_BIsPlaying(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music->BIsPlaying();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusic_GetPlaybackStatus(lua_State* L) {
    int top = lua_gettop(L);


    AudioPlayback_Status r = music->GetPlaybackStatus();

    push_AudioPlayback_Status(L, r);

    // return AudioPlayback_Status
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusic_Play(lua_State* L) {
    int top = lua_gettop(L);


    void r = music->Play();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusic_Pause(lua_State* L) {
    int top = lua_gettop(L);


    void r = music->Pause();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusic_PlayPrevious(lua_State* L) {
    int top = lua_gettop(L);


    void r = music->PlayPrevious();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusic_PlayNext(lua_State* L) {
    int top = lua_gettop(L);


    void r = music->PlayNext();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusic_SetVolume(lua_State* L) {
    int top = lua_gettop(L);

    float flVolume = check_float(L, 1);

    void r = music->SetVolume(flVolume);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusic_GetVolume(lua_State* L) {
    int top = lua_gettop(L);


    float r = music->GetVolume();

    push_float(L, r);

    // return float
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_RegisterSteamMusicRemote(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchName = check_const_char_ptr(L, 1);

    bool r = music_remote->RegisterSteamMusicRemote(pchName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_DeregisterSteamMusicRemote(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->DeregisterSteamMusicRemote();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_BIsCurrentMusicRemote(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->BIsCurrentMusicRemote();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_BActivationSuccess(lua_State* L) {
    int top = lua_gettop(L);

    bool bValue = check_bool(L, 1);

    bool r = music_remote->BActivationSuccess(bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_SetDisplayName(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchDisplayName = check_const_char_ptr(L, 1);

    bool r = music_remote->SetDisplayName(pchDisplayName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_SetPNGIcon_64x64(lua_State* L) {
    int top = lua_gettop(L);

    void * pvBuffer = check_void_ptr(L, 1);
    uint32 cbBufferLength = check_uint32(L, 2);

    bool r = music_remote->SetPNGIcon_64x64(pvBuffer,cbBufferLength);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_EnablePlayPrevious(lua_State* L) {
    int top = lua_gettop(L);

    bool bValue = check_bool(L, 1);

    bool r = music_remote->EnablePlayPrevious(bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_EnablePlayNext(lua_State* L) {
    int top = lua_gettop(L);

    bool bValue = check_bool(L, 1);

    bool r = music_remote->EnablePlayNext(bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_EnableShuffled(lua_State* L) {
    int top = lua_gettop(L);

    bool bValue = check_bool(L, 1);

    bool r = music_remote->EnableShuffled(bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_EnableLooped(lua_State* L) {
    int top = lua_gettop(L);

    bool bValue = check_bool(L, 1);

    bool r = music_remote->EnableLooped(bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_EnableQueue(lua_State* L) {
    int top = lua_gettop(L);

    bool bValue = check_bool(L, 1);

    bool r = music_remote->EnableQueue(bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_EnablePlaylists(lua_State* L) {
    int top = lua_gettop(L);

    bool bValue = check_bool(L, 1);

    bool r = music_remote->EnablePlaylists(bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_UpdatePlaybackStatus(lua_State* L) {
    int top = lua_gettop(L);

    AudioPlayback_Status nStatus = check_AudioPlayback_Status(L, 1);

    bool r = music_remote->UpdatePlaybackStatus(nStatus);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_UpdateShuffled(lua_State* L) {
    int top = lua_gettop(L);

    bool bValue = check_bool(L, 1);

    bool r = music_remote->UpdateShuffled(bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_UpdateLooped(lua_State* L) {
    int top = lua_gettop(L);

    bool bValue = check_bool(L, 1);

    bool r = music_remote->UpdateLooped(bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_UpdateVolume(lua_State* L) {
    int top = lua_gettop(L);

    float flValue = check_float(L, 1);

    bool r = music_remote->UpdateVolume(flValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_CurrentEntryWillChange(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->CurrentEntryWillChange();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_CurrentEntryIsAvailable(lua_State* L) {
    int top = lua_gettop(L);

    bool bAvailable = check_bool(L, 1);

    bool r = music_remote->CurrentEntryIsAvailable(bAvailable);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_UpdateCurrentEntryText(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchText = check_const_char_ptr(L, 1);

    bool r = music_remote->UpdateCurrentEntryText(pchText);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds(lua_State* L) {
    int top = lua_gettop(L);

    int nValue = check_int(L, 1);

    bool r = music_remote->UpdateCurrentEntryElapsedSeconds(nValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_UpdateCurrentEntryCoverArt(lua_State* L) {
    int top = lua_gettop(L);

    void * pvBuffer = check_void_ptr(L, 1);
    uint32 cbBufferLength = check_uint32(L, 2);

    bool r = music_remote->UpdateCurrentEntryCoverArt(pvBuffer,cbBufferLength);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_CurrentEntryDidChange(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->CurrentEntryDidChange();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_QueueWillChange(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->QueueWillChange();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_ResetQueueEntries(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->ResetQueueEntries();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_SetQueueEntry(lua_State* L) {
    int top = lua_gettop(L);

    int nID = check_int(L, 1);
    int nPosition = check_int(L, 2);
    const char * pchEntryText = check_const_char_ptr(L, 3);

    bool r = music_remote->SetQueueEntry(nID,nPosition,pchEntryText);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_SetCurrentQueueEntry(lua_State* L) {
    int top = lua_gettop(L);

    int nID = check_int(L, 1);

    bool r = music_remote->SetCurrentQueueEntry(nID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_QueueDidChange(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->QueueDidChange();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_PlaylistWillChange(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->PlaylistWillChange();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_ResetPlaylistEntries(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->ResetPlaylistEntries();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_SetPlaylistEntry(lua_State* L) {
    int top = lua_gettop(L);

    int nID = check_int(L, 1);
    int nPosition = check_int(L, 2);
    const char * pchEntryText = check_const_char_ptr(L, 3);

    bool r = music_remote->SetPlaylistEntry(nID,nPosition,pchEntryText);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_SetCurrentPlaylistEntry(lua_State* L) {
    int top = lua_gettop(L);

    int nID = check_int(L, 1);

    bool r = music_remote->SetCurrentPlaylistEntry(nID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamMusicRemote_PlaylistDidChange(lua_State* L) {
    int top = lua_gettop(L);


    bool r = music_remote->PlaylistDidChange();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_CreateHTTPRequest(lua_State* L) {
    int top = lua_gettop(L);

    EHTTPMethod eHTTPRequestMethod = check_EHTTPMethod(L, 1);
    const char * pchAbsoluteURL = check_const_char_ptr(L, 2);

    HTTPRequestHandle r = http->CreateHTTPRequest(eHTTPRequestMethod,pchAbsoluteURL);

    push_HTTPRequestHandle(L, r);

    // return HTTPRequestHandle
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetHTTPRequestContextValue(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    uint64 ulContextValue = check_uint64(L, 2);

    bool r = http->SetHTTPRequestContextValue(hRequest,ulContextValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetHTTPRequestNetworkActivityTimeout(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    uint32 unTimeoutSeconds = check_uint32(L, 2);

    bool r = http->SetHTTPRequestNetworkActivityTimeout(hRequest,unTimeoutSeconds);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetHTTPRequestHeaderValue(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    const char * pchHeaderName = check_const_char_ptr(L, 2);
    const char * pchHeaderValue = check_const_char_ptr(L, 3);

    bool r = http->SetHTTPRequestHeaderValue(hRequest,pchHeaderName,pchHeaderValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetHTTPRequestGetOrPostParameter(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    const char * pchParamName = check_const_char_ptr(L, 2);
    const char * pchParamValue = check_const_char_ptr(L, 3);

    bool r = http->SetHTTPRequestGetOrPostParameter(hRequest,pchParamName,pchParamValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SendHTTPRequest(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    SteamAPICall_t * pCallHandle = check_SteamAPICall_t_ptr(L, 2);

    bool r = http->SendHTTPRequest(hRequest,pCallHandle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SendHTTPRequestAndStreamResponse(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    SteamAPICall_t * pCallHandle = check_SteamAPICall_t_ptr(L, 2);

    bool r = http->SendHTTPRequestAndStreamResponse(hRequest,pCallHandle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_DeferHTTPRequest(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);

    bool r = http->DeferHTTPRequest(hRequest);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_PrioritizeHTTPRequest(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);

    bool r = http->PrioritizeHTTPRequest(hRequest);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_GetHTTPResponseHeaderSize(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    const char * pchHeaderName = check_const_char_ptr(L, 2);
    uint32 * unResponseHeaderSize = check_uint32_ptr(L, 3);

    bool r = http->GetHTTPResponseHeaderSize(hRequest,pchHeaderName,unResponseHeaderSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_GetHTTPResponseHeaderValue(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    const char * pchHeaderName = check_const_char_ptr(L, 2);
    uint8 * pHeaderValueBuffer = check_uint8_ptr(L, 3);
    uint32 unBufferSize = check_uint32(L, 4);

    bool r = http->GetHTTPResponseHeaderValue(hRequest,pchHeaderName,pHeaderValueBuffer,unBufferSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_GetHTTPResponseBodySize(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    uint32 * unBodySize = check_uint32_ptr(L, 2);

    bool r = http->GetHTTPResponseBodySize(hRequest,unBodySize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_GetHTTPResponseBodyData(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    uint8 * pBodyDataBuffer = check_uint8_ptr(L, 2);
    uint32 unBufferSize = check_uint32(L, 3);

    bool r = http->GetHTTPResponseBodyData(hRequest,pBodyDataBuffer,unBufferSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_GetHTTPStreamingResponseBodyData(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    uint32 cOffset = check_uint32(L, 2);
    uint8 * pBodyDataBuffer = check_uint8_ptr(L, 3);
    uint32 unBufferSize = check_uint32(L, 4);

    bool r = http->GetHTTPStreamingResponseBodyData(hRequest,cOffset,pBodyDataBuffer,unBufferSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_ReleaseHTTPRequest(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);

    bool r = http->ReleaseHTTPRequest(hRequest);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_GetHTTPDownloadProgressPct(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    float * pflPercentOut = check_float_ptr(L, 2);

    bool r = http->GetHTTPDownloadProgressPct(hRequest,pflPercentOut);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetHTTPRequestRawPostBody(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    const char * pchContentType = check_const_char_ptr(L, 2);
    uint8 * pubBody = check_uint8_ptr(L, 3);
    uint32 unBodyLen = check_uint32(L, 4);

    bool r = http->SetHTTPRequestRawPostBody(hRequest,pchContentType,pubBody,unBodyLen);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_CreateCookieContainer(lua_State* L) {
    int top = lua_gettop(L);

    bool bAllowResponsesToModify = check_bool(L, 1);

    HTTPCookieContainerHandle r = http->CreateCookieContainer(bAllowResponsesToModify);

    push_HTTPCookieContainerHandle(L, r);

    // return HTTPCookieContainerHandle
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_ReleaseCookieContainer(lua_State* L) {
    int top = lua_gettop(L);

    HTTPCookieContainerHandle hCookieContainer = check_HTTPCookieContainerHandle(L, 1);

    bool r = http->ReleaseCookieContainer(hCookieContainer);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetCookie(lua_State* L) {
    int top = lua_gettop(L);

    HTTPCookieContainerHandle hCookieContainer = check_HTTPCookieContainerHandle(L, 1);
    const char * pchHost = check_const_char_ptr(L, 2);
    const char * pchUrl = check_const_char_ptr(L, 3);
    const char * pchCookie = check_const_char_ptr(L, 4);

    bool r = http->SetCookie(hCookieContainer,pchHost,pchUrl,pchCookie);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetHTTPRequestCookieContainer(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    HTTPCookieContainerHandle hCookieContainer = check_HTTPCookieContainerHandle(L, 2);

    bool r = http->SetHTTPRequestCookieContainer(hRequest,hCookieContainer);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetHTTPRequestUserAgentInfo(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    const char * pchUserAgentInfo = check_const_char_ptr(L, 2);

    bool r = http->SetHTTPRequestUserAgentInfo(hRequest,pchUserAgentInfo);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    bool bRequireVerifiedCertificate = check_bool(L, 2);

    bool r = http->SetHTTPRequestRequiresVerifiedCertificate(hRequest,bRequireVerifiedCertificate);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    uint32 unMilliseconds = check_uint32(L, 2);

    bool r = http->SetHTTPRequestAbsoluteTimeoutMS(hRequest,unMilliseconds);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTTP_GetHTTPRequestWasTimedOut(lua_State* L) {
    int top = lua_gettop(L);

    HTTPRequestHandle hRequest = check_HTTPRequestHandle(L, 1);
    bool * pbWasTimedOut = check_bool_ptr(L, 2);

    bool r = http->GetHTTPRequestWasTimedOut(hRequest,pbWasTimedOut);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_Init(lua_State* L) {
    int top = lua_gettop(L);


    bool r = controller->Init();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_Shutdown(lua_State* L) {
    int top = lua_gettop(L);


    bool r = controller->Shutdown();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_RunFrame(lua_State* L) {
    int top = lua_gettop(L);


    void r = controller->RunFrame();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetConnectedControllers(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t * handlesOut = check_ControllerHandle_t_ptr(L, 1);

    int r = controller->GetConnectedControllers(handlesOut);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_ShowBindingPanel(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);

    bool r = controller->ShowBindingPanel(controllerHandle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetActionSetHandle(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszActionSetName = check_const_char_ptr(L, 1);

    ControllerActionSetHandle_t r = controller->GetActionSetHandle(pszActionSetName);

    push_ControllerActionSetHandle_t(L, r);

    // return ControllerActionSetHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_ActivateActionSet(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerActionSetHandle_t actionSetHandle = check_ControllerActionSetHandle_t(L, 2);

    void r = controller->ActivateActionSet(controllerHandle,actionSetHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetCurrentActionSet(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);

    ControllerActionSetHandle_t r = controller->GetCurrentActionSet(controllerHandle);

    push_ControllerActionSetHandle_t(L, r);

    // return ControllerActionSetHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_ActivateActionSetLayer(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerActionSetHandle_t actionSetLayerHandle = check_ControllerActionSetHandle_t(L, 2);

    void r = controller->ActivateActionSetLayer(controllerHandle,actionSetLayerHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_DeactivateActionSetLayer(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerActionSetHandle_t actionSetLayerHandle = check_ControllerActionSetHandle_t(L, 2);

    void r = controller->DeactivateActionSetLayer(controllerHandle,actionSetLayerHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_DeactivateAllActionSetLayers(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);

    void r = controller->DeactivateAllActionSetLayers(controllerHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetActiveActionSetLayers(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerActionSetHandle_t * handlesOut = check_ControllerActionSetHandle_t_ptr(L, 2);

    int r = controller->GetActiveActionSetLayers(controllerHandle,handlesOut);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetDigitalActionHandle(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszActionName = check_const_char_ptr(L, 1);

    ControllerDigitalActionHandle_t r = controller->GetDigitalActionHandle(pszActionName);

    push_ControllerDigitalActionHandle_t(L, r);

    // return ControllerDigitalActionHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetDigitalActionData(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerDigitalActionHandle_t digitalActionHandle = check_ControllerDigitalActionHandle_t(L, 2);

    struct ControllerDigitalActionData_t r = controller->GetDigitalActionData(controllerHandle,digitalActionHandle);

    push_struct ControllerDigitalActionData_t(L, r);

    // return struct ControllerDigitalActionData_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetDigitalActionOrigins(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerActionSetHandle_t actionSetHandle = check_ControllerActionSetHandle_t(L, 2);
    ControllerDigitalActionHandle_t digitalActionHandle = check_ControllerDigitalActionHandle_t(L, 3);
    EControllerActionOrigin * originsOut = check_EControllerActionOrigin_ptr(L, 4);

    int r = controller->GetDigitalActionOrigins(controllerHandle,actionSetHandle,digitalActionHandle,originsOut);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetAnalogActionHandle(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszActionName = check_const_char_ptr(L, 1);

    ControllerAnalogActionHandle_t r = controller->GetAnalogActionHandle(pszActionName);

    push_ControllerAnalogActionHandle_t(L, r);

    // return ControllerAnalogActionHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetAnalogActionData(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerAnalogActionHandle_t analogActionHandle = check_ControllerAnalogActionHandle_t(L, 2);

    struct ControllerAnalogActionData_t r = controller->GetAnalogActionData(controllerHandle,analogActionHandle);

    push_struct ControllerAnalogActionData_t(L, r);

    // return struct ControllerAnalogActionData_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetAnalogActionOrigins(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerActionSetHandle_t actionSetHandle = check_ControllerActionSetHandle_t(L, 2);
    ControllerAnalogActionHandle_t analogActionHandle = check_ControllerAnalogActionHandle_t(L, 3);
    EControllerActionOrigin * originsOut = check_EControllerActionOrigin_ptr(L, 4);

    int r = controller->GetAnalogActionOrigins(controllerHandle,actionSetHandle,analogActionHandle,originsOut);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_StopAnalogActionMomentum(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerAnalogActionHandle_t eAction = check_ControllerAnalogActionHandle_t(L, 2);

    void r = controller->StopAnalogActionMomentum(controllerHandle,eAction);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_TriggerHapticPulse(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ESteamControllerPad eTargetPad = check_ESteamControllerPad(L, 2);
    unsigned short usDurationMicroSec = check_unsigned short(L, 3);

    void r = controller->TriggerHapticPulse(controllerHandle,eTargetPad,usDurationMicroSec);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_TriggerRepeatedHapticPulse(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ESteamControllerPad eTargetPad = check_ESteamControllerPad(L, 2);
    unsigned short usDurationMicroSec = check_unsigned short(L, 3);
    unsigned short usOffMicroSec = check_unsigned short(L, 4);
    unsigned short unRepeat = check_unsigned short(L, 5);
    unsigned int nFlags = check_unsigned int(L, 6);

    void r = controller->TriggerRepeatedHapticPulse(controllerHandle,eTargetPad,usDurationMicroSec,usOffMicroSec,unRepeat,nFlags);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_TriggerVibration(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    unsigned short usLeftSpeed = check_unsigned short(L, 2);
    unsigned short usRightSpeed = check_unsigned short(L, 3);

    void r = controller->TriggerVibration(controllerHandle,usLeftSpeed,usRightSpeed);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_SetLEDColor(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    uint8 nColorR = check_uint8(L, 2);
    uint8 nColorG = check_uint8(L, 3);
    uint8 nColorB = check_uint8(L, 4);
    unsigned int nFlags = check_unsigned int(L, 5);

    void r = controller->SetLEDColor(controllerHandle,nColorR,nColorG,nColorB,nFlags);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetGamepadIndexForController(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t ulControllerHandle = check_ControllerHandle_t(L, 1);

    int r = controller->GetGamepadIndexForController(ulControllerHandle);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetControllerForGamepadIndex(lua_State* L) {
    int top = lua_gettop(L);

    int nIndex = check_int(L, 1);

    ControllerHandle_t r = controller->GetControllerForGamepadIndex(nIndex);

    push_ControllerHandle_t(L, r);

    // return ControllerHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetMotionData(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);

    struct ControllerMotionData_t r = controller->GetMotionData(controllerHandle);

    push_struct ControllerMotionData_t(L, r);

    // return struct ControllerMotionData_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_ShowDigitalActionOrigins(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerDigitalActionHandle_t digitalActionHandle = check_ControllerDigitalActionHandle_t(L, 2);
    float flScale = check_float(L, 3);
    float flXPosition = check_float(L, 4);
    float flYPosition = check_float(L, 5);

    bool r = controller->ShowDigitalActionOrigins(controllerHandle,digitalActionHandle,flScale,flXPosition,flYPosition);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_ShowAnalogActionOrigins(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);
    ControllerAnalogActionHandle_t analogActionHandle = check_ControllerAnalogActionHandle_t(L, 2);
    float flScale = check_float(L, 3);
    float flXPosition = check_float(L, 4);
    float flYPosition = check_float(L, 5);

    bool r = controller->ShowAnalogActionOrigins(controllerHandle,analogActionHandle,flScale,flXPosition,flYPosition);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetStringForActionOrigin(lua_State* L) {
    int top = lua_gettop(L);

    EControllerActionOrigin eOrigin = check_EControllerActionOrigin(L, 1);

    const char * r = controller->GetStringForActionOrigin(eOrigin);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetGlyphForActionOrigin(lua_State* L) {
    int top = lua_gettop(L);

    EControllerActionOrigin eOrigin = check_EControllerActionOrigin(L, 1);

    const char * r = controller->GetGlyphForActionOrigin(eOrigin);

    push_const char *(L, r);

    // return const char *
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamController_GetInputTypeForHandle(lua_State* L) {
    int top = lua_gettop(L);

    ControllerHandle_t controllerHandle = check_ControllerHandle_t(L, 1);

    ESteamInputType r = controller->GetInputTypeForHandle(controllerHandle);

    push_ESteamInputType(L, r);

    // return ESteamInputType
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_CreateQueryUserUGCRequest(lua_State* L) {
    int top = lua_gettop(L);

    AccountID_t unAccountID = check_AccountID_t(L, 1);
    EUserUGCList eListType = check_EUserUGCList(L, 2);
    EUGCMatchingUGCType eMatchingUGCType = check_EUGCMatchingUGCType(L, 3);
    EUserUGCListSortOrder eSortOrder = check_EUserUGCListSortOrder(L, 4);
    AppId_t nCreatorAppID = check_AppId_t(L, 5);
    AppId_t nConsumerAppID = check_AppId_t(L, 6);
    uint32 unPage = check_uint32(L, 7);

    UGCQueryHandle_t r = ugc->CreateQueryUserUGCRequest(unAccountID,eListType,eMatchingUGCType,eSortOrder,nCreatorAppID,nConsumerAppID,unPage);

    push_UGCQueryHandle_t(L, r);

    // return UGCQueryHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_CreateQueryAllUGCRequest(lua_State* L) {
    int top = lua_gettop(L);

    EUGCQuery eQueryType = check_EUGCQuery(L, 1);
    EUGCMatchingUGCType eMatchingeMatchingUGCTypeFileType = check_EUGCMatchingUGCType(L, 2);
    AppId_t nCreatorAppID = check_AppId_t(L, 3);
    AppId_t nConsumerAppID = check_AppId_t(L, 4);
    uint32 unPage = check_uint32(L, 5);

    UGCQueryHandle_t r = ugc->CreateQueryAllUGCRequest(eQueryType,eMatchingeMatchingUGCTypeFileType,nCreatorAppID,nConsumerAppID,unPage);

    push_UGCQueryHandle_t(L, r);

    // return UGCQueryHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_CreateQueryUGCDetailsRequest(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t * pvecPublishedFileID = check_PublishedFileId_t_ptr(L, 1);
    uint32 unNumPublishedFileIDs = check_uint32(L, 2);

    UGCQueryHandle_t r = ugc->CreateQueryUGCDetailsRequest(pvecPublishedFileID,unNumPublishedFileIDs);

    push_UGCQueryHandle_t(L, r);

    // return UGCQueryHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SendQueryUGCRequest(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);

    SteamAPICall_t r = ugc->SendQueryUGCRequest(handle);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetQueryUGCResult(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);
    struct SteamUGCDetails_t * pDetails = check_struct SteamUGCDetails_t_ptr(L, 3);

    bool r = ugc->GetQueryUGCResult(handle,index,pDetails);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetQueryUGCPreviewURL(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);
    char * pchURL = check_char_ptr(L, 3);
    uint32 cchURLSize = check_uint32(L, 4);

    bool r = ugc->GetQueryUGCPreviewURL(handle,index,pchURL,cchURLSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetQueryUGCMetadata(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);
    char * pchMetadata = check_char_ptr(L, 3);
    uint32 cchMetadatasize = check_uint32(L, 4);

    bool r = ugc->GetQueryUGCMetadata(handle,index,pchMetadata,cchMetadatasize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetQueryUGCChildren(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);
    PublishedFileId_t * pvecPublishedFileID = check_PublishedFileId_t_ptr(L, 3);
    uint32 cMaxEntries = check_uint32(L, 4);

    bool r = ugc->GetQueryUGCChildren(handle,index,pvecPublishedFileID,cMaxEntries);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetQueryUGCStatistic(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);
    EItemStatistic eStatType = check_EItemStatistic(L, 3);
    uint64 * pStatValue = check_uint64_ptr(L, 4);

    bool r = ugc->GetQueryUGCStatistic(handle,index,eStatType,pStatValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetQueryUGCNumAdditionalPreviews(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);

    uint32 r = ugc->GetQueryUGCNumAdditionalPreviews(handle,index);

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetQueryUGCAdditionalPreview(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);
    uint32 previewIndex = check_uint32(L, 3);
    char * pchURLOrVideoID = check_char_ptr(L, 4);
    uint32 cchURLSize = check_uint32(L, 5);
    char * pchOriginalFileName = check_char_ptr(L, 6);
    uint32 cchOriginalFileNameSize = check_uint32(L, 7);
    EItemPreviewType * pPreviewType = check_EItemPreviewType_ptr(L, 8);

    bool r = ugc->GetQueryUGCAdditionalPreview(handle,index,previewIndex,pchURLOrVideoID,cchURLSize,pchOriginalFileName,cchOriginalFileNameSize,pPreviewType);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetQueryUGCNumKeyValueTags(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);

    uint32 r = ugc->GetQueryUGCNumKeyValueTags(handle,index);

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetQueryUGCKeyValueTag(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);
    uint32 keyValueTagIndex = check_uint32(L, 3);
    char * pchKey = check_char_ptr(L, 4);
    uint32 cchKeySize = check_uint32(L, 5);
    char * pchValue = check_char_ptr(L, 6);
    uint32 cchValueSize = check_uint32(L, 7);

    bool r = ugc->GetQueryUGCKeyValueTag(handle,index,keyValueTagIndex,pchKey,cchKeySize,pchValue,cchValueSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_ReleaseQueryUGCRequest(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);

    bool r = ugc->ReleaseQueryUGCRequest(handle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_AddRequiredTag(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    const char * pTagName = check_const_char_ptr(L, 2);

    bool r = ugc->AddRequiredTag(handle,pTagName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_AddExcludedTag(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    const char * pTagName = check_const_char_ptr(L, 2);

    bool r = ugc->AddExcludedTag(handle,pTagName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetReturnOnlyIDs(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    bool bReturnOnlyIDs = check_bool(L, 2);

    bool r = ugc->SetReturnOnlyIDs(handle,bReturnOnlyIDs);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetReturnKeyValueTags(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    bool bReturnKeyValueTags = check_bool(L, 2);

    bool r = ugc->SetReturnKeyValueTags(handle,bReturnKeyValueTags);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetReturnLongDescription(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    bool bReturnLongDescription = check_bool(L, 2);

    bool r = ugc->SetReturnLongDescription(handle,bReturnLongDescription);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetReturnMetadata(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    bool bReturnMetadata = check_bool(L, 2);

    bool r = ugc->SetReturnMetadata(handle,bReturnMetadata);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetReturnChildren(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    bool bReturnChildren = check_bool(L, 2);

    bool r = ugc->SetReturnChildren(handle,bReturnChildren);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetReturnAdditionalPreviews(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    bool bReturnAdditionalPreviews = check_bool(L, 2);

    bool r = ugc->SetReturnAdditionalPreviews(handle,bReturnAdditionalPreviews);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetReturnTotalOnly(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    bool bReturnTotalOnly = check_bool(L, 2);

    bool r = ugc->SetReturnTotalOnly(handle,bReturnTotalOnly);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetReturnPlaytimeStats(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 unDays = check_uint32(L, 2);

    bool r = ugc->SetReturnPlaytimeStats(handle,unDays);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetLanguage(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    const char * pchLanguage = check_const_char_ptr(L, 2);

    bool r = ugc->SetLanguage(handle,pchLanguage);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetAllowCachedResponse(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 unMaxAgeSeconds = check_uint32(L, 2);

    bool r = ugc->SetAllowCachedResponse(handle,unMaxAgeSeconds);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetCloudFileNameFilter(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    const char * pMatchCloudFileName = check_const_char_ptr(L, 2);

    bool r = ugc->SetCloudFileNameFilter(handle,pMatchCloudFileName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetMatchAnyTag(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    bool bMatchAnyTag = check_bool(L, 2);

    bool r = ugc->SetMatchAnyTag(handle,bMatchAnyTag);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetSearchText(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    const char * pSearchText = check_const_char_ptr(L, 2);

    bool r = ugc->SetSearchText(handle,pSearchText);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetRankedByTrendDays(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    uint32 unDays = check_uint32(L, 2);

    bool r = ugc->SetRankedByTrendDays(handle,unDays);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_AddRequiredKeyValueTag(lua_State* L) {
    int top = lua_gettop(L);

    UGCQueryHandle_t handle = check_UGCQueryHandle_t(L, 1);
    const char * pKey = check_const_char_ptr(L, 2);
    const char * pValue = check_const_char_ptr(L, 3);

    bool r = ugc->AddRequiredKeyValueTag(handle,pKey,pValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_RequestUGCDetails(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);
    uint32 unMaxAgeSeconds = check_uint32(L, 2);

    SteamAPICall_t r = ugc->RequestUGCDetails(nPublishedFileID,unMaxAgeSeconds);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_CreateItem(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nConsumerAppId = check_AppId_t(L, 1);
    EWorkshopFileType eFileType = check_EWorkshopFileType(L, 2);

    SteamAPICall_t r = ugc->CreateItem(nConsumerAppId,eFileType);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_StartItemUpdate(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nConsumerAppId = check_AppId_t(L, 1);
    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 2);

    UGCUpdateHandle_t r = ugc->StartItemUpdate(nConsumerAppId,nPublishedFileID);

    push_UGCUpdateHandle_t(L, r);

    // return UGCUpdateHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetItemTitle(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pchTitle = check_const_char_ptr(L, 2);

    bool r = ugc->SetItemTitle(handle,pchTitle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetItemDescription(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pchDescription = check_const_char_ptr(L, 2);

    bool r = ugc->SetItemDescription(handle,pchDescription);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetItemUpdateLanguage(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pchLanguage = check_const_char_ptr(L, 2);

    bool r = ugc->SetItemUpdateLanguage(handle,pchLanguage);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetItemMetadata(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pchMetaData = check_const_char_ptr(L, 2);

    bool r = ugc->SetItemMetadata(handle,pchMetaData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetItemVisibility(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    ERemoteStoragePublishedFileVisibility eVisibility = check_ERemoteStoragePublishedFileVisibility(L, 2);

    bool r = ugc->SetItemVisibility(handle,eVisibility);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetItemTags(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t updateHandle = check_UGCUpdateHandle_t(L, 1);
    const struct SteamParamStringArray_t * pTags = check_const_struct SteamParamStringArray_t_ptr(L, 2);

    bool r = ugc->SetItemTags(updateHandle,pTags);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetItemContent(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pszContentFolder = check_const_char_ptr(L, 2);

    bool r = ugc->SetItemContent(handle,pszContentFolder);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetItemPreview(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pszPreviewFile = check_const_char_ptr(L, 2);

    bool r = ugc->SetItemPreview(handle,pszPreviewFile);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_RemoveItemKeyValueTags(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);

    bool r = ugc->RemoveItemKeyValueTags(handle,pchKey);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_AddItemKeyValueTag(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);
    const char * pchValue = check_const_char_ptr(L, 3);

    bool r = ugc->AddItemKeyValueTag(handle,pchKey,pchValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_AddItemPreviewFile(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pszPreviewFile = check_const_char_ptr(L, 2);
    EItemPreviewType type = check_EItemPreviewType(L, 3);

    bool r = ugc->AddItemPreviewFile(handle,pszPreviewFile,type);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_AddItemPreviewVideo(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pszVideoID = check_const_char_ptr(L, 2);

    bool r = ugc->AddItemPreviewVideo(handle,pszVideoID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_UpdateItemPreviewFile(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);
    const char * pszPreviewFile = check_const_char_ptr(L, 3);

    bool r = ugc->UpdateItemPreviewFile(handle,index,pszPreviewFile);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_UpdateItemPreviewVideo(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);
    const char * pszVideoID = check_const_char_ptr(L, 3);

    bool r = ugc->UpdateItemPreviewVideo(handle,index,pszVideoID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_RemoveItemPreview(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    uint32 index = check_uint32(L, 2);

    bool r = ugc->RemoveItemPreview(handle,index);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SubmitItemUpdate(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    const char * pchChangeNote = check_const_char_ptr(L, 2);

    SteamAPICall_t r = ugc->SubmitItemUpdate(handle,pchChangeNote);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetItemUpdateProgress(lua_State* L) {
    int top = lua_gettop(L);

    UGCUpdateHandle_t handle = check_UGCUpdateHandle_t(L, 1);
    uint64 * punBytesProcessed = check_uint64_ptr(L, 2);
    uint64 * punBytesTotal = check_uint64_ptr(L, 3);

    EItemUpdateStatus r = ugc->GetItemUpdateProgress(handle,punBytesProcessed,punBytesTotal);

    push_EItemUpdateStatus(L, r);

    // return EItemUpdateStatus
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SetUserItemVote(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);
    bool bVoteUp = check_bool(L, 2);

    SteamAPICall_t r = ugc->SetUserItemVote(nPublishedFileID,bVoteUp);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetUserItemVote(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = ugc->GetUserItemVote(nPublishedFileID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_AddItemToFavorites(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppId = check_AppId_t(L, 1);
    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 2);

    SteamAPICall_t r = ugc->AddItemToFavorites(nAppId,nPublishedFileID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_RemoveItemFromFavorites(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppId = check_AppId_t(L, 1);
    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 2);

    SteamAPICall_t r = ugc->RemoveItemFromFavorites(nAppId,nPublishedFileID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SubscribeItem(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = ugc->SubscribeItem(nPublishedFileID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_UnsubscribeItem(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = ugc->UnsubscribeItem(nPublishedFileID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetNumSubscribedItems(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = ugc->GetNumSubscribedItems();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetSubscribedItems(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t * pvecPublishedFileID = check_PublishedFileId_t_ptr(L, 1);
    uint32 cMaxEntries = check_uint32(L, 2);

    uint32 r = ugc->GetSubscribedItems(pvecPublishedFileID,cMaxEntries);

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetItemState(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);

    uint32 r = ugc->GetItemState(nPublishedFileID);

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetItemInstallInfo(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);
    uint64 * punSizeOnDisk = check_uint64_ptr(L, 2);
    char * pchFolder = check_char_ptr(L, 3);
    uint32 cchFolderSize = check_uint32(L, 4);
    uint32 * punTimeStamp = check_uint32_ptr(L, 5);

    bool r = ugc->GetItemInstallInfo(nPublishedFileID,punSizeOnDisk,pchFolder,cchFolderSize,punTimeStamp);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetItemDownloadInfo(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);
    uint64 * punBytesDownloaded = check_uint64_ptr(L, 2);
    uint64 * punBytesTotal = check_uint64_ptr(L, 3);

    bool r = ugc->GetItemDownloadInfo(nPublishedFileID,punBytesDownloaded,punBytesTotal);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_DownloadItem(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);
    bool bHighPriority = check_bool(L, 2);

    bool r = ugc->DownloadItem(nPublishedFileID,bHighPriority);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_BInitWorkshopForGameServer(lua_State* L) {
    int top = lua_gettop(L);

    DepotId_t unWorkshopDepotID = check_DepotId_t(L, 1);
    const char * pszFolder = check_const_char_ptr(L, 2);

    bool r = ugc->BInitWorkshopForGameServer(unWorkshopDepotID,pszFolder);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_SuspendDownloads(lua_State* L) {
    int top = lua_gettop(L);

    bool bSuspend = check_bool(L, 1);

    void r = ugc->SuspendDownloads(bSuspend);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_StartPlaytimeTracking(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t * pvecPublishedFileID = check_PublishedFileId_t_ptr(L, 1);
    uint32 unNumPublishedFileIDs = check_uint32(L, 2);

    SteamAPICall_t r = ugc->StartPlaytimeTracking(pvecPublishedFileID,unNumPublishedFileIDs);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_StopPlaytimeTracking(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t * pvecPublishedFileID = check_PublishedFileId_t_ptr(L, 1);
    uint32 unNumPublishedFileIDs = check_uint32(L, 2);

    SteamAPICall_t r = ugc->StopPlaytimeTracking(pvecPublishedFileID,unNumPublishedFileIDs);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_StopPlaytimeTrackingForAllItems(lua_State* L) {
    int top = lua_gettop(L);


    SteamAPICall_t r = ugc->StopPlaytimeTrackingForAllItems();

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_AddDependency(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nParentPublishedFileID = check_PublishedFileId_t(L, 1);
    PublishedFileId_t nChildPublishedFileID = check_PublishedFileId_t(L, 2);

    SteamAPICall_t r = ugc->AddDependency(nParentPublishedFileID,nChildPublishedFileID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_RemoveDependency(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nParentPublishedFileID = check_PublishedFileId_t(L, 1);
    PublishedFileId_t nChildPublishedFileID = check_PublishedFileId_t(L, 2);

    SteamAPICall_t r = ugc->RemoveDependency(nParentPublishedFileID,nChildPublishedFileID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_AddAppDependency(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);
    AppId_t nAppID = check_AppId_t(L, 2);

    SteamAPICall_t r = ugc->AddAppDependency(nPublishedFileID,nAppID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_RemoveAppDependency(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);
    AppId_t nAppID = check_AppId_t(L, 2);

    SteamAPICall_t r = ugc->RemoveAppDependency(nPublishedFileID,nAppID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_GetAppDependencies(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = ugc->GetAppDependencies(nPublishedFileID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamUGC_DeleteItem(lua_State* L) {
    int top = lua_gettop(L);

    PublishedFileId_t nPublishedFileID = check_PublishedFileId_t(L, 1);

    SteamAPICall_t r = ugc->DeleteItem(nPublishedFileID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamAppList_GetNumInstalledApps(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = app_list->GetNumInstalledApps();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamAppList_GetInstalledApps(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t * pvecAppID = check_AppId_t_ptr(L, 1);
    uint32 unMaxAppIDs = check_uint32(L, 2);

    uint32 r = app_list->GetInstalledApps(pvecAppID,unMaxAppIDs);

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamAppList_GetAppName(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);
    char * pchName = check_char_ptr(L, 2);
    int cchNameMax = check_int(L, 3);

    int r = app_list->GetAppName(nAppID,pchName,cchNameMax);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamAppList_GetAppInstallDir(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);
    char * pchDirectory = check_char_ptr(L, 2);
    int cchNameMax = check_int(L, 3);

    int r = app_list->GetAppInstallDir(nAppID,pchDirectory,cchNameMax);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamAppList_GetAppBuildId(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);

    int r = app_list->GetAppBuildId(nAppID);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_DestructISteamHTMLSurface(lua_State* L) {
    int top = lua_gettop(L);


    void r = html_surface->DestructISteamHTMLSurface();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_Init(lua_State* L) {
    int top = lua_gettop(L);


    bool r = html_surface->Init();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_Shutdown(lua_State* L) {
    int top = lua_gettop(L);


    bool r = html_surface->Shutdown();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_CreateBrowser(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchUserAgent = check_const_char_ptr(L, 1);
    const char * pchUserCSS = check_const_char_ptr(L, 2);

    SteamAPICall_t r = html_surface->CreateBrowser(pchUserAgent,pchUserCSS);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_RemoveBrowser(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);

    void r = html_surface->RemoveBrowser(unBrowserHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_LoadURL(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    const char * pchURL = check_const_char_ptr(L, 2);
    const char * pchPostData = check_const_char_ptr(L, 3);

    void r = html_surface->LoadURL(unBrowserHandle,pchURL,pchPostData);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_SetSize(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    uint32 unWidth = check_uint32(L, 2);
    uint32 unHeight = check_uint32(L, 3);

    void r = html_surface->SetSize(unBrowserHandle,unWidth,unHeight);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_StopLoad(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);

    void r = html_surface->StopLoad(unBrowserHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_Reload(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);

    void r = html_surface->Reload(unBrowserHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_GoBack(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);

    void r = html_surface->GoBack(unBrowserHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_GoForward(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);

    void r = html_surface->GoForward(unBrowserHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_AddHeader(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);
    const char * pchValue = check_const_char_ptr(L, 3);

    void r = html_surface->AddHeader(unBrowserHandle,pchKey,pchValue);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_ExecuteJavascript(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    const char * pchScript = check_const_char_ptr(L, 2);

    void r = html_surface->ExecuteJavascript(unBrowserHandle,pchScript);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_MouseUp(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton = check_ISteamHTMLSurface::EHTMLMouseButton(L, 2);

    void r = html_surface->MouseUp(unBrowserHandle,eMouseButton);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_MouseDown(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton = check_ISteamHTMLSurface::EHTMLMouseButton(L, 2);

    void r = html_surface->MouseDown(unBrowserHandle,eMouseButton);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_MouseDoubleClick(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    ISteamHTMLSurface::EHTMLMouseButton eMouseButton = check_ISteamHTMLSurface::EHTMLMouseButton(L, 2);

    void r = html_surface->MouseDoubleClick(unBrowserHandle,eMouseButton);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_MouseMove(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    int x = check_int(L, 2);
    int y = check_int(L, 3);

    void r = html_surface->MouseMove(unBrowserHandle,x,y);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_MouseWheel(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    int32 nDelta = check_int32(L, 2);

    void r = html_surface->MouseWheel(unBrowserHandle,nDelta);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_KeyDown(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    uint32 nNativeKeyCode = check_uint32(L, 2);
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers = check_ISteamHTMLSurface::EHTMLKeyModifiers(L, 3);

    void r = html_surface->KeyDown(unBrowserHandle,nNativeKeyCode,eHTMLKeyModifiers);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_KeyUp(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    uint32 nNativeKeyCode = check_uint32(L, 2);
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers = check_ISteamHTMLSurface::EHTMLKeyModifiers(L, 3);

    void r = html_surface->KeyUp(unBrowserHandle,nNativeKeyCode,eHTMLKeyModifiers);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_KeyChar(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    uint32 cUnicodeChar = check_uint32(L, 2);
    ISteamHTMLSurface::EHTMLKeyModifiers eHTMLKeyModifiers = check_ISteamHTMLSurface::EHTMLKeyModifiers(L, 3);

    void r = html_surface->KeyChar(unBrowserHandle,cUnicodeChar,eHTMLKeyModifiers);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_SetHorizontalScroll(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    uint32 nAbsolutePixelScroll = check_uint32(L, 2);

    void r = html_surface->SetHorizontalScroll(unBrowserHandle,nAbsolutePixelScroll);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_SetVerticalScroll(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    uint32 nAbsolutePixelScroll = check_uint32(L, 2);

    void r = html_surface->SetVerticalScroll(unBrowserHandle,nAbsolutePixelScroll);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_SetKeyFocus(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    bool bHasKeyFocus = check_bool(L, 2);

    void r = html_surface->SetKeyFocus(unBrowserHandle,bHasKeyFocus);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_ViewSource(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);

    void r = html_surface->ViewSource(unBrowserHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_CopyToClipboard(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);

    void r = html_surface->CopyToClipboard(unBrowserHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_PasteFromClipboard(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);

    void r = html_surface->PasteFromClipboard(unBrowserHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_Find(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    const char * pchSearchStr = check_const_char_ptr(L, 2);
    bool bCurrentlyInFind = check_bool(L, 3);
    bool bReverse = check_bool(L, 4);

    void r = html_surface->Find(unBrowserHandle,pchSearchStr,bCurrentlyInFind,bReverse);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_StopFind(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);

    void r = html_surface->StopFind(unBrowserHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_GetLinkAtPosition(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    int x = check_int(L, 2);
    int y = check_int(L, 3);

    void r = html_surface->GetLinkAtPosition(unBrowserHandle,x,y);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_SetCookie(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchHostname = check_const_char_ptr(L, 1);
    const char * pchKey = check_const_char_ptr(L, 2);
    const char * pchValue = check_const_char_ptr(L, 3);
    const char * pchPath = check_const_char_ptr(L, 4);
    RTime32 nExpires = check_RTime32(L, 5);
    bool bSecure = check_bool(L, 6);
    bool bHTTPOnly = check_bool(L, 7);

    void r = html_surface->SetCookie(pchHostname,pchKey,pchValue,pchPath,nExpires,bSecure,bHTTPOnly);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_SetPageScaleFactor(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    float flZoom = check_float(L, 2);
    int nPointX = check_int(L, 3);
    int nPointY = check_int(L, 4);

    void r = html_surface->SetPageScaleFactor(unBrowserHandle,flZoom,nPointX,nPointY);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_SetBackgroundMode(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    bool bBackgroundMode = check_bool(L, 2);

    void r = html_surface->SetBackgroundMode(unBrowserHandle,bBackgroundMode);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_SetDPIScalingFactor(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    float flDPIScaling = check_float(L, 2);

    void r = html_surface->SetDPIScalingFactor(unBrowserHandle,flDPIScaling);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_AllowStartRequest(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    bool bAllowed = check_bool(L, 2);

    void r = html_surface->AllowStartRequest(unBrowserHandle,bAllowed);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamHTMLSurface_JSDialogResponse(lua_State* L) {
    int top = lua_gettop(L);

    HHTMLBrowser unBrowserHandle = check_HHTMLBrowser(L, 1);
    bool bResult = check_bool(L, 2);

    void r = html_surface->JSDialogResponse(unBrowserHandle,bResult);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetResultStatus(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1);

    EResult r = inventory->GetResultStatus(resultHandle);

    push_EResult(L, r);

    // return EResult
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetResultItems(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1);
    struct SteamItemDetails_t * pOutItemsArray = check_struct SteamItemDetails_t_ptr(L, 2);
    uint32 * punOutItemsArraySize = check_uint32_ptr(L, 3);

    bool r = inventory->GetResultItems(resultHandle,pOutItemsArray,punOutItemsArraySize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetResultItemProperty(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1);
    uint32 unItemIndex = check_uint32(L, 2);
    const char * pchPropertyName = check_const_char_ptr(L, 3);
    char * pchValueBuffer = check_char_ptr(L, 4);
    uint32 * punValueBufferSizeOut = check_uint32_ptr(L, 5);

    bool r = inventory->GetResultItemProperty(resultHandle,unItemIndex,pchPropertyName,pchValueBuffer,punValueBufferSizeOut);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetResultTimestamp(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1);

    uint32 r = inventory->GetResultTimestamp(resultHandle);

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_CheckResultSteamID(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1);
    CSteamID * steamIDExpected = check_class_CSteamID(L, 2);

    bool r = inventory->CheckResultSteamID(resultHandle,steamIDExpected);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_DestroyResult(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1);

    void r = inventory->DestroyResult(resultHandle);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetAllItems(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);

    bool r = inventory->GetAllItems(pResultHandle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetItemsByID(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    const SteamItemInstanceID_t * pInstanceIDs = check_const_SteamItemInstanceID_t_ptr(L, 2);
    uint32 unCountInstanceIDs = check_uint32(L, 3);

    bool r = inventory->GetItemsByID(pResultHandle,pInstanceIDs,unCountInstanceIDs);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_SerializeResult(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t resultHandle = check_SteamInventoryResult_t(L, 1);
    void * pOutBuffer = check_void_ptr(L, 2);
    uint32 * punOutBufferSize = check_uint32_ptr(L, 3);

    bool r = inventory->SerializeResult(resultHandle,pOutBuffer,punOutBufferSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_DeserializeResult(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pOutResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    const void * pBuffer = check_const_void_ptr(L, 2);
    uint32 unBufferSize = check_uint32(L, 3);
    bool bRESERVED_MUST_BE_FALSE = check_bool(L, 4);

    bool r = inventory->DeserializeResult(pOutResultHandle,pBuffer,unBufferSize,bRESERVED_MUST_BE_FALSE);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GenerateItems(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    const SteamItemDef_t * pArrayItemDefs = check_const_SteamItemDef_t_ptr(L, 2);
    const uint32 * punArrayQuantity = check_const_uint32_ptr(L, 3);
    uint32 unArrayLength = check_uint32(L, 4);

    bool r = inventory->GenerateItems(pResultHandle,pArrayItemDefs,punArrayQuantity,unArrayLength);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GrantPromoItems(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);

    bool r = inventory->GrantPromoItems(pResultHandle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_AddPromoItem(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    SteamItemDef_t itemDef = check_SteamItemDef_t(L, 2);

    bool r = inventory->AddPromoItem(pResultHandle,itemDef);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_AddPromoItems(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    const SteamItemDef_t * pArrayItemDefs = check_const_SteamItemDef_t_ptr(L, 2);
    uint32 unArrayLength = check_uint32(L, 3);

    bool r = inventory->AddPromoItems(pResultHandle,pArrayItemDefs,unArrayLength);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_ConsumeItem(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    SteamItemInstanceID_t itemConsume = check_SteamItemInstanceID_t(L, 2);
    uint32 unQuantity = check_uint32(L, 3);

    bool r = inventory->ConsumeItem(pResultHandle,itemConsume,unQuantity);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_ExchangeItems(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    const SteamItemDef_t * pArrayGenerate = check_const_SteamItemDef_t_ptr(L, 2);
    const uint32 * punArrayGenerateQuantity = check_const_uint32_ptr(L, 3);
    uint32 unArrayGenerateLength = check_uint32(L, 4);
    const SteamItemInstanceID_t * pArrayDestroy = check_const_SteamItemInstanceID_t_ptr(L, 5);
    const uint32 * punArrayDestroyQuantity = check_const_uint32_ptr(L, 6);
    uint32 unArrayDestroyLength = check_uint32(L, 7);

    bool r = inventory->ExchangeItems(pResultHandle,pArrayGenerate,punArrayGenerateQuantity,unArrayGenerateLength,pArrayDestroy,punArrayDestroyQuantity,unArrayDestroyLength);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_TransferItemQuantity(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    SteamItemInstanceID_t itemIdSource = check_SteamItemInstanceID_t(L, 2);
    uint32 unQuantity = check_uint32(L, 3);
    SteamItemInstanceID_t itemIdDest = check_SteamItemInstanceID_t(L, 4);

    bool r = inventory->TransferItemQuantity(pResultHandle,itemIdSource,unQuantity,itemIdDest);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_SendItemDropHeartbeat(lua_State* L) {
    int top = lua_gettop(L);


    void r = inventory->SendItemDropHeartbeat();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_TriggerItemDrop(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    SteamItemDef_t dropListDefinition = check_SteamItemDef_t(L, 2);

    bool r = inventory->TriggerItemDrop(pResultHandle,dropListDefinition);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_TradeItems(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 1);
    CSteamID * steamIDTradePartner = check_class_CSteamID(L, 2);
    const SteamItemInstanceID_t * pArrayGive = check_const_SteamItemInstanceID_t_ptr(L, 3);
    const uint32 * pArrayGiveQuantity = check_const_uint32_ptr(L, 4);
    uint32 nArrayGiveLength = check_uint32(L, 5);
    const SteamItemInstanceID_t * pArrayGet = check_const_SteamItemInstanceID_t_ptr(L, 6);
    const uint32 * pArrayGetQuantity = check_const_uint32_ptr(L, 7);
    uint32 nArrayGetLength = check_uint32(L, 8);

    bool r = inventory->TradeItems(pResultHandle,steamIDTradePartner,pArrayGive,pArrayGiveQuantity,nArrayGiveLength,pArrayGet,pArrayGetQuantity,nArrayGetLength);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_LoadItemDefinitions(lua_State* L) {
    int top = lua_gettop(L);


    bool r = inventory->LoadItemDefinitions();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetItemDefinitionIDs(lua_State* L) {
    int top = lua_gettop(L);

    SteamItemDef_t * pItemDefIDs = check_SteamItemDef_t_ptr(L, 1);
    uint32 * punItemDefIDsArraySize = check_uint32_ptr(L, 2);

    bool r = inventory->GetItemDefinitionIDs(pItemDefIDs,punItemDefIDsArraySize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetItemDefinitionProperty(lua_State* L) {
    int top = lua_gettop(L);

    SteamItemDef_t iDefinition = check_SteamItemDef_t(L, 1);
    const char * pchPropertyName = check_const_char_ptr(L, 2);
    char * pchValueBuffer = check_char_ptr(L, 3);
    uint32 * punValueBufferSizeOut = check_uint32_ptr(L, 4);

    bool r = inventory->GetItemDefinitionProperty(iDefinition,pchPropertyName,pchValueBuffer,punValueBufferSizeOut);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_RequestEligiblePromoItemDefinitionsIDs(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamID = check_class_CSteamID(L, 1);

    SteamAPICall_t r = inventory->RequestEligiblePromoItemDefinitionsIDs(steamID);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetEligiblePromoItemDefinitionIDs(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamID = check_class_CSteamID(L, 1);
    SteamItemDef_t * pItemDefIDs = check_SteamItemDef_t_ptr(L, 2);
    uint32 * punItemDefIDsArraySize = check_uint32_ptr(L, 3);

    bool r = inventory->GetEligiblePromoItemDefinitionIDs(steamID,pItemDefIDs,punItemDefIDsArraySize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_StartPurchase(lua_State* L) {
    int top = lua_gettop(L);

    const SteamItemDef_t * pArrayItemDefs = check_const_SteamItemDef_t_ptr(L, 1);
    const uint32 * punArrayQuantity = check_const_uint32_ptr(L, 2);
    uint32 unArrayLength = check_uint32(L, 3);

    SteamAPICall_t r = inventory->StartPurchase(pArrayItemDefs,punArrayQuantity,unArrayLength);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_RequestPrices(lua_State* L) {
    int top = lua_gettop(L);


    SteamAPICall_t r = inventory->RequestPrices();

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetNumItemsWithPrices(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = inventory->GetNumItemsWithPrices();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetItemsWithPrices(lua_State* L) {
    int top = lua_gettop(L);

    SteamItemDef_t * pArrayItemDefs = check_SteamItemDef_t_ptr(L, 1);
    uint64 * pPrices = check_uint64_ptr(L, 2);
    uint32 unArrayLength = check_uint32(L, 3);

    bool r = inventory->GetItemsWithPrices(pArrayItemDefs,pPrices,unArrayLength);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_GetItemPrice(lua_State* L) {
    int top = lua_gettop(L);

    SteamItemDef_t iDefinition = check_SteamItemDef_t(L, 1);
    uint64 * pPrice = check_uint64_ptr(L, 2);

    bool r = inventory->GetItemPrice(iDefinition,pPrice);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_StartUpdateProperties(lua_State* L) {
    int top = lua_gettop(L);


    SteamInventoryUpdateHandle_t r = inventory->StartUpdateProperties();

    push_SteamInventoryUpdateHandle_t(L, r);

    // return SteamInventoryUpdateHandle_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_RemoveProperty(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1);
    SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2);
    const char * pchPropertyName = check_const_char_ptr(L, 3);

    bool r = inventory->RemoveProperty(handle,nItemID,pchPropertyName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_SetProperty(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1);
    SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2);
    const char * pchPropertyName = check_const_char_ptr(L, 3);
    const char * pchPropertyValue = check_const_char_ptr(L, 4);

    bool r = inventory->SetProperty(handle,nItemID,pchPropertyName,pchPropertyValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_SetProperty(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1);
    SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2);
    const char * pchPropertyName = check_const_char_ptr(L, 3);
    bool bValue = check_bool(L, 4);

    bool r = inventory->SetProperty(handle,nItemID,pchPropertyName,bValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_SetProperty(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1);
    SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2);
    const char * pchPropertyName = check_const_char_ptr(L, 3);
    int64 nValue = check_int64(L, 4);

    bool r = inventory->SetProperty(handle,nItemID,pchPropertyName,nValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_SetProperty(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1);
    SteamItemInstanceID_t nItemID = check_SteamItemInstanceID_t(L, 2);
    const char * pchPropertyName = check_const_char_ptr(L, 3);
    float flValue = check_float(L, 4);

    bool r = inventory->SetProperty(handle,nItemID,pchPropertyName,flValue);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamInventory_SubmitUpdateProperties(lua_State* L) {
    int top = lua_gettop(L);

    SteamInventoryUpdateHandle_t handle = check_SteamInventoryUpdateHandle_t(L, 1);
    SteamInventoryResult_t * pResultHandle = check_SteamInventoryResult_t_ptr(L, 2);

    bool r = inventory->SubmitUpdateProperties(handle,pResultHandle);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamVideo_GetVideoURL(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t unVideoAppID = check_AppId_t(L, 1);

    void r = video->GetVideoURL(unVideoAppID);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamVideo_IsBroadcasting(lua_State* L) {
    int top = lua_gettop(L);

    int * pnNumViewers = check_int_ptr(L, 1);

    bool r = video->IsBroadcasting(pnNumViewers);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamVideo_GetOPFSettings(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t unVideoAppID = check_AppId_t(L, 1);

    void r = video->GetOPFSettings(unVideoAppID);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamVideo_GetOPFStringForApp(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t unVideoAppID = check_AppId_t(L, 1);
    char * pchBuffer = check_char_ptr(L, 2);
    int32 * pnBufferSize = check_int32_ptr(L, 3);

    bool r = video->GetOPFStringForApp(unVideoAppID,pchBuffer,pnBufferSize);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamParentalSettings_BIsParentalLockEnabled(lua_State* L) {
    int top = lua_gettop(L);


    bool r = parental_settings->BIsParentalLockEnabled();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamParentalSettings_BIsParentalLockLocked(lua_State* L) {
    int top = lua_gettop(L);


    bool r = parental_settings->BIsParentalLockLocked();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamParentalSettings_BIsAppBlocked(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);

    bool r = parental_settings->BIsAppBlocked(nAppID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamParentalSettings_BIsAppInBlockList(lua_State* L) {
    int top = lua_gettop(L);

    AppId_t nAppID = check_AppId_t(L, 1);

    bool r = parental_settings->BIsAppInBlockList(nAppID);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamParentalSettings_BIsFeatureBlocked(lua_State* L) {
    int top = lua_gettop(L);

    EParentalFeature eFeature = check_EParentalFeature(L, 1);

    bool r = parental_settings->BIsFeatureBlocked(eFeature);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamParentalSettings_BIsFeatureInBlockList(lua_State* L) {
    int top = lua_gettop(L);

    EParentalFeature eFeature = check_EParentalFeature(L, 1);

    bool r = parental_settings->BIsFeatureInBlockList(eFeature);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_InitGameServer(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unIP = check_uint32(L, 1);
    uint16 usGamePort = check_uint16(L, 2);
    uint16 usQueryPort = check_uint16(L, 3);
    uint32 unFlags = check_uint32(L, 4);
    AppId_t nGameAppId = check_AppId_t(L, 5);
    const char * pchVersionString = check_const_char_ptr(L, 6);

    bool r = game_server->InitGameServer(unIP,usGamePort,usQueryPort,unFlags,nGameAppId,pchVersionString);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetProduct(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszProduct = check_const_char_ptr(L, 1);

    void r = game_server->SetProduct(pszProduct);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetGameDescription(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszGameDescription = check_const_char_ptr(L, 1);

    void r = game_server->SetGameDescription(pszGameDescription);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetModDir(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszModDir = check_const_char_ptr(L, 1);

    void r = game_server->SetModDir(pszModDir);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetDedicatedServer(lua_State* L) {
    int top = lua_gettop(L);

    bool bDedicated = check_bool(L, 1);

    void r = game_server->SetDedicatedServer(bDedicated);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_LogOn(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszToken = check_const_char_ptr(L, 1);

    void r = game_server->LogOn(pszToken);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_LogOnAnonymous(lua_State* L) {
    int top = lua_gettop(L);


    void r = game_server->LogOnAnonymous();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_LogOff(lua_State* L) {
    int top = lua_gettop(L);


    void r = game_server->LogOff();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_BLoggedOn(lua_State* L) {
    int top = lua_gettop(L);


    bool r = game_server->BLoggedOn();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_BSecure(lua_State* L) {
    int top = lua_gettop(L);


    bool r = game_server->BSecure();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_GetSteamID(lua_State* L) {
    int top = lua_gettop(L);


    class CSteamID r = game_server->GetSteamID();

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_WasRestartRequested(lua_State* L) {
    int top = lua_gettop(L);


    bool r = game_server->WasRestartRequested();

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetMaxPlayerCount(lua_State* L) {
    int top = lua_gettop(L);

    int cPlayersMax = check_int(L, 1);

    void r = game_server->SetMaxPlayerCount(cPlayersMax);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetBotPlayerCount(lua_State* L) {
    int top = lua_gettop(L);

    int cBotplayers = check_int(L, 1);

    void r = game_server->SetBotPlayerCount(cBotplayers);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetServerName(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszServerName = check_const_char_ptr(L, 1);

    void r = game_server->SetServerName(pszServerName);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetMapName(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszMapName = check_const_char_ptr(L, 1);

    void r = game_server->SetMapName(pszMapName);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetPasswordProtected(lua_State* L) {
    int top = lua_gettop(L);

    bool bPasswordProtected = check_bool(L, 1);

    void r = game_server->SetPasswordProtected(bPasswordProtected);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetSpectatorPort(lua_State* L) {
    int top = lua_gettop(L);

    uint16 unSpectatorPort = check_uint16(L, 1);

    void r = game_server->SetSpectatorPort(unSpectatorPort);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetSpectatorServerName(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszSpectatorServerName = check_const_char_ptr(L, 1);

    void r = game_server->SetSpectatorServerName(pszSpectatorServerName);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_ClearAllKeyValues(lua_State* L) {
    int top = lua_gettop(L);


    void r = game_server->ClearAllKeyValues();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetKeyValue(lua_State* L) {
    int top = lua_gettop(L);

    const char * pKey = check_const_char_ptr(L, 1);
    const char * pValue = check_const_char_ptr(L, 2);

    void r = game_server->SetKeyValue(pKey,pValue);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetGameTags(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchGameTags = check_const_char_ptr(L, 1);

    void r = game_server->SetGameTags(pchGameTags);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetGameData(lua_State* L) {
    int top = lua_gettop(L);

    const char * pchGameData = check_const_char_ptr(L, 1);

    void r = game_server->SetGameData(pchGameData);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetRegion(lua_State* L) {
    int top = lua_gettop(L);

    const char * pszRegion = check_const_char_ptr(L, 1);

    void r = game_server->SetRegion(pszRegion);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SendUserConnectAndAuthenticate(lua_State* L) {
    int top = lua_gettop(L);

    uint32 unIPClient = check_uint32(L, 1);
    const void * pvAuthBlob = check_const_void_ptr(L, 2);
    uint32 cubAuthBlobSize = check_uint32(L, 3);
    CSteamID * * pSteamIDUser = check_class_CSteamID_ptr(L, 4);

    bool r = game_server->SendUserConnectAndAuthenticate(unIPClient,pvAuthBlob,cubAuthBlobSize,pSteamIDUser);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_CreateUnauthenticatedUserConnection(lua_State* L) {
    int top = lua_gettop(L);


    class CSteamID r = game_server->CreateUnauthenticatedUserConnection();

    push_class CSteamID(L, r);

    // return class CSteamID
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SendUserDisconnect(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);

    void r = game_server->SendUserDisconnect(steamIDUser);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_BUpdateUserData(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchPlayerName = check_const_char_ptr(L, 2);
    uint32 uScore = check_uint32(L, 3);

    bool r = game_server->BUpdateUserData(steamIDUser,pchPlayerName,uScore);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_GetAuthSessionTicket(lua_State* L) {
    int top = lua_gettop(L);

    void * pTicket = check_void_ptr(L, 1);
    int cbMaxTicket = check_int(L, 2);
    uint32 * pcbTicket = check_uint32_ptr(L, 3);

    HAuthTicket r = game_server->GetAuthSessionTicket(pTicket,cbMaxTicket,pcbTicket);

    push_HAuthTicket(L, r);

    // return HAuthTicket
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_BeginAuthSession(lua_State* L) {
    int top = lua_gettop(L);

    const void * pAuthTicket = check_const_void_ptr(L, 1);
    int cbAuthTicket = check_int(L, 2);
    CSteamID * steamID = check_class_CSteamID(L, 3);

    EBeginAuthSessionResult r = game_server->BeginAuthSession(pAuthTicket,cbAuthTicket,steamID);

    push_EBeginAuthSessionResult(L, r);

    // return EBeginAuthSessionResult
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_EndAuthSession(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamID = check_class_CSteamID(L, 1);

    void r = game_server->EndAuthSession(steamID);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_CancelAuthTicket(lua_State* L) {
    int top = lua_gettop(L);

    HAuthTicket hAuthTicket = check_HAuthTicket(L, 1);

    void r = game_server->CancelAuthTicket(hAuthTicket);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_UserHasLicenseForApp(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamID = check_class_CSteamID(L, 1);
    AppId_t appID = check_AppId_t(L, 2);

    EUserHasLicenseForAppResult r = game_server->UserHasLicenseForApp(steamID,appID);

    push_EUserHasLicenseForAppResult(L, r);

    // return EUserHasLicenseForAppResult
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_RequestUserGroupStatus(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    CSteamID * steamIDGroup = check_class_CSteamID(L, 2);

    bool r = game_server->RequestUserGroupStatus(steamIDUser,steamIDGroup);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_GetGameplayStats(lua_State* L) {
    int top = lua_gettop(L);


    void r = game_server->GetGameplayStats();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_GetServerReputation(lua_State* L) {
    int top = lua_gettop(L);


    SteamAPICall_t r = game_server->GetServerReputation();

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_GetPublicIP(lua_State* L) {
    int top = lua_gettop(L);


    uint32 r = game_server->GetPublicIP();

    push_uint32(L, r);

    // return uint32
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_HandleIncomingPacket(lua_State* L) {
    int top = lua_gettop(L);

    const void * pData = check_const_void_ptr(L, 1);
    int cbData = check_int(L, 2);
    uint32 srcIP = check_uint32(L, 3);
    uint16 srcPort = check_uint16(L, 4);

    bool r = game_server->HandleIncomingPacket(pData,cbData,srcIP,srcPort);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_GetNextOutgoingPacket(lua_State* L) {
    int top = lua_gettop(L);

    void * pOut = check_void_ptr(L, 1);
    int cbMaxOut = check_int(L, 2);
    uint32 * pNetAdr = check_uint32_ptr(L, 3);
    uint16 * pPort = check_uint16_ptr(L, 4);

    int r = game_server->GetNextOutgoingPacket(pOut,cbMaxOut,pNetAdr,pPort);

    push_int(L, r);

    // return int
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_EnableHeartbeats(lua_State* L) {
    int top = lua_gettop(L);

    bool bActive = check_bool(L, 1);

    void r = game_server->EnableHeartbeats(bActive);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_SetHeartbeatInterval(lua_State* L) {
    int top = lua_gettop(L);

    int iHeartbeatInterval = check_int(L, 1);

    void r = game_server->SetHeartbeatInterval(iHeartbeatInterval);

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_ForceHeartbeat(lua_State* L) {
    int top = lua_gettop(L);


    void r = game_server->ForceHeartbeat();

    push_void(L, r);

    // return void
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_AssociateWithClan(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDClan = check_class_CSteamID(L, 1);

    SteamAPICall_t r = game_server->AssociateWithClan(steamIDClan);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServer_ComputeNewPlayerCompatibility(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDNewPlayer = check_class_CSteamID(L, 1);

    SteamAPICall_t r = game_server->ComputeNewPlayerCompatibility(steamIDNewPlayer);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_RequestUserStats(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);

    SteamAPICall_t r = game_server_stats->RequestUserStats(steamIDUser);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_GetUserStat(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    int32 * pData = check_int32_ptr(L, 3);

    bool r = game_server_stats->GetUserStat(steamIDUser,pchName,pData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_GetUserStat(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    float * pData = check_float_ptr(L, 3);

    bool r = game_server_stats->GetUserStat(steamIDUser,pchName,pData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_GetUserAchievement(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    bool * pbAchieved = check_bool_ptr(L, 3);

    bool r = game_server_stats->GetUserAchievement(steamIDUser,pchName,pbAchieved);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_SetUserStat(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    int32 nData = check_int32(L, 3);

    bool r = game_server_stats->SetUserStat(steamIDUser,pchName,nData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_SetUserStat(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    float fData = check_float(L, 3);

    bool r = game_server_stats->SetUserStat(steamIDUser,pchName,fData);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_UpdateUserAvgRateStat(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);
    float flCountThisSession = check_float(L, 3);
    double dSessionLength = check_double(L, 4);

    bool r = game_server_stats->UpdateUserAvgRateStat(steamIDUser,pchName,flCountThisSession,dSessionLength);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_SetUserAchievement(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);

    bool r = game_server_stats->SetUserAchievement(steamIDUser,pchName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_ClearUserAchievement(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);
    const char * pchName = check_const_char_ptr(L, 2);

    bool r = game_server_stats->ClearUserAchievement(steamIDUser,pchName);

    push_bool(L, r);

    // return bool
    assert(top + 1 == lua_gettop(L));
    return 0;
}
static ISteamGameServerStats_StoreUserStats(lua_State* L) {
    int top = lua_gettop(L);

    CSteamID * steamIDUser = check_class_CSteamID(L, 1);

    SteamAPICall_t r = game_server_stats->StoreUserStats(steamIDUser);

    push_SteamAPICall_t(L, r);

    // return SteamAPICall_t
    assert(top + 1 == lua_gettop(L));
    return 0;
}




static int Init(lua_State* L) {
	dmLogInfo("Init");
	SteamAPI_Init();
	if (!SteamAPI_IsSteamRunning()) {
		luaL_error(L, "Steam is not running");
	}
	steamFriends = SteamFriends();
	steamUser = SteamUser();
	steamUserStats = SteamUserStats();
	steamUserStats->RequestCurrentStats();
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


static const luaL_reg Module_methods[] = {
    { "init", Init },
    { "client_create_steam_pipe", ISteamClient_CreateSteamPipe };
    { "client_b_release_steam_pipe", ISteamClient_BReleaseSteamPipe };
    { "client_connect_to_global_user", ISteamClient_ConnectToGlobalUser };
    { "client_create_local_user", ISteamClient_CreateLocalUser };
    { "client_release_user", ISteamClient_ReleaseUser };
    { "client_get_i_steam_user", ISteamClient_GetISteamUser };
    { "client_get_i_steam_game_server", ISteamClient_GetISteamGameServer };
    { "client_set_local_ip_binding", ISteamClient_SetLocalIPBinding };
    { "client_get_i_steam_friends", ISteamClient_GetISteamFriends };
    { "client_get_i_steam_utils", ISteamClient_GetISteamUtils };
    { "client_get_i_steam_matchmaking", ISteamClient_GetISteamMatchmaking };
    { "client_get_i_steam_matchmaking_servers", ISteamClient_GetISteamMatchmakingServers };
    { "client_get_i_steam_generic_interface", ISteamClient_GetISteamGenericInterface };
    { "client_get_i_steam_user_stats", ISteamClient_GetISteamUserStats };
    { "client_get_i_steam_game_server_stats", ISteamClient_GetISteamGameServerStats };
    { "client_get_i_steam_apps", ISteamClient_GetISteamApps };
    { "client_get_i_steam_networking", ISteamClient_GetISteamNetworking };
    { "client_get_i_steam_remote_storage", ISteamClient_GetISteamRemoteStorage };
    { "client_get_i_steam_screenshots", ISteamClient_GetISteamScreenshots };
    { "client_get_ipc_call_count", ISteamClient_GetIPCCallCount };
    { "client_set_warning_message_hook", ISteamClient_SetWarningMessageHook };
    { "client_b_shutdown_if_all_pipes_closed", ISteamClient_BShutdownIfAllPipesClosed };
    { "client_get_i_steam_http", ISteamClient_GetISteamHTTP };
    { "client_get_i_steam_controller", ISteamClient_GetISteamController };
    { "client_get_i_steam_ugc", ISteamClient_GetISteamUGC };
    { "client_get_i_steam_app_list", ISteamClient_GetISteamAppList };
    { "client_get_i_steam_music", ISteamClient_GetISteamMusic };
    { "client_get_i_steam_music_remote", ISteamClient_GetISteamMusicRemote };
    { "client_get_i_steam_html_surface", ISteamClient_GetISteamHTMLSurface };
    { "client_get_i_steam_inventory", ISteamClient_GetISteamInventory };
    { "client_get_i_steam_video", ISteamClient_GetISteamVideo };
    { "client_get_i_steam_parental_settings", ISteamClient_GetISteamParentalSettings };
    { "user_get_h_steam_user", ISteamUser_GetHSteamUser };
    { "user_b_logged_on", ISteamUser_BLoggedOn };
    { "user_get_steam_id", ISteamUser_GetSteamID };
    { "user_initiate_game_connection", ISteamUser_InitiateGameConnection };
    { "user_terminate_game_connection", ISteamUser_TerminateGameConnection };
    { "user_track_app_usage_event", ISteamUser_TrackAppUsageEvent };
    { "user_get_user_data_folder", ISteamUser_GetUserDataFolder };
    { "user_start_voice_recording", ISteamUser_StartVoiceRecording };
    { "user_stop_voice_recording", ISteamUser_StopVoiceRecording };
    { "user_get_available_voice", ISteamUser_GetAvailableVoice };
    { "user_get_voice", ISteamUser_GetVoice };
    { "user_decompress_voice", ISteamUser_DecompressVoice };
    { "user_get_voice_optimal_sample_rate", ISteamUser_GetVoiceOptimalSampleRate };
    { "user_get_auth_session_ticket", ISteamUser_GetAuthSessionTicket };
    { "user_begin_auth_session", ISteamUser_BeginAuthSession };
    { "user_end_auth_session", ISteamUser_EndAuthSession };
    { "user_cancel_auth_ticket", ISteamUser_CancelAuthTicket };
    { "user_user_has_license_for_app", ISteamUser_UserHasLicenseForApp };
    { "user_b_is_behind_nat", ISteamUser_BIsBehindNAT };
    { "user_advertise_game", ISteamUser_AdvertiseGame };
    { "user_request_encrypted_app_ticket", ISteamUser_RequestEncryptedAppTicket };
    { "user_get_encrypted_app_ticket", ISteamUser_GetEncryptedAppTicket };
    { "user_get_game_badge_level", ISteamUser_GetGameBadgeLevel };
    { "user_get_player_steam_level", ISteamUser_GetPlayerSteamLevel };
    { "user_request_store_auth_url", ISteamUser_RequestStoreAuthURL };
    { "user_b_is_phone_verified", ISteamUser_BIsPhoneVerified };
    { "user_b_is_two_factor_enabled", ISteamUser_BIsTwoFactorEnabled };
    { "user_b_is_phone_identifying", ISteamUser_BIsPhoneIdentifying };
    { "user_b_is_phone_requiring_verification", ISteamUser_BIsPhoneRequiringVerification };
    { "friends_get_persona_name", ISteamFriends_GetPersonaName };
    { "friends_set_persona_name", ISteamFriends_SetPersonaName };
    { "friends_get_persona_state", ISteamFriends_GetPersonaState };
    { "friends_get_friend_count", ISteamFriends_GetFriendCount };
    { "friends_get_friend_by_index", ISteamFriends_GetFriendByIndex };
    { "friends_get_friend_relationship", ISteamFriends_GetFriendRelationship };
    { "friends_get_friend_persona_state", ISteamFriends_GetFriendPersonaState };
    { "friends_get_friend_persona_name", ISteamFriends_GetFriendPersonaName };
    { "friends_get_friend_game_played", ISteamFriends_GetFriendGamePlayed };
    { "friends_get_friend_persona_name_history", ISteamFriends_GetFriendPersonaNameHistory };
    { "friends_get_friend_steam_level", ISteamFriends_GetFriendSteamLevel };
    { "friends_get_player_nickname", ISteamFriends_GetPlayerNickname };
    { "friends_get_friends_group_count", ISteamFriends_GetFriendsGroupCount };
    { "friends_get_friends_group_id_by_index", ISteamFriends_GetFriendsGroupIDByIndex };
    { "friends_get_friends_group_name", ISteamFriends_GetFriendsGroupName };
    { "friends_get_friends_group_members_count", ISteamFriends_GetFriendsGroupMembersCount };
    { "friends_get_friends_group_members_list", ISteamFriends_GetFriendsGroupMembersList };
    { "friends_has_friend", ISteamFriends_HasFriend };
    { "friends_get_clan_count", ISteamFriends_GetClanCount };
    { "friends_get_clan_by_index", ISteamFriends_GetClanByIndex };
    { "friends_get_clan_name", ISteamFriends_GetClanName };
    { "friends_get_clan_tag", ISteamFriends_GetClanTag };
    { "friends_get_clan_activity_counts", ISteamFriends_GetClanActivityCounts };
    { "friends_download_clan_activity_counts", ISteamFriends_DownloadClanActivityCounts };
    { "friends_get_friend_count_from_source", ISteamFriends_GetFriendCountFromSource };
    { "friends_get_friend_from_source_by_index", ISteamFriends_GetFriendFromSourceByIndex };
    { "friends_is_user_in_source", ISteamFriends_IsUserInSource };
    { "friends_set_in_game_voice_speaking", ISteamFriends_SetInGameVoiceSpeaking };
    { "friends_activate_game_overlay", ISteamFriends_ActivateGameOverlay };
    { "friends_activate_game_overlay_to_user", ISteamFriends_ActivateGameOverlayToUser };
    { "friends_activate_game_overlay_to_web_page", ISteamFriends_ActivateGameOverlayToWebPage };
    { "friends_activate_game_overlay_to_store", ISteamFriends_ActivateGameOverlayToStore };
    { "friends_set_played_with", ISteamFriends_SetPlayedWith };
    { "friends_activate_game_overlay_invite_dialog", ISteamFriends_ActivateGameOverlayInviteDialog };
    { "friends_get_small_friend_avatar", ISteamFriends_GetSmallFriendAvatar };
    { "friends_get_medium_friend_avatar", ISteamFriends_GetMediumFriendAvatar };
    { "friends_get_large_friend_avatar", ISteamFriends_GetLargeFriendAvatar };
    { "friends_request_user_information", ISteamFriends_RequestUserInformation };
    { "friends_request_clan_officer_list", ISteamFriends_RequestClanOfficerList };
    { "friends_get_clan_owner", ISteamFriends_GetClanOwner };
    { "friends_get_clan_officer_count", ISteamFriends_GetClanOfficerCount };
    { "friends_get_clan_officer_by_index", ISteamFriends_GetClanOfficerByIndex };
    { "friends_get_user_restrictions", ISteamFriends_GetUserRestrictions };
    { "friends_set_rich_presence", ISteamFriends_SetRichPresence };
    { "friends_clear_rich_presence", ISteamFriends_ClearRichPresence };
    { "friends_get_friend_rich_presence", ISteamFriends_GetFriendRichPresence };
    { "friends_get_friend_rich_presence_key_count", ISteamFriends_GetFriendRichPresenceKeyCount };
    { "friends_get_friend_rich_presence_key_by_index", ISteamFriends_GetFriendRichPresenceKeyByIndex };
    { "friends_request_friend_rich_presence", ISteamFriends_RequestFriendRichPresence };
    { "friends_invite_user_to_game", ISteamFriends_InviteUserToGame };
    { "friends_get_coplay_friend_count", ISteamFriends_GetCoplayFriendCount };
    { "friends_get_coplay_friend", ISteamFriends_GetCoplayFriend };
    { "friends_get_friend_coplay_time", ISteamFriends_GetFriendCoplayTime };
    { "friends_get_friend_coplay_game", ISteamFriends_GetFriendCoplayGame };
    { "friends_join_clan_chat_room", ISteamFriends_JoinClanChatRoom };
    { "friends_leave_clan_chat_room", ISteamFriends_LeaveClanChatRoom };
    { "friends_get_clan_chat_member_count", ISteamFriends_GetClanChatMemberCount };
    { "friends_get_chat_member_by_index", ISteamFriends_GetChatMemberByIndex };
    { "friends_send_clan_chat_message", ISteamFriends_SendClanChatMessage };
    { "friends_get_clan_chat_message", ISteamFriends_GetClanChatMessage };
    { "friends_is_clan_chat_admin", ISteamFriends_IsClanChatAdmin };
    { "friends_is_clan_chat_window_open_in_steam", ISteamFriends_IsClanChatWindowOpenInSteam };
    { "friends_open_clan_chat_window_in_steam", ISteamFriends_OpenClanChatWindowInSteam };
    { "friends_close_clan_chat_window_in_steam", ISteamFriends_CloseClanChatWindowInSteam };
    { "friends_set_listen_for_friends_messages", ISteamFriends_SetListenForFriendsMessages };
    { "friends_reply_to_friend_message", ISteamFriends_ReplyToFriendMessage };
    { "friends_get_friend_message", ISteamFriends_GetFriendMessage };
    { "friends_get_follower_count", ISteamFriends_GetFollowerCount };
    { "friends_is_following", ISteamFriends_IsFollowing };
    { "friends_enumerate_following_list", ISteamFriends_EnumerateFollowingList };
    { "friends_is_clan_public", ISteamFriends_IsClanPublic };
    { "friends_is_clan_official_game_group", ISteamFriends_IsClanOfficialGameGroup };
    { "utils_get_seconds_since_app_active", ISteamUtils_GetSecondsSinceAppActive };
    { "utils_get_seconds_since_computer_active", ISteamUtils_GetSecondsSinceComputerActive };
    { "utils_get_connected_universe", ISteamUtils_GetConnectedUniverse };
    { "utils_get_server_real_time", ISteamUtils_GetServerRealTime };
    { "utils_get_ip_country", ISteamUtils_GetIPCountry };
    { "utils_get_image_size", ISteamUtils_GetImageSize };
    { "utils_get_image_rgba", ISteamUtils_GetImageRGBA };
    { "utils_get_cserip_port", ISteamUtils_GetCSERIPPort };
    { "utils_get_current_battery_power", ISteamUtils_GetCurrentBatteryPower };
    { "utils_get_app_id", ISteamUtils_GetAppID };
    { "utils_set_overlay_notification_position", ISteamUtils_SetOverlayNotificationPosition };
    { "utils_is_api_call_completed", ISteamUtils_IsAPICallCompleted };
    { "utils_get_api_call_failure_reason", ISteamUtils_GetAPICallFailureReason };
    { "utils_get_api_call_result", ISteamUtils_GetAPICallResult };
    { "utils_get_ipc_call_count", ISteamUtils_GetIPCCallCount };
    { "utils_set_warning_message_hook", ISteamUtils_SetWarningMessageHook };
    { "utils_is_overlay_enabled", ISteamUtils_IsOverlayEnabled };
    { "utils_b_overlay_needs_present", ISteamUtils_BOverlayNeedsPresent };
    { "utils_check_file_signature", ISteamUtils_CheckFileSignature };
    { "utils_show_gamepad_text_input", ISteamUtils_ShowGamepadTextInput };
    { "utils_get_entered_gamepad_text_length", ISteamUtils_GetEnteredGamepadTextLength };
    { "utils_get_entered_gamepad_text_input", ISteamUtils_GetEnteredGamepadTextInput };
    { "utils_get_steam_ui_language", ISteamUtils_GetSteamUILanguage };
    { "utils_is_steam_running_in_vr", ISteamUtils_IsSteamRunningInVR };
    { "utils_set_overlay_notification_inset", ISteamUtils_SetOverlayNotificationInset };
    { "utils_is_steam_in_big_picture_mode", ISteamUtils_IsSteamInBigPictureMode };
    { "utils_start_vr_dashboard", ISteamUtils_StartVRDashboard };
    { "utils_is_vr_headset_streaming_enabled", ISteamUtils_IsVRHeadsetStreamingEnabled };
    { "utils_set_vr_headset_streaming_enabled", ISteamUtils_SetVRHeadsetStreamingEnabled };
    { "matchmaking_get_favorite_game_count", ISteamMatchmaking_GetFavoriteGameCount };
    { "matchmaking_get_favorite_game", ISteamMatchmaking_GetFavoriteGame };
    { "matchmaking_add_favorite_game", ISteamMatchmaking_AddFavoriteGame };
    { "matchmaking_remove_favorite_game", ISteamMatchmaking_RemoveFavoriteGame };
    { "matchmaking_request_lobby_list", ISteamMatchmaking_RequestLobbyList };
    { "matchmaking_add_request_lobby_list_string_filter", ISteamMatchmaking_AddRequestLobbyListStringFilter };
    { "matchmaking_add_request_lobby_list_numerical_filter", ISteamMatchmaking_AddRequestLobbyListNumericalFilter };
    { "matchmaking_add_request_lobby_list_near_value_filter", ISteamMatchmaking_AddRequestLobbyListNearValueFilter };
    { "matchmaking_add_request_lobby_list_filter_slots_available", ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable };
    { "matchmaking_add_request_lobby_list_distance_filter", ISteamMatchmaking_AddRequestLobbyListDistanceFilter };
    { "matchmaking_add_request_lobby_list_result_count_filter", ISteamMatchmaking_AddRequestLobbyListResultCountFilter };
    { "matchmaking_add_request_lobby_list_compatible_members_filter", ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter };
    { "matchmaking_get_lobby_by_index", ISteamMatchmaking_GetLobbyByIndex };
    { "matchmaking_create_lobby", ISteamMatchmaking_CreateLobby };
    { "matchmaking_join_lobby", ISteamMatchmaking_JoinLobby };
    { "matchmaking_leave_lobby", ISteamMatchmaking_LeaveLobby };
    { "matchmaking_invite_user_to_lobby", ISteamMatchmaking_InviteUserToLobby };
    { "matchmaking_get_num_lobby_members", ISteamMatchmaking_GetNumLobbyMembers };
    { "matchmaking_get_lobby_member_by_index", ISteamMatchmaking_GetLobbyMemberByIndex };
    { "matchmaking_get_lobby_data", ISteamMatchmaking_GetLobbyData };
    { "matchmaking_set_lobby_data", ISteamMatchmaking_SetLobbyData };
    { "matchmaking_get_lobby_data_count", ISteamMatchmaking_GetLobbyDataCount };
    { "matchmaking_get_lobby_data_by_index", ISteamMatchmaking_GetLobbyDataByIndex };
    { "matchmaking_delete_lobby_data", ISteamMatchmaking_DeleteLobbyData };
    { "matchmaking_get_lobby_member_data", ISteamMatchmaking_GetLobbyMemberData };
    { "matchmaking_set_lobby_member_data", ISteamMatchmaking_SetLobbyMemberData };
    { "matchmaking_send_lobby_chat_msg", ISteamMatchmaking_SendLobbyChatMsg };
    { "matchmaking_get_lobby_chat_entry", ISteamMatchmaking_GetLobbyChatEntry };
    { "matchmaking_request_lobby_data", ISteamMatchmaking_RequestLobbyData };
    { "matchmaking_set_lobby_game_server", ISteamMatchmaking_SetLobbyGameServer };
    { "matchmaking_get_lobby_game_server", ISteamMatchmaking_GetLobbyGameServer };
    { "matchmaking_set_lobby_member_limit", ISteamMatchmaking_SetLobbyMemberLimit };
    { "matchmaking_get_lobby_member_limit", ISteamMatchmaking_GetLobbyMemberLimit };
    { "matchmaking_set_lobby_type", ISteamMatchmaking_SetLobbyType };
    { "matchmaking_set_lobby_joinable", ISteamMatchmaking_SetLobbyJoinable };
    { "matchmaking_get_lobby_owner", ISteamMatchmaking_GetLobbyOwner };
    { "matchmaking_set_lobby_owner", ISteamMatchmaking_SetLobbyOwner };
    { "matchmaking_set_linked_lobby", ISteamMatchmaking_SetLinkedLobby };
    { "matchmaking_server_list_response_server_responded", ISteamMatchmakingServerListResponse_ServerResponded };
    { "matchmaking_server_list_response_server_failed_to_respond", ISteamMatchmakingServerListResponse_ServerFailedToRespond };
    { "matchmaking_server_list_response_refresh_complete", ISteamMatchmakingServerListResponse_RefreshComplete };
    { "matchmaking_ping_response_server_responded", ISteamMatchmakingPingResponse_ServerResponded };
    { "matchmaking_ping_response_server_failed_to_respond", ISteamMatchmakingPingResponse_ServerFailedToRespond };
    { "matchmaking_players_response_add_player_to_list", ISteamMatchmakingPlayersResponse_AddPlayerToList };
    { "matchmaking_players_response_players_failed_to_respond", ISteamMatchmakingPlayersResponse_PlayersFailedToRespond };
    { "matchmaking_players_response_players_refresh_complete", ISteamMatchmakingPlayersResponse_PlayersRefreshComplete };
    { "matchmaking_rules_response_rules_responded", ISteamMatchmakingRulesResponse_RulesResponded };
    { "matchmaking_rules_response_rules_failed_to_respond", ISteamMatchmakingRulesResponse_RulesFailedToRespond };
    { "matchmaking_rules_response_rules_refresh_complete", ISteamMatchmakingRulesResponse_RulesRefreshComplete };
    { "matchmaking_servers_request_internet_server_list", ISteamMatchmakingServers_RequestInternetServerList };
    { "matchmaking_servers_request_lan_server_list", ISteamMatchmakingServers_RequestLANServerList };
    { "matchmaking_servers_request_friends_server_list", ISteamMatchmakingServers_RequestFriendsServerList };
    { "matchmaking_servers_request_favorites_server_list", ISteamMatchmakingServers_RequestFavoritesServerList };
    { "matchmaking_servers_request_history_server_list", ISteamMatchmakingServers_RequestHistoryServerList };
    { "matchmaking_servers_request_spectator_server_list", ISteamMatchmakingServers_RequestSpectatorServerList };
    { "matchmaking_servers_release_request", ISteamMatchmakingServers_ReleaseRequest };
    { "matchmaking_servers_get_server_details", ISteamMatchmakingServers_GetServerDetails };
    { "matchmaking_servers_cancel_query", ISteamMatchmakingServers_CancelQuery };
    { "matchmaking_servers_refresh_query", ISteamMatchmakingServers_RefreshQuery };
    { "matchmaking_servers_is_refreshing", ISteamMatchmakingServers_IsRefreshing };
    { "matchmaking_servers_get_server_count", ISteamMatchmakingServers_GetServerCount };
    { "matchmaking_servers_refresh_server", ISteamMatchmakingServers_RefreshServer };
    { "matchmaking_servers_ping_server", ISteamMatchmakingServers_PingServer };
    { "matchmaking_servers_player_details", ISteamMatchmakingServers_PlayerDetails };
    { "matchmaking_servers_server_rules", ISteamMatchmakingServers_ServerRules };
    { "matchmaking_servers_cancel_server_query", ISteamMatchmakingServers_CancelServerQuery };
    { "remote_storage_file_write", ISteamRemoteStorage_FileWrite };
    { "remote_storage_file_read", ISteamRemoteStorage_FileRead };
    { "remote_storage_file_write_async", ISteamRemoteStorage_FileWriteAsync };
    { "remote_storage_file_read_async", ISteamRemoteStorage_FileReadAsync };
    { "remote_storage_file_read_async_complete", ISteamRemoteStorage_FileReadAsyncComplete };
    { "remote_storage_file_forget", ISteamRemoteStorage_FileForget };
    { "remote_storage_file_delete", ISteamRemoteStorage_FileDelete };
    { "remote_storage_file_share", ISteamRemoteStorage_FileShare };
    { "remote_storage_set_sync_platforms", ISteamRemoteStorage_SetSyncPlatforms };
    { "remote_storage_file_write_stream_open", ISteamRemoteStorage_FileWriteStreamOpen };
    { "remote_storage_file_write_stream_write_chunk", ISteamRemoteStorage_FileWriteStreamWriteChunk };
    { "remote_storage_file_write_stream_close", ISteamRemoteStorage_FileWriteStreamClose };
    { "remote_storage_file_write_stream_cancel", ISteamRemoteStorage_FileWriteStreamCancel };
    { "remote_storage_file_exists", ISteamRemoteStorage_FileExists };
    { "remote_storage_file_persisted", ISteamRemoteStorage_FilePersisted };
    { "remote_storage_get_file_size", ISteamRemoteStorage_GetFileSize };
    { "remote_storage_get_file_timestamp", ISteamRemoteStorage_GetFileTimestamp };
    { "remote_storage_get_sync_platforms", ISteamRemoteStorage_GetSyncPlatforms };
    { "remote_storage_get_file_count", ISteamRemoteStorage_GetFileCount };
    { "remote_storage_get_file_name_and_size", ISteamRemoteStorage_GetFileNameAndSize };
    { "remote_storage_get_quota", ISteamRemoteStorage_GetQuota };
    { "remote_storage_is_cloud_enabled_for_account", ISteamRemoteStorage_IsCloudEnabledForAccount };
    { "remote_storage_is_cloud_enabled_for_app", ISteamRemoteStorage_IsCloudEnabledForApp };
    { "remote_storage_set_cloud_enabled_for_app", ISteamRemoteStorage_SetCloudEnabledForApp };
    { "remote_storage_ugc_download", ISteamRemoteStorage_UGCDownload };
    { "remote_storage_get_ugc_download_progress", ISteamRemoteStorage_GetUGCDownloadProgress };
    { "remote_storage_get_ugc_details", ISteamRemoteStorage_GetUGCDetails };
    { "remote_storage_ugc_read", ISteamRemoteStorage_UGCRead };
    { "remote_storage_get_cached_ugc_count", ISteamRemoteStorage_GetCachedUGCCount };
    { "remote_storage_get_cached_ugc_handle", ISteamRemoteStorage_GetCachedUGCHandle };
    { "remote_storage_publish_workshop_file", ISteamRemoteStorage_PublishWorkshopFile };
    { "remote_storage_create_published_file_update_request", ISteamRemoteStorage_CreatePublishedFileUpdateRequest };
    { "remote_storage_update_published_file_file", ISteamRemoteStorage_UpdatePublishedFileFile };
    { "remote_storage_update_published_file_preview_file", ISteamRemoteStorage_UpdatePublishedFilePreviewFile };
    { "remote_storage_update_published_file_title", ISteamRemoteStorage_UpdatePublishedFileTitle };
    { "remote_storage_update_published_file_description", ISteamRemoteStorage_UpdatePublishedFileDescription };
    { "remote_storage_update_published_file_visibility", ISteamRemoteStorage_UpdatePublishedFileVisibility };
    { "remote_storage_update_published_file_tags", ISteamRemoteStorage_UpdatePublishedFileTags };
    { "remote_storage_commit_published_file_update", ISteamRemoteStorage_CommitPublishedFileUpdate };
    { "remote_storage_get_published_file_details", ISteamRemoteStorage_GetPublishedFileDetails };
    { "remote_storage_delete_published_file", ISteamRemoteStorage_DeletePublishedFile };
    { "remote_storage_enumerate_user_published_files", ISteamRemoteStorage_EnumerateUserPublishedFiles };
    { "remote_storage_subscribe_published_file", ISteamRemoteStorage_SubscribePublishedFile };
    { "remote_storage_enumerate_user_subscribed_files", ISteamRemoteStorage_EnumerateUserSubscribedFiles };
    { "remote_storage_unsubscribe_published_file", ISteamRemoteStorage_UnsubscribePublishedFile };
    { "remote_storage_update_published_file_set_change_description", ISteamRemoteStorage_UpdatePublishedFileSetChangeDescription };
    { "remote_storage_get_published_item_vote_details", ISteamRemoteStorage_GetPublishedItemVoteDetails };
    { "remote_storage_update_user_published_item_vote", ISteamRemoteStorage_UpdateUserPublishedItemVote };
    { "remote_storage_get_user_published_item_vote_details", ISteamRemoteStorage_GetUserPublishedItemVoteDetails };
    { "remote_storage_enumerate_user_shared_workshop_files", ISteamRemoteStorage_EnumerateUserSharedWorkshopFiles };
    { "remote_storage_publish_video", ISteamRemoteStorage_PublishVideo };
    { "remote_storage_set_user_published_file_action", ISteamRemoteStorage_SetUserPublishedFileAction };
    { "remote_storage_enumerate_published_files_by_user_action", ISteamRemoteStorage_EnumeratePublishedFilesByUserAction };
    { "remote_storage_enumerate_published_workshop_files", ISteamRemoteStorage_EnumeratePublishedWorkshopFiles };
    { "remote_storage_ugc_download_to_location", ISteamRemoteStorage_UGCDownloadToLocation };
    { "user_stats_request_current_stats", ISteamUserStats_RequestCurrentStats };
    { "user_stats_get_stat", ISteamUserStats_GetStat };
    { "user_stats_get_stat", ISteamUserStats_GetStat };
    { "user_stats_set_stat", ISteamUserStats_SetStat };
    { "user_stats_set_stat", ISteamUserStats_SetStat };
    { "user_stats_update_avg_rate_stat", ISteamUserStats_UpdateAvgRateStat };
    { "user_stats_get_achievement", ISteamUserStats_GetAchievement };
    { "user_stats_set_achievement", ISteamUserStats_SetAchievement };
    { "user_stats_clear_achievement", ISteamUserStats_ClearAchievement };
    { "user_stats_get_achievement_and_unlock_time", ISteamUserStats_GetAchievementAndUnlockTime };
    { "user_stats_store_stats", ISteamUserStats_StoreStats };
    { "user_stats_get_achievement_icon", ISteamUserStats_GetAchievementIcon };
    { "user_stats_get_achievement_display_attribute", ISteamUserStats_GetAchievementDisplayAttribute };
    { "user_stats_indicate_achievement_progress", ISteamUserStats_IndicateAchievementProgress };
    { "user_stats_get_num_achievements", ISteamUserStats_GetNumAchievements };
    { "user_stats_get_achievement_name", ISteamUserStats_GetAchievementName };
    { "user_stats_request_user_stats", ISteamUserStats_RequestUserStats };
    { "user_stats_get_user_stat", ISteamUserStats_GetUserStat };
    { "user_stats_get_user_stat", ISteamUserStats_GetUserStat };
    { "user_stats_get_user_achievement", ISteamUserStats_GetUserAchievement };
    { "user_stats_get_user_achievement_and_unlock_time", ISteamUserStats_GetUserAchievementAndUnlockTime };
    { "user_stats_reset_all_stats", ISteamUserStats_ResetAllStats };
    { "user_stats_find_or_create_leaderboard", ISteamUserStats_FindOrCreateLeaderboard };
    { "user_stats_find_leaderboard", ISteamUserStats_FindLeaderboard };
    { "user_stats_get_leaderboard_name", ISteamUserStats_GetLeaderboardName };
    { "user_stats_get_leaderboard_entry_count", ISteamUserStats_GetLeaderboardEntryCount };
    { "user_stats_get_leaderboard_sort_method", ISteamUserStats_GetLeaderboardSortMethod };
    { "user_stats_get_leaderboard_display_type", ISteamUserStats_GetLeaderboardDisplayType };
    { "user_stats_download_leaderboard_entries", ISteamUserStats_DownloadLeaderboardEntries };
    { "user_stats_download_leaderboard_entries_for_users", ISteamUserStats_DownloadLeaderboardEntriesForUsers };
    { "user_stats_get_downloaded_leaderboard_entry", ISteamUserStats_GetDownloadedLeaderboardEntry };
    { "user_stats_upload_leaderboard_score", ISteamUserStats_UploadLeaderboardScore };
    { "user_stats_attach_leaderboard_ugc", ISteamUserStats_AttachLeaderboardUGC };
    { "user_stats_get_number_of_current_players", ISteamUserStats_GetNumberOfCurrentPlayers };
    { "user_stats_request_global_achievement_percentages", ISteamUserStats_RequestGlobalAchievementPercentages };
    { "user_stats_get_most_achieved_achievement_info", ISteamUserStats_GetMostAchievedAchievementInfo };
    { "user_stats_get_next_most_achieved_achievement_info", ISteamUserStats_GetNextMostAchievedAchievementInfo };
    { "user_stats_get_achievement_achieved_percent", ISteamUserStats_GetAchievementAchievedPercent };
    { "user_stats_request_global_stats", ISteamUserStats_RequestGlobalStats };
    { "user_stats_get_global_stat", ISteamUserStats_GetGlobalStat };
    { "user_stats_get_global_stat", ISteamUserStats_GetGlobalStat };
    { "user_stats_get_global_stat_history", ISteamUserStats_GetGlobalStatHistory };
    { "user_stats_get_global_stat_history", ISteamUserStats_GetGlobalStatHistory };
    { "apps_b_is_subscribed", ISteamApps_BIsSubscribed };
    { "apps_b_is_low_violence", ISteamApps_BIsLowViolence };
    { "apps_b_is_cybercafe", ISteamApps_BIsCybercafe };
    { "apps_b_is_vac_banned", ISteamApps_BIsVACBanned };
    { "apps_get_current_game_language", ISteamApps_GetCurrentGameLanguage };
    { "apps_get_available_game_languages", ISteamApps_GetAvailableGameLanguages };
    { "apps_b_is_subscribed_app", ISteamApps_BIsSubscribedApp };
    { "apps_b_is_dlc_installed", ISteamApps_BIsDlcInstalled };
    { "apps_get_earliest_purchase_unix_time", ISteamApps_GetEarliestPurchaseUnixTime };
    { "apps_b_is_subscribed_from_free_weekend", ISteamApps_BIsSubscribedFromFreeWeekend };
    { "apps_get_dlc_count", ISteamApps_GetDLCCount };
    { "apps_b_get_dlc_data_by_index", ISteamApps_BGetDLCDataByIndex };
    { "apps_install_dlc", ISteamApps_InstallDLC };
    { "apps_uninstall_dlc", ISteamApps_UninstallDLC };
    { "apps_request_app_proof_of_purchase_key", ISteamApps_RequestAppProofOfPurchaseKey };
    { "apps_get_current_beta_name", ISteamApps_GetCurrentBetaName };
    { "apps_mark_content_corrupt", ISteamApps_MarkContentCorrupt };
    { "apps_get_installed_depots", ISteamApps_GetInstalledDepots };
    { "apps_get_app_install_dir", ISteamApps_GetAppInstallDir };
    { "apps_b_is_app_installed", ISteamApps_BIsAppInstalled };
    { "apps_get_app_owner", ISteamApps_GetAppOwner };
    { "apps_get_launch_query_param", ISteamApps_GetLaunchQueryParam };
    { "apps_get_dlc_download_progress", ISteamApps_GetDlcDownloadProgress };
    { "apps_get_app_build_id", ISteamApps_GetAppBuildId };
    { "apps_request_all_proof_of_purchase_keys", ISteamApps_RequestAllProofOfPurchaseKeys };
    { "apps_get_file_details", ISteamApps_GetFileDetails };
    { "networking_send_p2_p_packet", ISteamNetworking_SendP2PPacket };
    { "networking_is_p2_p_packet_available", ISteamNetworking_IsP2PPacketAvailable };
    { "networking_read_p2_p_packet", ISteamNetworking_ReadP2PPacket };
    { "networking_accept_p2_p_session_with_user", ISteamNetworking_AcceptP2PSessionWithUser };
    { "networking_close_p2_p_session_with_user", ISteamNetworking_CloseP2PSessionWithUser };
    { "networking_close_p2_p_channel_with_user", ISteamNetworking_CloseP2PChannelWithUser };
    { "networking_get_p2_p_session_state", ISteamNetworking_GetP2PSessionState };
    { "networking_allow_p2_p_packet_relay", ISteamNetworking_AllowP2PPacketRelay };
    { "networking_create_listen_socket", ISteamNetworking_CreateListenSocket };
    { "networking_create_p2_p_connection_socket", ISteamNetworking_CreateP2PConnectionSocket };
    { "networking_create_connection_socket", ISteamNetworking_CreateConnectionSocket };
    { "networking_destroy_socket", ISteamNetworking_DestroySocket };
    { "networking_destroy_listen_socket", ISteamNetworking_DestroyListenSocket };
    { "networking_send_data_on_socket", ISteamNetworking_SendDataOnSocket };
    { "networking_is_data_available_on_socket", ISteamNetworking_IsDataAvailableOnSocket };
    { "networking_retrieve_data_from_socket", ISteamNetworking_RetrieveDataFromSocket };
    { "networking_is_data_available", ISteamNetworking_IsDataAvailable };
    { "networking_retrieve_data", ISteamNetworking_RetrieveData };
    { "networking_get_socket_info", ISteamNetworking_GetSocketInfo };
    { "networking_get_listen_socket_info", ISteamNetworking_GetListenSocketInfo };
    { "networking_get_socket_connection_type", ISteamNetworking_GetSocketConnectionType };
    { "networking_get_max_packet_size", ISteamNetworking_GetMaxPacketSize };
    { "screenshots_write_screenshot", ISteamScreenshots_WriteScreenshot };
    { "screenshots_add_screenshot_to_library", ISteamScreenshots_AddScreenshotToLibrary };
    { "screenshots_trigger_screenshot", ISteamScreenshots_TriggerScreenshot };
    { "screenshots_hook_screenshots", ISteamScreenshots_HookScreenshots };
    { "screenshots_set_location", ISteamScreenshots_SetLocation };
    { "screenshots_tag_user", ISteamScreenshots_TagUser };
    { "screenshots_tag_published_file", ISteamScreenshots_TagPublishedFile };
    { "screenshots_is_screenshots_hooked", ISteamScreenshots_IsScreenshotsHooked };
    { "screenshots_add_vr_screenshot_to_library", ISteamScreenshots_AddVRScreenshotToLibrary };
    { "music_b_is_enabled", ISteamMusic_BIsEnabled };
    { "music_b_is_playing", ISteamMusic_BIsPlaying };
    { "music_get_playback_status", ISteamMusic_GetPlaybackStatus };
    { "music_play", ISteamMusic_Play };
    { "music_pause", ISteamMusic_Pause };
    { "music_play_previous", ISteamMusic_PlayPrevious };
    { "music_play_next", ISteamMusic_PlayNext };
    { "music_set_volume", ISteamMusic_SetVolume };
    { "music_get_volume", ISteamMusic_GetVolume };
    { "music_remote_register_steam_music_remote", ISteamMusicRemote_RegisterSteamMusicRemote };
    { "music_remote_deregister_steam_music_remote", ISteamMusicRemote_DeregisterSteamMusicRemote };
    { "music_remote_b_is_current_music_remote", ISteamMusicRemote_BIsCurrentMusicRemote };
    { "music_remote_b_activation_success", ISteamMusicRemote_BActivationSuccess };
    { "music_remote_set_display_name", ISteamMusicRemote_SetDisplayName };
    { "music_remote_set_png_icon_64x64", ISteamMusicRemote_SetPNGIcon_64x64 };
    { "music_remote_enable_play_previous", ISteamMusicRemote_EnablePlayPrevious };
    { "music_remote_enable_play_next", ISteamMusicRemote_EnablePlayNext };
    { "music_remote_enable_shuffled", ISteamMusicRemote_EnableShuffled };
    { "music_remote_enable_looped", ISteamMusicRemote_EnableLooped };
    { "music_remote_enable_queue", ISteamMusicRemote_EnableQueue };
    { "music_remote_enable_playlists", ISteamMusicRemote_EnablePlaylists };
    { "music_remote_update_playback_status", ISteamMusicRemote_UpdatePlaybackStatus };
    { "music_remote_update_shuffled", ISteamMusicRemote_UpdateShuffled };
    { "music_remote_update_looped", ISteamMusicRemote_UpdateLooped };
    { "music_remote_update_volume", ISteamMusicRemote_UpdateVolume };
    { "music_remote_current_entry_will_change", ISteamMusicRemote_CurrentEntryWillChange };
    { "music_remote_current_entry_is_available", ISteamMusicRemote_CurrentEntryIsAvailable };
    { "music_remote_update_current_entry_text", ISteamMusicRemote_UpdateCurrentEntryText };
    { "music_remote_update_current_entry_elapsed_seconds", ISteamMusicRemote_UpdateCurrentEntryElapsedSeconds };
    { "music_remote_update_current_entry_cover_art", ISteamMusicRemote_UpdateCurrentEntryCoverArt };
    { "music_remote_current_entry_did_change", ISteamMusicRemote_CurrentEntryDidChange };
    { "music_remote_queue_will_change", ISteamMusicRemote_QueueWillChange };
    { "music_remote_reset_queue_entries", ISteamMusicRemote_ResetQueueEntries };
    { "music_remote_set_queue_entry", ISteamMusicRemote_SetQueueEntry };
    { "music_remote_set_current_queue_entry", ISteamMusicRemote_SetCurrentQueueEntry };
    { "music_remote_queue_did_change", ISteamMusicRemote_QueueDidChange };
    { "music_remote_playlist_will_change", ISteamMusicRemote_PlaylistWillChange };
    { "music_remote_reset_playlist_entries", ISteamMusicRemote_ResetPlaylistEntries };
    { "music_remote_set_playlist_entry", ISteamMusicRemote_SetPlaylistEntry };
    { "music_remote_set_current_playlist_entry", ISteamMusicRemote_SetCurrentPlaylistEntry };
    { "music_remote_playlist_did_change", ISteamMusicRemote_PlaylistDidChange };
    { "http_create_http_request", ISteamHTTP_CreateHTTPRequest };
    { "http_set_http_request_context_value", ISteamHTTP_SetHTTPRequestContextValue };
    { "http_set_http_request_network_activity_timeout", ISteamHTTP_SetHTTPRequestNetworkActivityTimeout };
    { "http_set_http_request_header_value", ISteamHTTP_SetHTTPRequestHeaderValue };
    { "http_set_http_request_get_or_post_parameter", ISteamHTTP_SetHTTPRequestGetOrPostParameter };
    { "http_send_http_request", ISteamHTTP_SendHTTPRequest };
    { "http_send_http_request_and_stream_response", ISteamHTTP_SendHTTPRequestAndStreamResponse };
    { "http_defer_http_request", ISteamHTTP_DeferHTTPRequest };
    { "http_prioritize_http_request", ISteamHTTP_PrioritizeHTTPRequest };
    { "http_get_http_response_header_size", ISteamHTTP_GetHTTPResponseHeaderSize };
    { "http_get_http_response_header_value", ISteamHTTP_GetHTTPResponseHeaderValue };
    { "http_get_http_response_body_size", ISteamHTTP_GetHTTPResponseBodySize };
    { "http_get_http_response_body_data", ISteamHTTP_GetHTTPResponseBodyData };
    { "http_get_http_streaming_response_body_data", ISteamHTTP_GetHTTPStreamingResponseBodyData };
    { "http_release_http_request", ISteamHTTP_ReleaseHTTPRequest };
    { "http_get_http_download_progress_pct", ISteamHTTP_GetHTTPDownloadProgressPct };
    { "http_set_http_request_raw_post_body", ISteamHTTP_SetHTTPRequestRawPostBody };
    { "http_create_cookie_container", ISteamHTTP_CreateCookieContainer };
    { "http_release_cookie_container", ISteamHTTP_ReleaseCookieContainer };
    { "http_set_cookie", ISteamHTTP_SetCookie };
    { "http_set_http_request_cookie_container", ISteamHTTP_SetHTTPRequestCookieContainer };
    { "http_set_http_request_user_agent_info", ISteamHTTP_SetHTTPRequestUserAgentInfo };
    { "http_set_http_request_requires_verified_certificate", ISteamHTTP_SetHTTPRequestRequiresVerifiedCertificate };
    { "http_set_http_request_absolute_timeout_ms", ISteamHTTP_SetHTTPRequestAbsoluteTimeoutMS };
    { "http_get_http_request_was_timed_out", ISteamHTTP_GetHTTPRequestWasTimedOut };
    { "controller_init", ISteamController_Init };
    { "controller_shutdown", ISteamController_Shutdown };
    { "controller_run_frame", ISteamController_RunFrame };
    { "controller_get_connected_controllers", ISteamController_GetConnectedControllers };
    { "controller_show_binding_panel", ISteamController_ShowBindingPanel };
    { "controller_get_action_set_handle", ISteamController_GetActionSetHandle };
    { "controller_activate_action_set", ISteamController_ActivateActionSet };
    { "controller_get_current_action_set", ISteamController_GetCurrentActionSet };
    { "controller_activate_action_set_layer", ISteamController_ActivateActionSetLayer };
    { "controller_deactivate_action_set_layer", ISteamController_DeactivateActionSetLayer };
    { "controller_deactivate_all_action_set_layers", ISteamController_DeactivateAllActionSetLayers };
    { "controller_get_active_action_set_layers", ISteamController_GetActiveActionSetLayers };
    { "controller_get_digital_action_handle", ISteamController_GetDigitalActionHandle };
    { "controller_get_digital_action_data", ISteamController_GetDigitalActionData };
    { "controller_get_digital_action_origins", ISteamController_GetDigitalActionOrigins };
    { "controller_get_analog_action_handle", ISteamController_GetAnalogActionHandle };
    { "controller_get_analog_action_data", ISteamController_GetAnalogActionData };
    { "controller_get_analog_action_origins", ISteamController_GetAnalogActionOrigins };
    { "controller_stop_analog_action_momentum", ISteamController_StopAnalogActionMomentum };
    { "controller_trigger_haptic_pulse", ISteamController_TriggerHapticPulse };
    { "controller_trigger_repeated_haptic_pulse", ISteamController_TriggerRepeatedHapticPulse };
    { "controller_trigger_vibration", ISteamController_TriggerVibration };
    { "controller_set_led_color", ISteamController_SetLEDColor };
    { "controller_get_gamepad_index_for_controller", ISteamController_GetGamepadIndexForController };
    { "controller_get_controller_for_gamepad_index", ISteamController_GetControllerForGamepadIndex };
    { "controller_get_motion_data", ISteamController_GetMotionData };
    { "controller_show_digital_action_origins", ISteamController_ShowDigitalActionOrigins };
    { "controller_show_analog_action_origins", ISteamController_ShowAnalogActionOrigins };
    { "controller_get_string_for_action_origin", ISteamController_GetStringForActionOrigin };
    { "controller_get_glyph_for_action_origin", ISteamController_GetGlyphForActionOrigin };
    { "controller_get_input_type_for_handle", ISteamController_GetInputTypeForHandle };
    { "ugc_create_query_user_ugc_request", ISteamUGC_CreateQueryUserUGCRequest };
    { "ugc_create_query_all_ugc_request", ISteamUGC_CreateQueryAllUGCRequest };
    { "ugc_create_query_ugc_details_request", ISteamUGC_CreateQueryUGCDetailsRequest };
    { "ugc_send_query_ugc_request", ISteamUGC_SendQueryUGCRequest };
    { "ugc_get_query_ugc_result", ISteamUGC_GetQueryUGCResult };
    { "ugc_get_query_ugc_preview_url", ISteamUGC_GetQueryUGCPreviewURL };
    { "ugc_get_query_ugc_metadata", ISteamUGC_GetQueryUGCMetadata };
    { "ugc_get_query_ugc_children", ISteamUGC_GetQueryUGCChildren };
    { "ugc_get_query_ugc_statistic", ISteamUGC_GetQueryUGCStatistic };
    { "ugc_get_query_ugc_num_additional_previews", ISteamUGC_GetQueryUGCNumAdditionalPreviews };
    { "ugc_get_query_ugc_additional_preview", ISteamUGC_GetQueryUGCAdditionalPreview };
    { "ugc_get_query_ugc_num_key_value_tags", ISteamUGC_GetQueryUGCNumKeyValueTags };
    { "ugc_get_query_ugc_key_value_tag", ISteamUGC_GetQueryUGCKeyValueTag };
    { "ugc_release_query_ugc_request", ISteamUGC_ReleaseQueryUGCRequest };
    { "ugc_add_required_tag", ISteamUGC_AddRequiredTag };
    { "ugc_add_excluded_tag", ISteamUGC_AddExcludedTag };
    { "ugc_set_return_only_i_ds", ISteamUGC_SetReturnOnlyIDs };
    { "ugc_set_return_key_value_tags", ISteamUGC_SetReturnKeyValueTags };
    { "ugc_set_return_long_description", ISteamUGC_SetReturnLongDescription };
    { "ugc_set_return_metadata", ISteamUGC_SetReturnMetadata };
    { "ugc_set_return_children", ISteamUGC_SetReturnChildren };
    { "ugc_set_return_additional_previews", ISteamUGC_SetReturnAdditionalPreviews };
    { "ugc_set_return_total_only", ISteamUGC_SetReturnTotalOnly };
    { "ugc_set_return_playtime_stats", ISteamUGC_SetReturnPlaytimeStats };
    { "ugc_set_language", ISteamUGC_SetLanguage };
    { "ugc_set_allow_cached_response", ISteamUGC_SetAllowCachedResponse };
    { "ugc_set_cloud_file_name_filter", ISteamUGC_SetCloudFileNameFilter };
    { "ugc_set_match_any_tag", ISteamUGC_SetMatchAnyTag };
    { "ugc_set_search_text", ISteamUGC_SetSearchText };
    { "ugc_set_ranked_by_trend_days", ISteamUGC_SetRankedByTrendDays };
    { "ugc_add_required_key_value_tag", ISteamUGC_AddRequiredKeyValueTag };
    { "ugc_request_ugc_details", ISteamUGC_RequestUGCDetails };
    { "ugc_create_item", ISteamUGC_CreateItem };
    { "ugc_start_item_update", ISteamUGC_StartItemUpdate };
    { "ugc_set_item_title", ISteamUGC_SetItemTitle };
    { "ugc_set_item_description", ISteamUGC_SetItemDescription };
    { "ugc_set_item_update_language", ISteamUGC_SetItemUpdateLanguage };
    { "ugc_set_item_metadata", ISteamUGC_SetItemMetadata };
    { "ugc_set_item_visibility", ISteamUGC_SetItemVisibility };
    { "ugc_set_item_tags", ISteamUGC_SetItemTags };
    { "ugc_set_item_content", ISteamUGC_SetItemContent };
    { "ugc_set_item_preview", ISteamUGC_SetItemPreview };
    { "ugc_remove_item_key_value_tags", ISteamUGC_RemoveItemKeyValueTags };
    { "ugc_add_item_key_value_tag", ISteamUGC_AddItemKeyValueTag };
    { "ugc_add_item_preview_file", ISteamUGC_AddItemPreviewFile };
    { "ugc_add_item_preview_video", ISteamUGC_AddItemPreviewVideo };
    { "ugc_update_item_preview_file", ISteamUGC_UpdateItemPreviewFile };
    { "ugc_update_item_preview_video", ISteamUGC_UpdateItemPreviewVideo };
    { "ugc_remove_item_preview", ISteamUGC_RemoveItemPreview };
    { "ugc_submit_item_update", ISteamUGC_SubmitItemUpdate };
    { "ugc_get_item_update_progress", ISteamUGC_GetItemUpdateProgress };
    { "ugc_set_user_item_vote", ISteamUGC_SetUserItemVote };
    { "ugc_get_user_item_vote", ISteamUGC_GetUserItemVote };
    { "ugc_add_item_to_favorites", ISteamUGC_AddItemToFavorites };
    { "ugc_remove_item_from_favorites", ISteamUGC_RemoveItemFromFavorites };
    { "ugc_subscribe_item", ISteamUGC_SubscribeItem };
    { "ugc_unsubscribe_item", ISteamUGC_UnsubscribeItem };
    { "ugc_get_num_subscribed_items", ISteamUGC_GetNumSubscribedItems };
    { "ugc_get_subscribed_items", ISteamUGC_GetSubscribedItems };
    { "ugc_get_item_state", ISteamUGC_GetItemState };
    { "ugc_get_item_install_info", ISteamUGC_GetItemInstallInfo };
    { "ugc_get_item_download_info", ISteamUGC_GetItemDownloadInfo };
    { "ugc_download_item", ISteamUGC_DownloadItem };
    { "ugc_b_init_workshop_for_game_server", ISteamUGC_BInitWorkshopForGameServer };
    { "ugc_suspend_downloads", ISteamUGC_SuspendDownloads };
    { "ugc_start_playtime_tracking", ISteamUGC_StartPlaytimeTracking };
    { "ugc_stop_playtime_tracking", ISteamUGC_StopPlaytimeTracking };
    { "ugc_stop_playtime_tracking_for_all_items", ISteamUGC_StopPlaytimeTrackingForAllItems };
    { "ugc_add_dependency", ISteamUGC_AddDependency };
    { "ugc_remove_dependency", ISteamUGC_RemoveDependency };
    { "ugc_add_app_dependency", ISteamUGC_AddAppDependency };
    { "ugc_remove_app_dependency", ISteamUGC_RemoveAppDependency };
    { "ugc_get_app_dependencies", ISteamUGC_GetAppDependencies };
    { "ugc_delete_item", ISteamUGC_DeleteItem };
    { "app_list_get_num_installed_apps", ISteamAppList_GetNumInstalledApps };
    { "app_list_get_installed_apps", ISteamAppList_GetInstalledApps };
    { "app_list_get_app_name", ISteamAppList_GetAppName };
    { "app_list_get_app_install_dir", ISteamAppList_GetAppInstallDir };
    { "app_list_get_app_build_id", ISteamAppList_GetAppBuildId };
    { "html_surface_destruct_i_steam_html_surface", ISteamHTMLSurface_DestructISteamHTMLSurface };
    { "html_surface_init", ISteamHTMLSurface_Init };
    { "html_surface_shutdown", ISteamHTMLSurface_Shutdown };
    { "html_surface_create_browser", ISteamHTMLSurface_CreateBrowser };
    { "html_surface_remove_browser", ISteamHTMLSurface_RemoveBrowser };
    { "html_surface_load_url", ISteamHTMLSurface_LoadURL };
    { "html_surface_set_size", ISteamHTMLSurface_SetSize };
    { "html_surface_stop_load", ISteamHTMLSurface_StopLoad };
    { "html_surface_reload", ISteamHTMLSurface_Reload };
    { "html_surface_go_back", ISteamHTMLSurface_GoBack };
    { "html_surface_go_forward", ISteamHTMLSurface_GoForward };
    { "html_surface_add_header", ISteamHTMLSurface_AddHeader };
    { "html_surface_execute_javascript", ISteamHTMLSurface_ExecuteJavascript };
    { "html_surface_mouse_up", ISteamHTMLSurface_MouseUp };
    { "html_surface_mouse_down", ISteamHTMLSurface_MouseDown };
    { "html_surface_mouse_double_click", ISteamHTMLSurface_MouseDoubleClick };
    { "html_surface_mouse_move", ISteamHTMLSurface_MouseMove };
    { "html_surface_mouse_wheel", ISteamHTMLSurface_MouseWheel };
    { "html_surface_key_down", ISteamHTMLSurface_KeyDown };
    { "html_surface_key_up", ISteamHTMLSurface_KeyUp };
    { "html_surface_key_char", ISteamHTMLSurface_KeyChar };
    { "html_surface_set_horizontal_scroll", ISteamHTMLSurface_SetHorizontalScroll };
    { "html_surface_set_vertical_scroll", ISteamHTMLSurface_SetVerticalScroll };
    { "html_surface_set_key_focus", ISteamHTMLSurface_SetKeyFocus };
    { "html_surface_view_source", ISteamHTMLSurface_ViewSource };
    { "html_surface_copy_to_clipboard", ISteamHTMLSurface_CopyToClipboard };
    { "html_surface_paste_from_clipboard", ISteamHTMLSurface_PasteFromClipboard };
    { "html_surface_find", ISteamHTMLSurface_Find };
    { "html_surface_stop_find", ISteamHTMLSurface_StopFind };
    { "html_surface_get_link_at_position", ISteamHTMLSurface_GetLinkAtPosition };
    { "html_surface_set_cookie", ISteamHTMLSurface_SetCookie };
    { "html_surface_set_page_scale_factor", ISteamHTMLSurface_SetPageScaleFactor };
    { "html_surface_set_background_mode", ISteamHTMLSurface_SetBackgroundMode };
    { "html_surface_set_dpi_scaling_factor", ISteamHTMLSurface_SetDPIScalingFactor };
    { "html_surface_allow_start_request", ISteamHTMLSurface_AllowStartRequest };
    { "html_surface_js_dialog_response", ISteamHTMLSurface_JSDialogResponse };
    { "inventory_get_result_status", ISteamInventory_GetResultStatus };
    { "inventory_get_result_items", ISteamInventory_GetResultItems };
    { "inventory_get_result_item_property", ISteamInventory_GetResultItemProperty };
    { "inventory_get_result_timestamp", ISteamInventory_GetResultTimestamp };
    { "inventory_check_result_steam_id", ISteamInventory_CheckResultSteamID };
    { "inventory_destroy_result", ISteamInventory_DestroyResult };
    { "inventory_get_all_items", ISteamInventory_GetAllItems };
    { "inventory_get_items_by_id", ISteamInventory_GetItemsByID };
    { "inventory_serialize_result", ISteamInventory_SerializeResult };
    { "inventory_deserialize_result", ISteamInventory_DeserializeResult };
    { "inventory_generate_items", ISteamInventory_GenerateItems };
    { "inventory_grant_promo_items", ISteamInventory_GrantPromoItems };
    { "inventory_add_promo_item", ISteamInventory_AddPromoItem };
    { "inventory_add_promo_items", ISteamInventory_AddPromoItems };
    { "inventory_consume_item", ISteamInventory_ConsumeItem };
    { "inventory_exchange_items", ISteamInventory_ExchangeItems };
    { "inventory_transfer_item_quantity", ISteamInventory_TransferItemQuantity };
    { "inventory_send_item_drop_heartbeat", ISteamInventory_SendItemDropHeartbeat };
    { "inventory_trigger_item_drop", ISteamInventory_TriggerItemDrop };
    { "inventory_trade_items", ISteamInventory_TradeItems };
    { "inventory_load_item_definitions", ISteamInventory_LoadItemDefinitions };
    { "inventory_get_item_definition_i_ds", ISteamInventory_GetItemDefinitionIDs };
    { "inventory_get_item_definition_property", ISteamInventory_GetItemDefinitionProperty };
    { "inventory_request_eligible_promo_item_definitions_i_ds", ISteamInventory_RequestEligiblePromoItemDefinitionsIDs };
    { "inventory_get_eligible_promo_item_definition_i_ds", ISteamInventory_GetEligiblePromoItemDefinitionIDs };
    { "inventory_start_purchase", ISteamInventory_StartPurchase };
    { "inventory_request_prices", ISteamInventory_RequestPrices };
    { "inventory_get_num_items_with_prices", ISteamInventory_GetNumItemsWithPrices };
    { "inventory_get_items_with_prices", ISteamInventory_GetItemsWithPrices };
    { "inventory_get_item_price", ISteamInventory_GetItemPrice };
    { "inventory_start_update_properties", ISteamInventory_StartUpdateProperties };
    { "inventory_remove_property", ISteamInventory_RemoveProperty };
    { "inventory_set_property", ISteamInventory_SetProperty };
    { "inventory_set_property", ISteamInventory_SetProperty };
    { "inventory_set_property", ISteamInventory_SetProperty };
    { "inventory_set_property", ISteamInventory_SetProperty };
    { "inventory_submit_update_properties", ISteamInventory_SubmitUpdateProperties };
    { "video_get_video_url", ISteamVideo_GetVideoURL };
    { "video_is_broadcasting", ISteamVideo_IsBroadcasting };
    { "video_get_opf_settings", ISteamVideo_GetOPFSettings };
    { "video_get_opf_string_for_app", ISteamVideo_GetOPFStringForApp };
    { "parental_settings_b_is_parental_lock_enabled", ISteamParentalSettings_BIsParentalLockEnabled };
    { "parental_settings_b_is_parental_lock_locked", ISteamParentalSettings_BIsParentalLockLocked };
    { "parental_settings_b_is_app_blocked", ISteamParentalSettings_BIsAppBlocked };
    { "parental_settings_b_is_app_in_block_list", ISteamParentalSettings_BIsAppInBlockList };
    { "parental_settings_b_is_feature_blocked", ISteamParentalSettings_BIsFeatureBlocked };
    { "parental_settings_b_is_feature_in_block_list", ISteamParentalSettings_BIsFeatureInBlockList };
    { "game_server_init_game_server", ISteamGameServer_InitGameServer };
    { "game_server_set_product", ISteamGameServer_SetProduct };
    { "game_server_set_game_description", ISteamGameServer_SetGameDescription };
    { "game_server_set_mod_dir", ISteamGameServer_SetModDir };
    { "game_server_set_dedicated_server", ISteamGameServer_SetDedicatedServer };
    { "game_server_log_on", ISteamGameServer_LogOn };
    { "game_server_log_on_anonymous", ISteamGameServer_LogOnAnonymous };
    { "game_server_log_off", ISteamGameServer_LogOff };
    { "game_server_b_logged_on", ISteamGameServer_BLoggedOn };
    { "game_server_b_secure", ISteamGameServer_BSecure };
    { "game_server_get_steam_id", ISteamGameServer_GetSteamID };
    { "game_server_was_restart_requested", ISteamGameServer_WasRestartRequested };
    { "game_server_set_max_player_count", ISteamGameServer_SetMaxPlayerCount };
    { "game_server_set_bot_player_count", ISteamGameServer_SetBotPlayerCount };
    { "game_server_set_server_name", ISteamGameServer_SetServerName };
    { "game_server_set_map_name", ISteamGameServer_SetMapName };
    { "game_server_set_password_protected", ISteamGameServer_SetPasswordProtected };
    { "game_server_set_spectator_port", ISteamGameServer_SetSpectatorPort };
    { "game_server_set_spectator_server_name", ISteamGameServer_SetSpectatorServerName };
    { "game_server_clear_all_key_values", ISteamGameServer_ClearAllKeyValues };
    { "game_server_set_key_value", ISteamGameServer_SetKeyValue };
    { "game_server_set_game_tags", ISteamGameServer_SetGameTags };
    { "game_server_set_game_data", ISteamGameServer_SetGameData };
    { "game_server_set_region", ISteamGameServer_SetRegion };
    { "game_server_send_user_connect_and_authenticate", ISteamGameServer_SendUserConnectAndAuthenticate };
    { "game_server_create_unauthenticated_user_connection", ISteamGameServer_CreateUnauthenticatedUserConnection };
    { "game_server_send_user_disconnect", ISteamGameServer_SendUserDisconnect };
    { "game_server_b_update_user_data", ISteamGameServer_BUpdateUserData };
    { "game_server_get_auth_session_ticket", ISteamGameServer_GetAuthSessionTicket };
    { "game_server_begin_auth_session", ISteamGameServer_BeginAuthSession };
    { "game_server_end_auth_session", ISteamGameServer_EndAuthSession };
    { "game_server_cancel_auth_ticket", ISteamGameServer_CancelAuthTicket };
    { "game_server_user_has_license_for_app", ISteamGameServer_UserHasLicenseForApp };
    { "game_server_request_user_group_status", ISteamGameServer_RequestUserGroupStatus };
    { "game_server_get_gameplay_stats", ISteamGameServer_GetGameplayStats };
    { "game_server_get_server_reputation", ISteamGameServer_GetServerReputation };
    { "game_server_get_public_ip", ISteamGameServer_GetPublicIP };
    { "game_server_handle_incoming_packet", ISteamGameServer_HandleIncomingPacket };
    { "game_server_get_next_outgoing_packet", ISteamGameServer_GetNextOutgoingPacket };
    { "game_server_enable_heartbeats", ISteamGameServer_EnableHeartbeats };
    { "game_server_set_heartbeat_interval", ISteamGameServer_SetHeartbeatInterval };
    { "game_server_force_heartbeat", ISteamGameServer_ForceHeartbeat };
    { "game_server_associate_with_clan", ISteamGameServer_AssociateWithClan };
    { "game_server_compute_new_player_compatibility", ISteamGameServer_ComputeNewPlayerCompatibility };
    { "game_server_stats_request_user_stats", ISteamGameServerStats_RequestUserStats };
    { "game_server_stats_get_user_stat", ISteamGameServerStats_GetUserStat };
    { "game_server_stats_get_user_stat", ISteamGameServerStats_GetUserStat };
    { "game_server_stats_get_user_achievement", ISteamGameServerStats_GetUserAchievement };
    { "game_server_stats_set_user_stat", ISteamGameServerStats_SetUserStat };
    { "game_server_stats_set_user_stat", ISteamGameServerStats_SetUserStat };
    { "game_server_stats_update_user_avg_rate_stat", ISteamGameServerStats_UpdateUserAvgRateStat };
    { "game_server_stats_set_user_achievement", ISteamGameServerStats_SetUserAchievement };
    { "game_server_stats_clear_user_achievement", ISteamGameServerStats_ClearUserAchievement };
    { "game_server_stats_store_user_stats", ISteamGameServerStats_StoreUserStats };
    { 0, 0 }
};

static void LuaInit(lua_State* L) {
	int top = lua_gettop(L);
	luaL_register(L, MODULE_NAME, Module_methods);

	#define SETCONSTANT(name, val) \
	lua_pushnumber(L, (lua_Number) val); \
	lua_setfield(L, -2, #name);

	//SETCONSTANT(STAT_TYPE_INT, DM_STEAMWORKS_EXTENSION_STAT_TYPE_INT);

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

DM_DECLARE_EXTENSION(steamworks, LIB_NAME, AppInitializeSteamworks, AppFinalizeSteamworks, InitializeSteamworks, 0, 0, FinalizeSteamworks)
