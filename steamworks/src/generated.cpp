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
utils_get_image_rgba(iImage,pubDest,nDestBufferSize) -> ISteamUtils_GetImageRGBA()
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
matchmaking_get_favorite_game_count() -> ISteamMatchmaking_GetFavoriteGameCount()
matchmaking_get_favorite_game(iGame) -> ISteamMatchmaking_GetFavoriteGame()
matchmaking_add_favorite_game(nAppID,nIP,nConnPort,nQueryPort,unFlags,rTime32LastPlayedOnServer) -> ISteamMatchmaking_AddFavoriteGame()
matchmaking_remove_favorite_game(nAppID,nIP,nConnPort,nQueryPort,unFlags) -> ISteamMatchmaking_RemoveFavoriteGame()
matchmaking_request_lobby_list() -> ISteamMatchmaking_RequestLobbyList()
matchmaking_add_request_lobby_list_string_filter(pchKeyToMatch,pchValueToMatch,eComparisonType) -> ISteamMatchmaking_AddRequestLobbyListStringFilter()
matchmaking_add_request_lobby_list_numerical_filter(pchKeyToMatch,nValueToMatch,eComparisonType) -> ISteamMatchmaking_AddRequestLobbyListNumericalFilter()
matchmaking_add_request_lobby_list_near_value_filter(pchKeyToMatch,nValueToBeCloseTo) -> ISteamMatchmaking_AddRequestLobbyListNearValueFilter()
matchmaking_add_request_lobby_list_filter_slots_available(nSlotsAvailable) -> ISteamMatchmaking_AddRequestLobbyListFilterSlotsAvailable()
matchmaking_add_request_lobby_list_distance_filter(eLobbyDistanceFilter) -> ISteamMatchmaking_AddRequestLobbyListDistanceFilter()
matchmaking_add_request_lobby_list_result_count_filter(cMaxResults) -> ISteamMatchmaking_AddRequestLobbyListResultCountFilter()
matchmaking_add_request_lobby_list_compatible_members_filter(steamIDLobby) -> ISteamMatchmaking_AddRequestLobbyListCompatibleMembersFilter()
matchmaking_get_lobby_by_index(iLobby) -> ISteamMatchmaking_GetLobbyByIndex()
matchmaking_create_lobby(eLobbyType,cMaxMembers) -> ISteamMatchmaking_CreateLobby()
matchmaking_join_lobby(steamIDLobby) -> ISteamMatchmaking_JoinLobby()
matchmaking_leave_lobby(steamIDLobby) -> ISteamMatchmaking_LeaveLobby()
matchmaking_invite_user_to_lobby(steamIDLobby,steamIDInvitee) -> ISteamMatchmaking_InviteUserToLobby()
matchmaking_get_num_lobby_members(steamIDLobby) -> ISteamMatchmaking_GetNumLobbyMembers()
matchmaking_get_lobby_member_by_index(steamIDLobby,iMember) -> ISteamMatchmaking_GetLobbyMemberByIndex()
matchmaking_get_lobby_data(steamIDLobby,pchKey) -> ISteamMatchmaking_GetLobbyData()
matchmaking_set_lobby_data(steamIDLobby,pchKey,pchValue) -> ISteamMatchmaking_SetLobbyData()
matchmaking_get_lobby_data_count(steamIDLobby) -> ISteamMatchmaking_GetLobbyDataCount()
matchmaking_get_lobby_data_by_index(steamIDLobby,iLobbyData,pchKey,cchKeyBufferSize,pchValue,cchValueBufferSize) -> ISteamMatchmaking_GetLobbyDataByIndex()
matchmaking_delete_lobby_data(steamIDLobby,pchKey) -> ISteamMatchmaking_DeleteLobbyData()
matchmaking_get_lobby_member_data(steamIDLobby,steamIDUser,pchKey) -> ISteamMatchmaking_GetLobbyMemberData()
matchmaking_set_lobby_member_data(steamIDLobby,pchKey,pchValue) -> ISteamMatchmaking_SetLobbyMemberData()
matchmaking_send_lobby_chat_msg(steamIDLobby,pvMsgBody,cubMsgBody) -> ISteamMatchmaking_SendLobbyChatMsg()
matchmaking_get_lobby_chat_entry(steamIDLobby,iChatID,pvData,cubData) -> ISteamMatchmaking_GetLobbyChatEntry()
matchmaking_request_lobby_data(steamIDLobby) -> ISteamMatchmaking_RequestLobbyData()
matchmaking_set_lobby_game_server(steamIDLobby,unGameServerIP,unGameServerPort,steamIDGameServer) -> ISteamMatchmaking_SetLobbyGameServer()
matchmaking_get_lobby_game_server(steamIDLobby) -> ISteamMatchmaking_GetLobbyGameServer()
matchmaking_set_lobby_member_limit(steamIDLobby,cMaxMembers) -> ISteamMatchmaking_SetLobbyMemberLimit()
matchmaking_get_lobby_member_limit(steamIDLobby) -> ISteamMatchmaking_GetLobbyMemberLimit()
matchmaking_set_lobby_type(steamIDLobby,eLobbyType) -> ISteamMatchmaking_SetLobbyType()
matchmaking_set_lobby_joinable(steamIDLobby,bLobbyJoinable) -> ISteamMatchmaking_SetLobbyJoinable()
matchmaking_get_lobby_owner(steamIDLobby) -> ISteamMatchmaking_GetLobbyOwner()
matchmaking_set_lobby_owner(steamIDLobby,steamIDNewOwner) -> ISteamMatchmaking_SetLobbyOwner()
matchmaking_set_linked_lobby(steamIDLobby,steamIDLobbyDependent) -> ISteamMatchmaking_SetLinkedLobby()
user_stats_request_current_stats() -> ISteamUserStats_RequestCurrentStats()
user_stats_get_stat_int(pchName) -> ISteamUserStats_GetStat()
user_stats_get_stat_float(pchName) -> ISteamUserStats_GetStat()
user_stats_set_stat_int(pchName,nData) -> ISteamUserStats_SetStat()
user_stats_set_stat_float(pchName,fData) -> ISteamUserStats_SetStat()
user_stats_update_avg_rate_stat(pchName,flCountThisSession,dSessionLength) -> ISteamUserStats_UpdateAvgRateStat()
user_stats_get_achievement(pchName) -> ISteamUserStats_GetAchievement()
user_stats_set_achievement(pchName) -> ISteamUserStats_SetAchievement()
user_stats_clear_achievement(pchName) -> ISteamUserStats_ClearAchievement()
user_stats_get_achievement_and_unlock_time(pchName) -> ISteamUserStats_GetAchievementAndUnlockTime()
user_stats_store_stats() -> ISteamUserStats_StoreStats()
user_stats_get_achievement_icon(pchName) -> ISteamUserStats_GetAchievementIcon()
user_stats_get_achievement_display_attribute(pchName,pchKey) -> ISteamUserStats_GetAchievementDisplayAttribute()
user_stats_indicate_achievement_progress(pchName,nCurProgress,nMaxProgress) -> ISteamUserStats_IndicateAchievementProgress()
user_stats_get_num_achievements() -> ISteamUserStats_GetNumAchievements()
user_stats_get_achievement_name(iAchievement) -> ISteamUserStats_GetAchievementName()
user_stats_request_user_stats(steamIDUser) -> ISteamUserStats_RequestUserStats()
user_stats_get_user_stat_int(steamIDUser,pchName) -> ISteamUserStats_GetUserStat()
user_stats_get_user_stat_float(steamIDUser,pchName) -> ISteamUserStats_GetUserStat()
user_stats_get_user_achievement(steamIDUser,pchName) -> ISteamUserStats_GetUserAchievement()
user_stats_get_user_achievement_and_unlock_time(steamIDUser,pchName) -> ISteamUserStats_GetUserAchievementAndUnlockTime()
user_stats_reset_all_stats(bAchievementsToo) -> ISteamUserStats_ResetAllStats()
user_stats_find_or_create_leaderboard(pchLeaderboardName,eLeaderboardSortMethod,eLeaderboardDisplayType) -> ISteamUserStats_FindOrCreateLeaderboard()
user_stats_find_leaderboard(pchLeaderboardName) -> ISteamUserStats_FindLeaderboard()
user_stats_get_leaderboard_name(hSteamLeaderboard) -> ISteamUserStats_GetLeaderboardName()
user_stats_get_leaderboard_entry_count(hSteamLeaderboard) -> ISteamUserStats_GetLeaderboardEntryCount()
user_stats_get_leaderboard_sort_method(hSteamLeaderboard) -> ISteamUserStats_GetLeaderboardSortMethod()
user_stats_get_leaderboard_display_type(hSteamLeaderboard) -> ISteamUserStats_GetLeaderboardDisplayType()
user_stats_download_leaderboard_entries(hSteamLeaderboard,eLeaderboardDataRequest,nRangeStart,nRangeEnd) -> ISteamUserStats_DownloadLeaderboardEntries()
user_stats_download_leaderboard_entries_for_users(hSteamLeaderboard,prgUsers,cUsers) -> ISteamUserStats_DownloadLeaderboardEntriesForUsers()
user_stats_get_downloaded_leaderboard_entry(hSteamLeaderboardEntries,index,cDetailsMax) -> ISteamUserStats_GetDownloadedLeaderboardEntry()
user_stats_upload_leaderboard_score(hSteamLeaderboard,eLeaderboardUploadScoreMethod,nScore,pScoreDetails,cScoreDetailsCount) -> ISteamUserStats_UploadLeaderboardScore()
user_stats_attach_leaderboard_ugc(hSteamLeaderboard,hUGC) -> ISteamUserStats_AttachLeaderboardUGC()
user_stats_get_number_of_current_players() -> ISteamUserStats_GetNumberOfCurrentPlayers()
user_stats_request_global_achievement_percentages() -> ISteamUserStats_RequestGlobalAchievementPercentages()
user_stats_get_most_achieved_achievement_info(pchName,unNameBufLen) -> ISteamUserStats_GetMostAchievedAchievementInfo()
user_stats_get_next_most_achieved_achievement_info(iIteratorPrevious,pchName,unNameBufLen) -> ISteamUserStats_GetNextMostAchievedAchievementInfo()
user_stats_get_achievement_achieved_percent(pchName) -> ISteamUserStats_GetAchievementAchievedPercent()
user_stats_request_global_stats(nHistoryDays) -> ISteamUserStats_RequestGlobalStats()
user_stats_get_global_stat_int(pchStatName) -> ISteamUserStats_GetGlobalStat()
user_stats_get_global_stat_float(pchStatName) -> ISteamUserStats_GetGlobalStat()
user_stats_get_global_stat_int_history(pchStatName,pData,cubData) -> ISteamUserStats_GetGlobalStatHistory()
user_stats_get_global_stat_float_history(pchStatName,pData,cubData) -> ISteamUserStats_GetGlobalStatHistory()

*/

#include <dmsdk/sdk.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

#include "steam_api.h"
#include "steam_gameserver.h"
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

static ISteamFriends *friends;
static ISteamUser *user;
static ISteamUserStats *user_stats;
static ISteamUtils *utils;
static ISteamMatchmaking *matchmaking;

// static ISteamClient *client;




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
static void push_RemoteStorageAppSyncedClient_t(lua_State* L, RemoteStorageAppSyncedClient_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unNumDownloads");
	push_int(L, s.m_unNumDownloads);
	lua_settable(L, -3);
}
static void push_RemoteStorageAppSyncedClient_t_array(lua_State* L, RemoteStorageAppSyncedClient_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageAppSyncedClient_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageAppSyncedServer_t(lua_State* L, RemoteStorageAppSyncedServer_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
	lua_pushstring(L, "m_unNumUploads");
	push_int(L, s.m_unNumUploads);
	lua_settable(L, -3);
}
static void push_RemoteStorageAppSyncedServer_t_array(lua_State* L, RemoteStorageAppSyncedServer_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageAppSyncedServer_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageAppSyncProgress_t(lua_State* L, RemoteStorageAppSyncProgress_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_rgchCurrentFile");
	push_char_array(L, s.m_rgchCurrentFile, 260);
	lua_settable(L, -3);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_uBytesTransferredThisChunk");
	push_uint32(L, s.m_uBytesTransferredThisChunk);
	lua_settable(L, -3);
	lua_pushstring(L, "m_dAppPercentComplete");
	push_double(L, s.m_dAppPercentComplete);
	lua_settable(L, -3);
	lua_pushstring(L, "m_bUploading");
	push_bool(L, s.m_bUploading);
	lua_settable(L, -3);
}
static void push_RemoteStorageAppSyncProgress_t_array(lua_State* L, RemoteStorageAppSyncProgress_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageAppSyncProgress_t(L, arr[i]);
		lua_settable(L, -3);
	}
}
static void push_RemoteStorageAppSyncStatusCheck_t(lua_State* L, RemoteStorageAppSyncStatusCheck_t s) {
	lua_newtable(L);
	lua_pushstring(L, "m_nAppID");
	push_AppId_t(L, s.m_nAppID);
	lua_settable(L, -3);
	lua_pushstring(L, "m_eResult");
	push_EResult(L, s.m_eResult);
	lua_settable(L, -3);
}
static void push_RemoteStorageAppSyncStatusCheck_t_array(lua_State* L, RemoteStorageAppSyncStatusCheck_t arr[], unsigned int size) {
	lua_newtable(L);
	for(int i=1; i <= size; i++) {
		lua_pushnumber(L, i);
		push_RemoteStorageAppSyncStatusCheck_t(L, arr[i]);
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

static RemoteStorageAppSyncedClient_t check_RemoteStorageAppSyncedClient_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageAppSyncedClient_t s;
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_unNumDownloads");
	lua_gettable(L, index);
	s.m_unNumDownloads = check_int(L, -1);
	return s;
}

static RemoteStorageAppSyncedServer_t check_RemoteStorageAppSyncedServer_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageAppSyncedServer_t s;
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_unNumUploads");
	lua_gettable(L, index);
	s.m_unNumUploads = check_int(L, -1);
	return s;
}

static RemoteStorageAppSyncProgress_t check_RemoteStorageAppSyncProgress_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageAppSyncProgress_t s;
	lua_pushstring(L, "m_rgchCurrentFile");
	lua_gettable(L, index);
	check_char_array(L, -1, s.m_rgchCurrentFile, 260);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	lua_pushstring(L, "m_uBytesTransferredThisChunk");
	lua_gettable(L, index);
	s.m_uBytesTransferredThisChunk = check_uint32(L, -1);
	lua_pushstring(L, "m_dAppPercentComplete");
	lua_gettable(L, index);
	s.m_dAppPercentComplete = check_double(L, -1);
	lua_pushstring(L, "m_bUploading");
	lua_gettable(L, index);
	s.m_bUploading = check_bool(L, -1);
	return s;
}

static RemoteStorageAppSyncStatusCheck_t check_RemoteStorageAppSyncStatusCheck_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageAppSyncStatusCheck_t s;
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
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

static RemoteStoragePublishFileResult_t check_RemoteStoragePublishFileResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStoragePublishFileResult_t s;
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

static RemoteStorageDeletePublishedFileResult_t check_RemoteStorageDeletePublishedFileResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageDeletePublishedFileResult_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static RemoteStorageEnumerateUserPublishedFilesResult_t check_RemoteStorageEnumerateUserPublishedFilesResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageEnumerateUserPublishedFilesResult_t s;
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

static RemoteStorageEnumerateUserSubscribedFilesResult_t check_RemoteStorageEnumerateUserSubscribedFilesResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageEnumerateUserSubscribedFilesResult_t s;
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

static RemoteStorageUpdatePublishedFileResult_t check_RemoteStorageUpdatePublishedFileResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageUpdatePublishedFileResult_t s;
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

static RemoteStorageGetPublishedFileDetailsResult_t check_RemoteStorageGetPublishedFileDetailsResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageGetPublishedFileDetailsResult_t s;
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

static RemoteStorageEnumerateWorkshopFilesResult_t check_RemoteStorageEnumerateWorkshopFilesResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageEnumerateWorkshopFilesResult_t s;
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

static RemoteStorageGetPublishedItemVoteDetailsResult_t check_RemoteStorageGetPublishedItemVoteDetailsResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageGetPublishedItemVoteDetailsResult_t s;
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

static RemoteStoragePublishedFileSubscribed_t check_RemoteStoragePublishedFileSubscribed_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStoragePublishedFileSubscribed_t s;
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static RemoteStoragePublishedFileUnsubscribed_t check_RemoteStoragePublishedFileUnsubscribed_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStoragePublishedFileUnsubscribed_t s;
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static RemoteStoragePublishedFileDeleted_t check_RemoteStoragePublishedFileDeleted_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStoragePublishedFileDeleted_t s;
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	lua_pushstring(L, "m_nAppID");
	lua_gettable(L, index);
	s.m_nAppID = check_AppId_t(L, -1);
	return s;
}

static RemoteStorageUpdateUserPublishedItemVoteResult_t check_RemoteStorageUpdateUserPublishedItemVoteResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageUpdateUserPublishedItemVoteResult_t s;
	lua_pushstring(L, "m_eResult");
	lua_gettable(L, index);
	s.m_eResult = check_EResult(L, -1);
	lua_pushstring(L, "m_nPublishedFileId");
	lua_gettable(L, index);
	s.m_nPublishedFileId = check_PublishedFileId_t(L, -1);
	return s;
}

static RemoteStorageUserVoteDetails_t check_RemoteStorageUserVoteDetails_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageUserVoteDetails_t s;
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

static RemoteStorageEnumerateUserSharedWorkshopFilesResult_t check_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageEnumerateUserSharedWorkshopFilesResult_t s;
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

static RemoteStorageSetUserPublishedFileActionResult_t check_RemoteStorageSetUserPublishedFileActionResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageSetUserPublishedFileActionResult_t s;
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

static RemoteStorageEnumeratePublishedFilesByUserActionResult_t check_RemoteStorageEnumeratePublishedFilesByUserActionResult_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStorageEnumeratePublishedFilesByUserActionResult_t s;
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

static RemoteStoragePublishFileProgress_t check_RemoteStoragePublishFileProgress_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStoragePublishFileProgress_t s;
	lua_pushstring(L, "m_dPercentFile");
	lua_gettable(L, index);
	s.m_dPercentFile = check_double(L, -1);
	lua_pushstring(L, "m_bPreview");
	lua_gettable(L, index);
	s.m_bPreview = check_bool(L, -1);
	return s;
}

static RemoteStoragePublishedFileUpdated_t check_RemoteStoragePublishedFileUpdated_t(lua_State* L, int index) {
	if(!lua_istable(L, index)) {
		luaL_error(L, "Not a table");
	}
	RemoteStoragePublishedFileUpdated_t s;
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
				lua_pop(L, 2);
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
		lua_pop(L, 2);
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
		lua_pop(L, 2);
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
		lua_pop(L, 2);
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

	user->TerminateGameConnection(unIPServer,usPortServer);
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

	HAuthTicket r = user->GetAuthSessionTicket(pTicket,cbMaxTicket,&pcbTicket);
	push_HAuthTicket(L, r);
	push_uint32(L, pcbTicket); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUser_BeginAuthSession(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamID = check_class_CSteamID(L, 3); /*normal*/
	int cbAuthTicket = check_int(L, 2); /*normal*/
	dmScript::LuaHBuffer * pAuthTicket_buffer = check_buffer(L, 1); /*buffer_param*/
	const void * pAuthTicket = 0x0;
	uint32_t pAuthTicket_buffersize = 0;
	dmBuffer::Result pAuthTicket_buffer_result = dmBuffer::GetBytes(pAuthTicket_buffer->m_Buffer, (void**)&pAuthTicket, &pAuthTicket_buffersize);

	EBeginAuthSessionResult r = user->BeginAuthSession(pAuthTicket,cbAuthTicket,steamID);
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

	EUserHasLicenseForAppResult r = user->UserHasLicenseForApp(steamID,appID);
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

	user->AdvertiseGame(steamIDGameServer,unIPServer,usPortServer);
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
	void * pTicket = 0x0;
	uint32_t pTicket_buffersize = 0;
	dmBuffer::Result pTicket_buffer_result = dmBuffer::GetBytes(pTicket_buffer->m_Buffer, (void**)&pTicket, &pTicket_buffersize);

	bool r = user->GetEncryptedAppTicket(pTicket,cbMaxTicket,&pcbTicket);
	push_bool(L, r);
	push_uint32(L, pcbTicket); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUser_GetGameBadgeLevel(lua_State* L) {
	int top = lua_gettop(L);
	bool bFoil = check_bool(L, 2); /*normal*/
	int nSeries = check_int(L, 1); /*normal*/

	int r = user->GetGameBadgeLevel(nSeries,bFoil);
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

	class CSteamID r = friends->GetFriendByIndex(iFriend,iFriendFlags);
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

	bool r = friends->GetFriendGamePlayed(steamIDFriend,&pFriendGameInfo);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendPersonaNameHistory(lua_State* L) {
	int top = lua_gettop(L);
	int iPersonaName = check_int(L, 2); /*normal*/
	class CSteamID steamIDFriend = check_class_CSteamID(L, 1); /*normal*/

	const char * r = friends->GetFriendPersonaNameHistory(steamIDFriend,iPersonaName);
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

	bool r = friends->GetClanActivityCounts(steamIDClan,&pnOnline,&pnInGame,&pnChatting);
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
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_GetFriendFromSourceByIndex(lua_State* L) {
	int top = lua_gettop(L);
	int iFriend = check_int(L, 2); /*normal*/
	class CSteamID steamIDSource = check_class_CSteamID(L, 1); /*normal*/

	class CSteamID r = friends->GetFriendFromSourceByIndex(steamIDSource,iFriend);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_IsUserInSource(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDSource = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsUserInSource(steamIDUser,steamIDSource);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
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

	bool r = friends->RequestUserInformation(steamIDUser,bRequireNameOnly);
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

	class CSteamID r = friends->GetClanOfficerByIndex(steamIDClan,iOfficer);
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

	bool r = friends->SetRichPresence(pchKey,pchValue);
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

	const char * r = friends->GetFriendRichPresence(steamIDFriend,pchKey);
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

	const char * r = friends->GetFriendRichPresenceKeyByIndex(steamIDFriend,iKey);
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

	bool r = friends->InviteUserToGame(steamIDFriend,pchConnectString);
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

	class CSteamID r = friends->GetChatMemberByIndex(steamIDClan,iUser);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamFriends_SendClanChatMessage(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchText = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->SendClanChatMessage(steamIDClanChat,pchText);
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

	int r = friends->GetClanChatMessage(steamIDClanChat,iMessage,prgchText,cchTextMax,&peChatEntryType,&psteamidChatter);
	push_int(L, r);
	push_EChatEntryType(L, peChatEntryType); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamFriends_IsClanChatAdmin(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDUser = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDClanChat = check_class_CSteamID(L, 1); /*normal*/

	bool r = friends->IsClanChatAdmin(steamIDClanChat,steamIDUser);
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

	bool r = friends->ReplyToFriendMessage(steamIDFriend,pchMsgToSend);
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

	int r = friends->GetFriendMessage(steamIDFriend,iMessageID,pvData,cubData,&peChatEntryType);
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

	bool r = utils->GetImageSize(iImage,&pnWidth,&pnHeight);
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

	bool r = utils->GetImageRGBA(iImage,pubDest,nDestBufferSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUtils_GetCSERIPPort(lua_State* L) {
	int top = lua_gettop(L);
	uint16 usPort; /*out_param*/
	uint32 unIP; /*out_param*/

	bool r = utils->GetCSERIPPort(&unIP,&usPort);
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

	bool r = utils->GetAPICallResult(hSteamAPICall,pCallback,cubCallback,iCallbackExpected,&pbFailed);
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

	bool r = utils->ShowGamepadTextInput(eInputMode,eLineInputMode,pchDescription,unCharMax,pchExistingText);
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
	char * pchText = check_char_ptr(L, 1); /*normal*/

	bool r = utils->GetEnteredGamepadTextInput(pchText,cchText);
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

	utils->SetOverlayNotificationInset(nHorizontalInset,nVerticalInset);
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

	bool r = matchmaking->GetFavoriteGame(iGame,&pnAppID,&pnIP,&pnConnPort,&pnQueryPort,&punFlags,&pRTime32LastPlayedOnServer);
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

	int r = matchmaking->AddFavoriteGame(nAppID,nIP,nConnPort,nQueryPort,unFlags,rTime32LastPlayedOnServer);
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

	bool r = matchmaking->RemoveFavoriteGame(nAppID,nIP,nConnPort,nQueryPort,unFlags);
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

	matchmaking->AddRequestLobbyListStringFilter(pchKeyToMatch,pchValueToMatch,eComparisonType);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_AddRequestLobbyListNumericalFilter(lua_State* L) {
	int top = lua_gettop(L);
	ELobbyComparison eComparisonType = check_ELobbyComparison(L, 3); /*normal*/
	int nValueToMatch = check_int(L, 2); /*normal*/
	const char * pchKeyToMatch = check_const_char_ptr(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListNumericalFilter(pchKeyToMatch,nValueToMatch,eComparisonType);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_AddRequestLobbyListNearValueFilter(lua_State* L) {
	int top = lua_gettop(L);
	int nValueToBeCloseTo = check_int(L, 2); /*normal*/
	const char * pchKeyToMatch = check_const_char_ptr(L, 1); /*normal*/

	matchmaking->AddRequestLobbyListNearValueFilter(pchKeyToMatch,nValueToBeCloseTo);
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

	SteamAPICall_t r = matchmaking->CreateLobby(eLobbyType,cMaxMembers);
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

	bool r = matchmaking->InviteUserToLobby(steamIDLobby,steamIDInvitee);
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

	class CSteamID r = matchmaking->GetLobbyMemberByIndex(steamIDLobby,iMember);
	push_class_CSteamID(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	const char * r = matchmaking->GetLobbyData(steamIDLobby,pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchValue = check_const_char_ptr(L, 3); /*normal*/
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyData(steamIDLobby,pchKey,pchValue);
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
	char * pchValue = check_char_ptr(L, 5); /*normal*/
	int cchKeyBufferSize = check_int(L, 4); /*normal*/
	char * pchKey = check_char_ptr(L, 3); /*normal*/
	int iLobbyData = check_int(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->GetLobbyDataByIndex(steamIDLobby,iLobbyData,pchKey,cchKeyBufferSize,pchValue,cchValueBufferSize);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_DeleteLobbyData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->DeleteLobbyData(steamIDLobby,pchKey);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_GetLobbyMemberData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchKey = check_const_char_ptr(L, 3); /*normal*/
	class CSteamID steamIDUser = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	const char * r = matchmaking->GetLobbyMemberData(steamIDLobby,steamIDUser,pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyMemberData(lua_State* L) {
	int top = lua_gettop(L);
	const char * pchValue = check_const_char_ptr(L, 3); /*normal*/
	const char * pchKey = check_const_char_ptr(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	matchmaking->SetLobbyMemberData(steamIDLobby,pchKey,pchValue);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_SendLobbyChatMsg(lua_State* L) {
	int top = lua_gettop(L);
	int cubMsgBody = check_int(L, 3); /*normal*/
	dmScript::LuaHBuffer * pvMsgBody_buffer = check_buffer(L, 2); /*buffer_param*/
	const void * pvMsgBody = 0x0;
	uint32_t pvMsgBody_buffersize = 0;
	dmBuffer::Result pvMsgBody_buffer_result = dmBuffer::GetBytes(pvMsgBody_buffer->m_Buffer, (void**)&pvMsgBody, &pvMsgBody_buffersize);
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SendLobbyChatMsg(steamIDLobby,pvMsgBody,cubMsgBody);
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

	int r = matchmaking->GetLobbyChatEntry(steamIDLobby,iChatID,&pSteamIDUser,pvData,cubData,&peChatEntryType);
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

	matchmaking->SetLobbyGameServer(steamIDLobby,unGameServerIP,unGameServerPort,steamIDGameServer);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamMatchmaking_GetLobbyGameServer(lua_State* L) {
	int top = lua_gettop(L);
	uint16 punGameServerPort; /*out_param*/
	uint32 punGameServerIP; /*out_param*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/
	class CSteamID psteamIDGameServer; /*out_struct*/

	bool r = matchmaking->GetLobbyGameServer(steamIDLobby,&punGameServerIP,&punGameServerPort,&psteamIDGameServer);
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

	bool r = matchmaking->SetLobbyMemberLimit(steamIDLobby,cMaxMembers);
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

	bool r = matchmaking->SetLobbyType(steamIDLobby,eLobbyType);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLobbyJoinable(lua_State* L) {
	int top = lua_gettop(L);
	bool bLobbyJoinable = check_bool(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLobbyJoinable(steamIDLobby,bLobbyJoinable);
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

	bool r = matchmaking->SetLobbyOwner(steamIDLobby,steamIDNewOwner);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamMatchmaking_SetLinkedLobby(lua_State* L) {
	int top = lua_gettop(L);
	class CSteamID steamIDLobbyDependent = check_class_CSteamID(L, 2); /*normal*/
	class CSteamID steamIDLobby = check_class_CSteamID(L, 1); /*normal*/

	bool r = matchmaking->SetLinkedLobby(steamIDLobby,steamIDLobbyDependent);
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

static int ISteamUserStats_GetStatInt(lua_State* L) {
	int top = lua_gettop(L);
	int32 pData; /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetStat(pchName,&pData);
	push_bool(L, r);
	push_int32(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetStatFloat(lua_State* L) {
	int top = lua_gettop(L);
	float pData; /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetStat(pchName,&pData);
	push_bool(L, r);
	push_float(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_SetStatInt(lua_State* L) {
	int top = lua_gettop(L);
	int32 nData = check_int32(L, 2); /*normal*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->SetStat(pchName,nData);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_SetStatFloat(lua_State* L) {
	int top = lua_gettop(L);
	float fData = check_float(L, 2); /*normal*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->SetStat(pchName,fData);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_UpdateAvgRateStat(lua_State* L) {
	int top = lua_gettop(L);
	double dSessionLength = check_double(L, 3); /*normal*/
	float flCountThisSession = check_float(L, 2); /*normal*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->UpdateAvgRateStat(pchName,flCountThisSession,dSessionLength);
	push_bool(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetAchievement(lua_State* L) {
	int top = lua_gettop(L);
	bool pbAchieved; /*out_param*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetAchievement(pchName,&pbAchieved);
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

	bool r = user_stats->GetAchievementAndUnlockTime(pchName,&pbAchieved,&punUnlockTime);
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

	const char * r = user_stats->GetAchievementDisplayAttribute(pchName,pchKey);
	push_const_char_ptr(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_IndicateAchievementProgress(lua_State* L) {
	int top = lua_gettop(L);
	uint32 nMaxProgress = check_uint32(L, 3); /*normal*/
	uint32 nCurProgress = check_uint32(L, 2); /*normal*/
	const char * pchName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->IndicateAchievementProgress(pchName,nCurProgress,nMaxProgress);
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

	bool r = user_stats->GetUserStat(steamIDUser,pchName,&pData);
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

	bool r = user_stats->GetUserStat(steamIDUser,pchName,&pData);
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

	bool r = user_stats->GetUserAchievement(steamIDUser,pchName,&pbAchieved);
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

	bool r = user_stats->GetUserAchievementAndUnlockTime(steamIDUser,pchName,&pbAchieved,&punUnlockTime);
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

	SteamAPICall_t r = user_stats->FindOrCreateLeaderboard(pchLeaderboardName,eLeaderboardSortMethod,eLeaderboardDisplayType);
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

	SteamAPICall_t r = user_stats->DownloadLeaderboardEntries(hSteamLeaderboard,eLeaderboardDataRequest,nRangeStart,nRangeEnd);
	steamCallbackWrapper->TrackSteamAPICallLeaderboardScoresDownloaded_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_DownloadLeaderboardEntriesForUsers(lua_State* L) {
	int top = lua_gettop(L);
	int cUsers = check_int(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	int n = luaL_getn(L, 2);
	CSteamID prgUsers[cUsers];
	for(int i=1; i<=cUsers; i++) {
		lua_rawgeti(L, 2, i);
		prgUsers[i] = check_CSteamID(L, 2 + 1);
		lua_pop(L, 1);
	}
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->DownloadLeaderboardEntriesForUsers(hSteamLeaderboard,prgUsers,cUsers);
	steamCallbackWrapper->TrackSteamAPICallLeaderboardScoresDownloaded_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_GetDownloadedLeaderboardEntry(lua_State* L) {
	int top = lua_gettop(L);
	int cDetailsMax = check_int(L, 3); /*normal*/
	int32 pDetails; /*out_param*/
	struct LeaderboardEntry_t pLeaderboardEntry; /*out_param*/
	int index = check_int(L, 2); /*normal*/
	SteamLeaderboardEntries_t hSteamLeaderboardEntries = check_SteamLeaderboardEntries_t(L, 1); /*normal*/

	bool r = user_stats->GetDownloadedLeaderboardEntry(hSteamLeaderboardEntries,index,&pLeaderboardEntry,&pDetails,cDetailsMax);
	push_bool(L, r);
	push_int32(L, pDetails); /*out_param*/
	push_LeaderboardEntry_t(L, pLeaderboardEntry); /*out_param*/
	
	assert(top + 1 + 2 == lua_gettop(L));
	return 1 + 2;
}

static int ISteamUserStats_UploadLeaderboardScore(lua_State* L) {
	int top = lua_gettop(L);
	int cScoreDetailsCount = check_int(L, 5); /*normal*/
	luaL_checktype(L, 4, LUA_TTABLE); /*array_count*/
	int n = luaL_getn(L, 4);
	int32 pScoreDetails[cScoreDetailsCount];
	for(int i=1; i<=cScoreDetailsCount; i++) {
		lua_rawgeti(L, 4, i);
		pScoreDetails[i] = check_int32(L, 4 + 1);
		lua_pop(L, 1);
	}
	int32 nScore = check_int32(L, 3); /*normal*/
	ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod = check_ELeaderboardUploadScoreMethod(L, 2); /*normal*/
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->UploadLeaderboardScore(hSteamLeaderboard,eLeaderboardUploadScoreMethod,nScore,pScoreDetails,cScoreDetailsCount);
	steamCallbackWrapper->TrackSteamAPICallLeaderboardScoreUploaded_t(r);
	assert(top + 0 == lua_gettop(L));
	return 0;
}

static int ISteamUserStats_AttachLeaderboardUGC(lua_State* L) {
	int top = lua_gettop(L);
	UGCHandle_t hUGC = check_UGCHandle_t(L, 2); /*normal*/
	SteamLeaderboard_t hSteamLeaderboard = check_SteamLeaderboard_t(L, 1); /*normal*/

	SteamAPICall_t r = user_stats->AttachLeaderboardUGC(hSteamLeaderboard,hUGC);
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
	char * pchName = check_char_ptr(L, 1); /*normal*/

	int r = user_stats->GetMostAchievedAchievementInfo(pchName,unNameBufLen,&pflPercent,&pbAchieved);
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
	char * pchName = check_char_ptr(L, 2); /*normal*/
	int iIteratorPrevious = check_int(L, 1); /*normal*/

	int r = user_stats->GetNextMostAchievedAchievementInfo(iIteratorPrevious,pchName,unNameBufLen,&pflPercent,&pbAchieved);
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

	bool r = user_stats->GetAchievementAchievedPercent(pchName,&pflPercent);
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

	bool r = user_stats->GetGlobalStat(pchStatName,&pData);
	push_bool(L, r);
	push_int64(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetGlobalStatFloat(lua_State* L) {
	int top = lua_gettop(L);
	double pData; /*out_param*/
	const char * pchStatName = check_const_char_ptr(L, 1); /*normal*/

	bool r = user_stats->GetGlobalStat(pchStatName,&pData);
	push_bool(L, r);
	push_double(L, pData); /*out_param*/
	
	assert(top + 1 + 1 == lua_gettop(L));
	return 1 + 1;
}

static int ISteamUserStats_GetGlobalStatIntHistory(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cubData = check_uint32(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	int n = luaL_getn(L, 2);
	int64 pData[cubData];
	for(int i=1; i<=cubData; i++) {
		lua_rawgeti(L, 2, i);
		pData[i] = check_int64(L, 2 + 1);
		lua_pop(L, 1);
	}
	const char * pchStatName = check_const_char_ptr(L, 1); /*normal*/

	int32 r = user_stats->GetGlobalStatHistory(pchStatName,pData,cubData);
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
}

static int ISteamUserStats_GetGlobalStatFloatHistory(lua_State* L) {
	int top = lua_gettop(L);
	uint32 cubData = check_uint32(L, 3); /*normal*/
	luaL_checktype(L, 2, LUA_TTABLE); /*array_count*/
	int n = luaL_getn(L, 2);
	double pData[cubData];
	for(int i=1; i<=cubData; i++) {
		lua_rawgeti(L, 2, i);
		pData[i] = check_double(L, 2 + 1);
		lua_pop(L, 1);
	}
	const char * pchStatName = check_const_char_ptr(L, 1); /*normal*/

	int32 r = user_stats->GetGlobalStatHistory(pchStatName,pData,cubData);
	push_int32(L, r);
	
	assert(top + 1 + 0 == lua_gettop(L));
	return 1 + 0;
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
	friends = SteamFriends();
	user = SteamUser();
	utils = SteamUtils();
	utils->SetWarningMessageHook(&SteamAPIDebugTextHook);
	user_stats = SteamUserStats();
	matchmaking = SteamMatchmaking();
	//client = SteamClient();
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
