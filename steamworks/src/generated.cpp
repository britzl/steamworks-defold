// GENERATED CODE - DO NOT MODIFY
// Copyright 2016 Bjorn Ritzl

/**

user_get_h_steam_user() -> ISteamUser_GetHSteamUser()
user_b_logged_on() -> ISteamUser_BLoggedOn()
user_get_steam_id() -> ISteamUser_GetSteamID()
user_terminate_game_connection(unIPServer,usPortServer) -> ISteamUser_TerminateGameConnection()
user_get_auth_session_ticket(pTicket,cbMaxTicket) -> ISteamUser_GetAuthSessionTicket()
user_begin_auth_session(pAuthTicket,cbAuthTicket,steamID) -> ISteamUser_BeginAuthSession()
user_end_auth_session(steamID) -> ISteamUser_EndAuthSession()
user_cancel_auth_ticket(hAuthTicket) -> ISteamUser_CancelAuthTicket()
user_user_has_license_for_app(steamID,appID) -> ISteamUser_UserHasLicenseForApp()
user_b_is_behind_nat() -> ISteamUser_BIsBehindNAT()
user_advertise_game(steamIDGameServer,unIPServer,usPortServer) -> ISteamUser_AdvertiseGame()
user_request_encrypted_app_ticket(pDataToInclude,cbDataToInclude) -> ISteamUser_RequestEncryptedAppTicket()
user_get_encrypted_app_ticket(pTicket,cbMaxTicket) -> ISteamUser_GetEncryptedAppTicket()
user_get_game_badge_level(nSeries,bFoil) -> ISteamUser_GetGameBadgeLevel()
user_get_player_steam_level() -> ISteamUser_GetPlayerSteamLevel()
user_request_store_auth_url(pchRedirectURL) -> ISteamUser_RequestStoreAuthURL()
user_b_is_phone_verified() -> ISteamUser_BIsPhoneVerified()
user_b_is_two_factor_enabled() -> ISteamUser_BIsTwoFactorEnabled()
user_b_is_phone_identifying() -> ISteamUser_BIsPhoneIdentifying()
user_b_is_phone_requiring_verification() -> ISteamUser_BIsPhoneRequiringVerification()
friends_get_persona_name() -> ISteamFriends_GetPersonaName()
friends_set_persona_name(pchPersonaName) -> ISteamFriends_SetPersonaName()
friends_get_persona_state() -> ISteamFriends_GetPersonaState()
friends_get_friend_count(iFriendFlags) -> ISteamFriends_GetFriendCount()
friends_get_friend_by_index(iFriend,iFriendFlags) -> ISteamFriends_GetFriendByIndex()
friends_get_friend_relationship(steamIDFriend) -> ISteamFriends_GetFriendRelationship()
friends_get_friend_persona_state(steamIDFriend) -> ISteamFriends_GetFriendPersonaState()
friends_get_friend_persona_name(steamIDFriend) -> ISteamFriends_GetFriendPersonaName()
friends_get_friend_game_played(steamIDFriend) -> ISteamFriends_GetFriendGamePlayed()
friends_get_friend_persona_name_history(steamIDFriend,iPersonaName) -> ISteamFriends_GetFriendPersonaNameHistory()
friends_get_friend_steam_level(steamIDFriend) -> ISteamFriends_GetFriendSteamLevel()
friends_get_player_nickname(steamIDPlayer) -> ISteamFriends_GetPlayerNickname()
friends_get_friends_group_count() -> ISteamFriends_GetFriendsGroupCount()
friends_get_friends_group_id_by_index(iFG) -> ISteamFriends_GetFriendsGroupIDByIndex()
friends_get_friends_group_name(friendsGroupID) -> ISteamFriends_GetFriendsGroupName()
friends_get_friends_group_members_count(friendsGroupID) -> ISteamFriends_GetFriendsGroupMembersCount()
friends_get_friends_group_members_list(friendsGroupID) -> ISteamFriends_GetFriendsGroupMembersList()
friends_has_friend(steamIDFriend,iFriendFlags) -> ISteamFriends_HasFriend()
friends_get_clan_count() -> ISteamFriends_GetClanCount()
friends_get_clan_by_index(iClan) -> ISteamFriends_GetClanByIndex()
friends_get_clan_name(steamIDClan) -> ISteamFriends_GetClanName()
friends_get_clan_tag(steamIDClan) -> ISteamFriends_GetClanTag()
friends_get_clan_activity_counts(steamIDClan) -> ISteamFriends_GetClanActivityCounts()
friends_download_clan_activity_counts(psteamIDClans,cClansToRequest) -> ISteamFriends_DownloadClanActivityCounts()
friends_get_friend_count_from_source(steamIDSource) -> ISteamFriends_GetFriendCountFromSource()
friends_get_friend_from_source_by_index(steamIDSource,iFriend) -> ISteamFriends_GetFriendFromSourceByIndex()
friends_is_user_in_source(steamIDUser,steamIDSource) -> ISteamFriends_IsUserInSource()
friends_set_in_game_voice_speaking(steamIDUser,bSpeaking) -> ISteamFriends_SetInGameVoiceSpeaking()
friends_activate_game_overlay(pchDialog) -> ISteamFriends_ActivateGameOverlay()
friends_activate_game_overlay_to_user(pchDialog,steamID) -> ISteamFriends_ActivateGameOverlayToUser()
friends_activate_game_overlay_to_web_page(pchURL) -> ISteamFriends_ActivateGameOverlayToWebPage()
friends_activate_game_overlay_to_store(nAppID,eFlag) -> ISteamFriends_ActivateGameOverlayToStore()
friends_set_played_with(steamIDUserPlayedWith) -> ISteamFriends_SetPlayedWith()
friends_activate_game_overlay_invite_dialog(steamIDLobby) -> ISteamFriends_ActivateGameOverlayInviteDialog()
friends_get_small_friend_avatar(steamIDFriend) -> ISteamFriends_GetSmallFriendAvatar()
friends_get_medium_friend_avatar(steamIDFriend) -> ISteamFriends_GetMediumFriendAvatar()
friends_get_large_friend_avatar(steamIDFriend) -> ISteamFriends_GetLargeFriendAvatar()
friends_request_user_information(steamIDUser,bRequireNameOnly) -> ISteamFriends_RequestUserInformation()
friends_request_clan_officer_list(steamIDClan) -> ISteamFriends_RequestClanOfficerList()
friends_get_clan_owner(steamIDClan) -> ISteamFriends_GetClanOwner()
friends_get_clan_officer_count(steamIDClan) -> ISteamFriends_GetClanOfficerCount()
friends_get_clan_officer_by_index(steamIDClan,iOfficer) -> ISteamFriends_GetClanOfficerByIndex()
friends_get_user_restrictions() -> ISteamFriends_GetUserRestrictions()
friends_set_rich_presence(pchKey,pchValue) -> ISteamFriends_SetRichPresence()
friends_clear_rich_presence() -> ISteamFriends_ClearRichPresence()
friends_get_friend_rich_presence(steamIDFriend,pchKey) -> ISteamFriends_GetFriendRichPresence()
friends_get_friend_rich_presence_key_count(steamIDFriend) -> ISteamFriends_GetFriendRichPresenceKeyCount()
friends_get_friend_rich_presence_key_by_index(steamIDFriend,iKey) -> ISteamFriends_GetFriendRichPresenceKeyByIndex()
friends_request_friend_rich_presence(steamIDFriend) -> ISteamFriends_RequestFriendRichPresence()
friends_invite_user_to_game(steamIDFriend,pchConnectString) -> ISteamFriends_InviteUserToGame()
friends_get_coplay_friend_count() -> ISteamFriends_GetCoplayFriendCount()
friends_get_coplay_friend(iCoplayFriend) -> ISteamFriends_GetCoplayFriend()
friends_get_friend_coplay_time(steamIDFriend) -> ISteamFriends_GetFriendCoplayTime()
friends_get_friend_coplay_game(steamIDFriend) -> ISteamFriends_GetFriendCoplayGame()
friends_join_clan_chat_room(steamIDClan) -> ISteamFriends_JoinClanChatRoom()
friends_leave_clan_chat_room(steamIDClan) -> ISteamFriends_LeaveClanChatRoom()
friends_get_clan_chat_member_count(steamIDClan) -> ISteamFriends_GetClanChatMemberCount()
friends_get_chat_member_by_index(steamIDClan,iUser) -> ISteamFriends_GetChatMemberByIndex()
friends_send_clan_chat_message(steamIDClanChat,pchText) -> ISteamFriends_SendClanChatMessage()
friends_get_clan_chat_message(steamIDClanChat,iMessage,prgchText,cchTextMax) -> ISteamFriends_GetClanChatMessage()
friends_is_clan_chat_admin(steamIDClanChat,steamIDUser) -> ISteamFriends_IsClanChatAdmin()
friends_is_clan_chat_window_open_in_steam(steamIDClanChat) -> ISteamFriends_IsClanChatWindowOpenInSteam()
friends_open_clan_chat_window_in_steam(steamIDClanChat) -> ISteamFriends_OpenClanChatWindowInSteam()
friends_close_clan_chat_window_in_steam(steamIDClanChat) -> ISteamFriends_CloseClanChatWindowInSteam()
friends_set_listen_for_friends_messages(bInterceptEnabled) -> ISteamFriends_SetListenForFriendsMessages()
friends_reply_to_friend_message(steamIDFriend,pchMsgToSend) -> ISteamFriends_ReplyToFriendMessage()
friends_get_friend_message(steamIDFriend,iMessageID,pvData,cubData) -> ISteamFriends_GetFriendMessage()
friends_get_follower_count(steamID) -> ISteamFriends_GetFollowerCount()
friends_is_following(steamID) -> ISteamFriends_IsFollowing()
friends_enumerate_following_list(unStartIndex) -> ISteamFriends_EnumerateFollowingList()
friends_is_clan_public(steamIDClan) -> ISteamFriends_IsClanPublic()
friends_is_clan_official_game_group(steamIDClan) -> ISteamFriends_IsClanOfficialGameGroup()
utils_get_seconds_since_app_active() -> ISteamUtils_GetSecondsSinceAppActive()
utils_get_seconds_since_computer_active() -> ISteamUtils_GetSecondsSinceComputerActive()
utils_get_connected_universe() -> ISteamUtils_GetConnectedUniverse()
utils_get_server_real_time() -> ISteamUtils_GetServerRealTime()
utils_get_ip_country() -> ISteamUtils_GetIPCountry()
utils_get_image_size(iImage) -> ISteamUtils_GetImageSize()
utils_get_image_rgba(iImage,nDestBufferSize) -> ISteamUtils_GetImageRGBA()
utils_get_cserip_port() -> ISteamUtils_GetCSERIPPort()
utils_get_current_battery_power() -> ISteamUtils_GetCurrentBatteryPower()
utils_get_app_id() -> ISteamUtils_GetAppID()
utils_set_overlay_notification_position(eNotificationPosition) -> ISteamUtils_SetOverlayNotificationPosition()
utils_is_api_call_completed(hSteamAPICall) -> ISteamUtils_IsAPICallCompleted()
utils_get_api_call_failure_reason(hSteamAPICall) -> ISteamUtils_GetAPICallFailureReason()
utils_get_api_call_result(hSteamAPICall,pCallback,cubCallback,iCallbackExpected) -> ISteamUtils_GetAPICallResult()
utils_get_ipc_call_count() -> ISteamUtils_GetIPCCallCount()
utils_is_overlay_enabled() -> ISteamUtils_IsOverlayEnabled()
utils_b_overlay_needs_present() -> ISteamUtils_BOverlayNeedsPresent()
utils_check_file_signature(szFileName) -> ISteamUtils_CheckFileSignature()
utils_show_gamepad_text_input(eInputMode,eLineInputMode,pchDescription,unCharMax,pchExistingText) -> ISteamUtils_ShowGamepadTextInput()
utils_get_entered_gamepad_text_length() -> ISteamUtils_GetEnteredGamepadTextLength()
utils_get_entered_gamepad_text_input(pchText,cchText) -> ISteamUtils_GetEnteredGamepadTextInput()
utils_get_steam_ui_language() -> ISteamUtils_GetSteamUILanguage()
utils_is_steam_running_in_vr() -> ISteamUtils_IsSteamRunningInVR()
utils_set_overlay_notification_inset(nHorizontalInset,nVerticalInset) -> ISteamUtils_SetOverlayNotificationInset()
utils_is_steam_in_big_picture_mode() -> ISteamUtils_IsSteamInBigPictureMode()
utils_start_vr_dashboard() -> ISteamUtils_StartVRDashboard()
utils_is_vr_headset_streaming_enabled() -> ISteamUtils_IsVRHeadsetStreamingEnabled()
utils_set_vr_headset_streaming_enabled(bEnabled) -> ISteamUtils_SetVRHeadsetStreamingEnabled()

*/

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


#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_INT 0
#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_FLOAT 1
#define DM_STEAMWORKS_EXTENSION_STAT_TYPE_AVERAGERATE 2

static ISteamClient *client;
static ISteamFriends *friends;
static ISteamUser *user;
static ISteamUserStats *userstats;
static ISteamMatchmaking *matchmaking;
static ISteamUtils *utils;




/*****************************
* PUSH
******************************/

static void push_double(lua_State* L, double n) {
	lua_pushinteger(L, n);
}
static void push_int(lua_State* L, int n) {
	lua_pushinteger(L, n);
}
static void push_unsigned_int(lua_State* L, unsigned int n) {
	lua_pushinteger(L, n);
}
static void push_uint32(lua_State* L, uint32 n) {
	lua_pushinteger(L, n);
}
static void push_uint16(lua_State* L, uint16 n) {
	lua_pushinteger(L, n);
}
static void push_uint8(lua_State* L, uint8 n) {
	lua_pushinteger(L, n);
}
static void push_int32(lua_State* L, int32 n) {
	lua_pushinteger(L, n);
}
static void push_PackageId_t(lua_State* L, PackageId_t n) {
	lua_pushinteger(L, n);
}
static void push_BundleId_t(lua_State* L, BundleId_t n) {
	lua_pushinteger(L, n);
}
static void push_AppId_t(lua_State* L, AppId_t n) {
	lua_pushinteger(L, n);
}
static void push_PhysicalItemId_t(lua_State* L, PhysicalItemId_t n) {
	lua_pushinteger(L, n);
}
static void push_DepotId_t(lua_State* L, DepotId_t n) {
	lua_pushinteger(L, n);
}
static void push_RTime32(lua_State* L, RTime32 n) {
	lua_pushinteger(L, n);
}
static void push_CellID_t(lua_State* L, CellID_t n) {
	lua_pushinteger(L, n);
}
static void push_AccountID_t(lua_State* L, AccountID_t n) {
	lua_pushinteger(L, n);
}
static void push_PartnerId_t(lua_State* L, PartnerId_t n) {
	lua_pushinteger(L, n);
}
static void push_HAuthTicket(lua_State* L, HAuthTicket n) {
	lua_pushinteger(L, n);
}
static void push_HSteamPipe(lua_State* L, HSteamPipe n) {
	lua_pushinteger(L, n);
}
static void push_HSteamUser(lua_State* L, HSteamUser n) {
	lua_pushinteger(L, n);
}
static void push_FriendsGroupID_t(lua_State* L, FriendsGroupID_t n) {
	lua_pushinteger(L, n);
}
static void push_HServerQuery(lua_State* L, HServerQuery n) {
	lua_pushinteger(L, n);
}
static void push_SNetSocket_t(lua_State* L, SNetSocket_t n) {
	lua_pushinteger(L, n);
}
static void push_SNetListenSocket_t(lua_State* L, SNetListenSocket_t n) {
	lua_pushinteger(L, n);
}
static void push_ScreenshotHandle(lua_State* L, ScreenshotHandle n) {
	lua_pushinteger(L, n);
}
static void push_HTTPRequestHandle(lua_State* L, HTTPRequestHandle n) {
	lua_pushinteger(L, n);
}
static void push_HTTPCookieContainerHandle(lua_State* L, HTTPCookieContainerHandle n) {
	lua_pushinteger(L, n);
}
static void push_HHTMLBrowser(lua_State* L, HHTMLBrowser n) {
	lua_pushinteger(L, n);
}
static void push_SteamItemDef_t(lua_State* L, SteamItemDef_t n) {
	lua_pushinteger(L, n);
}
static void push_SteamInventoryResult_t(lua_State* L, SteamInventoryResult_t n) {
	lua_pushinteger(L, n);
}

static void push_int64(lua_State* L, int64 n) {
	char buf[22];
	snprintf(buf, sizeof(buf), "%ld", n);
	lua_pushstring(L, buf);
}
static void push_lint64(lua_State* L, lint64 n) {
	char buf[22];
	snprintf(buf, sizeof(buf), "%ld", n);
	lua_pushstring(L, buf);
}

static void push_uint64(lua_State* L, uint64 n) {
	char buf[22];
	snprintf(buf, sizeof(buf), "%llu", n);
	lua_pushstring(L, buf);
}
static void push_ulint64(lua_State* L, ulint64 n) {
	push_uint64(L, n);
}
static void push_GID_t(lua_State* L, GID_t n) {
	push_uint64(L, n);
}
static void push_JobID_t(lua_State* L, JobID_t n) {
	push_uint64(L, n);
}
static void push_AssetClassId_t(lua_State* L, AssetClassId_t n) {
	push_uint64(L, n);
}
static void push_SteamAPICall_t(lua_State* L, SteamAPICall_t n) {
	push_uint64(L, n);
}
static void push_ManifestId_t(lua_State* L, ManifestId_t n) {
	push_uint64(L, n);
}
static void push_SiteId_t(lua_State* L, SiteId_t n) {
	push_uint64(L, n);
}
static void push_UGCHandle_t(lua_State* L, UGCHandle_t n) {
	push_uint64(L, n);
}
static void push_PublishedFileUpdateHandle_t(lua_State* L, PublishedFileUpdateHandle_t n) {
	push_uint64(L, n);
}
static void push_PublishedFileId_t(lua_State* L, PublishedFileId_t n) {
	push_uint64(L, n);
}
static void push_UGCFileWriteStreamHandle_t(lua_State* L, UGCFileWriteStreamHandle_t n) {
	push_uint64(L, n);
}
static void push_SteamLeaderboard_t(lua_State* L, SteamLeaderboard_t n) {
	push_uint64(L, n);
}
static void push_SteamLeaderboardEntries_t(lua_State* L, SteamLeaderboardEntries_t n) {
	push_uint64(L, n);
}
static void push_ControllerHandle_t(lua_State* L, ControllerHandle_t n) {
	push_uint64(L, n);
}
static void push_ControllerActionSetHandle_t(lua_State* L, ControllerActionSetHandle_t n) {
	push_uint64(L, n);
}
static void push_ControllerDigitalActionHandle_t(lua_State* L, ControllerDigitalActionHandle_t n) {
	push_uint64(L, n);
}
static void push_ControllerAnalogActionHandle_t(lua_State* L, ControllerAnalogActionHandle_t n) {
	push_uint64(L, n);
}
static void push_UGCQueryHandle_t(lua_State* L, UGCQueryHandle_t n) {
	push_uint64(L, n);
}
static void push_UGCUpdateHandle_t(lua_State* L, UGCUpdateHandle_t n) {
	push_uint64(L, n);
}
static void push_SteamItemInstanceID_t(lua_State* L, SteamItemInstanceID_t n) {
	push_uint64(L, n);
}
static void push_SteamInventoryUpdateHandle_t(lua_State* L, SteamInventoryUpdateHandle_t n) {
	push_uint64(L, n);
}

static void push_EUniverse(lua_State* L, EUniverse n) {
	lua_pushinteger(L, n);
}
static EUniverse check_EUniverse(lua_State* L, int index) {
	return EUniverse(luaL_checkinteger(L, index));
}

static void push_EResult(lua_State* L, EResult n) {
	lua_pushinteger(L, n);
}
static EResult check_EResult(lua_State* L, int index) {
	return EResult(luaL_checkinteger(L, index));
}

static void push_EVoiceResult(lua_State* L, EVoiceResult n) {
	lua_pushinteger(L, n);
}
static EVoiceResult check_EVoiceResult(lua_State* L, int index) {
	return EVoiceResult(luaL_checkinteger(L, index));
}

static void push_EDenyReason(lua_State* L, EDenyReason n) {
	lua_pushinteger(L, n);
}
static EDenyReason check_EDenyReason(lua_State* L, int index) {
	return EDenyReason(luaL_checkinteger(L, index));
}

static void push_EBeginAuthSessionResult(lua_State* L, EBeginAuthSessionResult n) {
	lua_pushinteger(L, n);
}
static EBeginAuthSessionResult check_EBeginAuthSessionResult(lua_State* L, int index) {
	return EBeginAuthSessionResult(luaL_checkinteger(L, index));
}

static void push_EAuthSessionResponse(lua_State* L, EAuthSessionResponse n) {
	lua_pushinteger(L, n);
}
static EAuthSessionResponse check_EAuthSessionResponse(lua_State* L, int index) {
	return EAuthSessionResponse(luaL_checkinteger(L, index));
}

static void push_EUserHasLicenseForAppResult(lua_State* L, EUserHasLicenseForAppResult n) {
	lua_pushinteger(L, n);
}
static EUserHasLicenseForAppResult check_EUserHasLicenseForAppResult(lua_State* L, int index) {
	return EUserHasLicenseForAppResult(luaL_checkinteger(L, index));
}

static void push_EAccountType(lua_State* L, EAccountType n) {
	lua_pushinteger(L, n);
}
static EAccountType check_EAccountType(lua_State* L, int index) {
	return EAccountType(luaL_checkinteger(L, index));
}

static void push_EAppReleaseState(lua_State* L, EAppReleaseState n) {
	lua_pushinteger(L, n);
}
static EAppReleaseState check_EAppReleaseState(lua_State* L, int index) {
	return EAppReleaseState(luaL_checkinteger(L, index));
}

static void push_EAppOwnershipFlags(lua_State* L, EAppOwnershipFlags n) {
	lua_pushinteger(L, n);
}
static EAppOwnershipFlags check_EAppOwnershipFlags(lua_State* L, int index) {
	return EAppOwnershipFlags(luaL_checkinteger(L, index));
}

static void push_EAppType(lua_State* L, EAppType n) {
	lua_pushinteger(L, n);
}
static EAppType check_EAppType(lua_State* L, int index) {
	return EAppType(luaL_checkinteger(L, index));
}

static void push_ESteamUserStatType(lua_State* L, ESteamUserStatType n) {
	lua_pushinteger(L, n);
}
static ESteamUserStatType check_ESteamUserStatType(lua_State* L, int index) {
	return ESteamUserStatType(luaL_checkinteger(L, index));
}

static void push_EChatEntryType(lua_State* L, EChatEntryType n) {
	lua_pushinteger(L, n);
}
static EChatEntryType check_EChatEntryType(lua_State* L, int index) {
	return EChatEntryType(luaL_checkinteger(L, index));
}

static void push_EChatRoomEnterResponse(lua_State* L, EChatRoomEnterResponse n) {
	lua_pushinteger(L, n);
}
static EChatRoomEnterResponse check_EChatRoomEnterResponse(lua_State* L, int index) {
	return EChatRoomEnterResponse(luaL_checkinteger(L, index));
}

static void push_EChatSteamIDInstanceFlags(lua_State* L, EChatSteamIDInstanceFlags n) {
	lua_pushinteger(L, n);
}
static EChatSteamIDInstanceFlags check_EChatSteamIDInstanceFlags(lua_State* L, int index) {
	return EChatSteamIDInstanceFlags(luaL_checkinteger(L, index));
}

static void push_EMarketingMessageFlags(lua_State* L, EMarketingMessageFlags n) {
	lua_pushinteger(L, n);
}
static EMarketingMessageFlags check_EMarketingMessageFlags(lua_State* L, int index) {
	return EMarketingMessageFlags(luaL_checkinteger(L, index));
}

static void push_ENotificationPosition(lua_State* L, ENotificationPosition n) {
	lua_pushinteger(L, n);
}
static ENotificationPosition check_ENotificationPosition(lua_State* L, int index) {
	return ENotificationPosition(luaL_checkinteger(L, index));
}

static void push_EBroadcastUploadResult(lua_State* L, EBroadcastUploadResult n) {
	lua_pushinteger(L, n);
}
static EBroadcastUploadResult check_EBroadcastUploadResult(lua_State* L, int index) {
	return EBroadcastUploadResult(luaL_checkinteger(L, index));
}

static void push_ELaunchOptionType(lua_State* L, ELaunchOptionType n) {
	lua_pushinteger(L, n);
}
static ELaunchOptionType check_ELaunchOptionType(lua_State* L, int index) {
	return ELaunchOptionType(luaL_checkinteger(L, index));
}

static void push_EVRHMDType(lua_State* L, EVRHMDType n) {
	lua_pushinteger(L, n);
}
static EVRHMDType check_EVRHMDType(lua_State* L, int index) {
	return EVRHMDType(luaL_checkinteger(L, index));
}

static void push_EFriendRelationship(lua_State* L, EFriendRelationship n) {
	lua_pushinteger(L, n);
}
static EFriendRelationship check_EFriendRelationship(lua_State* L, int index) {
	return EFriendRelationship(luaL_checkinteger(L, index));
}

static void push_EPersonaState(lua_State* L, EPersonaState n) {
	lua_pushinteger(L, n);
}
static EPersonaState check_EPersonaState(lua_State* L, int index) {
	return EPersonaState(luaL_checkinteger(L, index));
}

static void push_EFriendFlags(lua_State* L, EFriendFlags n) {
	lua_pushinteger(L, n);
}
static EFriendFlags check_EFriendFlags(lua_State* L, int index) {
	return EFriendFlags(luaL_checkinteger(L, index));
}

static void push_EUserRestriction(lua_State* L, EUserRestriction n) {
	lua_pushinteger(L, n);
}
static EUserRestriction check_EUserRestriction(lua_State* L, int index) {
	return EUserRestriction(luaL_checkinteger(L, index));
}

static void push_EOverlayToStoreFlag(lua_State* L, EOverlayToStoreFlag n) {
	lua_pushinteger(L, n);
}
static EOverlayToStoreFlag check_EOverlayToStoreFlag(lua_State* L, int index) {
	return EOverlayToStoreFlag(luaL_checkinteger(L, index));
}

static void push_EPersonaChange(lua_State* L, EPersonaChange n) {
	lua_pushinteger(L, n);
}
static EPersonaChange check_EPersonaChange(lua_State* L, int index) {
	return EPersonaChange(luaL_checkinteger(L, index));
}

static void push_ESteamAPICallFailure(lua_State* L, ESteamAPICallFailure n) {
	lua_pushinteger(L, n);
}
static ESteamAPICallFailure check_ESteamAPICallFailure(lua_State* L, int index) {
	return ESteamAPICallFailure(luaL_checkinteger(L, index));
}

static void push_EGamepadTextInputMode(lua_State* L, EGamepadTextInputMode n) {
	lua_pushinteger(L, n);
}
static EGamepadTextInputMode check_EGamepadTextInputMode(lua_State* L, int index) {
	return EGamepadTextInputMode(luaL_checkinteger(L, index));
}

static void push_EGamepadTextInputLineMode(lua_State* L, EGamepadTextInputLineMode n) {
	lua_pushinteger(L, n);
}
static EGamepadTextInputLineMode check_EGamepadTextInputLineMode(lua_State* L, int index) {
	return EGamepadTextInputLineMode(luaL_checkinteger(L, index));
}

static void push_ECheckFileSignature(lua_State* L, ECheckFileSignature n) {
	lua_pushinteger(L, n);
}
static ECheckFileSignature check_ECheckFileSignature(lua_State* L, int index) {
	return ECheckFileSignature(luaL_checkinteger(L, index));
}

static void push_EMatchMakingServerResponse(lua_State* L, EMatchMakingServerResponse n) {
	lua_pushinteger(L, n);
}
static EMatchMakingServerResponse check_EMatchMakingServerResponse(lua_State* L, int index) {
	return EMatchMakingServerResponse(luaL_checkinteger(L, index));
}

static void push_ELobbyType(lua_State* L, ELobbyType n) {
	lua_pushinteger(L, n);
}
static ELobbyType check_ELobbyType(lua_State* L, int index) {
	return ELobbyType(luaL_checkinteger(L, index));
}

static void push_ELobbyComparison(lua_State* L, ELobbyComparison n) {
	lua_pushinteger(L, n);
}
static ELobbyComparison check_ELobbyComparison(lua_State* L, int index) {
	return ELobbyComparison(luaL_checkinteger(L, index));
}

static void push_ELobbyDistanceFilter(lua_State* L, ELobbyDistanceFilter n) {
	lua_pushinteger(L, n);
}
static ELobbyDistanceFilter check_ELobbyDistanceFilter(lua_State* L, int index) {
	return ELobbyDistanceFilter(luaL_checkinteger(L, index));
}

static void push_EChatMemberStateChange(lua_State* L, EChatMemberStateChange n) {
	lua_pushinteger(L, n);
}
static EChatMemberStateChange check_EChatMemberStateChange(lua_State* L, int index) {
	return EChatMemberStateChange(luaL_checkinteger(L, index));
}

static void push_ERemoteStoragePlatform(lua_State* L, ERemoteStoragePlatform n) {
	lua_pushinteger(L, n);
}
static ERemoteStoragePlatform check_ERemoteStoragePlatform(lua_State* L, int index) {
	return ERemoteStoragePlatform(luaL_checkinteger(L, index));
}

static void push_ERemoteStoragePublishedFileVisibility(lua_State* L, ERemoteStoragePublishedFileVisibility n) {
	lua_pushinteger(L, n);
}
static ERemoteStoragePublishedFileVisibility check_ERemoteStoragePublishedFileVisibility(lua_State* L, int index) {
	return ERemoteStoragePublishedFileVisibility(luaL_checkinteger(L, index));
}

static void push_EWorkshopFileType(lua_State* L, EWorkshopFileType n) {
	lua_pushinteger(L, n);
}
static EWorkshopFileType check_EWorkshopFileType(lua_State* L, int index) {
	return EWorkshopFileType(luaL_checkinteger(L, index));
}

static void push_EWorkshopVote(lua_State* L, EWorkshopVote n) {
	lua_pushinteger(L, n);
}
static EWorkshopVote check_EWorkshopVote(lua_State* L, int index) {
	return EWorkshopVote(luaL_checkinteger(L, index));
}

static void push_EWorkshopFileAction(lua_State* L, EWorkshopFileAction n) {
	lua_pushinteger(L, n);
}
static EWorkshopFileAction check_EWorkshopFileAction(lua_State* L, int index) {
	return EWorkshopFileAction(luaL_checkinteger(L, index));
}

static void push_EWorkshopEnumerationType(lua_State* L, EWorkshopEnumerationType n) {
	lua_pushinteger(L, n);
}
static EWorkshopEnumerationType check_EWorkshopEnumerationType(lua_State* L, int index) {
	return EWorkshopEnumerationType(luaL_checkinteger(L, index));
}

static void push_EWorkshopVideoProvider(lua_State* L, EWorkshopVideoProvider n) {
	lua_pushinteger(L, n);
}
static EWorkshopVideoProvider check_EWorkshopVideoProvider(lua_State* L, int index) {
	return EWorkshopVideoProvider(luaL_checkinteger(L, index));
}

static void push_EUGCReadAction(lua_State* L, EUGCReadAction n) {
	lua_pushinteger(L, n);
}
static EUGCReadAction check_EUGCReadAction(lua_State* L, int index) {
	return EUGCReadAction(luaL_checkinteger(L, index));
}

static void push_ELeaderboardDataRequest(lua_State* L, ELeaderboardDataRequest n) {
	lua_pushinteger(L, n);
}
static ELeaderboardDataRequest check_ELeaderboardDataRequest(lua_State* L, int index) {
	return ELeaderboardDataRequest(luaL_checkinteger(L, index));
}

static void push_ELeaderboardSortMethod(lua_State* L, ELeaderboardSortMethod n) {
	lua_pushinteger(L, n);
}
static ELeaderboardSortMethod check_ELeaderboardSortMethod(lua_State* L, int index) {
	return ELeaderboardSortMethod(luaL_checkinteger(L, index));
}

static void push_ELeaderboardDisplayType(lua_State* L, ELeaderboardDisplayType n) {
	lua_pushinteger(L, n);
}
static ELeaderboardDisplayType check_ELeaderboardDisplayType(lua_State* L, int index) {
	return ELeaderboardDisplayType(luaL_checkinteger(L, index));
}

static void push_ELeaderboardUploadScoreMethod(lua_State* L, ELeaderboardUploadScoreMethod n) {
	lua_pushinteger(L, n);
}
static ELeaderboardUploadScoreMethod check_ELeaderboardUploadScoreMethod(lua_State* L, int index) {
	return ELeaderboardUploadScoreMethod(luaL_checkinteger(L, index));
}

static void push_ERegisterActivationCodeResult(lua_State* L, ERegisterActivationCodeResult n) {
	lua_pushinteger(L, n);
}
static ERegisterActivationCodeResult check_ERegisterActivationCodeResult(lua_State* L, int index) {
	return ERegisterActivationCodeResult(luaL_checkinteger(L, index));
}

static void push_EP2PSessionError(lua_State* L, EP2PSessionError n) {
	lua_pushinteger(L, n);
}
static EP2PSessionError check_EP2PSessionError(lua_State* L, int index) {
	return EP2PSessionError(luaL_checkinteger(L, index));
}

static void push_EP2PSend(lua_State* L, EP2PSend n) {
	lua_pushinteger(L, n);
}
static EP2PSend check_EP2PSend(lua_State* L, int index) {
	return EP2PSend(luaL_checkinteger(L, index));
}

static void push_ESNetSocketState(lua_State* L, ESNetSocketState n) {
	lua_pushinteger(L, n);
}
static ESNetSocketState check_ESNetSocketState(lua_State* L, int index) {
	return ESNetSocketState(luaL_checkinteger(L, index));
}

static void push_ESNetSocketConnectionType(lua_State* L, ESNetSocketConnectionType n) {
	lua_pushinteger(L, n);
}
static ESNetSocketConnectionType check_ESNetSocketConnectionType(lua_State* L, int index) {
	return ESNetSocketConnectionType(luaL_checkinteger(L, index));
}

static void push_EVRScreenshotType(lua_State* L, EVRScreenshotType n) {
	lua_pushinteger(L, n);
}
static EVRScreenshotType check_EVRScreenshotType(lua_State* L, int index) {
	return EVRScreenshotType(luaL_checkinteger(L, index));
}

static void push_AudioPlayback_Status(lua_State* L, AudioPlayback_Status n) {
	lua_pushinteger(L, n);
}
static AudioPlayback_Status check_AudioPlayback_Status(lua_State* L, int index) {
	return AudioPlayback_Status(luaL_checkinteger(L, index));
}

static void push_EHTTPMethod(lua_State* L, EHTTPMethod n) {
	lua_pushinteger(L, n);
}
static EHTTPMethod check_EHTTPMethod(lua_State* L, int index) {
	return EHTTPMethod(luaL_checkinteger(L, index));
}

static void push_EHTTPStatusCode(lua_State* L, EHTTPStatusCode n) {
	lua_pushinteger(L, n);
}
static EHTTPStatusCode check_EHTTPStatusCode(lua_State* L, int index) {
	return EHTTPStatusCode(luaL_checkinteger(L, index));
}

static void push_ESteamControllerPad(lua_State* L, ESteamControllerPad n) {
	lua_pushinteger(L, n);
}
static ESteamControllerPad check_ESteamControllerPad(lua_State* L, int index) {
	return ESteamControllerPad(luaL_checkinteger(L, index));
}

static void push_EControllerSource(lua_State* L, EControllerSource n) {
	lua_pushinteger(L, n);
}
static EControllerSource check_EControllerSource(lua_State* L, int index) {
	return EControllerSource(luaL_checkinteger(L, index));
}

static void push_EControllerSourceMode(lua_State* L, EControllerSourceMode n) {
	lua_pushinteger(L, n);
}
static EControllerSourceMode check_EControllerSourceMode(lua_State* L, int index) {
	return EControllerSourceMode(luaL_checkinteger(L, index));
}

static void push_EControllerActionOrigin(lua_State* L, EControllerActionOrigin n) {
	lua_pushinteger(L, n);
}
static EControllerActionOrigin check_EControllerActionOrigin(lua_State* L, int index) {
	return EControllerActionOrigin(luaL_checkinteger(L, index));
}

static void push_ESteamControllerLEDFlag(lua_State* L, ESteamControllerLEDFlag n) {
	lua_pushinteger(L, n);
}
static ESteamControllerLEDFlag check_ESteamControllerLEDFlag(lua_State* L, int index) {
	return ESteamControllerLEDFlag(luaL_checkinteger(L, index));
}

static void push_ESteamInputType(lua_State* L, ESteamInputType n) {
	lua_pushinteger(L, n);
}
static ESteamInputType check_ESteamInputType(lua_State* L, int index) {
	return ESteamInputType(luaL_checkinteger(L, index));
}

static void push_EUGCMatchingUGCType(lua_State* L, EUGCMatchingUGCType n) {
	lua_pushinteger(L, n);
}
static EUGCMatchingUGCType check_EUGCMatchingUGCType(lua_State* L, int index) {
	return EUGCMatchingUGCType(luaL_checkinteger(L, index));
}

static void push_EUserUGCList(lua_State* L, EUserUGCList n) {
	lua_pushinteger(L, n);
}
static EUserUGCList check_EUserUGCList(lua_State* L, int index) {
	return EUserUGCList(luaL_checkinteger(L, index));
}

static void push_EUserUGCListSortOrder(lua_State* L, EUserUGCListSortOrder n) {
	lua_pushinteger(L, n);
}
static EUserUGCListSortOrder check_EUserUGCListSortOrder(lua_State* L, int index) {
	return EUserUGCListSortOrder(luaL_checkinteger(L, index));
}

static void push_EUGCQuery(lua_State* L, EUGCQuery n) {
	lua_pushinteger(L, n);
}
static EUGCQuery check_EUGCQuery(lua_State* L, int index) {
	return EUGCQuery(luaL_checkinteger(L, index));
}

static void push_EItemUpdateStatus(lua_State* L, EItemUpdateStatus n) {
	lua_pushinteger(L, n);
}
static EItemUpdateStatus check_EItemUpdateStatus(lua_State* L, int index) {
	return EItemUpdateStatus(luaL_checkinteger(L, index));
}

static void push_EItemState(lua_State* L, EItemState n) {
	lua_pushinteger(L, n);
}
static EItemState check_EItemState(lua_State* L, int index) {
	return EItemState(luaL_checkinteger(L, index));
}

static void push_EItemStatistic(lua_State* L, EItemStatistic n) {
	lua_pushinteger(L, n);
}
static EItemStatistic check_EItemStatistic(lua_State* L, int index) {
	return EItemStatistic(luaL_checkinteger(L, index));
}

static void push_EItemPreviewType(lua_State* L, EItemPreviewType n) {
	lua_pushinteger(L, n);
}
static EItemPreviewType check_EItemPreviewType(lua_State* L, int index) {
	return EItemPreviewType(luaL_checkinteger(L, index));
}

static void push_ESteamItemFlags(lua_State* L, ESteamItemFlags n) {
	lua_pushinteger(L, n);
}
static ESteamItemFlags check_ESteamItemFlags(lua_State* L, int index) {
	return ESteamItemFlags(luaL_checkinteger(L, index));
}

static void push_EParentalFeature(lua_State* L, EParentalFeature n) {
	lua_pushinteger(L, n);
}
static EParentalFeature check_EParentalFeature(lua_State* L, int index) {
	return EParentalFeature(luaL_checkinteger(L, index));
}


static void push_bool(lua_State* L, bool b) {
    lua_pushboolean(L, b);
}
static void push__Bool(lua_State* L, bool b) {
    lua_pushboolean(L, b);
}
static void push_const_char_ptr(lua_State* L, const char * s) {
    lua_pushstring(L, s);
}

static void push_CSteamID(lua_State* L, CSteamID steamId) {
	// char buf[22];
	// snprintf(buf, sizeof(buf), "%llu", steamId.ConvertToUint64());
	// lua_pushstring(L, buf);
	push_uint64(L, steamId.ConvertToUint64());
}

static void push_class_CSteamID(lua_State* L, CSteamID steamId) {
	// char buf[22];
	// snprintf(buf, sizeof(buf), "%llu", steamId.ConvertToUint64());
	// lua_pushstring(L, buf);
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

static void push_char_array(lua_State* L, char ca[], unsigned int size) {
	lua_pushstring(L, ca);
}

static void push_CGameID(lua_State* L, CGameID gameId) {
	push_uint64(L, gameId.ToUint64());
}


static void push_EncryptedAppTicketResponse_t(lua_State* L, EncryptedAppTicketResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_StoreAuthURLResponse_t(lua_State* L, StoreAuthURLResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_szURL");
	push_char_array(L, s.m_szURL, 512);
	lua_settable(L, -3);
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
static void push_DownloadClanActivityCountsResult_t(lua_State* L, DownloadClanActivityCountsResult_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bSuccess");
	push__Bool(L, s.m_bSuccess);
	lua_settable(L, -3);
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
static void push_FriendsIsFollowing_t(lua_State* L, FriendsIsFollowing_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_steamID");
	push_CSteamID(L, s.m_steamID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bIsFollowing");
	push__Bool(L, s.m_bIsFollowing);
	lua_settable(L, -3);
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
static void push_SetPersonaNameResponse_t(lua_State* L, SetPersonaNameResponse_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_bSuccess");
	push__Bool(L, s.m_bSuccess);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bLocalSuccess");
	push__Bool(L, s.m_bLocalSuccess);
	lua_settable(L, -3);
	lua_pushstring(L, "m_result");
	push_EResult(L, s.m_result);
	lua_settable(L, -3);
}
static void push_CheckFileSignature_t(lua_State* L, CheckFileSignature_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_eCheckFileSignature");
	push_ECheckFileSignature(L, s.m_eCheckFileSignature);
	lua_settable(L, -3);
}





/*****************************
* CHECK
******************************/

static lua_Number check_int(lua_State* L, int index) {
	return luaL_checknumber(L, index);
}
static lua_Number check_uint32(lua_State* L, int index) {
	return luaL_checknumber(L, index);
}
static lua_Number check_uint16(lua_State* L, int index) {
	return luaL_checknumber(L, index);
}
static lua_Number check_bool(lua_State* L, int index) {
	return lua_toboolean(L, index);
}

static int32 check_int32(lua_State* L, int index) {
	return (int32)luaL_checknumber(L, index);
}
static PackageId_t check_PackageId_t(lua_State* L, int index) {
	return (PackageId_t)luaL_checknumber(L, index);
}
static BundleId_t check_BundleId_t(lua_State* L, int index) {
	return (BundleId_t)luaL_checknumber(L, index);
}
static AppId_t check_AppId_t(lua_State* L, int index) {
	return (AppId_t)luaL_checknumber(L, index);
}
static PhysicalItemId_t check_PhysicalItemId_t(lua_State* L, int index) {
	return (PhysicalItemId_t)luaL_checknumber(L, index);
}
static DepotId_t check_DepotId_t(lua_State* L, int index) {
	return (DepotId_t)luaL_checknumber(L, index);
}
static RTime32 check_RTime32(lua_State* L, int index) {
	return (RTime32)luaL_checknumber(L, index);
}
static CellID_t check_CellID_t(lua_State* L, int index) {
	return (CellID_t)luaL_checknumber(L, index);
}
static AccountID_t check_AccountID_t(lua_State* L, int index) {
	return (AccountID_t)luaL_checknumber(L, index);
}
static PartnerId_t check_PartnerId_t(lua_State* L, int index) {
	return (PartnerId_t)luaL_checknumber(L, index);
}
static HAuthTicket check_HAuthTicket(lua_State* L, int index) {
	return (HAuthTicket)luaL_checknumber(L, index);
}
static HSteamPipe check_HSteamPipe(lua_State* L, int index) {
	return (HSteamPipe)luaL_checknumber(L, index);
}
static HSteamUser check_HSteamUser(lua_State* L, int index) {
	return (HSteamUser)luaL_checknumber(L, index);
}
static FriendsGroupID_t check_FriendsGroupID_t(lua_State* L, int index) {
	return (FriendsGroupID_t)luaL_checknumber(L, index);
}
static HServerQuery check_HServerQuery(lua_State* L, int index) {
	return (HServerQuery)luaL_checknumber(L, index);
}
static SNetSocket_t check_SNetSocket_t(lua_State* L, int index) {
	return (SNetSocket_t)luaL_checknumber(L, index);
}
static SNetListenSocket_t check_SNetListenSocket_t(lua_State* L, int index) {
	return (SNetListenSocket_t)luaL_checknumber(L, index);
}
static ScreenshotHandle check_ScreenshotHandle(lua_State* L, int index) {
	return (ScreenshotHandle)luaL_checknumber(L, index);
}
static HTTPRequestHandle check_HTTPRequestHandle(lua_State* L, int index) {
	return (HTTPRequestHandle)luaL_checknumber(L, index);
}
static HTTPCookieContainerHandle check_HTTPCookieContainerHandle(lua_State* L, int index) {
	return (HTTPCookieContainerHandle)luaL_checknumber(L, index);
}
static HHTMLBrowser check_HHTMLBrowser(lua_State* L, int index) {
	return (HHTMLBrowser)luaL_checknumber(L, index);
}
static SteamItemDef_t check_SteamItemDef_t(lua_State* L, int index) {
	return (SteamItemDef_t)luaL_checknumber(L, index);
}
static SteamInventoryResult_t check_SteamInventoryResult_t(lua_State* L, int index) {
	return (SteamInventoryResult_t)luaL_checknumber(L, index);
}

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

static dmScript::LuaHBuffer * check_buffer(lua_State* L, int index) {
	return dmScript::CheckBuffer(L, index);
}

static CSteamID check_CSteamID(lua_State* L, int index) {
	char * pEnd;
	const char * s = lua_tostring(L, index);
	uint64 id = strtoull(s, &pEnd, 10);
	CSteamID steamId = CSteamID(id);
	return steamId;
}

static CSteamID check_class_CSteamID(lua_State* L, int index) {
	return check_CSteamID(L, index);
}

static SteamAPICall_t check_SteamAPICall_t(lua_State* L, int index) {
	char * pEnd;
	const char * s = lua_tostring(L, index);
	uint64 id = strtoull(s, &pEnd, 10);
	return id;
}

static CGameID check_class_CGameID(lua_State* L, int index) {
	char * pEnd;
	const char * s = lua_tostring(L, index);
	uint64 id = strtoull(s, &pEnd, 10);
	CGameID gameId = CGameID(id);
	return gameId;
}




static lua_Listener steamworksListener;

class SteamCallbackWrapper {
	public:
		SteamCallbackWrapper();

		// General
		STEAM_CALLBACK(SteamCallbackWrapper, OnGameOverlayActivated, GameOverlayActivated_t, m_CallbackGameOverlayActivated);


		
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
			}
			assert(top == lua_gettop(L));
		}
		

		void OnFindLeaderboard(LeaderboardFindResult_t *pFindLearderboardResult, bool bIOFailure);
		CCallResult<SteamCallbackWrapper, LeaderboardFindResult_t> m_SteamCallResultCreateLeaderboard;
};

SteamCallbackWrapper::SteamCallbackWrapper() :

	// General
	m_CallbackGameOverlayActivated(this, &SteamCallbackWrapper::OnGameOverlayActivated)
{
}


// General
void SteamCallbackWrapper::OnGameOverlayActivated(GameOverlayActivated_t *pCallback) {
	dmLogInfo("SteamCallbackWrapper::OnGameOverlayActivated\n");
	// NotifyListener("OnGameOverlayActivated", pCallback);
}

static SteamCallbackWrapper *steamCallbackWrapper = new SteamCallbackWrapper();





static int ISteamUser_GetHSteamUser(lua_State* L) {
	int top = lua_gettop(L);

	HSteamUser r = user->GetHSteamUser();
	push_HSteamUser(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_BLoggedOn(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BLoggedOn();
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_GetSteamID(lua_State* L) {
	int top = lua_gettop(L);

	class CSteamID r = user->GetSteamID();
	push_class_CSteamID(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_TerminateGameConnection(lua_State* L) {
	int top = lua_gettop(L);
	uint16 usPortServer = check_uint16(L, 2); /*normal*/
	uint32 unIPServer = check_uint32(L, 1); /*normal*/

	user->TerminateGameConnection(unIPServer,usPortServer);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_GetAuthSessionTicket(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pcbTicket; /*out_param*/
	int cbMaxTicket = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pTicket_buffer = check_buffer(L, 1); /*buffer_param*/
	void* pTicket = 0x0;
	uint32_t pTicket_buffersize = 0;
	dmBuffer::Result pTicket_buffer_result = dmBuffer::GetBytes(pTicket_buffer->m_Buffer, &pTicket, &pTicket_buffersize);

	HAuthTicket r = user->GetAuthSessionTicket(pTicket,cbMaxTicket,&pcbTicket);
	push_HAuthTicket(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_BeginAuthSession(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamID = check_class_CSteamID(L, 3); /*normal*/
	int cbAuthTicket = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pAuthTicket_buffer = check_buffer(L, 1); /*buffer_param*/
	void* pAuthTicket = 0x0;
	uint32_t pAuthTicket_buffersize = 0;
	dmBuffer::Result pAuthTicket_buffer_result = dmBuffer::GetBytes(pAuthTicket_buffer->m_Buffer, &pAuthTicket, &pAuthTicket_buffersize);

	EBeginAuthSessionResult r = user->BeginAuthSession(pAuthTicket,cbAuthTicket,steamID);
	push_EBeginAuthSessionResult(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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

	EUserHasLicenseForAppResult r = user->UserHasLicenseForApp(steamID,appID);
	push_EUserHasLicenseForAppResult(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_BIsBehindNAT(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BIsBehindNAT();
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_AdvertiseGame(lua_State* L) {
	int top = lua_gettop(L);
	uint16 usPortServer = check_uint16(L, 3); /*normal*/
	uint32 unIPServer = check_uint32(L, 2); /*normal*/
	class CSteamID steamIDGameServer = check_class_CSteamID(L, 1); /*normal*/

	user->AdvertiseGame(steamIDGameServer,unIPServer,usPortServer);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_RequestEncryptedAppTicket(lua_State* L) {
	int top = lua_gettop(L);
	int cbDataToInclude = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pDataToInclude_buffer = check_buffer(L, 1); /*buffer_param*/
	void* pDataToInclude = 0x0;
	uint32_t pDataToInclude_buffersize = 0;
	dmBuffer::Result pDataToInclude_buffer_result = dmBuffer::GetBytes(pDataToInclude_buffer->m_Buffer, &pDataToInclude, &pDataToInclude_buffersize);

	SteamAPICall_t r = user->RequestEncryptedAppTicket(pDataToInclude,cbDataToInclude);
	steamCallbackWrapper->TrackSteamAPICallEncryptedAppTicketResponse_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUser_GetEncryptedAppTicket(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pcbTicket; /*out_param*/
	int cbMaxTicket = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pTicket_buffer = check_buffer(L, 1); /*buffer_param*/
	void* pTicket = 0x0;
	uint32_t pTicket_buffersize = 0;
	dmBuffer::Result pTicket_buffer_result = dmBuffer::GetBytes(pTicket_buffer->m_Buffer, &pTicket, &pTicket_buffersize);

	bool r = user->GetEncryptedAppTicket(pTicket,cbMaxTicket,&pcbTicket);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_GetGameBadgeLevel(lua_State* L) {
	int top = lua_gettop(L);
	bool bFoil = check_bool(L, 2); /*normal*/
	int nSeries = check_int(L, 1); /*normal*/

	int r = user->GetGameBadgeLevel(nSeries,bFoil);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_GetPlayerSteamLevel(lua_State* L) {
	int top = lua_gettop(L);

	int r = user->GetPlayerSteamLevel();
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_BIsTwoFactorEnabled(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BIsTwoFactorEnabled();
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_BIsPhoneIdentifying(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BIsPhoneIdentifying();
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUser_BIsPhoneRequiringVerification(lua_State* L) {
	int top = lua_gettop(L);

	bool r = user->BIsPhoneRequiringVerification();
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetPersonaName(lua_State* L) {
	int top = lua_gettop(L);

	const char * r = friends->GetPersonaName();
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendCount(lua_State* L) {
	int top = lua_gettop(L);
	int iFriendFlags = check_int(L, 1); /*normal*/

	int r = friends->GetFriendCount(iFriendFlags);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iFriendFlags = check_int(L, 2); /*normal*/
	int iFriend = check_int(L, 1); /*normal*/

	class CSteamID r = friends->GetFriendByIndex(iFriend,iFriendFlags);
	push_class_CSteamID(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendRelationship(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	EFriendRelationship r = friends->GetFriendRelationship(steamIDFriend);
	push_EFriendRelationship(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendPersonaState(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	EPersonaState r = friends->GetFriendPersonaState(steamIDFriend);
	push_EPersonaState(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendPersonaName(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendPersonaName(steamIDFriend);
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendGamePlayed(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/
	struct FriendGameInfo_t pFriendGameInfo; /*out_struct*/

	bool r = friends->GetFriendGamePlayed(steamIDFriend,&pFriendGameInfo);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendPersonaNameHistory(lua_State* L) {
	int top = lua_gettop(L);
	int iPersonaName = check_int(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendPersonaNameHistory(steamIDFriend,iPersonaName);
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendSteamLevel(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendSteamLevel(steamIDFriend);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetPlayerNickname(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDPlayer = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetPlayerNickname(steamIDPlayer);
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendsGroupCount(lua_State* L) {
	int top = lua_gettop(L);

	int r = friends->GetFriendsGroupCount();
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendsGroupIDByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iFG = check_int(L, 1); /*normal*/

	FriendsGroupID_t r = friends->GetFriendsGroupIDByIndex(iFG);
	push_FriendsGroupID_t(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendsGroupName(lua_State* L) {
	int top = lua_gettop(L);
	FriendsGroupID_t friendsGroupID = check_FriendsGroupID_t(L, 1); /*normal*/

	const char * r = friends->GetFriendsGroupName(friendsGroupID);
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendsGroupMembersCount(lua_State* L) {
	int top = lua_gettop(L);
	FriendsGroupID_t friendsGroupID = check_FriendsGroupID_t(L, 1); /*normal*/

	int r = friends->GetFriendsGroupMembersCount(friendsGroupID);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendsGroupMembersList(lua_State* L) {
	int top = lua_gettop(L);
	int nMembersCount; /*out_array_call_param*/
	FriendsGroupID_t friendsGroupID = check_FriendsGroupID_t(L, 1); /*normal*/
	nMembersCount = friends->GetFriendsGroupMembersCount(friendsGroupID);/*out_array_call*/
	CSteamID pOutSteamIDMembers[nMembersCount];

	friends->GetFriendsGroupMembersList(friendsGroupID,pOutSteamIDMembers,nMembersCount);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_HasFriend(lua_State* L) {
	int top = lua_gettop(L);
	int iFriendFlags = check_int(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->HasFriend(steamIDFriend,iFriendFlags);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetClanCount(lua_State* L) {
	int top = lua_gettop(L);

	int r = friends->GetClanCount();
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetClanByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iClan = check_int(L, 1); /*normal*/

	class CSteamID r = friends->GetClanByIndex(iClan);
	push_class_CSteamID(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetClanName(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetClanName(steamIDClan);
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetClanTag(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetClanTag(steamIDClan);
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetClanActivityCounts(lua_State* L) {
	int top = lua_gettop(L);
	int pnChatting; /*out_param*/
	int pnInGame; /*out_param*/
	int pnOnline; /*out_param*/
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->GetClanActivityCounts(steamIDClan,&pnOnline,&pnInGame,&pnChatting);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_DownloadClanActivityCounts(lua_State* L) {
	int top = lua_gettop(L);
	int cClansToRequest = check_int(L, 2); /*normal*/
	luaL_checktype(L, 1, LUA_TTABLE); /*array_count*/
	int n = luaL_getn(L, 1);
	CSteamID psteamIDClans[cClansToRequest];
	for(int i=1; i<=cClansToRequest; i++) {
		lua_rawgeti(L, 1, i);
		psteamIDClans[i] = check_CSteamID(L, 1 + 1);
		lua_pop(L, 1);
	}

	SteamAPICall_t r = friends->DownloadClanActivityCounts(psteamIDClans,cClansToRequest);
	steamCallbackWrapper->TrackSteamAPICallDownloadClanActivityCountsResult_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_GetFriendCountFromSource(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDSource = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendCountFromSource(steamIDSource);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendFromSourceByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iFriend = check_int(L, 2); /*normal*/
	class CSteamID steamIDSource = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = friends->GetFriendFromSourceByIndex(steamIDSource,iFriend);
	push_class_CSteamID(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_IsUserInSource(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDSource = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsUserInSource(steamIDUser,steamIDSource);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_SetInGameVoiceSpeaking(lua_State* L) {
	int top = lua_gettop(L);
	bool bSpeaking = check_bool(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	friends->SetInGameVoiceSpeaking(steamIDUser,bSpeaking);
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
	class CSteamID steamID = check_class_CSteamID(L, 2); /*normal*/
	const char * pchDialog = check_const_char_ptr(L, 1); /*normal*/

	friends->ActivateGameOverlayToUser(pchDialog,steamID);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_ActivateGameOverlayToWebPage(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchURL = check_const_char_ptr(L, 1); /*normal*/

	friends->ActivateGameOverlayToWebPage(pchURL);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamFriends_ActivateGameOverlayToStore(lua_State* L) {
	int top = lua_gettop(L);
	EOverlayToStoreFlag eFlag = check_EOverlayToStoreFlag(L, 2); /*normal*/
	AppId_t nAppID = check_AppId_t(L, 1); /*normal*/

	friends->ActivateGameOverlayToStore(nAppID,eFlag);
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
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetMediumFriendAvatar(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetMediumFriendAvatar(steamIDFriend);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetLargeFriendAvatar(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetLargeFriendAvatar(steamIDFriend);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_RequestUserInformation(lua_State* L) {
	int top = lua_gettop(L);
	bool bRequireNameOnly = check_bool(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->RequestUserInformation(steamIDUser,bRequireNameOnly);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetClanOfficerCount(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetClanOfficerCount(steamIDClan);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetClanOfficerByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iOfficer = check_int(L, 2); /*normal*/
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = friends->GetClanOfficerByIndex(steamIDClan,iOfficer);
	push_class_CSteamID(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetUserRestrictions(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = friends->GetUserRestrictions();
	push_uint32(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_SetRichPresence(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchValue = check_const_char_ptr(L, 2); /*normal*/
	const char * pchKey = check_const_char_ptr(L, 1); /*normal*/

	bool r = friends->SetRichPresence(pchKey,pchValue);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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

	const char * r = friends->GetFriendRichPresence(steamIDFriend,pchKey);
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendRichPresenceKeyCount(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendRichPresenceKeyCount(steamIDFriend);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendRichPresenceKeyByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iKey = check_int(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendRichPresenceKeyByIndex(steamIDFriend,iKey);
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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

	bool r = friends->InviteUserToGame(steamIDFriend,pchConnectString);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetCoplayFriendCount(lua_State* L) {
	int top = lua_gettop(L);

	int r = friends->GetCoplayFriendCount();
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetCoplayFriend(lua_State* L) {
	int top = lua_gettop(L);
	int iCoplayFriend = check_int(L, 1); /*normal*/

	class CSteamID r = friends->GetCoplayFriend(iCoplayFriend);
	push_class_CSteamID(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendCoplayTime(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendCoplayTime(steamIDFriend);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendCoplayGame(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	AppId_t r = friends->GetFriendCoplayGame(steamIDFriend);
	push_AppId_t(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetClanChatMemberCount(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetClanChatMemberCount(steamIDClan);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetChatMemberByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iUser = check_int(L, 2); /*normal*/
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = friends->GetChatMemberByIndex(steamIDClan,iUser);
	push_class_CSteamID(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_SendClanChatMessage(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchText = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->SendClanChatMessage(steamIDClanChat,pchText);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetClanChatMessage(lua_State* L) {
	int top = lua_gettop(L);
	EChatEntryType peChatEntryType; /*out_param*/
	int cchTextMax = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * prgchText_buffer = check_buffer(L, 3); /*buffer_param*/
	void* prgchText = 0x0;
	uint32_t prgchText_buffersize = 0;
	dmBuffer::Result prgchText_buffer_result = dmBuffer::GetBytes(prgchText_buffer->m_Buffer, &prgchText, &prgchText_buffersize);
	int iMessage = check_int(L, 2); /*normal*/
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/
	class CSteamID psteamidChatter; /*out_struct*/

	int r = friends->GetClanChatMessage(steamIDClanChat,iMessage,prgchText,cchTextMax,&peChatEntryType,&psteamidChatter);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_IsClanChatAdmin(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDUser = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanChatAdmin(steamIDClanChat,steamIDUser);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_IsClanChatWindowOpenInSteam(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanChatWindowOpenInSteam(steamIDClanChat);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_OpenClanChatWindowInSteam(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->OpenClanChatWindowInSteam(steamIDClanChat);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_CloseClanChatWindowInSteam(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->CloseClanChatWindowInSteam(steamIDClanChat);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_SetListenForFriendsMessages(lua_State* L) {
	int top = lua_gettop(L);
	bool bInterceptEnabled = check_bool(L, 1); /*normal*/

	bool r = friends->SetListenForFriendsMessages(bInterceptEnabled);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_ReplyToFriendMessage(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchMsgToSend = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->ReplyToFriendMessage(steamIDFriend,pchMsgToSend);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_GetFriendMessage(lua_State* L) {
	int top = lua_gettop(L);
	EChatEntryType peChatEntryType; /*out_param*/
	int cubData = check_int(L, 4); /*normal*/
	dmScript::LuaHBuffer * pvData_buffer = check_buffer(L, 3); /*buffer_param*/
	void* pvData = 0x0;
	uint32_t pvData_buffersize = 0;
	dmBuffer::Result pvData_buffer_result = dmBuffer::GetBytes(pvData_buffer->m_Buffer, &pvData, &pvData_buffersize);
	int iMessageID = check_int(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	int r = friends->GetFriendMessage(steamIDFriend,iMessageID,pvData,cubData,&peChatEntryType);
	push_int(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamFriends_IsClanOfficialGameGroup(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDClan = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanOfficialGameGroup(steamIDClan);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetSecondsSinceAppActive(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetSecondsSinceAppActive();
	push_uint32(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetSecondsSinceComputerActive(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetSecondsSinceComputerActive();
	push_uint32(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetConnectedUniverse(lua_State* L) {
	int top = lua_gettop(L);

	EUniverse r = utils->GetConnectedUniverse();
	push_EUniverse(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetServerRealTime(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetServerRealTime();
	push_uint32(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetIPCountry(lua_State* L) {
	int top = lua_gettop(L);

	const char * r = utils->GetIPCountry();
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetImageSize(lua_State* L) {
	int top = lua_gettop(L);
	uint32 pnHeight; /*out_param*/
	uint32 pnWidth; /*out_param*/
	int iImage = check_int(L, 1); /*normal*/

	bool r = utils->GetImageSize(iImage,&pnWidth,&pnHeight);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetImageRGBA(lua_State* L) {
	int top = lua_gettop(L);
	int nDestBufferSize = check_int(L, 2); /*normal*/
	uint8 pubDest; /*out_param*/
	int iImage = check_int(L, 1); /*normal*/

	bool r = utils->GetImageRGBA(iImage,&pubDest,nDestBufferSize);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetCSERIPPort(lua_State* L) {
	int top = lua_gettop(L);
	uint16 usPort; /*out_param*/
	uint32 unIP; /*out_param*/

	bool r = utils->GetCSERIPPort(&unIP,&usPort);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetCurrentBatteryPower(lua_State* L) {
	int top = lua_gettop(L);

	uint8 r = utils->GetCurrentBatteryPower();
	push_uint8(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetAppID(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetAppID();
	push_uint32(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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
	bool pbFailed; /*out_param*/
	SteamAPICall_t hSteamAPICall = check_SteamAPICall_t(L, 1); /*normal*/

	bool r = utils->IsAPICallCompleted(hSteamAPICall,&pbFailed);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetAPICallFailureReason(lua_State* L) {
	int top = lua_gettop(L);
	SteamAPICall_t hSteamAPICall = check_SteamAPICall_t(L, 1); /*normal*/

	ESteamAPICallFailure r = utils->GetAPICallFailureReason(hSteamAPICall);
	push_ESteamAPICallFailure(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetAPICallResult(lua_State* L) {
	int top = lua_gettop(L);
	bool pbFailed; /*out_param*/
	int iCallbackExpected = check_int(L, 4); /*normal*/
	int cubCallback = check_int(L, 3); /*normal*/
	dmScript::LuaHBuffer * pCallback_buffer = check_buffer(L, 2); /*buffer_param*/
	void* pCallback = 0x0;
	uint32_t pCallback_buffersize = 0;
	dmBuffer::Result pCallback_buffer_result = dmBuffer::GetBytes(pCallback_buffer->m_Buffer, &pCallback, &pCallback_buffersize);
	SteamAPICall_t hSteamAPICall = check_SteamAPICall_t(L, 1); /*normal*/

	bool r = utils->GetAPICallResult(hSteamAPICall,pCallback,cubCallback,iCallbackExpected,&pbFailed);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetIPCCallCount(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetIPCCallCount();
	push_uint32(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_IsOverlayEnabled(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->IsOverlayEnabled();
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_BOverlayNeedsPresent(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->BOverlayNeedsPresent();
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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

	bool r = utils->ShowGamepadTextInput(eInputMode,eLineInputMode,pchDescription,unCharMax,pchExistingText);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetEnteredGamepadTextLength(lua_State* L) {
	int top = lua_gettop(L);

	uint32 r = utils->GetEnteredGamepadTextLength();
	push_uint32(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetEnteredGamepadTextInput(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cchText = check_uint32(L, 2); /*normal*/
	char * pchText = check_char_ptr(L, 1); /*normal*/

	bool r = utils->GetEnteredGamepadTextInput(pchText,cchText);
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_GetSteamUILanguage(lua_State* L) {
	int top = lua_gettop(L);

	const char * r = utils->GetSteamUILanguage();
	push_const_char_ptr(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_IsSteamRunningInVR(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->IsSteamRunningInVR();
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_SetOverlayNotificationInset(lua_State* L) {
	int top = lua_gettop(L);
	int nVerticalInset = check_int(L, 2); /*normal*/
	int nHorizontalInset = check_int(L, 1); /*normal*/

	utils->SetOverlayNotificationInset(nHorizontalInset,nVerticalInset);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUtils_IsSteamInBigPictureMode(lua_State* L) {
	int top = lua_gettop(L);

	bool r = utils->IsSteamInBigPictureMode();
	push_bool(L, r);
	assert(top + 1 == lua_gettop(L));
	return 1;
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
	assert(top + 1 == lua_gettop(L));
	return 1;
}

static int ISteamUtils_SetVRHeadsetStreamingEnabled(lua_State* L) {
	int top = lua_gettop(L);
	bool bEnabled = check_bool(L, 1); /*normal*/

	utils->SetVRHeadsetStreamingEnabled(bEnabled);
	assert(top + 0 == lua_gettop(L));
	return 0;
}




extern "C" void __cdecl SteamAPIDebugTextHook( int nSeverity, const char *pchDebugText )
{
	if (nSeverity == 0) {
		dmLogInfo(pchDebugText);
	}
	else {
		dmLogWarning(pchDebugText);
	}
}

static int Init(lua_State* L) {
	dmLogInfo("Init");
	SteamAPI_Init();
	if (!SteamAPI_IsSteamRunning()) {
		luaL_error(L, "Steam is not running");
	}
	client = SteamClient();
	friends = SteamFriends();
	user = SteamUser();
	utils = SteamUtils();
	utils->SetWarningMessageHook(&SteamAPIDebugTextHook);
	matchmaking = SteamMatchmaking();
	userstats = SteamUserStats();
	userstats->RequestCurrentStats();
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
	{ "user_b_logged_on", ISteamUser_BLoggedOn },
	{ "user_get_steam_id", ISteamUser_GetSteamID },
	{ "user_terminate_game_connection", ISteamUser_TerminateGameConnection },
	{ "user_get_auth_session_ticket", ISteamUser_GetAuthSessionTicket },
	{ "user_begin_auth_session", ISteamUser_BeginAuthSession },
	{ "user_end_auth_session", ISteamUser_EndAuthSession },
	{ "user_cancel_auth_ticket", ISteamUser_CancelAuthTicket },
	{ "user_user_has_license_for_app", ISteamUser_UserHasLicenseForApp },
	{ "user_b_is_behind_nat", ISteamUser_BIsBehindNAT },
	{ "user_advertise_game", ISteamUser_AdvertiseGame },
	{ "user_request_encrypted_app_ticket", ISteamUser_RequestEncryptedAppTicket },
	{ "user_get_encrypted_app_ticket", ISteamUser_GetEncryptedAppTicket },
	{ "user_get_game_badge_level", ISteamUser_GetGameBadgeLevel },
	{ "user_get_player_steam_level", ISteamUser_GetPlayerSteamLevel },
	{ "user_request_store_auth_url", ISteamUser_RequestStoreAuthURL },
	{ "user_b_is_phone_verified", ISteamUser_BIsPhoneVerified },
	{ "user_b_is_two_factor_enabled", ISteamUser_BIsTwoFactorEnabled },
	{ "user_b_is_phone_identifying", ISteamUser_BIsPhoneIdentifying },
	{ "user_b_is_phone_requiring_verification", ISteamUser_BIsPhoneRequiringVerification },
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
	{ "utils_set_overlay_notification_position", ISteamUtils_SetOverlayNotificationPosition },
	{ "utils_is_api_call_completed", ISteamUtils_IsAPICallCompleted },
	{ "utils_get_api_call_failure_reason", ISteamUtils_GetAPICallFailureReason },
	{ "utils_get_api_call_result", ISteamUtils_GetAPICallResult },
	{ "utils_get_ipc_call_count", ISteamUtils_GetIPCCallCount },
	{ "utils_is_overlay_enabled", ISteamUtils_IsOverlayEnabled },
	{ "utils_b_overlay_needs_present", ISteamUtils_BOverlayNeedsPresent },
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
	{ 0, 0 }
};

static void LuaInit(lua_State* L) {
	int top = lua_gettop(L);
	luaL_register(L, MODULE_NAME, Module_methods);

	#define SETCONSTANT(name, val) \
	lua_pushnumber(L, (lua_Number) val); \
	lua_setfield(L, -2, #name);

	// EUniverse
	SETCONSTANT(UNIVERSEINVALID, 0);
	SETCONSTANT(UNIVERSEPUBLIC, 1);
	SETCONSTANT(UNIVERSEBETA, 2);
	SETCONSTANT(UNIVERSEINTERNAL, 3);
	SETCONSTANT(UNIVERSEDEV, 4);
	SETCONSTANT(UNIVERSEMAX, 5);
	// EResult
	SETCONSTANT(RESULTOK, 1);
	SETCONSTANT(RESULTFAIL, 2);
	SETCONSTANT(RESULTNOCONNECTION, 3);
	SETCONSTANT(RESULTINVALIDPASSWORD, 5);
	SETCONSTANT(RESULTLOGGEDINELSEWHERE, 6);
	SETCONSTANT(RESULTINVALIDPROTOCOLVER, 7);
	SETCONSTANT(RESULTINVALIDPARAM, 8);
	SETCONSTANT(RESULTFILENOTFOUND, 9);
	SETCONSTANT(RESULTBUSY, 10);
	SETCONSTANT(RESULTINVALIDSTATE, 11);
	SETCONSTANT(RESULTINVALIDNAME, 12);
	SETCONSTANT(RESULTINVALIDEMAIL, 13);
	SETCONSTANT(RESULTDUPLICATENAME, 14);
	SETCONSTANT(RESULTACCESSDENIED, 15);
	SETCONSTANT(RESULTTIMEOUT, 16);
	SETCONSTANT(RESULTBANNED, 17);
	SETCONSTANT(RESULTACCOUNTNOTFOUND, 18);
	SETCONSTANT(RESULTINVALIDSTEAMID, 19);
	SETCONSTANT(RESULTSERVICEUNAVAILABLE, 20);
	SETCONSTANT(RESULTNOTLOGGEDON, 21);
	SETCONSTANT(RESULTPENDING, 22);
	SETCONSTANT(RESULTENCRYPTIONFAILURE, 23);
	SETCONSTANT(RESULTINSUFFICIENTPRIVILEGE, 24);
	SETCONSTANT(RESULTLIMITEXCEEDED, 25);
	SETCONSTANT(RESULTREVOKED, 26);
	SETCONSTANT(RESULTEXPIRED, 27);
	SETCONSTANT(RESULTALREADYREDEEMED, 28);
	SETCONSTANT(RESULTDUPLICATEREQUEST, 29);
	SETCONSTANT(RESULTALREADYOWNED, 30);
	SETCONSTANT(RESULTIPNOTFOUND, 31);
	SETCONSTANT(RESULTPERSISTFAILED, 32);
	SETCONSTANT(RESULTLOCKINGFAILED, 33);
	SETCONSTANT(RESULTLOGONSESSIONREPLACED, 34);
	SETCONSTANT(RESULTCONNECTFAILED, 35);
	SETCONSTANT(RESULTHANDSHAKEFAILED, 36);
	SETCONSTANT(RESULTIOFAILURE, 37);
	SETCONSTANT(RESULTREMOTEDISCONNECT, 38);
	SETCONSTANT(RESULTSHOPPINGCARTNOTFOUND, 39);
	SETCONSTANT(RESULTBLOCKED, 40);
	SETCONSTANT(RESULTIGNORED, 41);
	SETCONSTANT(RESULTNOMATCH, 42);
	SETCONSTANT(RESULTACCOUNTDISABLED, 43);
	SETCONSTANT(RESULTSERVICEREADONLY, 44);
	SETCONSTANT(RESULTACCOUNTNOTFEATURED, 45);
	SETCONSTANT(RESULTADMINISTRATOROK, 46);
	SETCONSTANT(RESULTCONTENTVERSION, 47);
	SETCONSTANT(RESULTTRYANOTHERCM, 48);
	SETCONSTANT(RESULTPASSWORDREQUIREDTOKICKSESSION, 49);
	SETCONSTANT(RESULTALREADYLOGGEDINELSEWHERE, 50);
	SETCONSTANT(RESULTSUSPENDED, 51);
	SETCONSTANT(RESULTCANCELLED, 52);
	SETCONSTANT(RESULTDATACORRUPTION, 53);
	SETCONSTANT(RESULTDISKFULL, 54);
	SETCONSTANT(RESULTREMOTECALLFAILED, 55);
	SETCONSTANT(RESULTPASSWORDUNSET, 56);
	SETCONSTANT(RESULTEXTERNALACCOUNTUNLINKED, 57);
	SETCONSTANT(RESULTPSNTICKETINVALID, 58);
	SETCONSTANT(RESULTEXTERNALACCOUNTALREADYLINKED, 59);
	SETCONSTANT(RESULTREMOTEFILECONFLICT, 60);
	SETCONSTANT(RESULTILLEGALPASSWORD, 61);
	SETCONSTANT(RESULTSAMEASPREVIOUSVALUE, 62);
	SETCONSTANT(RESULTACCOUNTLOGONDENIED, 63);
	SETCONSTANT(RESULTCANNOTUSEOLDPASSWORD, 64);
	SETCONSTANT(RESULTINVALIDLOGINAUTHCODE, 65);
	SETCONSTANT(RESULTACCOUNTLOGONDENIEDNOMAIL, 66);
	SETCONSTANT(RESULTHARDWARENOTCAPABLEOFIPT, 67);
	SETCONSTANT(RESULTIPTINITERROR, 68);
	SETCONSTANT(RESULTPARENTALCONTROLRESTRICTED, 69);
	SETCONSTANT(RESULTFACEBOOKQUERYERROR, 70);
	SETCONSTANT(RESULTEXPIREDLOGINAUTHCODE, 71);
	SETCONSTANT(RESULTIPLOGINRESTRICTIONFAILED, 72);
	SETCONSTANT(RESULTACCOUNTLOCKEDDOWN, 73);
	SETCONSTANT(RESULTACCOUNTLOGONDENIEDVERIFIEDEMAILREQUIRED, 74);
	SETCONSTANT(RESULTNOMATCHINGURL, 75);
	SETCONSTANT(RESULTBADRESPONSE, 76);
	SETCONSTANT(RESULTREQUIREPASSWORDREENTRY, 77);
	SETCONSTANT(RESULTVALUEOUTOFRANGE, 78);
	SETCONSTANT(RESULTUNEXPECTEDERROR, 79);
	SETCONSTANT(RESULTDISABLED, 80);
	SETCONSTANT(RESULTINVALIDCEGSUBMISSION, 81);
	SETCONSTANT(RESULTRESTRICTEDDEVICE, 82);
	SETCONSTANT(RESULTREGIONLOCKED, 83);
	SETCONSTANT(RESULTRATELIMITEXCEEDED, 84);
	SETCONSTANT(RESULTACCOUNTLOGINDENIEDNEEDTWOFACTOR, 85);
	SETCONSTANT(RESULTITEMDELETED, 86);
	SETCONSTANT(RESULTACCOUNTLOGINDENIEDTHROTTLE, 87);
	SETCONSTANT(RESULTTWOFACTORCODEMISMATCH, 88);
	SETCONSTANT(RESULTTWOFACTORACTIVATIONCODEMISMATCH, 89);
	SETCONSTANT(RESULTACCOUNTASSOCIATEDTOMULTIPLEPARTNERS, 90);
	SETCONSTANT(RESULTNOTMODIFIED, 91);
	SETCONSTANT(RESULTNOMOBILEDEVICE, 92);
	SETCONSTANT(RESULTTIMENOTSYNCED, 93);
	SETCONSTANT(RESULTSMSCODEFAILED, 94);
	SETCONSTANT(RESULTACCOUNTLIMITEXCEEDED, 95);
	SETCONSTANT(RESULTACCOUNTACTIVITYLIMITEXCEEDED, 96);
	SETCONSTANT(RESULTPHONEACTIVITYLIMITEXCEEDED, 97);
	SETCONSTANT(RESULTREFUNDTOWALLET, 98);
	SETCONSTANT(RESULTEMAILSENDFAILURE, 99);
	SETCONSTANT(RESULTNOTSETTLED, 100);
	SETCONSTANT(RESULTNEEDCAPTCHA, 101);
	SETCONSTANT(RESULTGSLTDENIED, 102);
	SETCONSTANT(RESULTGSOWNERDENIED, 103);
	SETCONSTANT(RESULTINVALIDITEMTYPE, 104);
	SETCONSTANT(RESULTIPBANNED, 105);
	SETCONSTANT(RESULTGSLTEXPIRED, 106);
	SETCONSTANT(RESULTINSUFFICIENTFUNDS, 107);
	SETCONSTANT(RESULTTOOMANYPENDING, 108);
	SETCONSTANT(RESULTNOSITELICENSESFOUND, 109);
	SETCONSTANT(RESULTWGNETWORKSENDEXCEEDED, 110);
	SETCONSTANT(RESULTACCOUNTNOTFRIENDS, 111);
	SETCONSTANT(RESULTLIMITEDUSERACCOUNT, 112);
	// EVoiceResult
	SETCONSTANT(VOICERESULTOK, 0);
	SETCONSTANT(VOICERESULTNOTINITIALIZED, 1);
	SETCONSTANT(VOICERESULTNOTRECORDING, 2);
	SETCONSTANT(VOICERESULTNODATA, 3);
	SETCONSTANT(VOICERESULTBUFFERTOOSMALL, 4);
	SETCONSTANT(VOICERESULTDATACORRUPTED, 5);
	SETCONSTANT(VOICERESULTRESTRICTED, 6);
	SETCONSTANT(VOICERESULTUNSUPPORTEDCODEC, 7);
	SETCONSTANT(VOICERESULTRECEIVEROUTOFDATE, 8);
	SETCONSTANT(VOICERESULTRECEIVERDIDNOTANSWER, 9);
	// EDenyReason
	SETCONSTANT(DENYINVALID, 0);
	SETCONSTANT(DENYINVALIDVERSION, 1);
	SETCONSTANT(DENYGENERIC, 2);
	SETCONSTANT(DENYNOTLOGGEDON, 3);
	SETCONSTANT(DENYNOLICENSE, 4);
	SETCONSTANT(DENYCHEATER, 5);
	SETCONSTANT(DENYLOGGEDINELSEWHERE, 6);
	SETCONSTANT(DENYUNKNOWNTEXT, 7);
	SETCONSTANT(DENYINCOMPATIBLEANTICHEAT, 8);
	SETCONSTANT(DENYMEMORYCORRUPTION, 9);
	SETCONSTANT(DENYINCOMPATIBLESOFTWARE, 10);
	SETCONSTANT(DENYSTEAMCONNECTIONLOST, 11);
	SETCONSTANT(DENYSTEAMCONNECTIONERROR, 12);
	SETCONSTANT(DENYSTEAMRESPONSETIMEDOUT, 13);
	SETCONSTANT(DENYSTEAMVALIDATIONSTALLED, 14);
	SETCONSTANT(DENYSTEAMOWNERLEFTGUESTUSER, 15);
	// EBeginAuthSessionResult
	SETCONSTANT(BEGINAUTHSESSIONRESULTOK, 0);
	SETCONSTANT(BEGINAUTHSESSIONRESULTINVALIDTICKET, 1);
	SETCONSTANT(BEGINAUTHSESSIONRESULTDUPLICATEREQUEST, 2);
	SETCONSTANT(BEGINAUTHSESSIONRESULTINVALIDVERSION, 3);
	SETCONSTANT(BEGINAUTHSESSIONRESULTGAMEMISMATCH, 4);
	SETCONSTANT(BEGINAUTHSESSIONRESULTEXPIREDTICKET, 5);
	// EAuthSessionResponse
	SETCONSTANT(AUTHSESSIONRESPONSEOK, 0);
	SETCONSTANT(AUTHSESSIONRESPONSEUSERNOTCONNECTEDTOSTEAM, 1);
	SETCONSTANT(AUTHSESSIONRESPONSENOLICENSEOREXPIRED, 2);
	SETCONSTANT(AUTHSESSIONRESPONSEVACBANNED, 3);
	SETCONSTANT(AUTHSESSIONRESPONSELOGGEDINELSEWHERE, 4);
	SETCONSTANT(AUTHSESSIONRESPONSEVACCHECKTIMEDOUT, 5);
	SETCONSTANT(AUTHSESSIONRESPONSEAUTHTICKETCANCELED, 6);
	SETCONSTANT(AUTHSESSIONRESPONSEAUTHTICKETINVALIDALREADYUSED, 7);
	SETCONSTANT(AUTHSESSIONRESPONSEAUTHTICKETINVALID, 8);
	SETCONSTANT(AUTHSESSIONRESPONSEPUBLISHERISSUEDBAN, 9);
	// EUserHasLicenseForAppResult
	SETCONSTANT(USERHASLICENSERESULTHASLICENSE, 0);
	SETCONSTANT(USERHASLICENSERESULTDOESNOTHAVELICENSE, 1);
	SETCONSTANT(USERHASLICENSERESULTNOAUTH, 2);
	// EAccountType
	SETCONSTANT(ACCOUNTTYPEINVALID, 0);
	SETCONSTANT(ACCOUNTTYPEINDIVIDUAL, 1);
	SETCONSTANT(ACCOUNTTYPEMULTISEAT, 2);
	SETCONSTANT(ACCOUNTTYPEGAMESERVER, 3);
	SETCONSTANT(ACCOUNTTYPEANONGAMESERVER, 4);
	SETCONSTANT(ACCOUNTTYPEPENDING, 5);
	SETCONSTANT(ACCOUNTTYPECONTENTSERVER, 6);
	SETCONSTANT(ACCOUNTTYPECLAN, 7);
	SETCONSTANT(ACCOUNTTYPECHAT, 8);
	SETCONSTANT(ACCOUNTTYPECONSOLEUSER, 9);
	SETCONSTANT(ACCOUNTTYPEANONUSER, 10);
	SETCONSTANT(ACCOUNTTYPEMAX, 11);
	// EAppReleaseState
	SETCONSTANT(APPRELEASESTATE_UNKNOWN, 0);
	SETCONSTANT(APPRELEASESTATE_UNAVAILABLE, 1);
	SETCONSTANT(APPRELEASESTATE_PRERELEASE, 2);
	SETCONSTANT(APPRELEASESTATE_PRELOADONLY, 3);
	SETCONSTANT(APPRELEASESTATE_RELEASED, 4);
	// EAppOwnershipFlags
	SETCONSTANT(APPOWNERSHIPFLAGS_NONE, 0);
	SETCONSTANT(APPOWNERSHIPFLAGS_OWNSLICENSE, 1);
	SETCONSTANT(APPOWNERSHIPFLAGS_FREELICENSE, 2);
	SETCONSTANT(APPOWNERSHIPFLAGS_REGIONRESTRICTED, 4);
	SETCONSTANT(APPOWNERSHIPFLAGS_LOWVIOLENCE, 8);
	SETCONSTANT(APPOWNERSHIPFLAGS_INVALIDPLATFORM, 16);
	SETCONSTANT(APPOWNERSHIPFLAGS_SHAREDLICENSE, 32);
	SETCONSTANT(APPOWNERSHIPFLAGS_FREEWEEKEND, 64);
	SETCONSTANT(APPOWNERSHIPFLAGS_RETAILLICENSE, 128);
	SETCONSTANT(APPOWNERSHIPFLAGS_LICENSELOCKED, 256);
	SETCONSTANT(APPOWNERSHIPFLAGS_LICENSEPENDING, 512);
	SETCONSTANT(APPOWNERSHIPFLAGS_LICENSEEXPIRED, 1024);
	SETCONSTANT(APPOWNERSHIPFLAGS_LICENSEPERMANENT, 2048);
	SETCONSTANT(APPOWNERSHIPFLAGS_LICENSERECURRING, 4096);
	SETCONSTANT(APPOWNERSHIPFLAGS_LICENSECANCELED, 8192);
	SETCONSTANT(APPOWNERSHIPFLAGS_AUTOGRANT, 16384);
	SETCONSTANT(APPOWNERSHIPFLAGS_PENDINGGIFT, 32768);
	SETCONSTANT(APPOWNERSHIPFLAGS_RENTALNOTACTIVATED, 65536);
	SETCONSTANT(APPOWNERSHIPFLAGS_RENTAL, 131072);
	SETCONSTANT(APPOWNERSHIPFLAGS_SITELICENSE, 262144);
	// EAppType
	SETCONSTANT(APPTYPE_INVALID, 0);
	SETCONSTANT(APPTYPE_GAME, 1);
	SETCONSTANT(APPTYPE_APPLICATION, 2);
	SETCONSTANT(APPTYPE_TOOL, 4);
	SETCONSTANT(APPTYPE_DEMO, 8);
	SETCONSTANT(APPTYPE_MEDIA_DEPRECATED, 16);
	SETCONSTANT(APPTYPE_DLC, 32);
	SETCONSTANT(APPTYPE_GUIDE, 64);
	SETCONSTANT(APPTYPE_DRIVER, 128);
	SETCONSTANT(APPTYPE_CONFIG, 256);
	SETCONSTANT(APPTYPE_HARDWARE, 512);
	SETCONSTANT(APPTYPE_FRANCHISE, 1024);
	SETCONSTANT(APPTYPE_VIDEO, 2048);
	SETCONSTANT(APPTYPE_PLUGIN, 4096);
	SETCONSTANT(APPTYPE_MUSIC, 8192);
	SETCONSTANT(APPTYPE_SERIES, 16384);
	SETCONSTANT(APPTYPE_COMIC, 32768);
	SETCONSTANT(APPTYPE_SHORTCUT, 1073741824);
	SETCONSTANT(APPTYPE_DEPOTONLY, -2147483648);
	// ESteamUserStatType
	SETCONSTANT(STEAMUSERSTATTYPEINVALID, 0);
	SETCONSTANT(STEAMUSERSTATTYPEINT, 1);
	SETCONSTANT(STEAMUSERSTATTYPEFLOAT, 2);
	SETCONSTANT(STEAMUSERSTATTYPEAVGRATE, 3);
	SETCONSTANT(STEAMUSERSTATTYPEACHIEVEMENTS, 4);
	SETCONSTANT(STEAMUSERSTATTYPEGROUPACHIEVEMENTS, 5);
	SETCONSTANT(STEAMUSERSTATTYPEMAX, 6);
	// EChatEntryType
	SETCONSTANT(CHATENTRYTYPEINVALID, 0);
	SETCONSTANT(CHATENTRYTYPECHATMSG, 1);
	SETCONSTANT(CHATENTRYTYPETYPING, 2);
	SETCONSTANT(CHATENTRYTYPEINVITEGAME, 3);
	SETCONSTANT(CHATENTRYTYPEEMOTE, 4);
	SETCONSTANT(CHATENTRYTYPELEFTCONVERSATION, 6);
	SETCONSTANT(CHATENTRYTYPEENTERED, 7);
	SETCONSTANT(CHATENTRYTYPEWASKICKED, 8);
	SETCONSTANT(CHATENTRYTYPEWASBANNED, 9);
	SETCONSTANT(CHATENTRYTYPEDISCONNECTED, 10);
	SETCONSTANT(CHATENTRYTYPEHISTORICALCHAT, 11);
	SETCONSTANT(CHATENTRYTYPELINKBLOCKED, 14);
	// EChatRoomEnterResponse
	SETCONSTANT(CHATROOMENTERRESPONSESUCCESS, 1);
	SETCONSTANT(CHATROOMENTERRESPONSEDOESNTEXIST, 2);
	SETCONSTANT(CHATROOMENTERRESPONSENOTALLOWED, 3);
	SETCONSTANT(CHATROOMENTERRESPONSEFULL, 4);
	SETCONSTANT(CHATROOMENTERRESPONSEERROR, 5);
	SETCONSTANT(CHATROOMENTERRESPONSEBANNED, 6);
	SETCONSTANT(CHATROOMENTERRESPONSELIMITED, 7);
	SETCONSTANT(CHATROOMENTERRESPONSECLANDISABLED, 8);
	SETCONSTANT(CHATROOMENTERRESPONSECOMMUNITYBAN, 9);
	SETCONSTANT(CHATROOMENTERRESPONSEMEMBERBLOCKEDYOU, 10);
	SETCONSTANT(CHATROOMENTERRESPONSEYOUBLOCKEDMEMBER, 11);
	SETCONSTANT(CHATROOMENTERRESPONSERATELIMITEXCEEDED, 15);
	// EChatSteamIDInstanceFlags
	SETCONSTANT(CHATACCOUNTINSTANCEMASK, 4095);
	SETCONSTANT(CHATINSTANCEFLAGCLAN, 524288);
	SETCONSTANT(CHATINSTANCEFLAGLOBBY, 262144);
	SETCONSTANT(CHATINSTANCEFLAGMMSLOBBY, 131072);
	// EMarketingMessageFlags
	SETCONSTANT(MARKETINGMESSAGEFLAGSNONE, 0);
	SETCONSTANT(MARKETINGMESSAGEFLAGSHIGHPRIORITY, 1);
	SETCONSTANT(MARKETINGMESSAGEFLAGSPLATFORMWINDOWS, 2);
	SETCONSTANT(MARKETINGMESSAGEFLAGSPLATFORMMAC, 4);
	SETCONSTANT(MARKETINGMESSAGEFLAGSPLATFORMLINUX, 8);
	SETCONSTANT(MARKETINGMESSAGEFLAGSPLATFORMRESTRICTIONS, 14);
	// ENotificationPosition
	SETCONSTANT(POSITIONTOPLEFT, 0);
	SETCONSTANT(POSITIONTOPRIGHT, 1);
	SETCONSTANT(POSITIONBOTTOMLEFT, 2);
	SETCONSTANT(POSITIONBOTTOMRIGHT, 3);
	// EBroadcastUploadResult
	SETCONSTANT(BROADCASTUPLOADRESULTNONE, 0);
	SETCONSTANT(BROADCASTUPLOADRESULTOK, 1);
	SETCONSTANT(BROADCASTUPLOADRESULTINITFAILED, 2);
	SETCONSTANT(BROADCASTUPLOADRESULTFRAMEFAILED, 3);
	SETCONSTANT(BROADCASTUPLOADRESULTTIMEOUT, 4);
	SETCONSTANT(BROADCASTUPLOADRESULTBANDWIDTHEXCEEDED, 5);
	SETCONSTANT(BROADCASTUPLOADRESULTLOWFPS, 6);
	SETCONSTANT(BROADCASTUPLOADRESULTMISSINGKEYFRAMES, 7);
	SETCONSTANT(BROADCASTUPLOADRESULTNOCONNECTION, 8);
	SETCONSTANT(BROADCASTUPLOADRESULTRELAYFAILED, 9);
	SETCONSTANT(BROADCASTUPLOADRESULTSETTINGSCHANGED, 10);
	SETCONSTANT(BROADCASTUPLOADRESULTMISSINGAUDIO, 11);
	SETCONSTANT(BROADCASTUPLOADRESULTTOOFARBEHIND, 12);
	SETCONSTANT(BROADCASTUPLOADRESULTTRANSCODEBEHIND, 13);
	// ELaunchOptionType
	SETCONSTANT(LAUNCHOPTIONTYPE_NONE, 0);
	SETCONSTANT(LAUNCHOPTIONTYPE_DEFAULT, 1);
	SETCONSTANT(LAUNCHOPTIONTYPE_SAFEMODE, 2);
	SETCONSTANT(LAUNCHOPTIONTYPE_MULTIPLAYER, 3);
	SETCONSTANT(LAUNCHOPTIONTYPE_CONFIG, 4);
	SETCONSTANT(LAUNCHOPTIONTYPE_OPENVR, 5);
	SETCONSTANT(LAUNCHOPTIONTYPE_SERVER, 6);
	SETCONSTANT(LAUNCHOPTIONTYPE_EDITOR, 7);
	SETCONSTANT(LAUNCHOPTIONTYPE_MANUAL, 8);
	SETCONSTANT(LAUNCHOPTIONTYPE_BENCHMARK, 9);
	SETCONSTANT(LAUNCHOPTIONTYPE_OPTION1, 10);
	SETCONSTANT(LAUNCHOPTIONTYPE_OPTION2, 11);
	SETCONSTANT(LAUNCHOPTIONTYPE_OPTION3, 12);
	SETCONSTANT(LAUNCHOPTIONTYPE_OCULUSVR, 13);
	SETCONSTANT(LAUNCHOPTIONTYPE_OPENVROVERLAY, 14);
	SETCONSTANT(LAUNCHOPTIONTYPE_OSVR, 15);
	SETCONSTANT(LAUNCHOPTIONTYPE_DIALOG, 1000);
	// EVRHMDType
	SETCONSTANT(EVRHMDTYPE_NONE, -1);
	SETCONSTANT(EVRHMDTYPE_UNKNOWN, 0);
	SETCONSTANT(EVRHMDTYPE_HTC_DEV, 1);
	SETCONSTANT(EVRHMDTYPE_HTC_VIVEPRE, 2);
	SETCONSTANT(EVRHMDTYPE_HTC_VIVE, 3);
	SETCONSTANT(EVRHMDTYPE_HTC_UNKNOWN, 20);
	SETCONSTANT(EVRHMDTYPE_OCULUS_DK1, 21);
	SETCONSTANT(EVRHMDTYPE_OCULUS_DK2, 22);
	SETCONSTANT(EVRHMDTYPE_OCULUS_RIFT, 23);
	SETCONSTANT(EVRHMDTYPE_OCULUS_UNKNOWN, 40);
	SETCONSTANT(EVRHMDTYPE_ACER_UNKNOWN, 50);
	SETCONSTANT(EVRHMDTYPE_ACER_WINDOWSMR, 51);
	SETCONSTANT(EVRHMDTYPE_DELL_UNKNOWN, 60);
	SETCONSTANT(EVRHMDTYPE_DELL_VISOR, 61);
	SETCONSTANT(EVRHMDTYPE_LENOVO_UNKNOWN, 70);
	SETCONSTANT(EVRHMDTYPE_LENOVO_EXPLORER, 71);
	SETCONSTANT(EVRHMDTYPE_HP_UNKNOWN, 80);
	SETCONSTANT(EVRHMDTYPE_HP_WINDOWSMR, 81);
	SETCONSTANT(EVRHMDTYPE_SAMSUNG_UNKNOWN, 90);
	SETCONSTANT(EVRHMDTYPE_SAMSUNG_ODYSSEY, 91);
	SETCONSTANT(EVRHMDTYPE_UNANNOUNCED_UNKNOWN, 100);
	SETCONSTANT(EVRHMDTYPE_UNANNOUNCED_WINDOWSMR, 101);
	// EFriendRelationship
	SETCONSTANT(FRIENDRELATIONSHIPNONE, 0);
	SETCONSTANT(FRIENDRELATIONSHIPBLOCKED, 1);
	SETCONSTANT(FRIENDRELATIONSHIPREQUESTRECIPIENT, 2);
	SETCONSTANT(FRIENDRELATIONSHIPFRIEND, 3);
	SETCONSTANT(FRIENDRELATIONSHIPREQUESTINITIATOR, 4);
	SETCONSTANT(FRIENDRELATIONSHIPIGNORED, 5);
	SETCONSTANT(FRIENDRELATIONSHIPIGNOREDFRIEND, 6);
	SETCONSTANT(FRIENDRELATIONSHIPSUGGESTED_DEPRECATED, 7);
	SETCONSTANT(FRIENDRELATIONSHIPMAX, 8);
	// EPersonaState
	SETCONSTANT(PERSONASTATEOFFLINE, 0);
	SETCONSTANT(PERSONASTATEONLINE, 1);
	SETCONSTANT(PERSONASTATEBUSY, 2);
	SETCONSTANT(PERSONASTATEAWAY, 3);
	SETCONSTANT(PERSONASTATESNOOZE, 4);
	SETCONSTANT(PERSONASTATELOOKINGTOTRADE, 5);
	SETCONSTANT(PERSONASTATELOOKINGTOPLAY, 6);
	SETCONSTANT(PERSONASTATEMAX, 7);
	// EFriendFlags
	SETCONSTANT(FRIENDFLAGNONE, 0);
	SETCONSTANT(FRIENDFLAGBLOCKED, 1);
	SETCONSTANT(FRIENDFLAGFRIENDSHIPREQUESTED, 2);
	SETCONSTANT(FRIENDFLAGIMMEDIATE, 4);
	SETCONSTANT(FRIENDFLAGCLANMEMBER, 8);
	SETCONSTANT(FRIENDFLAGONGAMESERVER, 16);
	SETCONSTANT(FRIENDFLAGREQUESTINGFRIENDSHIP, 128);
	SETCONSTANT(FRIENDFLAGREQUESTINGINFO, 256);
	SETCONSTANT(FRIENDFLAGIGNORED, 512);
	SETCONSTANT(FRIENDFLAGIGNOREDFRIEND, 1024);
	SETCONSTANT(FRIENDFLAGCHATMEMBER, 4096);
	SETCONSTANT(FRIENDFLAGALL, 65535);
	// EUserRestriction
	SETCONSTANT(USERRESTRICTIONNONE, 0);
	SETCONSTANT(USERRESTRICTIONUNKNOWN, 1);
	SETCONSTANT(USERRESTRICTIONANYCHAT, 2);
	SETCONSTANT(USERRESTRICTIONVOICECHAT, 4);
	SETCONSTANT(USERRESTRICTIONGROUPCHAT, 8);
	SETCONSTANT(USERRESTRICTIONRATING, 16);
	SETCONSTANT(USERRESTRICTIONGAMEINVITES, 32);
	SETCONSTANT(USERRESTRICTIONTRADING, 64);
	// EOverlayToStoreFlag
	SETCONSTANT(OVERLAYTOSTOREFLAG_NONE, 0);
	SETCONSTANT(OVERLAYTOSTOREFLAG_ADDTOCART, 1);
	SETCONSTANT(OVERLAYTOSTOREFLAG_ADDTOCARTANDSHOW, 2);
	// EPersonaChange
	SETCONSTANT(PERSONACHANGENAME, 1);
	SETCONSTANT(PERSONACHANGESTATUS, 2);
	SETCONSTANT(PERSONACHANGECOMEONLINE, 4);
	SETCONSTANT(PERSONACHANGEGONEOFFLINE, 8);
	SETCONSTANT(PERSONACHANGEGAMEPLAYED, 16);
	SETCONSTANT(PERSONACHANGEGAMESERVER, 32);
	SETCONSTANT(PERSONACHANGEAVATAR, 64);
	SETCONSTANT(PERSONACHANGEJOINEDSOURCE, 128);
	SETCONSTANT(PERSONACHANGELEFTSOURCE, 256);
	SETCONSTANT(PERSONACHANGERELATIONSHIPCHANGED, 512);
	SETCONSTANT(PERSONACHANGENAMEFIRSTSET, 1024);
	SETCONSTANT(PERSONACHANGEFACEBOOKINFO, 2048);
	SETCONSTANT(PERSONACHANGENICKNAME, 4096);
	SETCONSTANT(PERSONACHANGESTEAMLEVEL, 8192);
	// ESteamAPICallFailure
	SETCONSTANT(STEAMAPICALLFAILURENONE, -1);
	SETCONSTANT(STEAMAPICALLFAILURESTEAMGONE, 0);
	SETCONSTANT(STEAMAPICALLFAILURENETWORKFAILURE, 1);
	SETCONSTANT(STEAMAPICALLFAILUREINVALIDHANDLE, 2);
	SETCONSTANT(STEAMAPICALLFAILUREMISMATCHEDCALLBACK, 3);
	// EGamepadTextInputMode
	SETCONSTANT(GAMEPADTEXTINPUTMODENORMAL, 0);
	SETCONSTANT(GAMEPADTEXTINPUTMODEPASSWORD, 1);
	// EGamepadTextInputLineMode
	SETCONSTANT(GAMEPADTEXTINPUTLINEMODESINGLELINE, 0);
	SETCONSTANT(GAMEPADTEXTINPUTLINEMODEMULTIPLELINES, 1);
	// ECheckFileSignature
	SETCONSTANT(CHECKFILESIGNATUREINVALIDSIGNATURE, 0);
	SETCONSTANT(CHECKFILESIGNATUREVALIDSIGNATURE, 1);
	SETCONSTANT(CHECKFILESIGNATUREFILENOTFOUND, 2);
	SETCONSTANT(CHECKFILESIGNATURENOSIGNATURESFOUNDFORTHISAPP, 3);
	SETCONSTANT(CHECKFILESIGNATURENOSIGNATURESFOUNDFORTHISFILE, 4);
	// EMatchMakingServerResponse
	SETCONSTANT(ESERVERRESPONDED, 0);
	SETCONSTANT(ESERVERFAILEDTORESPOND, 1);
	SETCONSTANT(ENOSERVERSLISTEDONMASTERSERVER, 2);
	// ELobbyType
	SETCONSTANT(LOBBYTYPEPRIVATE, 0);
	SETCONSTANT(LOBBYTYPEFRIENDSONLY, 1);
	SETCONSTANT(LOBBYTYPEPUBLIC, 2);
	SETCONSTANT(LOBBYTYPEINVISIBLE, 3);
	// ELobbyComparison
	SETCONSTANT(LOBBYCOMPARISONEQUALTOORLESSTHAN, -2);
	SETCONSTANT(LOBBYCOMPARISONLESSTHAN, -1);
	SETCONSTANT(LOBBYCOMPARISONEQUAL, 0);
	SETCONSTANT(LOBBYCOMPARISONGREATERTHAN, 1);
	SETCONSTANT(LOBBYCOMPARISONEQUALTOORGREATERTHAN, 2);
	SETCONSTANT(LOBBYCOMPARISONNOTEQUAL, 3);
	// ELobbyDistanceFilter
	SETCONSTANT(LOBBYDISTANCEFILTERCLOSE, 0);
	SETCONSTANT(LOBBYDISTANCEFILTERDEFAULT, 1);
	SETCONSTANT(LOBBYDISTANCEFILTERFAR, 2);
	SETCONSTANT(LOBBYDISTANCEFILTERWORLDWIDE, 3);
	// EChatMemberStateChange
	SETCONSTANT(CHATMEMBERSTATECHANGEENTERED, 1);
	SETCONSTANT(CHATMEMBERSTATECHANGELEFT, 2);
	SETCONSTANT(CHATMEMBERSTATECHANGEDISCONNECTED, 4);
	SETCONSTANT(CHATMEMBERSTATECHANGEKICKED, 8);
	SETCONSTANT(CHATMEMBERSTATECHANGEBANNED, 16);
	// ERemoteStoragePlatform
	SETCONSTANT(REMOTESTORAGEPLATFORMNONE, 0);
	SETCONSTANT(REMOTESTORAGEPLATFORMWINDOWS, 1);
	SETCONSTANT(REMOTESTORAGEPLATFORMOSX, 2);
	SETCONSTANT(REMOTESTORAGEPLATFORMPS3, 4);
	SETCONSTANT(REMOTESTORAGEPLATFORMLINUX, 8);
	SETCONSTANT(REMOTESTORAGEPLATFORMRESERVED2, 16);
	SETCONSTANT(REMOTESTORAGEPLATFORMALL, -1);
	// ERemoteStoragePublishedFileVisibility
	SETCONSTANT(REMOTESTORAGEPUBLISHEDFILEVISIBILITYPUBLIC, 0);
	SETCONSTANT(REMOTESTORAGEPUBLISHEDFILEVISIBILITYFRIENDSONLY, 1);
	SETCONSTANT(REMOTESTORAGEPUBLISHEDFILEVISIBILITYPRIVATE, 2);
	// EWorkshopFileType
	SETCONSTANT(WORKSHOPFILETYPEFIRST, 0);
	SETCONSTANT(WORKSHOPFILETYPECOMMUNITY, 0);
	SETCONSTANT(WORKSHOPFILETYPEMICROTRANSACTION, 1);
	SETCONSTANT(WORKSHOPFILETYPECOLLECTION, 2);
	SETCONSTANT(WORKSHOPFILETYPEART, 3);
	SETCONSTANT(WORKSHOPFILETYPEVIDEO, 4);
	SETCONSTANT(WORKSHOPFILETYPESCREENSHOT, 5);
	SETCONSTANT(WORKSHOPFILETYPEGAME, 6);
	SETCONSTANT(WORKSHOPFILETYPESOFTWARE, 7);
	SETCONSTANT(WORKSHOPFILETYPECONCEPT, 8);
	SETCONSTANT(WORKSHOPFILETYPEWEBGUIDE, 9);
	SETCONSTANT(WORKSHOPFILETYPEINTEGRATEDGUIDE, 10);
	SETCONSTANT(WORKSHOPFILETYPEMERCH, 11);
	SETCONSTANT(WORKSHOPFILETYPECONTROLLERBINDING, 12);
	SETCONSTANT(WORKSHOPFILETYPESTEAMWORKSACCESSINVITE, 13);
	SETCONSTANT(WORKSHOPFILETYPESTEAMVIDEO, 14);
	SETCONSTANT(WORKSHOPFILETYPEGAMEMANAGEDITEM, 15);
	SETCONSTANT(WORKSHOPFILETYPEMAX, 16);
	// EWorkshopVote
	SETCONSTANT(WORKSHOPVOTEUNVOTED, 0);
	SETCONSTANT(WORKSHOPVOTEFOR, 1);
	SETCONSTANT(WORKSHOPVOTEAGAINST, 2);
	SETCONSTANT(WORKSHOPVOTELATER, 3);
	// EWorkshopFileAction
	SETCONSTANT(WORKSHOPFILEACTIONPLAYED, 0);
	SETCONSTANT(WORKSHOPFILEACTIONCOMPLETED, 1);
	// EWorkshopEnumerationType
	SETCONSTANT(WORKSHOPENUMERATIONTYPERANKEDBYVOTE, 0);
	SETCONSTANT(WORKSHOPENUMERATIONTYPERECENT, 1);
	SETCONSTANT(WORKSHOPENUMERATIONTYPETRENDING, 2);
	SETCONSTANT(WORKSHOPENUMERATIONTYPEFAVORITESOFFRIENDS, 3);
	SETCONSTANT(WORKSHOPENUMERATIONTYPEVOTEDBYFRIENDS, 4);
	SETCONSTANT(WORKSHOPENUMERATIONTYPECONTENTBYFRIENDS, 5);
	SETCONSTANT(WORKSHOPENUMERATIONTYPERECENTFROMFOLLOWEDUSERS, 6);
	// EWorkshopVideoProvider
	SETCONSTANT(WORKSHOPVIDEOPROVIDERNONE, 0);
	SETCONSTANT(WORKSHOPVIDEOPROVIDERYOUTUBE, 1);
	// EUGCReadAction
	SETCONSTANT(UGCREAD_CONTINUEREADINGUNTILFINISHED, 0);
	SETCONSTANT(UGCREAD_CONTINUEREADING, 1);
	SETCONSTANT(UGCREAD_CLOSE, 2);
	// ELeaderboardDataRequest
	SETCONSTANT(LEADERBOARDDATAREQUESTGLOBAL, 0);
	SETCONSTANT(LEADERBOARDDATAREQUESTGLOBALAROUNDUSER, 1);
	SETCONSTANT(LEADERBOARDDATAREQUESTFRIENDS, 2);
	SETCONSTANT(LEADERBOARDDATAREQUESTUSERS, 3);
	// ELeaderboardSortMethod
	SETCONSTANT(LEADERBOARDSORTMETHODNONE, 0);
	SETCONSTANT(LEADERBOARDSORTMETHODASCENDING, 1);
	SETCONSTANT(LEADERBOARDSORTMETHODDESCENDING, 2);
	// ELeaderboardDisplayType
	SETCONSTANT(LEADERBOARDDISPLAYTYPENONE, 0);
	SETCONSTANT(LEADERBOARDDISPLAYTYPENUMERIC, 1);
	SETCONSTANT(LEADERBOARDDISPLAYTYPETIMESECONDS, 2);
	SETCONSTANT(LEADERBOARDDISPLAYTYPETIMEMILLISECONDS, 3);
	// ELeaderboardUploadScoreMethod
	SETCONSTANT(LEADERBOARDUPLOADSCOREMETHODNONE, 0);
	SETCONSTANT(LEADERBOARDUPLOADSCOREMETHODKEEPBEST, 1);
	SETCONSTANT(LEADERBOARDUPLOADSCOREMETHODFORCEUPDATE, 2);
	// ERegisterActivationCodeResult
	SETCONSTANT(REGISTERACTIVATIONCODERESULTOK, 0);
	SETCONSTANT(REGISTERACTIVATIONCODERESULTFAIL, 1);
	SETCONSTANT(REGISTERACTIVATIONCODERESULTALREADYREGISTERED, 2);
	SETCONSTANT(REGISTERACTIVATIONCODERESULTTIMEOUT, 3);
	SETCONSTANT(REGISTERACTIVATIONCODEALREADYOWNED, 4);
	// EP2PSessionError
	SETCONSTANT(P2PSESSIONERRORNONE, 0);
	SETCONSTANT(P2PSESSIONERRORNOTRUNNINGAPP, 1);
	SETCONSTANT(P2PSESSIONERRORNORIGHTSTOAPP, 2);
	SETCONSTANT(P2PSESSIONERRORDESTINATIONNOTLOGGEDIN, 3);
	SETCONSTANT(P2PSESSIONERRORTIMEOUT, 4);
	SETCONSTANT(P2PSESSIONERRORMAX, 5);
	// EP2PSend
	SETCONSTANT(P2PSENDUNRELIABLE, 0);
	SETCONSTANT(P2PSENDUNRELIABLENODELAY, 1);
	SETCONSTANT(P2PSENDRELIABLE, 2);
	SETCONSTANT(P2PSENDRELIABLEWITHBUFFERING, 3);
	// ESNetSocketState
	SETCONSTANT(SNETSOCKETSTATEINVALID, 0);
	SETCONSTANT(SNETSOCKETSTATECONNECTED, 1);
	SETCONSTANT(SNETSOCKETSTATEINITIATED, 10);
	SETCONSTANT(SNETSOCKETSTATELOCALCANDIDATESFOUND, 11);
	SETCONSTANT(SNETSOCKETSTATERECEIVEDREMOTECANDIDATES, 12);
	SETCONSTANT(SNETSOCKETSTATECHALLENGEHANDSHAKE, 15);
	SETCONSTANT(SNETSOCKETSTATEDISCONNECTING, 21);
	SETCONSTANT(SNETSOCKETSTATELOCALDISCONNECT, 22);
	SETCONSTANT(SNETSOCKETSTATETIMEOUTDURINGCONNECT, 23);
	SETCONSTANT(SNETSOCKETSTATEREMOTEENDDISCONNECTED, 24);
	SETCONSTANT(SNETSOCKETSTATECONNECTIONBROKEN, 25);
	// ESNetSocketConnectionType
	SETCONSTANT(SNETSOCKETCONNECTIONTYPENOTCONNECTED, 0);
	SETCONSTANT(SNETSOCKETCONNECTIONTYPEUDP, 1);
	SETCONSTANT(SNETSOCKETCONNECTIONTYPEUDPRELAY, 2);
	// EVRScreenshotType
	SETCONSTANT(VRSCREENSHOTTYPE_NONE, 0);
	SETCONSTANT(VRSCREENSHOTTYPE_MONO, 1);
	SETCONSTANT(VRSCREENSHOTTYPE_STEREO, 2);
	SETCONSTANT(VRSCREENSHOTTYPE_MONOCUBEMAP, 3);
	SETCONSTANT(VRSCREENSHOTTYPE_MONOPANORAMA, 4);
	SETCONSTANT(VRSCREENSHOTTYPE_STEREOPANORAMA, 5);
	// AudioPlayback_Status
	SETCONSTANT(AUDIOPLAYBACK_UNDEFINED, 0);
	SETCONSTANT(AUDIOPLAYBACK_PLAYING, 1);
	SETCONSTANT(AUDIOPLAYBACK_PAUSED, 2);
	SETCONSTANT(AUDIOPLAYBACK_IDLE, 3);
	// EHTTPMethod
	SETCONSTANT(HTTPMETHODINVALID, 0);
	SETCONSTANT(HTTPMETHODGET, 1);
	SETCONSTANT(HTTPMETHODHEAD, 2);
	SETCONSTANT(HTTPMETHODPOST, 3);
	SETCONSTANT(HTTPMETHODPUT, 4);
	SETCONSTANT(HTTPMETHODDELETE, 5);
	SETCONSTANT(HTTPMETHODOPTIONS, 6);
	SETCONSTANT(HTTPMETHODPATCH, 7);
	// EHTTPStatusCode
	SETCONSTANT(HTTPSTATUSCODEINVALID, 0);
	SETCONSTANT(HTTPSTATUSCODE100CONTINUE, 100);
	SETCONSTANT(HTTPSTATUSCODE101SWITCHINGPROTOCOLS, 101);
	SETCONSTANT(HTTPSTATUSCODE200OK, 200);
	SETCONSTANT(HTTPSTATUSCODE201CREATED, 201);
	SETCONSTANT(HTTPSTATUSCODE202ACCEPTED, 202);
	SETCONSTANT(HTTPSTATUSCODE203NONAUTHORITATIVE, 203);
	SETCONSTANT(HTTPSTATUSCODE204NOCONTENT, 204);
	SETCONSTANT(HTTPSTATUSCODE205RESETCONTENT, 205);
	SETCONSTANT(HTTPSTATUSCODE206PARTIALCONTENT, 206);
	SETCONSTANT(HTTPSTATUSCODE300MULTIPLECHOICES, 300);
	SETCONSTANT(HTTPSTATUSCODE301MOVEDPERMANENTLY, 301);
	SETCONSTANT(HTTPSTATUSCODE302FOUND, 302);
	SETCONSTANT(HTTPSTATUSCODE303SEEOTHER, 303);
	SETCONSTANT(HTTPSTATUSCODE304NOTMODIFIED, 304);
	SETCONSTANT(HTTPSTATUSCODE305USEPROXY, 305);
	SETCONSTANT(HTTPSTATUSCODE307TEMPORARYREDIRECT, 307);
	SETCONSTANT(HTTPSTATUSCODE400BADREQUEST, 400);
	SETCONSTANT(HTTPSTATUSCODE401UNAUTHORIZED, 401);
	SETCONSTANT(HTTPSTATUSCODE402PAYMENTREQUIRED, 402);
	SETCONSTANT(HTTPSTATUSCODE403FORBIDDEN, 403);
	SETCONSTANT(HTTPSTATUSCODE404NOTFOUND, 404);
	SETCONSTANT(HTTPSTATUSCODE405METHODNOTALLOWED, 405);
	SETCONSTANT(HTTPSTATUSCODE406NOTACCEPTABLE, 406);
	SETCONSTANT(HTTPSTATUSCODE407PROXYAUTHREQUIRED, 407);
	SETCONSTANT(HTTPSTATUSCODE408REQUESTTIMEOUT, 408);
	SETCONSTANT(HTTPSTATUSCODE409CONFLICT, 409);
	SETCONSTANT(HTTPSTATUSCODE410GONE, 410);
	SETCONSTANT(HTTPSTATUSCODE411LENGTHREQUIRED, 411);
	SETCONSTANT(HTTPSTATUSCODE412PRECONDITIONFAILED, 412);
	SETCONSTANT(HTTPSTATUSCODE413REQUESTENTITYTOOLARGE, 413);
	SETCONSTANT(HTTPSTATUSCODE414REQUESTURITOOLONG, 414);
	SETCONSTANT(HTTPSTATUSCODE415UNSUPPORTEDMEDIATYPE, 415);
	SETCONSTANT(HTTPSTATUSCODE416REQUESTEDRANGENOTSATISFIABLE, 416);
	SETCONSTANT(HTTPSTATUSCODE417EXPECTATIONFAILED, 417);
	SETCONSTANT(HTTPSTATUSCODE4XXUNKNOWN, 418);
	SETCONSTANT(HTTPSTATUSCODE429TOOMANYREQUESTS, 429);
	SETCONSTANT(HTTPSTATUSCODE500INTERNALSERVERERROR, 500);
	SETCONSTANT(HTTPSTATUSCODE501NOTIMPLEMENTED, 501);
	SETCONSTANT(HTTPSTATUSCODE502BADGATEWAY, 502);
	SETCONSTANT(HTTPSTATUSCODE503SERVICEUNAVAILABLE, 503);
	SETCONSTANT(HTTPSTATUSCODE504GATEWAYTIMEOUT, 504);
	SETCONSTANT(HTTPSTATUSCODE505HTTPVERSIONNOTSUPPORTED, 505);
	SETCONSTANT(HTTPSTATUSCODE5XXUNKNOWN, 599);
	// ESteamControllerPad
	SETCONSTANT(STEAMCONTROLLERPAD_LEFT, 0);
	SETCONSTANT(STEAMCONTROLLERPAD_RIGHT, 1);
	// EControllerSource
	SETCONSTANT(CONTROLLERSOURCE_NONE, 0);
	SETCONSTANT(CONTROLLERSOURCE_LEFTTRACKPAD, 1);
	SETCONSTANT(CONTROLLERSOURCE_RIGHTTRACKPAD, 2);
	SETCONSTANT(CONTROLLERSOURCE_JOYSTICK, 3);
	SETCONSTANT(CONTROLLERSOURCE_ABXY, 4);
	SETCONSTANT(CONTROLLERSOURCE_SWITCH, 5);
	SETCONSTANT(CONTROLLERSOURCE_LEFTTRIGGER, 6);
	SETCONSTANT(CONTROLLERSOURCE_RIGHTTRIGGER, 7);
	SETCONSTANT(CONTROLLERSOURCE_GYRO, 8);
	SETCONSTANT(CONTROLLERSOURCE_CENTERTRACKPAD, 9);
	SETCONSTANT(CONTROLLERSOURCE_RIGHTJOYSTICK, 10);
	SETCONSTANT(CONTROLLERSOURCE_DPAD, 11);
	SETCONSTANT(CONTROLLERSOURCE_KEY, 12);
	SETCONSTANT(CONTROLLERSOURCE_MOUSE, 13);
	SETCONSTANT(CONTROLLERSOURCE_COUNT, 14);
	// EControllerSourceMode
	SETCONSTANT(CONTROLLERSOURCEMODE_NONE, 0);
	SETCONSTANT(CONTROLLERSOURCEMODE_DPAD, 1);
	SETCONSTANT(CONTROLLERSOURCEMODE_BUTTONS, 2);
	SETCONSTANT(CONTROLLERSOURCEMODE_FOURBUTTONS, 3);
	SETCONSTANT(CONTROLLERSOURCEMODE_ABSOLUTEMOUSE, 4);
	SETCONSTANT(CONTROLLERSOURCEMODE_RELATIVEMOUSE, 5);
	SETCONSTANT(CONTROLLERSOURCEMODE_JOYSTICKMOVE, 6);
	SETCONSTANT(CONTROLLERSOURCEMODE_JOYSTICKMOUSE, 7);
	SETCONSTANT(CONTROLLERSOURCEMODE_JOYSTICKCAMERA, 8);
	SETCONSTANT(CONTROLLERSOURCEMODE_SCROLLWHEEL, 9);
	SETCONSTANT(CONTROLLERSOURCEMODE_TRIGGER, 10);
	SETCONSTANT(CONTROLLERSOURCEMODE_TOUCHMENU, 11);
	SETCONSTANT(CONTROLLERSOURCEMODE_MOUSEJOYSTICK, 12);
	SETCONSTANT(CONTROLLERSOURCEMODE_MOUSEREGION, 13);
	SETCONSTANT(CONTROLLERSOURCEMODE_RADIALMENU, 14);
	SETCONSTANT(CONTROLLERSOURCEMODE_SINGLEBUTTON, 15);
	SETCONSTANT(CONTROLLERSOURCEMODE_SWITCHES, 16);
	// EControllerActionOrigin
	SETCONSTANT(CONTROLLERACTIONORIGIN_NONE, 0);
	SETCONSTANT(CONTROLLERACTIONORIGIN_A, 1);
	SETCONSTANT(CONTROLLERACTIONORIGIN_B, 2);
	SETCONSTANT(CONTROLLERACTIONORIGIN_X, 3);
	SETCONSTANT(CONTROLLERACTIONORIGIN_Y, 4);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTBUMPER, 5);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTBUMPER, 6);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTGRIP, 7);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTGRIP, 8);
	SETCONSTANT(CONTROLLERACTIONORIGIN_START, 9);
	SETCONSTANT(CONTROLLERACTIONORIGIN_BACK, 10);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTPAD_TOUCH, 11);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTPAD_SWIPE, 12);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTPAD_CLICK, 13);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTPAD_DPADNORTH, 14);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTPAD_DPADSOUTH, 15);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTPAD_DPADWEST, 16);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTPAD_DPADEAST, 17);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTPAD_TOUCH, 18);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTPAD_SWIPE, 19);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTPAD_CLICK, 20);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTPAD_DPADNORTH, 21);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTPAD_DPADSOUTH, 22);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTPAD_DPADWEST, 23);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTPAD_DPADEAST, 24);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTTRIGGER_PULL, 25);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTTRIGGER_CLICK, 26);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTTRIGGER_PULL, 27);
	SETCONSTANT(CONTROLLERACTIONORIGIN_RIGHTTRIGGER_CLICK, 28);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTSTICK_MOVE, 29);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTSTICK_CLICK, 30);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTSTICK_DPADNORTH, 31);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTSTICK_DPADSOUTH, 32);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTSTICK_DPADWEST, 33);
	SETCONSTANT(CONTROLLERACTIONORIGIN_LEFTSTICK_DPADEAST, 34);
	SETCONSTANT(CONTROLLERACTIONORIGIN_GYRO_MOVE, 35);
	SETCONSTANT(CONTROLLERACTIONORIGIN_GYRO_PITCH, 36);
	SETCONSTANT(CONTROLLERACTIONORIGIN_GYRO_YAW, 37);
	SETCONSTANT(CONTROLLERACTIONORIGIN_GYRO_ROLL, 38);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_X, 39);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_CIRCLE, 40);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_TRIANGLE, 41);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_SQUARE, 42);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTBUMPER, 43);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTBUMPER, 44);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_OPTIONS, 45);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_SHARE, 46);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTPAD_TOUCH, 47);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTPAD_SWIPE, 48);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTPAD_CLICK, 49);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTPAD_DPADNORTH, 50);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTPAD_DPADSOUTH, 51);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTPAD_DPADWEST, 52);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTPAD_DPADEAST, 53);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTPAD_TOUCH, 54);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTPAD_SWIPE, 55);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTPAD_CLICK, 56);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTPAD_DPADNORTH, 57);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTPAD_DPADSOUTH, 58);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTPAD_DPADWEST, 59);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTPAD_DPADEAST, 60);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_CENTERPAD_TOUCH, 61);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_CENTERPAD_SWIPE, 62);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_CENTERPAD_CLICK, 63);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_CENTERPAD_DPADNORTH, 64);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_CENTERPAD_DPADSOUTH, 65);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_CENTERPAD_DPADWEST, 66);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_CENTERPAD_DPADEAST, 67);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTTRIGGER_PULL, 68);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTTRIGGER_CLICK, 69);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTTRIGGER_PULL, 70);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTTRIGGER_CLICK, 71);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTSTICK_MOVE, 72);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTSTICK_CLICK, 73);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTSTICK_DPADNORTH, 74);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTSTICK_DPADSOUTH, 75);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTSTICK_DPADWEST, 76);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_LEFTSTICK_DPADEAST, 77);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTSTICK_MOVE, 78);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTSTICK_CLICK, 79);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTSTICK_DPADNORTH, 80);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTSTICK_DPADSOUTH, 81);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTSTICK_DPADWEST, 82);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_RIGHTSTICK_DPADEAST, 83);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_DPAD_NORTH, 84);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_DPAD_SOUTH, 85);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_DPAD_WEST, 86);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_DPAD_EAST, 87);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_GYRO_MOVE, 88);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_GYRO_PITCH, 89);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_GYRO_YAW, 90);
	SETCONSTANT(CONTROLLERACTIONORIGIN_PS4_GYRO_ROLL, 91);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_A, 92);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_B, 93);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_X, 94);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_Y, 95);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_LEFTBUMPER, 96);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_RIGHTBUMPER, 97);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_MENU, 98);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_VIEW, 99);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_LEFTTRIGGER_PULL, 100);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_LEFTTRIGGER_CLICK, 101);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_RIGHTTRIGGER_PULL, 102);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_RIGHTTRIGGER_CLICK, 103);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_LEFTSTICK_MOVE, 104);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_LEFTSTICK_CLICK, 105);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_LEFTSTICK_DPADNORTH, 106);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_LEFTSTICK_DPADSOUTH, 107);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_LEFTSTICK_DPADWEST, 108);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_LEFTSTICK_DPADEAST, 109);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_RIGHTSTICK_MOVE, 110);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_RIGHTSTICK_CLICK, 111);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_RIGHTSTICK_DPADNORTH, 112);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_RIGHTSTICK_DPADSOUTH, 113);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_RIGHTSTICK_DPADWEST, 114);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_RIGHTSTICK_DPADEAST, 115);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_DPAD_NORTH, 116);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_DPAD_SOUTH, 117);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_DPAD_WEST, 118);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOXONE_DPAD_EAST, 119);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_A, 120);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_B, 121);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_X, 122);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_Y, 123);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_LEFTBUMPER, 124);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_RIGHTBUMPER, 125);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_START, 126);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_BACK, 127);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_LEFTTRIGGER_PULL, 128);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_LEFTTRIGGER_CLICK, 129);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_RIGHTTRIGGER_PULL, 130);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_RIGHTTRIGGER_CLICK, 131);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_LEFTSTICK_MOVE, 132);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_LEFTSTICK_CLICK, 133);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_LEFTSTICK_DPADNORTH, 134);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_LEFTSTICK_DPADSOUTH, 135);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_LEFTSTICK_DPADWEST, 136);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_LEFTSTICK_DPADEAST, 137);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_RIGHTSTICK_MOVE, 138);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_RIGHTSTICK_CLICK, 139);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_RIGHTSTICK_DPADNORTH, 140);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_RIGHTSTICK_DPADSOUTH, 141);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_RIGHTSTICK_DPADWEST, 142);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_RIGHTSTICK_DPADEAST, 143);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_DPAD_NORTH, 144);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_DPAD_SOUTH, 145);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_DPAD_WEST, 146);
	SETCONSTANT(CONTROLLERACTIONORIGIN_XBOX360_DPAD_EAST, 147);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_A, 148);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_B, 149);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_X, 150);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_Y, 151);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTBUMPER, 152);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTBUMPER, 153);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTGRIP, 154);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTGRIP, 155);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTGRIP_UPPER, 156);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTGRIP_UPPER, 157);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTBUMPER_PRESSURE, 158);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTBUMPER_PRESSURE, 159);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTGRIP_PRESSURE, 160);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTGRIP_PRESSURE, 161);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTGRIP_UPPER_PRESSURE, 162);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTGRIP_UPPER_PRESSURE, 163);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_START, 164);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_BACK, 165);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTPAD_TOUCH, 166);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTPAD_SWIPE, 167);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTPAD_CLICK, 168);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTPAD_PRESSURE, 169);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTPAD_DPADNORTH, 170);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTPAD_DPADSOUTH, 171);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTPAD_DPADWEST, 172);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTPAD_DPADEAST, 173);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTPAD_TOUCH, 174);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTPAD_SWIPE, 175);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTPAD_CLICK, 176);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTPAD_PRESSURE, 177);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTPAD_DPADNORTH, 178);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTPAD_DPADSOUTH, 179);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTPAD_DPADWEST, 180);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTPAD_DPADEAST, 181);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTTRIGGER_PULL, 182);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTTRIGGER_CLICK, 183);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTTRIGGER_PULL, 184);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_RIGHTTRIGGER_CLICK, 185);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTSTICK_MOVE, 186);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTSTICK_CLICK, 187);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTSTICK_DPADNORTH, 188);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTSTICK_DPADSOUTH, 189);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTSTICK_DPADWEST, 190);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_LEFTSTICK_DPADEAST, 191);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_GYRO_MOVE, 192);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_GYRO_PITCH, 193);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_GYRO_YAW, 194);
	SETCONSTANT(CONTROLLERACTIONORIGIN_STEAMV2_GYRO_ROLL, 195);
	SETCONSTANT(CONTROLLERACTIONORIGIN_COUNT, 196);
	// ESteamControllerLEDFlag
	SETCONSTANT(STEAMCONTROLLERLEDFLAG_SETCOLOR, 0);
	SETCONSTANT(STEAMCONTROLLERLEDFLAG_RESTOREUSERDEFAULT, 1);
	// ESteamInputType
	SETCONSTANT(STEAMINPUTTYPE_UNKNOWN, 0);
	SETCONSTANT(STEAMINPUTTYPE_STEAMCONTROLLER, 1);
	SETCONSTANT(STEAMINPUTTYPE_XBOX360CONTROLLER, 2);
	SETCONSTANT(STEAMINPUTTYPE_XBOXONECONTROLLER, 3);
	SETCONSTANT(STEAMINPUTTYPE_GENERICXINPUT, 4);
	SETCONSTANT(STEAMINPUTTYPE_PS4CONTROLLER, 5);
	// EUGCMatchingUGCType
	SETCONSTANT(UGCMATCHINGUGCTYPE_ITEMS, 0);
	SETCONSTANT(UGCMATCHINGUGCTYPE_ITEMS_MTX, 1);
	SETCONSTANT(UGCMATCHINGUGCTYPE_ITEMS_READYTOUSE, 2);
	SETCONSTANT(UGCMATCHINGUGCTYPE_COLLECTIONS, 3);
	SETCONSTANT(UGCMATCHINGUGCTYPE_ARTWORK, 4);
	SETCONSTANT(UGCMATCHINGUGCTYPE_VIDEOS, 5);
	SETCONSTANT(UGCMATCHINGUGCTYPE_SCREENSHOTS, 6);
	SETCONSTANT(UGCMATCHINGUGCTYPE_ALLGUIDES, 7);
	SETCONSTANT(UGCMATCHINGUGCTYPE_WEBGUIDES, 8);
	SETCONSTANT(UGCMATCHINGUGCTYPE_INTEGRATEDGUIDES, 9);
	SETCONSTANT(UGCMATCHINGUGCTYPE_USABLEINGAME, 10);
	SETCONSTANT(UGCMATCHINGUGCTYPE_CONTROLLERBINDINGS, 11);
	SETCONSTANT(UGCMATCHINGUGCTYPE_GAMEMANAGEDITEMS, 12);
	SETCONSTANT(UGCMATCHINGUGCTYPE_ALL, -1);
	// EUserUGCList
	SETCONSTANT(USERUGCLIST_PUBLISHED, 0);
	SETCONSTANT(USERUGCLIST_VOTEDON, 1);
	SETCONSTANT(USERUGCLIST_VOTEDUP, 2);
	SETCONSTANT(USERUGCLIST_VOTEDDOWN, 3);
	SETCONSTANT(USERUGCLIST_WILLVOTELATER, 4);
	SETCONSTANT(USERUGCLIST_FAVORITED, 5);
	SETCONSTANT(USERUGCLIST_SUBSCRIBED, 6);
	SETCONSTANT(USERUGCLIST_USEDORPLAYED, 7);
	SETCONSTANT(USERUGCLIST_FOLLOWED, 8);
	// EUserUGCListSortOrder
	SETCONSTANT(USERUGCLISTSORTORDER_CREATIONORDERDESC, 0);
	SETCONSTANT(USERUGCLISTSORTORDER_CREATIONORDERASC, 1);
	SETCONSTANT(USERUGCLISTSORTORDER_TITLEASC, 2);
	SETCONSTANT(USERUGCLISTSORTORDER_LASTUPDATEDDESC, 3);
	SETCONSTANT(USERUGCLISTSORTORDER_SUBSCRIPTIONDATEDESC, 4);
	SETCONSTANT(USERUGCLISTSORTORDER_VOTESCOREDESC, 5);
	SETCONSTANT(USERUGCLISTSORTORDER_FORMODERATION, 6);
	// EUGCQuery
	SETCONSTANT(UGCQUERY_RANKEDBYVOTE, 0);
	SETCONSTANT(UGCQUERY_RANKEDBYPUBLICATIONDATE, 1);
	SETCONSTANT(UGCQUERY_ACCEPTEDFORGAMERANKEDBYACCEPTANCEDATE, 2);
	SETCONSTANT(UGCQUERY_RANKEDBYTREND, 3);
	SETCONSTANT(UGCQUERY_FAVORITEDBYFRIENDSRANKEDBYPUBLICATIONDATE, 4);
	SETCONSTANT(UGCQUERY_CREATEDBYFRIENDSRANKEDBYPUBLICATIONDATE, 5);
	SETCONSTANT(UGCQUERY_RANKEDBYNUMTIMESREPORTED, 6);
	SETCONSTANT(UGCQUERY_CREATEDBYFOLLOWEDUSERSRANKEDBYPUBLICATIONDATE, 7);
	SETCONSTANT(UGCQUERY_NOTYETRATED, 8);
	SETCONSTANT(UGCQUERY_RANKEDBYTOTALVOTESASC, 9);
	SETCONSTANT(UGCQUERY_RANKEDBYVOTESUP, 10);
	SETCONSTANT(UGCQUERY_RANKEDBYTEXTSEARCH, 11);
	SETCONSTANT(UGCQUERY_RANKEDBYTOTALUNIQUESUBSCRIPTIONS, 12);
	SETCONSTANT(UGCQUERY_RANKEDBYPLAYTIMETREND, 13);
	SETCONSTANT(UGCQUERY_RANKEDBYTOTALPLAYTIME, 14);
	SETCONSTANT(UGCQUERY_RANKEDBYAVERAGEPLAYTIMETREND, 15);
	SETCONSTANT(UGCQUERY_RANKEDBYLIFETIMEAVERAGEPLAYTIME, 16);
	SETCONSTANT(UGCQUERY_RANKEDBYPLAYTIMESESSIONSTREND, 17);
	SETCONSTANT(UGCQUERY_RANKEDBYLIFETIMEPLAYTIMESESSIONS, 18);
	// EItemUpdateStatus
	SETCONSTANT(ITEMUPDATESTATUSINVALID, 0);
	SETCONSTANT(ITEMUPDATESTATUSPREPARINGCONFIG, 1);
	SETCONSTANT(ITEMUPDATESTATUSPREPARINGCONTENT, 2);
	SETCONSTANT(ITEMUPDATESTATUSUPLOADINGCONTENT, 3);
	SETCONSTANT(ITEMUPDATESTATUSUPLOADINGPREVIEWFILE, 4);
	SETCONSTANT(ITEMUPDATESTATUSCOMMITTINGCHANGES, 5);
	// EItemState
	SETCONSTANT(ITEMSTATENONE, 0);
	SETCONSTANT(ITEMSTATESUBSCRIBED, 1);
	SETCONSTANT(ITEMSTATELEGACYITEM, 2);
	SETCONSTANT(ITEMSTATEINSTALLED, 4);
	SETCONSTANT(ITEMSTATENEEDSUPDATE, 8);
	SETCONSTANT(ITEMSTATEDOWNLOADING, 16);
	SETCONSTANT(ITEMSTATEDOWNLOADPENDING, 32);
	// EItemStatistic
	SETCONSTANT(ITEMSTATISTIC_NUMSUBSCRIPTIONS, 0);
	SETCONSTANT(ITEMSTATISTIC_NUMFAVORITES, 1);
	SETCONSTANT(ITEMSTATISTIC_NUMFOLLOWERS, 2);
	SETCONSTANT(ITEMSTATISTIC_NUMUNIQUESUBSCRIPTIONS, 3);
	SETCONSTANT(ITEMSTATISTIC_NUMUNIQUEFAVORITES, 4);
	SETCONSTANT(ITEMSTATISTIC_NUMUNIQUEFOLLOWERS, 5);
	SETCONSTANT(ITEMSTATISTIC_NUMUNIQUEWEBSITEVIEWS, 6);
	SETCONSTANT(ITEMSTATISTIC_REPORTSCORE, 7);
	SETCONSTANT(ITEMSTATISTIC_NUMSECONDSPLAYED, 8);
	SETCONSTANT(ITEMSTATISTIC_NUMPLAYTIMESESSIONS, 9);
	SETCONSTANT(ITEMSTATISTIC_NUMCOMMENTS, 10);
	SETCONSTANT(ITEMSTATISTIC_NUMSECONDSPLAYEDDURINGTIMEPERIOD, 11);
	SETCONSTANT(ITEMSTATISTIC_NUMPLAYTIMESESSIONSDURINGTIMEPERIOD, 12);
	// EItemPreviewType
	SETCONSTANT(ITEMPREVIEWTYPE_IMAGE, 0);
	SETCONSTANT(ITEMPREVIEWTYPE_YOUTUBEVIDEO, 1);
	SETCONSTANT(ITEMPREVIEWTYPE_SKETCHFAB, 2);
	SETCONSTANT(ITEMPREVIEWTYPE_ENVIRONMENTMAP_HORIZONTALCROSS, 3);
	SETCONSTANT(ITEMPREVIEWTYPE_ENVIRONMENTMAP_LATLONG, 4);
	SETCONSTANT(ITEMPREVIEWTYPE_RESERVEDMAX, 255);
	// ESteamItemFlags
	SETCONSTANT(STEAMITEMNOTRADE, 1);
	SETCONSTANT(STEAMITEMREMOVED, 256);
	SETCONSTANT(STEAMITEMCONSUMED, 512);
	// EParentalFeature
	SETCONSTANT(FEATUREINVALID, 0);
	SETCONSTANT(FEATURESTORE, 1);
	SETCONSTANT(FEATURECOMMUNITY, 2);
	SETCONSTANT(FEATUREPROFILE, 3);
	SETCONSTANT(FEATUREFRIENDS, 4);
	SETCONSTANT(FEATURENEWS, 5);
	SETCONSTANT(FEATURETRADING, 6);
	SETCONSTANT(FEATURESETTINGS, 7);
	SETCONSTANT(FEATURECONSOLE, 8);
	SETCONSTANT(FEATUREBROWSER, 9);
	SETCONSTANT(FEATUREPARENTALSETUP, 10);
	SETCONSTANT(FEATURELIBRARY, 11);
	SETCONSTANT(FEATURETEST, 12);
	SETCONSTANT(FEATUREMAX, 13);
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
