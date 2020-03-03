# Steamworks API

* [Call results](#callresults)
* [Callback](#callbacks)
* [Enums](#enums)
* [Functions](#functions)
  * [steamworks.user_get_h_steam_user](#user_get_h_steam_user)
  * [steamworks.user_logged_on](#user_logged_on)
  * [steamworks.user_get_steam_id](#user_get_steam_id)
  * [steamworks.user_terminate_game_connection](#user_terminate_game_connection)
  * [steamworks.user_get_auth_session_ticket](#user_get_auth_session_ticket)
  * [steamworks.user_begin_auth_session](#user_begin_auth_session)
  * [steamworks.user_end_auth_session](#user_end_auth_session)
  * [steamworks.user_cancel_auth_ticket](#user_cancel_auth_ticket)
  * [steamworks.user_user_has_license_for_app](#user_user_has_license_for_app)
  * [steamworks.user_is_behind_nat](#user_is_behind_nat)
  * [steamworks.user_advertise_game](#user_advertise_game)
  * [steamworks.user_request_encrypted_app_ticket](#user_request_encrypted_app_ticket)
  * [steamworks.user_get_encrypted_app_ticket](#user_get_encrypted_app_ticket)
  * [steamworks.user_get_game_badge_level](#user_get_game_badge_level)
  * [steamworks.user_get_player_steam_level](#user_get_player_steam_level)
  * [steamworks.user_request_store_auth_url](#user_request_store_auth_url)
  * [steamworks.user_is_phone_verified](#user_is_phone_verified)
  * [steamworks.user_is_two_factor_enabled](#user_is_two_factor_enabled)
  * [steamworks.user_is_phone_identifying](#user_is_phone_identifying)
  * [steamworks.user_is_phone_requiring_verification](#user_is_phone_requiring_verification)
  * [steamworks.friends_get_persona_name](#friends_get_persona_name)
  * [steamworks.friends_set_persona_name](#friends_set_persona_name)
  * [steamworks.friends_get_persona_state](#friends_get_persona_state)
  * [steamworks.friends_get_friend_count](#friends_get_friend_count)
  * [steamworks.friends_get_friend_by_index](#friends_get_friend_by_index)
  * [steamworks.friends_get_friend_relationship](#friends_get_friend_relationship)
  * [steamworks.friends_get_friend_persona_state](#friends_get_friend_persona_state)
  * [steamworks.friends_get_friend_persona_name](#friends_get_friend_persona_name)
  * [steamworks.friends_get_friend_game_played](#friends_get_friend_game_played)
  * [steamworks.friends_get_friend_persona_name_history](#friends_get_friend_persona_name_history)
  * [steamworks.friends_get_friend_steam_level](#friends_get_friend_steam_level)
  * [steamworks.friends_get_player_nickname](#friends_get_player_nickname)
  * [steamworks.friends_get_friends_group_count](#friends_get_friends_group_count)
  * [steamworks.friends_get_friends_group_id_by_index](#friends_get_friends_group_id_by_index)
  * [steamworks.friends_get_friends_group_name](#friends_get_friends_group_name)
  * [steamworks.friends_get_friends_group_members_count](#friends_get_friends_group_members_count)
  * [steamworks.friends_get_friends_group_members_list](#friends_get_friends_group_members_list)
  * [steamworks.friends_has_friend](#friends_has_friend)
  * [steamworks.friends_get_clan_count](#friends_get_clan_count)
  * [steamworks.friends_get_clan_by_index](#friends_get_clan_by_index)
  * [steamworks.friends_get_clan_name](#friends_get_clan_name)
  * [steamworks.friends_get_clan_tag](#friends_get_clan_tag)
  * [steamworks.friends_get_clan_activity_counts](#friends_get_clan_activity_counts)
  * [steamworks.friends_download_clan_activity_counts](#friends_download_clan_activity_counts)
  * [steamworks.friends_get_friend_count_from_source](#friends_get_friend_count_from_source)
  * [steamworks.friends_get_friend_from_source_by_index](#friends_get_friend_from_source_by_index)
  * [steamworks.friends_is_user_in_source](#friends_is_user_in_source)
  * [steamworks.friends_set_in_game_voice_speaking](#friends_set_in_game_voice_speaking)
  * [steamworks.friends_activate_game_overlay](#friends_activate_game_overlay)
  * [steamworks.friends_activate_game_overlay_to_user](#friends_activate_game_overlay_to_user)
  * [steamworks.friends_activate_game_overlay_to_web_page](#friends_activate_game_overlay_to_web_page)
  * [steamworks.friends_activate_game_overlay_to_store](#friends_activate_game_overlay_to_store)
  * [steamworks.friends_set_played_with](#friends_set_played_with)
  * [steamworks.friends_activate_game_overlay_invite_dialog](#friends_activate_game_overlay_invite_dialog)
  * [steamworks.friends_get_small_friend_avatar](#friends_get_small_friend_avatar)
  * [steamworks.friends_get_medium_friend_avatar](#friends_get_medium_friend_avatar)
  * [steamworks.friends_get_large_friend_avatar](#friends_get_large_friend_avatar)
  * [steamworks.friends_request_user_information](#friends_request_user_information)
  * [steamworks.friends_request_clan_officer_list](#friends_request_clan_officer_list)
  * [steamworks.friends_get_clan_owner](#friends_get_clan_owner)
  * [steamworks.friends_get_clan_officer_count](#friends_get_clan_officer_count)
  * [steamworks.friends_get_clan_officer_by_index](#friends_get_clan_officer_by_index)
  * [steamworks.friends_get_user_restrictions](#friends_get_user_restrictions)
  * [steamworks.friends_set_rich_presence](#friends_set_rich_presence)
  * [steamworks.friends_clear_rich_presence](#friends_clear_rich_presence)
  * [steamworks.friends_get_friend_rich_presence](#friends_get_friend_rich_presence)
  * [steamworks.friends_get_friend_rich_presence_key_count](#friends_get_friend_rich_presence_key_count)
  * [steamworks.friends_get_friend_rich_presence_key_by_index](#friends_get_friend_rich_presence_key_by_index)
  * [steamworks.friends_request_friend_rich_presence](#friends_request_friend_rich_presence)
  * [steamworks.friends_invite_user_to_game](#friends_invite_user_to_game)
  * [steamworks.friends_get_coplay_friend_count](#friends_get_coplay_friend_count)
  * [steamworks.friends_get_coplay_friend](#friends_get_coplay_friend)
  * [steamworks.friends_get_friend_coplay_time](#friends_get_friend_coplay_time)
  * [steamworks.friends_get_friend_coplay_game](#friends_get_friend_coplay_game)
  * [steamworks.friends_join_clan_chat_room](#friends_join_clan_chat_room)
  * [steamworks.friends_leave_clan_chat_room](#friends_leave_clan_chat_room)
  * [steamworks.friends_get_clan_chat_member_count](#friends_get_clan_chat_member_count)
  * [steamworks.friends_get_chat_member_by_index](#friends_get_chat_member_by_index)
  * [steamworks.friends_send_clan_chat_message](#friends_send_clan_chat_message)
  * [steamworks.friends_get_clan_chat_message](#friends_get_clan_chat_message)
  * [steamworks.friends_is_clan_chat_admin](#friends_is_clan_chat_admin)
  * [steamworks.friends_is_clan_chat_window_open_in_steam](#friends_is_clan_chat_window_open_in_steam)
  * [steamworks.friends_open_clan_chat_window_in_steam](#friends_open_clan_chat_window_in_steam)
  * [steamworks.friends_close_clan_chat_window_in_steam](#friends_close_clan_chat_window_in_steam)
  * [steamworks.friends_set_listen_for_friends_messages](#friends_set_listen_for_friends_messages)
  * [steamworks.friends_reply_to_friend_message](#friends_reply_to_friend_message)
  * [steamworks.friends_get_friend_message](#friends_get_friend_message)
  * [steamworks.friends_get_follower_count](#friends_get_follower_count)
  * [steamworks.friends_is_following](#friends_is_following)
  * [steamworks.friends_enumerate_following_list](#friends_enumerate_following_list)
  * [steamworks.friends_is_clan_public](#friends_is_clan_public)
  * [steamworks.friends_is_clan_official_game_group](#friends_is_clan_official_game_group)
  * [steamworks.utils_get_seconds_since_app_active](#utils_get_seconds_since_app_active)
  * [steamworks.utils_get_seconds_since_computer_active](#utils_get_seconds_since_computer_active)
  * [steamworks.utils_get_connected_universe](#utils_get_connected_universe)
  * [steamworks.utils_get_server_real_time](#utils_get_server_real_time)
  * [steamworks.utils_get_ip_country](#utils_get_ip_country)
  * [steamworks.utils_get_image_size](#utils_get_image_size)
  * [steamworks.utils_get_image_rgba](#utils_get_image_rgba)
  * [steamworks.utils_get_cserip_port](#utils_get_cserip_port)
  * [steamworks.utils_get_current_battery_power](#utils_get_current_battery_power)
  * [steamworks.utils_get_app_id](#utils_get_app_id)
  * [steamworks.utils_set_overlay_notification_position](#utils_set_overlay_notification_position)
  * [steamworks.utils_is_api_call_completed](#utils_is_api_call_completed)
  * [steamworks.utils_get_api_call_failure_reason](#utils_get_api_call_failure_reason)
  * [steamworks.utils_get_api_call_result](#utils_get_api_call_result)
  * [steamworks.utils_get_ipc_call_count](#utils_get_ipc_call_count)
  * [steamworks.utils_is_overlay_enabled](#utils_is_overlay_enabled)
  * [steamworks.utils_overlay_needs_present](#utils_overlay_needs_present)
  * [steamworks.utils_check_file_signature](#utils_check_file_signature)
  * [steamworks.utils_show_gamepad_text_input](#utils_show_gamepad_text_input)
  * [steamworks.utils_get_entered_gamepad_text_length](#utils_get_entered_gamepad_text_length)
  * [steamworks.utils_get_entered_gamepad_text_input](#utils_get_entered_gamepad_text_input)
  * [steamworks.utils_get_steam_ui_language](#utils_get_steam_ui_language)
  * [steamworks.utils_is_steam_running_in_vr](#utils_is_steam_running_in_vr)
  * [steamworks.utils_set_overlay_notification_inset](#utils_set_overlay_notification_inset)
  * [steamworks.utils_is_steam_in_big_picture_mode](#utils_is_steam_in_big_picture_mode)
  * [steamworks.utils_start_vr_dashboard](#utils_start_vr_dashboard)
  * [steamworks.utils_is_vr_headset_streaming_enabled](#utils_is_vr_headset_streaming_enabled)
  * [steamworks.utils_set_vr_headset_streaming_enabled](#utils_set_vr_headset_streaming_enabled)
  * [steamworks.matchmaking_get_favorite_game_count](#matchmaking_get_favorite_game_count)
  * [steamworks.matchmaking_get_favorite_game](#matchmaking_get_favorite_game)
  * [steamworks.matchmaking_add_favorite_game](#matchmaking_add_favorite_game)
  * [steamworks.matchmaking_remove_favorite_game](#matchmaking_remove_favorite_game)
  * [steamworks.matchmaking_request_lobby_list](#matchmaking_request_lobby_list)
  * [steamworks.matchmaking_add_request_lobby_list_string_filter](#matchmaking_add_request_lobby_list_string_filter)
  * [steamworks.matchmaking_add_request_lobby_list_numerical_filter](#matchmaking_add_request_lobby_list_numerical_filter)
  * [steamworks.matchmaking_add_request_lobby_list_near_value_filter](#matchmaking_add_request_lobby_list_near_value_filter)
  * [steamworks.matchmaking_add_request_lobby_list_filter_slots_available](#matchmaking_add_request_lobby_list_filter_slots_available)
  * [steamworks.matchmaking_add_request_lobby_list_distance_filter](#matchmaking_add_request_lobby_list_distance_filter)
  * [steamworks.matchmaking_add_request_lobby_list_result_count_filter](#matchmaking_add_request_lobby_list_result_count_filter)
  * [steamworks.matchmaking_add_request_lobby_list_compatible_members_filter](#matchmaking_add_request_lobby_list_compatible_members_filter)
  * [steamworks.matchmaking_get_lobby_by_index](#matchmaking_get_lobby_by_index)
  * [steamworks.matchmaking_create_lobby](#matchmaking_create_lobby)
  * [steamworks.matchmaking_join_lobby](#matchmaking_join_lobby)
  * [steamworks.matchmaking_leave_lobby](#matchmaking_leave_lobby)
  * [steamworks.matchmaking_invite_user_to_lobby](#matchmaking_invite_user_to_lobby)
  * [steamworks.matchmaking_get_num_lobby_members](#matchmaking_get_num_lobby_members)
  * [steamworks.matchmaking_get_lobby_member_by_index](#matchmaking_get_lobby_member_by_index)
  * [steamworks.matchmaking_get_lobby_data](#matchmaking_get_lobby_data)
  * [steamworks.matchmaking_set_lobby_data](#matchmaking_set_lobby_data)
  * [steamworks.matchmaking_get_lobby_data_count](#matchmaking_get_lobby_data_count)
  * [steamworks.matchmaking_get_lobby_data_by_index](#matchmaking_get_lobby_data_by_index)
  * [steamworks.matchmaking_delete_lobby_data](#matchmaking_delete_lobby_data)
  * [steamworks.matchmaking_get_lobby_member_data](#matchmaking_get_lobby_member_data)
  * [steamworks.matchmaking_set_lobby_member_data](#matchmaking_set_lobby_member_data)
  * [steamworks.matchmaking_send_lobby_chat_msg](#matchmaking_send_lobby_chat_msg)
  * [steamworks.matchmaking_get_lobby_chat_entry](#matchmaking_get_lobby_chat_entry)
  * [steamworks.matchmaking_request_lobby_data](#matchmaking_request_lobby_data)
  * [steamworks.matchmaking_set_lobby_game_server](#matchmaking_set_lobby_game_server)
  * [steamworks.matchmaking_get_lobby_game_server](#matchmaking_get_lobby_game_server)
  * [steamworks.matchmaking_set_lobby_member_limit](#matchmaking_set_lobby_member_limit)
  * [steamworks.matchmaking_get_lobby_member_limit](#matchmaking_get_lobby_member_limit)
  * [steamworks.matchmaking_set_lobby_type](#matchmaking_set_lobby_type)
  * [steamworks.matchmaking_set_lobby_joinable](#matchmaking_set_lobby_joinable)
  * [steamworks.matchmaking_get_lobby_owner](#matchmaking_get_lobby_owner)
  * [steamworks.matchmaking_set_lobby_owner](#matchmaking_set_lobby_owner)
  * [steamworks.matchmaking_set_linked_lobby](#matchmaking_set_linked_lobby)
  * [steamworks.remote_storage_file_write](#remote_storage_file_write)
  * [steamworks.remote_storage_file_read](#remote_storage_file_read)
  * [steamworks.remote_storage_file_write_async](#remote_storage_file_write_async)
  * [steamworks.remote_storage_file_read_async](#remote_storage_file_read_async)
  * [steamworks.remote_storage_file_read_async_complete](#remote_storage_file_read_async_complete)
  * [steamworks.remote_storage_file_forget](#remote_storage_file_forget)
  * [steamworks.remote_storage_file_delete](#remote_storage_file_delete)
  * [steamworks.remote_storage_file_share](#remote_storage_file_share)
  * [steamworks.remote_storage_set_sync_platforms](#remote_storage_set_sync_platforms)
  * [steamworks.remote_storage_file_write_stream_open](#remote_storage_file_write_stream_open)
  * [steamworks.remote_storage_file_write_stream_write_chunk](#remote_storage_file_write_stream_write_chunk)
  * [steamworks.remote_storage_file_write_stream_close](#remote_storage_file_write_stream_close)
  * [steamworks.remote_storage_file_write_stream_cancel](#remote_storage_file_write_stream_cancel)
  * [steamworks.remote_storage_file_exists](#remote_storage_file_exists)
  * [steamworks.remote_storage_file_persisted](#remote_storage_file_persisted)
  * [steamworks.remote_storage_get_file_size](#remote_storage_get_file_size)
  * [steamworks.remote_storage_get_file_timestamp](#remote_storage_get_file_timestamp)
  * [steamworks.remote_storage_get_sync_platforms](#remote_storage_get_sync_platforms)
  * [steamworks.remote_storage_get_file_count](#remote_storage_get_file_count)
  * [steamworks.remote_storage_get_file_name_and_size](#remote_storage_get_file_name_and_size)
  * [steamworks.remote_storage_get_quota](#remote_storage_get_quota)
  * [steamworks.remote_storage_is_cloud_enabled_for_account](#remote_storage_is_cloud_enabled_for_account)
  * [steamworks.remote_storage_is_cloud_enabled_for_app](#remote_storage_is_cloud_enabled_for_app)
  * [steamworks.remote_storage_set_cloud_enabled_for_app](#remote_storage_set_cloud_enabled_for_app)
  * [steamworks.remote_storage_ugc_download](#remote_storage_ugc_download)
  * [steamworks.remote_storage_get_ugc_download_progress](#remote_storage_get_ugc_download_progress)
  * [steamworks.remote_storage_get_ugc_details](#remote_storage_get_ugc_details)
  * [steamworks.remote_storage_ugc_read](#remote_storage_ugc_read)
  * [steamworks.remote_storage_get_cached_ugc_count](#remote_storage_get_cached_ugc_count)
  * [steamworks.remote_storage_get_cached_ugc_handle](#remote_storage_get_cached_ugc_handle)
  * [steamworks.remote_storage_ugc_download_to_location](#remote_storage_ugc_download_to_location)
  * [steamworks.user_stats_request_current_stats](#user_stats_request_current_stats)
  * [steamworks.user_stats_get_stat_int](#user_stats_get_stat_int)
  * [steamworks.user_stats_get_stat_float](#user_stats_get_stat_float)
  * [steamworks.user_stats_set_stat_int](#user_stats_set_stat_int)
  * [steamworks.user_stats_set_stat_float](#user_stats_set_stat_float)
  * [steamworks.user_stats_update_avg_rate_stat](#user_stats_update_avg_rate_stat)
  * [steamworks.user_stats_get_achievement](#user_stats_get_achievement)
  * [steamworks.user_stats_set_achievement](#user_stats_set_achievement)
  * [steamworks.user_stats_clear_achievement](#user_stats_clear_achievement)
  * [steamworks.user_stats_get_achievement_and_unlock_time](#user_stats_get_achievement_and_unlock_time)
  * [steamworks.user_stats_store_stats](#user_stats_store_stats)
  * [steamworks.user_stats_get_achievement_icon](#user_stats_get_achievement_icon)
  * [steamworks.user_stats_get_achievement_display_attribute](#user_stats_get_achievement_display_attribute)
  * [steamworks.user_stats_indicate_achievement_progress](#user_stats_indicate_achievement_progress)
  * [steamworks.user_stats_get_num_achievements](#user_stats_get_num_achievements)
  * [steamworks.user_stats_get_achievement_name](#user_stats_get_achievement_name)
  * [steamworks.user_stats_request_user_stats](#user_stats_request_user_stats)
  * [steamworks.user_stats_get_user_stat_int](#user_stats_get_user_stat_int)
  * [steamworks.user_stats_get_user_stat_float](#user_stats_get_user_stat_float)
  * [steamworks.user_stats_get_user_achievement](#user_stats_get_user_achievement)
  * [steamworks.user_stats_get_user_achievement_and_unlock_time](#user_stats_get_user_achievement_and_unlock_time)
  * [steamworks.user_stats_reset_all_stats](#user_stats_reset_all_stats)
  * [steamworks.user_stats_find_or_create_leaderboard](#user_stats_find_or_create_leaderboard)
  * [steamworks.user_stats_find_leaderboard](#user_stats_find_leaderboard)
  * [steamworks.user_stats_get_leaderboard_name](#user_stats_get_leaderboard_name)
  * [steamworks.user_stats_get_leaderboard_entry_count](#user_stats_get_leaderboard_entry_count)
  * [steamworks.user_stats_get_leaderboard_sort_method](#user_stats_get_leaderboard_sort_method)
  * [steamworks.user_stats_get_leaderboard_display_type](#user_stats_get_leaderboard_display_type)
  * [steamworks.user_stats_download_leaderboard_entries](#user_stats_download_leaderboard_entries)
  * [steamworks.user_stats_download_leaderboard_entries_for_users](#user_stats_download_leaderboard_entries_for_users)
  * [steamworks.user_stats_get_downloaded_leaderboard_entry](#user_stats_get_downloaded_leaderboard_entry)
  * [steamworks.user_stats_upload_leaderboard_score](#user_stats_upload_leaderboard_score)
  * [steamworks.user_stats_attach_leaderboard_ugc](#user_stats_attach_leaderboard_ugc)
  * [steamworks.user_stats_get_number_of_current_players](#user_stats_get_number_of_current_players)
  * [steamworks.user_stats_request_global_achievement_percentages](#user_stats_request_global_achievement_percentages)
  * [steamworks.user_stats_get_most_achieved_achievement_info](#user_stats_get_most_achieved_achievement_info)
  * [steamworks.user_stats_get_next_most_achieved_achievement_info](#user_stats_get_next_most_achieved_achievement_info)
  * [steamworks.user_stats_get_achievement_achieved_percent](#user_stats_get_achievement_achieved_percent)
  * [steamworks.user_stats_request_global_stats](#user_stats_request_global_stats)
  * [steamworks.user_stats_get_global_stat_int](#user_stats_get_global_stat_int)
  * [steamworks.user_stats_get_global_stat_float](#user_stats_get_global_stat_float)
  * [steamworks.user_stats_get_global_stat_int_history](#user_stats_get_global_stat_int_history)
  * [steamworks.user_stats_get_global_stat_float_history](#user_stats_get_global_stat_float_history)
  * [steamworks.apps_is_subscribed](#apps_is_subscribed)
  * [steamworks.apps_is_low_violence](#apps_is_low_violence)
  * [steamworks.apps_is_cybercafe](#apps_is_cybercafe)
  * [steamworks.apps_is_vac_banned](#apps_is_vac_banned)
  * [steamworks.apps_get_current_game_language](#apps_get_current_game_language)
  * [steamworks.apps_get_available_game_languages](#apps_get_available_game_languages)
  * [steamworks.apps_is_subscribed_app](#apps_is_subscribed_app)
  * [steamworks.apps_is_dlc_installed](#apps_is_dlc_installed)
  * [steamworks.apps_get_earliest_purchase_unix_time](#apps_get_earliest_purchase_unix_time)
  * [steamworks.apps_is_subscribed_from_free_weekend](#apps_is_subscribed_from_free_weekend)
  * [steamworks.apps_get_dlc_count](#apps_get_dlc_count)
  * [steamworks.apps_get_dlc_data_by_index](#apps_get_dlc_data_by_index)
  * [steamworks.apps_install_dlc](#apps_install_dlc)
  * [steamworks.apps_uninstall_dlc](#apps_uninstall_dlc)
  * [steamworks.apps_request_app_proof_of_purchase_key](#apps_request_app_proof_of_purchase_key)
  * [steamworks.apps_get_current_beta_name](#apps_get_current_beta_name)
  * [steamworks.apps_mark_content_corrupt](#apps_mark_content_corrupt)
  * [steamworks.apps_get_installed_depots](#apps_get_installed_depots)
  * [steamworks.apps_get_app_install_dir](#apps_get_app_install_dir)
  * [steamworks.apps_is_app_installed](#apps_is_app_installed)
  * [steamworks.apps_get_app_owner](#apps_get_app_owner)
  * [steamworks.apps_get_launch_query_param](#apps_get_launch_query_param)
  * [steamworks.apps_get_dlc_download_progress](#apps_get_dlc_download_progress)
  * [steamworks.apps_get_app_build_id](#apps_get_app_build_id)
  * [steamworks.apps_request_all_proof_of_purchase_keys](#apps_request_all_proof_of_purchase_keys)
  * [steamworks.apps_get_file_details](#apps_get_file_details)
  * [steamworks.networking_send_p2p_packet](#networking_send_p2p_packet)
  * [steamworks.networking_is_p2p_packet_available](#networking_is_p2p_packet_available)
  * [steamworks.networking_read_p2p_packet](#networking_read_p2p_packet)
  * [steamworks.networking_accept_p2p_session_with_user](#networking_accept_p2p_session_with_user)
  * [steamworks.networking_close_p2p_session_with_user](#networking_close_p2p_session_with_user)
  * [steamworks.networking_close_p2p_channel_with_user](#networking_close_p2p_channel_with_user)
  * [steamworks.networking_get_p2p_session_state](#networking_get_p2p_session_state)
  * [steamworks.networking_allow_p2p_packet_relay](#networking_allow_p2p_packet_relay)
  * [steamworks.networking_create_listen_socket](#networking_create_listen_socket)
  * [steamworks.networking_create_p2p_connection_socket](#networking_create_p2p_connection_socket)
  * [steamworks.networking_create_connection_socket](#networking_create_connection_socket)
  * [steamworks.networking_destroy_socket](#networking_destroy_socket)
  * [steamworks.networking_destroy_listen_socket](#networking_destroy_listen_socket)
  * [steamworks.networking_send_data_on_socket](#networking_send_data_on_socket)
  * [steamworks.networking_is_data_available_on_socket](#networking_is_data_available_on_socket)
  * [steamworks.networking_retrieve_data_from_socket](#networking_retrieve_data_from_socket)
  * [steamworks.networking_is_data_available](#networking_is_data_available)
  * [steamworks.networking_retrieve_data](#networking_retrieve_data)
  * [steamworks.networking_get_socket_info](#networking_get_socket_info)
  * [steamworks.networking_get_listen_socket_info](#networking_get_listen_socket_info)
  * [steamworks.networking_get_socket_connection_type](#networking_get_socket_connection_type)
  * [steamworks.networking_get_max_packet_size](#networking_get_max_packet_size)
  * [steamworks.music_is_enabled](#music_is_enabled)
  * [steamworks.music_is_playing](#music_is_playing)
  * [steamworks.music_get_playback_status](#music_get_playback_status)
  * [steamworks.music_play](#music_play)
  * [steamworks.music_pause](#music_pause)
  * [steamworks.music_play_previous](#music_play_previous)
  * [steamworks.music_play_next](#music_play_next)
  * [steamworks.music_set_volume](#music_set_volume)
  * [steamworks.music_get_volume](#music_get_volume)
  * [steamworks.ugc_create_query_user_ugc_request](#ugc_create_query_user_ugc_request)
  * [steamworks.ugc_create_query_all_ugc_request](#ugc_create_query_all_ugc_request)
  * [steamworks.ugc_create_query_ugc_details_request](#ugc_create_query_ugc_details_request)
  * [steamworks.ugc_send_query_ugc_request](#ugc_send_query_ugc_request)
  * [steamworks.ugc_get_query_ugc_result](#ugc_get_query_ugc_result)
  * [steamworks.ugc_get_query_ugc_preview_url](#ugc_get_query_ugc_preview_url)
  * [steamworks.ugc_get_query_ugc_metadata](#ugc_get_query_ugc_metadata)
  * [steamworks.ugc_get_query_ugc_children](#ugc_get_query_ugc_children)
  * [steamworks.ugc_get_query_ugc_statistic](#ugc_get_query_ugc_statistic)
  * [steamworks.ugc_get_query_ugc_num_additional_previews](#ugc_get_query_ugc_num_additional_previews)
  * [steamworks.ugc_get_query_ugc_additional_preview](#ugc_get_query_ugc_additional_preview)
  * [steamworks.ugc_get_query_ugc_num_key_value_tags](#ugc_get_query_ugc_num_key_value_tags)
  * [steamworks.ugc_get_query_ugc_key_value_tag](#ugc_get_query_ugc_key_value_tag)
  * [steamworks.ugc_release_query_ugc_request](#ugc_release_query_ugc_request)
  * [steamworks.ugc_add_required_tag](#ugc_add_required_tag)
  * [steamworks.ugc_add_excluded_tag](#ugc_add_excluded_tag)
  * [steamworks.ugc_set_return_only_i_ds](#ugc_set_return_only_i_ds)
  * [steamworks.ugc_set_return_key_value_tags](#ugc_set_return_key_value_tags)
  * [steamworks.ugc_set_return_long_description](#ugc_set_return_long_description)
  * [steamworks.ugc_set_return_metadata](#ugc_set_return_metadata)
  * [steamworks.ugc_set_return_children](#ugc_set_return_children)
  * [steamworks.ugc_set_return_additional_previews](#ugc_set_return_additional_previews)
  * [steamworks.ugc_set_return_total_only](#ugc_set_return_total_only)
  * [steamworks.ugc_set_return_playtime_stats](#ugc_set_return_playtime_stats)
  * [steamworks.ugc_set_language](#ugc_set_language)
  * [steamworks.ugc_set_allow_cached_response](#ugc_set_allow_cached_response)
  * [steamworks.ugc_set_cloud_file_name_filter](#ugc_set_cloud_file_name_filter)
  * [steamworks.ugc_set_match_any_tag](#ugc_set_match_any_tag)
  * [steamworks.ugc_set_search_text](#ugc_set_search_text)
  * [steamworks.ugc_set_ranked_by_trend_days](#ugc_set_ranked_by_trend_days)
  * [steamworks.ugc_add_required_key_value_tag](#ugc_add_required_key_value_tag)
  * [steamworks.ugc_request_ugc_details](#ugc_request_ugc_details)
  * [steamworks.ugc_create_item](#ugc_create_item)
  * [steamworks.ugc_start_item_update](#ugc_start_item_update)
  * [steamworks.ugc_set_item_title](#ugc_set_item_title)
  * [steamworks.ugc_set_item_description](#ugc_set_item_description)
  * [steamworks.ugc_set_item_update_language](#ugc_set_item_update_language)
  * [steamworks.ugc_set_item_metadata](#ugc_set_item_metadata)
  * [steamworks.ugc_set_item_visibility](#ugc_set_item_visibility)
  * [steamworks.ugc_set_item_tags](#ugc_set_item_tags)
  * [steamworks.ugc_set_item_content](#ugc_set_item_content)
  * [steamworks.ugc_set_item_preview](#ugc_set_item_preview)
  * [steamworks.ugc_remove_item_key_value_tags](#ugc_remove_item_key_value_tags)
  * [steamworks.ugc_add_item_key_value_tag](#ugc_add_item_key_value_tag)
  * [steamworks.ugc_add_item_preview_file](#ugc_add_item_preview_file)
  * [steamworks.ugc_add_item_preview_video](#ugc_add_item_preview_video)
  * [steamworks.ugc_update_item_preview_file](#ugc_update_item_preview_file)
  * [steamworks.ugc_update_item_preview_video](#ugc_update_item_preview_video)
  * [steamworks.ugc_remove_item_preview](#ugc_remove_item_preview)
  * [steamworks.ugc_submit_item_update](#ugc_submit_item_update)
  * [steamworks.ugc_get_item_update_progress](#ugc_get_item_update_progress)
  * [steamworks.ugc_set_user_item_vote](#ugc_set_user_item_vote)
  * [steamworks.ugc_get_user_item_vote](#ugc_get_user_item_vote)
  * [steamworks.ugc_add_item_to_favorites](#ugc_add_item_to_favorites)
  * [steamworks.ugc_remove_item_from_favorites](#ugc_remove_item_from_favorites)
  * [steamworks.ugc_subscribe_item](#ugc_subscribe_item)
  * [steamworks.ugc_unsubscribe_item](#ugc_unsubscribe_item)
  * [steamworks.ugc_get_num_subscribed_items](#ugc_get_num_subscribed_items)
  * [steamworks.ugc_get_subscribed_items](#ugc_get_subscribed_items)
  * [steamworks.ugc_get_item_state](#ugc_get_item_state)
  * [steamworks.ugc_get_item_install_info](#ugc_get_item_install_info)
  * [steamworks.ugc_get_item_download_info](#ugc_get_item_download_info)
  * [steamworks.ugc_download_item](#ugc_download_item)
  * [steamworks.ugc_init_workshop_for_game_server](#ugc_init_workshop_for_game_server)
  * [steamworks.ugc_suspend_downloads](#ugc_suspend_downloads)
  * [steamworks.ugc_start_playtime_tracking](#ugc_start_playtime_tracking)
  * [steamworks.ugc_stop_playtime_tracking](#ugc_stop_playtime_tracking)
  * [steamworks.ugc_stop_playtime_tracking_for_all_items](#ugc_stop_playtime_tracking_for_all_items)
  * [steamworks.ugc_add_dependency](#ugc_add_dependency)
  * [steamworks.ugc_remove_dependency](#ugc_remove_dependency)
  * [steamworks.ugc_add_app_dependency](#ugc_add_app_dependency)
  * [steamworks.ugc_remove_app_dependency](#ugc_remove_app_dependency)
  * [steamworks.ugc_get_app_dependencies](#ugc_get_app_dependencies)
  * [steamworks.ugc_delete_item](#ugc_delete_item)
  * [steamworks.inventory_get_result_status](#inventory_get_result_status)
  * [steamworks.inventory_get_result_items](#inventory_get_result_items)
  * [steamworks.inventory_get_result_item_property](#inventory_get_result_item_property)
  * [steamworks.inventory_get_result_timestamp](#inventory_get_result_timestamp)
  * [steamworks.inventory_check_result_steam_id](#inventory_check_result_steam_id)
  * [steamworks.inventory_destroy_result](#inventory_destroy_result)
  * [steamworks.inventory_get_all_items](#inventory_get_all_items)
  * [steamworks.inventory_get_items_by_id](#inventory_get_items_by_id)
  * [steamworks.inventory_serialize_result](#inventory_serialize_result)
  * [steamworks.inventory_deserialize_result](#inventory_deserialize_result)
  * [steamworks.inventory_generate_items](#inventory_generate_items)
  * [steamworks.inventory_grant_promo_items](#inventory_grant_promo_items)
  * [steamworks.inventory_add_promo_item](#inventory_add_promo_item)
  * [steamworks.inventory_add_promo_items](#inventory_add_promo_items)
  * [steamworks.inventory_consume_item](#inventory_consume_item)
  * [steamworks.inventory_exchange_items](#inventory_exchange_items)
  * [steamworks.inventory_transfer_item_quantity](#inventory_transfer_item_quantity)
  * [steamworks.inventory_send_item_drop_heartbeat](#inventory_send_item_drop_heartbeat)
  * [steamworks.inventory_trigger_item_drop](#inventory_trigger_item_drop)
  * [steamworks.inventory_trade_items](#inventory_trade_items)
  * [steamworks.inventory_load_item_definitions](#inventory_load_item_definitions)
  * [steamworks.inventory_get_item_definition_i_ds](#inventory_get_item_definition_i_ds)
  * [steamworks.inventory_get_item_definition_property](#inventory_get_item_definition_property)
  * [steamworks.inventory_request_eligible_promo_item_definitions_i_ds](#inventory_request_eligible_promo_item_definitions_i_ds)
  * [steamworks.inventory_get_eligible_promo_item_definition_i_ds](#inventory_get_eligible_promo_item_definition_i_ds)
  * [steamworks.inventory_start_purchase](#inventory_start_purchase)
  * [steamworks.inventory_request_prices](#inventory_request_prices)
  * [steamworks.inventory_get_num_items_with_prices](#inventory_get_num_items_with_prices)
  * [steamworks.inventory_get_items_with_prices](#inventory_get_items_with_prices)
  * [steamworks.inventory_get_item_price](#inventory_get_item_price)
  * [steamworks.inventory_start_update_properties](#inventory_start_update_properties)
  * [steamworks.inventory_remove_property](#inventory_remove_property)
  * [steamworks.inventory_set_property_string](#inventory_set_property_string)
  * [steamworks.inventory_set_property_bool](#inventory_set_property_bool)
  * [steamworks.inventory_set_property_int](#inventory_set_property_int)
  * [steamworks.inventory_set_property_float](#inventory_set_property_float)
  * [steamworks.inventory_submit_update_properties](#inventory_submit_update_properties)

## <a name="functions"></a>Functions
The extension exports the following functions:

### <a name="user_get_h_steam_user"></a>steamworks.user_get_h_steam_user() - [ISteamUser#GetHSteamUser](https://partner.steamgames.com/doc/api/ISteamUser#GetHSteamUser)


**RETURN**
* `r` (HSteamUser)


### <a name="user_logged_on"></a>steamworks.user_logged_on() - [ISteamUser#BLoggedOn](https://partner.steamgames.com/doc/api/ISteamUser#BLoggedOn)


**RETURN**
* `r` (bool)


### <a name="user_get_steam_id"></a>steamworks.user_get_steam_id() - [ISteamUser#GetSteamID](https://partner.steamgames.com/doc/api/ISteamUser#GetSteamID)


**RETURN**
* `r` (class_CSteamID)


### <a name="user_terminate_game_connection"></a>steamworks.user_terminate_game_connection(unIPServer, usPortServer) - [ISteamUser#TerminateGameConnection](https://partner.steamgames.com/doc/api/ISteamUser#TerminateGameConnection)

**PARAMS**
* `unIPServer` (number)
* `usPortServer` (number)


### <a name="user_get_auth_session_ticket"></a>steamworks.user_get_auth_session_ticket(pTicket, cbMaxTicket, pcbTicket) - [ISteamUser#GetAuthSessionTicket](https://partner.steamgames.com/doc/api/ISteamUser#GetAuthSessionTicket)

**PARAMS**
* `pTicket` (string)
* `cbMaxTicket` (number)
* `pcbTicket` (number)

**RETURN**
* `r` (HAuthTicket)
* `pcbTicket` (uint32)


### <a name="user_begin_auth_session"></a>steamworks.user_begin_auth_session(pAuthTicket, cbAuthTicket, steamID) - [ISteamUser#BeginAuthSession](https://partner.steamgames.com/doc/api/ISteamUser#BeginAuthSession)

**PARAMS**
* `pAuthTicket` (string)
* `cbAuthTicket` (number)
* `steamID` (string)

**RETURN**
* `r` (EBeginAuthSessionResult)


### <a name="user_end_auth_session"></a>steamworks.user_end_auth_session(steamID) - [ISteamUser#EndAuthSession](https://partner.steamgames.com/doc/api/ISteamUser#EndAuthSession)

**PARAMS**
* `steamID` (string)


### <a name="user_cancel_auth_ticket"></a>steamworks.user_cancel_auth_ticket(hAuthTicket) - [ISteamUser#CancelAuthTicket](https://partner.steamgames.com/doc/api/ISteamUser#CancelAuthTicket)

**PARAMS**
* `hAuthTicket` (HAuthTicket)


### <a name="user_user_has_license_for_app"></a>steamworks.user_user_has_license_for_app(steamID, appID) - [ISteamUser#UserHasLicenseForApp](https://partner.steamgames.com/doc/api/ISteamUser#UserHasLicenseForApp)

**PARAMS**
* `steamID` (string)
* `appID` (number)

**RETURN**
* `r` (EUserHasLicenseForAppResult)


### <a name="user_is_behind_nat"></a>steamworks.user_is_behind_nat() - [ISteamUser#BIsBehindNAT](https://partner.steamgames.com/doc/api/ISteamUser#BIsBehindNAT)


**RETURN**
* `r` (bool)


### <a name="user_advertise_game"></a>steamworks.user_advertise_game(steamIDGameServer, unIPServer, usPortServer) - [ISteamUser#AdvertiseGame](https://partner.steamgames.com/doc/api/ISteamUser#AdvertiseGame)

**PARAMS**
* `steamIDGameServer` (string)
* `unIPServer` (number)
* `usPortServer` (number)


### <a name="user_request_encrypted_app_ticket"></a>steamworks.user_request_encrypted_app_ticket(pDataToInclude, cbDataToInclude) - [ISteamUser#RequestEncryptedAppTicket](https://partner.steamgames.com/doc/api/ISteamUser#RequestEncryptedAppTicket)

**PARAMS**
* `pDataToInclude` (string)
* `cbDataToInclude` (number)

**CALLBACK**
* `EncryptedAppTicketResponse_t`

### <a name="user_get_encrypted_app_ticket"></a>steamworks.user_get_encrypted_app_ticket(pTicket, cbMaxTicket, pcbTicket) - [ISteamUser#GetEncryptedAppTicket](https://partner.steamgames.com/doc/api/ISteamUser#GetEncryptedAppTicket)

**PARAMS**
* `pTicket` (string)
* `cbMaxTicket` (number)
* `pcbTicket` (number)

**RETURN**
* `r` (bool)
* `pcbTicket` (uint32)


### <a name="user_get_game_badge_level"></a>steamworks.user_get_game_badge_level(nSeries, bFoil) - [ISteamUser#GetGameBadgeLevel](https://partner.steamgames.com/doc/api/ISteamUser#GetGameBadgeLevel)

**PARAMS**
* `nSeries` (number)
* `bFoil` (boolean)

**RETURN**
* `r` (int)


### <a name="user_get_player_steam_level"></a>steamworks.user_get_player_steam_level() - [ISteamUser#GetPlayerSteamLevel](https://partner.steamgames.com/doc/api/ISteamUser#GetPlayerSteamLevel)


**RETURN**
* `r` (int)


### <a name="user_request_store_auth_url"></a>steamworks.user_request_store_auth_url(pchRedirectURL) - [ISteamUser#RequestStoreAuthURL](https://partner.steamgames.com/doc/api/ISteamUser#RequestStoreAuthURL)

**PARAMS**
* `pchRedirectURL` (string)

**CALLBACK**
* `StoreAuthURLResponse_t`

### <a name="user_is_phone_verified"></a>steamworks.user_is_phone_verified() - [ISteamUser#BIsPhoneVerified](https://partner.steamgames.com/doc/api/ISteamUser#BIsPhoneVerified)


**RETURN**
* `r` (bool)


### <a name="user_is_two_factor_enabled"></a>steamworks.user_is_two_factor_enabled() - [ISteamUser#BIsTwoFactorEnabled](https://partner.steamgames.com/doc/api/ISteamUser#BIsTwoFactorEnabled)


**RETURN**
* `r` (bool)


### <a name="user_is_phone_identifying"></a>steamworks.user_is_phone_identifying() - [ISteamUser#BIsPhoneIdentifying](https://partner.steamgames.com/doc/api/ISteamUser#BIsPhoneIdentifying)


**RETURN**
* `r` (bool)


### <a name="user_is_phone_requiring_verification"></a>steamworks.user_is_phone_requiring_verification() - [ISteamUser#BIsPhoneRequiringVerification](https://partner.steamgames.com/doc/api/ISteamUser#BIsPhoneRequiringVerification)


**RETURN**
* `r` (bool)


### <a name="friends_get_persona_name"></a>steamworks.friends_get_persona_name() - [ISteamFriends#GetPersonaName](https://partner.steamgames.com/doc/api/ISteamFriends#GetPersonaName)


**RETURN**
* `r` (const_char_ptr)


### <a name="friends_set_persona_name"></a>steamworks.friends_set_persona_name(pchPersonaName) - [ISteamFriends#SetPersonaName](https://partner.steamgames.com/doc/api/ISteamFriends#SetPersonaName)

**PARAMS**
* `pchPersonaName` (string)

**CALLBACK**
* `SetPersonaNameResponse_t`

### <a name="friends_get_persona_state"></a>steamworks.friends_get_persona_state() - [ISteamFriends#GetPersonaState](https://partner.steamgames.com/doc/api/ISteamFriends#GetPersonaState)


**RETURN**
* `r` (EPersonaState)


### <a name="friends_get_friend_count"></a>steamworks.friends_get_friend_count(iFriendFlags) - [ISteamFriends#GetFriendCount](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendCount)

**PARAMS**
* `iFriendFlags` (number)

**RETURN**
* `r` (int)


### <a name="friends_get_friend_by_index"></a>steamworks.friends_get_friend_by_index(iFriend, iFriendFlags) - [ISteamFriends#GetFriendByIndex](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendByIndex)

**PARAMS**
* `iFriend` (number)
* `iFriendFlags` (number)

**RETURN**
* `r` (class_CSteamID)


### <a name="friends_get_friend_relationship"></a>steamworks.friends_get_friend_relationship(steamIDFriend) - [ISteamFriends#GetFriendRelationship](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendRelationship)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (EFriendRelationship)


### <a name="friends_get_friend_persona_state"></a>steamworks.friends_get_friend_persona_state(steamIDFriend) - [ISteamFriends#GetFriendPersonaState](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendPersonaState)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (EPersonaState)


### <a name="friends_get_friend_persona_name"></a>steamworks.friends_get_friend_persona_name(steamIDFriend) - [ISteamFriends#GetFriendPersonaName](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendPersonaName)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (const_char_ptr)


### <a name="friends_get_friend_game_played"></a>steamworks.friends_get_friend_game_played(steamIDFriend) - [ISteamFriends#GetFriendGamePlayed](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendGamePlayed)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (bool)


### <a name="friends_get_friend_persona_name_history"></a>steamworks.friends_get_friend_persona_name_history(steamIDFriend, iPersonaName) - [ISteamFriends#GetFriendPersonaNameHistory](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendPersonaNameHistory)

**PARAMS**
* `steamIDFriend` (string)
* `iPersonaName` (number)

**RETURN**
* `r` (const_char_ptr)


### <a name="friends_get_friend_steam_level"></a>steamworks.friends_get_friend_steam_level(steamIDFriend) - [ISteamFriends#GetFriendSteamLevel](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendSteamLevel)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (int)


### <a name="friends_get_player_nickname"></a>steamworks.friends_get_player_nickname(steamIDPlayer) - [ISteamFriends#GetPlayerNickname](https://partner.steamgames.com/doc/api/ISteamFriends#GetPlayerNickname)

**PARAMS**
* `steamIDPlayer` (string)

**RETURN**
* `r` (const_char_ptr)


### <a name="friends_get_friends_group_count"></a>steamworks.friends_get_friends_group_count() - [ISteamFriends#GetFriendsGroupCount](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendsGroupCount)


**RETURN**
* `r` (int)


### <a name="friends_get_friends_group_id_by_index"></a>steamworks.friends_get_friends_group_id_by_index(iFG) - [ISteamFriends#GetFriendsGroupIDByIndex](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendsGroupIDByIndex)

**PARAMS**
* `iFG` (number)

**RETURN**
* `r` (FriendsGroupID_t)


### <a name="friends_get_friends_group_name"></a>steamworks.friends_get_friends_group_name(friendsGroupID) - [ISteamFriends#GetFriendsGroupName](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendsGroupName)

**PARAMS**
* `friendsGroupID` (number)

**RETURN**
* `r` (const_char_ptr)


### <a name="friends_get_friends_group_members_count"></a>steamworks.friends_get_friends_group_members_count(friendsGroupID) - [ISteamFriends#GetFriendsGroupMembersCount](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendsGroupMembersCount)

**PARAMS**
* `friendsGroupID` (number)

**RETURN**
* `r` (int)


### <a name="friends_get_friends_group_members_list"></a>steamworks.friends_get_friends_group_members_list(friendsGroupID) - [ISteamFriends#GetFriendsGroupMembersList](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendsGroupMembersList)

**PARAMS**
* `friendsGroupID` (number)


### <a name="friends_has_friend"></a>steamworks.friends_has_friend(steamIDFriend, iFriendFlags) - [ISteamFriends#HasFriend](https://partner.steamgames.com/doc/api/ISteamFriends#HasFriend)

**PARAMS**
* `steamIDFriend` (string)
* `iFriendFlags` (number)

**RETURN**
* `r` (bool)


### <a name="friends_get_clan_count"></a>steamworks.friends_get_clan_count() - [ISteamFriends#GetClanCount](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanCount)


**RETURN**
* `r` (int)


### <a name="friends_get_clan_by_index"></a>steamworks.friends_get_clan_by_index(iClan) - [ISteamFriends#GetClanByIndex](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanByIndex)

**PARAMS**
* `iClan` (number)

**RETURN**
* `r` (class_CSteamID)


### <a name="friends_get_clan_name"></a>steamworks.friends_get_clan_name(steamIDClan) - [ISteamFriends#GetClanName](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanName)

**PARAMS**
* `steamIDClan` (string)

**RETURN**
* `r` (const_char_ptr)


### <a name="friends_get_clan_tag"></a>steamworks.friends_get_clan_tag(steamIDClan) - [ISteamFriends#GetClanTag](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanTag)

**PARAMS**
* `steamIDClan` (string)

**RETURN**
* `r` (const_char_ptr)


### <a name="friends_get_clan_activity_counts"></a>steamworks.friends_get_clan_activity_counts(steamIDClan, pnOnline, pnInGame, pnChatting) - [ISteamFriends#GetClanActivityCounts](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanActivityCounts)

**PARAMS**
* `steamIDClan` (string)
* `pnOnline` (number)
* `pnInGame` (number)
* `pnChatting` (number)

**RETURN**
* `r` (bool)
* `pnChatting` (int)
* `pnInGame` (int)
* `pnOnline` (int)


### <a name="friends_download_clan_activity_counts"></a>steamworks.friends_download_clan_activity_counts(psteamIDClans, cClansToRequest) - [ISteamFriends#DownloadClanActivityCounts](https://partner.steamgames.com/doc/api/ISteamFriends#DownloadClanActivityCounts)

**PARAMS**
* `psteamIDClans` (string)
* `cClansToRequest` (number)

**CALLBACK**
* `DownloadClanActivityCountsResult_t`

### <a name="friends_get_friend_count_from_source"></a>steamworks.friends_get_friend_count_from_source(steamIDSource) - [ISteamFriends#GetFriendCountFromSource](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendCountFromSource)

**PARAMS**
* `steamIDSource` (string)

**RETURN**
* `r` (int)


### <a name="friends_get_friend_from_source_by_index"></a>steamworks.friends_get_friend_from_source_by_index(steamIDSource, iFriend) - [ISteamFriends#GetFriendFromSourceByIndex](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendFromSourceByIndex)

**PARAMS**
* `steamIDSource` (string)
* `iFriend` (number)

**RETURN**
* `r` (class_CSteamID)


### <a name="friends_is_user_in_source"></a>steamworks.friends_is_user_in_source(steamIDUser, steamIDSource) - [ISteamFriends#IsUserInSource](https://partner.steamgames.com/doc/api/ISteamFriends#IsUserInSource)

**PARAMS**
* `steamIDUser` (string)
* `steamIDSource` (string)

**RETURN**
* `r` (bool)


### <a name="friends_set_in_game_voice_speaking"></a>steamworks.friends_set_in_game_voice_speaking(steamIDUser, bSpeaking) - [ISteamFriends#SetInGameVoiceSpeaking](https://partner.steamgames.com/doc/api/ISteamFriends#SetInGameVoiceSpeaking)

**PARAMS**
* `steamIDUser` (string)
* `bSpeaking` (boolean)


### <a name="friends_activate_game_overlay"></a>steamworks.friends_activate_game_overlay(pchDialog) - [ISteamFriends#ActivateGameOverlay](https://partner.steamgames.com/doc/api/ISteamFriends#ActivateGameOverlay)

**PARAMS**
* `pchDialog` (string)


### <a name="friends_activate_game_overlay_to_user"></a>steamworks.friends_activate_game_overlay_to_user(pchDialog, steamID) - [ISteamFriends#ActivateGameOverlayToUser](https://partner.steamgames.com/doc/api/ISteamFriends#ActivateGameOverlayToUser)

**PARAMS**
* `pchDialog` (string)
* `steamID` (string)


### <a name="friends_activate_game_overlay_to_web_page"></a>steamworks.friends_activate_game_overlay_to_web_page(pchURL) - [ISteamFriends#ActivateGameOverlayToWebPage](https://partner.steamgames.com/doc/api/ISteamFriends#ActivateGameOverlayToWebPage)

**PARAMS**
* `pchURL` (string)


### <a name="friends_activate_game_overlay_to_store"></a>steamworks.friends_activate_game_overlay_to_store(nAppID, eFlag) - [ISteamFriends#ActivateGameOverlayToStore](https://partner.steamgames.com/doc/api/ISteamFriends#ActivateGameOverlayToStore)

**PARAMS**
* `nAppID` (number)
* `eFlag` (EOverlayToStoreFlag)


### <a name="friends_set_played_with"></a>steamworks.friends_set_played_with(steamIDUserPlayedWith) - [ISteamFriends#SetPlayedWith](https://partner.steamgames.com/doc/api/ISteamFriends#SetPlayedWith)

**PARAMS**
* `steamIDUserPlayedWith` (string)


### <a name="friends_activate_game_overlay_invite_dialog"></a>steamworks.friends_activate_game_overlay_invite_dialog(steamIDLobby) - [ISteamFriends#ActivateGameOverlayInviteDialog](https://partner.steamgames.com/doc/api/ISteamFriends#ActivateGameOverlayInviteDialog)

**PARAMS**
* `steamIDLobby` (string)


### <a name="friends_get_small_friend_avatar"></a>steamworks.friends_get_small_friend_avatar(steamIDFriend) - [ISteamFriends#GetSmallFriendAvatar](https://partner.steamgames.com/doc/api/ISteamFriends#GetSmallFriendAvatar)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (int)


### <a name="friends_get_medium_friend_avatar"></a>steamworks.friends_get_medium_friend_avatar(steamIDFriend) - [ISteamFriends#GetMediumFriendAvatar](https://partner.steamgames.com/doc/api/ISteamFriends#GetMediumFriendAvatar)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (int)


### <a name="friends_get_large_friend_avatar"></a>steamworks.friends_get_large_friend_avatar(steamIDFriend) - [ISteamFriends#GetLargeFriendAvatar](https://partner.steamgames.com/doc/api/ISteamFriends#GetLargeFriendAvatar)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (int)


### <a name="friends_request_user_information"></a>steamworks.friends_request_user_information(steamIDUser, bRequireNameOnly) - [ISteamFriends#RequestUserInformation](https://partner.steamgames.com/doc/api/ISteamFriends#RequestUserInformation)

**PARAMS**
* `steamIDUser` (string)
* `bRequireNameOnly` (boolean)

**RETURN**
* `r` (bool)


### <a name="friends_request_clan_officer_list"></a>steamworks.friends_request_clan_officer_list(steamIDClan) - [ISteamFriends#RequestClanOfficerList](https://partner.steamgames.com/doc/api/ISteamFriends#RequestClanOfficerList)

**PARAMS**
* `steamIDClan` (string)

**CALLBACK**
* `ClanOfficerListResponse_t`

### <a name="friends_get_clan_owner"></a>steamworks.friends_get_clan_owner(steamIDClan) - [ISteamFriends#GetClanOwner](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanOwner)

**PARAMS**
* `steamIDClan` (string)

**RETURN**
* `r` (class_CSteamID)


### <a name="friends_get_clan_officer_count"></a>steamworks.friends_get_clan_officer_count(steamIDClan) - [ISteamFriends#GetClanOfficerCount](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanOfficerCount)

**PARAMS**
* `steamIDClan` (string)

**RETURN**
* `r` (int)


### <a name="friends_get_clan_officer_by_index"></a>steamworks.friends_get_clan_officer_by_index(steamIDClan, iOfficer) - [ISteamFriends#GetClanOfficerByIndex](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanOfficerByIndex)

**PARAMS**
* `steamIDClan` (string)
* `iOfficer` (number)

**RETURN**
* `r` (class_CSteamID)


### <a name="friends_get_user_restrictions"></a>steamworks.friends_get_user_restrictions() - [ISteamFriends#GetUserRestrictions](https://partner.steamgames.com/doc/api/ISteamFriends#GetUserRestrictions)


**RETURN**
* `r` (uint32)


### <a name="friends_set_rich_presence"></a>steamworks.friends_set_rich_presence(pchKey, pchValue) - [ISteamFriends#SetRichPresence](https://partner.steamgames.com/doc/api/ISteamFriends#SetRichPresence)

**PARAMS**
* `pchKey` (string)
* `pchValue` (string)

**RETURN**
* `r` (bool)


### <a name="friends_clear_rich_presence"></a>steamworks.friends_clear_rich_presence() - [ISteamFriends#ClearRichPresence](https://partner.steamgames.com/doc/api/ISteamFriends#ClearRichPresence)



### <a name="friends_get_friend_rich_presence"></a>steamworks.friends_get_friend_rich_presence(steamIDFriend, pchKey) - [ISteamFriends#GetFriendRichPresence](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendRichPresence)

**PARAMS**
* `steamIDFriend` (string)
* `pchKey` (string)

**RETURN**
* `r` (const_char_ptr)


### <a name="friends_get_friend_rich_presence_key_count"></a>steamworks.friends_get_friend_rich_presence_key_count(steamIDFriend) - [ISteamFriends#GetFriendRichPresenceKeyCount](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendRichPresenceKeyCount)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (int)


### <a name="friends_get_friend_rich_presence_key_by_index"></a>steamworks.friends_get_friend_rich_presence_key_by_index(steamIDFriend, iKey) - [ISteamFriends#GetFriendRichPresenceKeyByIndex](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendRichPresenceKeyByIndex)

**PARAMS**
* `steamIDFriend` (string)
* `iKey` (number)

**RETURN**
* `r` (const_char_ptr)


### <a name="friends_request_friend_rich_presence"></a>steamworks.friends_request_friend_rich_presence(steamIDFriend) - [ISteamFriends#RequestFriendRichPresence](https://partner.steamgames.com/doc/api/ISteamFriends#RequestFriendRichPresence)

**PARAMS**
* `steamIDFriend` (string)


### <a name="friends_invite_user_to_game"></a>steamworks.friends_invite_user_to_game(steamIDFriend, pchConnectString) - [ISteamFriends#InviteUserToGame](https://partner.steamgames.com/doc/api/ISteamFriends#InviteUserToGame)

**PARAMS**
* `steamIDFriend` (string)
* `pchConnectString` (string)

**RETURN**
* `r` (bool)


### <a name="friends_get_coplay_friend_count"></a>steamworks.friends_get_coplay_friend_count() - [ISteamFriends#GetCoplayFriendCount](https://partner.steamgames.com/doc/api/ISteamFriends#GetCoplayFriendCount)


**RETURN**
* `r` (int)


### <a name="friends_get_coplay_friend"></a>steamworks.friends_get_coplay_friend(iCoplayFriend) - [ISteamFriends#GetCoplayFriend](https://partner.steamgames.com/doc/api/ISteamFriends#GetCoplayFriend)

**PARAMS**
* `iCoplayFriend` (number)

**RETURN**
* `r` (class_CSteamID)


### <a name="friends_get_friend_coplay_time"></a>steamworks.friends_get_friend_coplay_time(steamIDFriend) - [ISteamFriends#GetFriendCoplayTime](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendCoplayTime)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (int)


### <a name="friends_get_friend_coplay_game"></a>steamworks.friends_get_friend_coplay_game(steamIDFriend) - [ISteamFriends#GetFriendCoplayGame](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendCoplayGame)

**PARAMS**
* `steamIDFriend` (string)

**RETURN**
* `r` (AppId_t)


### <a name="friends_join_clan_chat_room"></a>steamworks.friends_join_clan_chat_room(steamIDClan) - [ISteamFriends#JoinClanChatRoom](https://partner.steamgames.com/doc/api/ISteamFriends#JoinClanChatRoom)

**PARAMS**
* `steamIDClan` (string)

**CALLBACK**
* `JoinClanChatRoomCompletionResult_t`

### <a name="friends_leave_clan_chat_room"></a>steamworks.friends_leave_clan_chat_room(steamIDClan) - [ISteamFriends#LeaveClanChatRoom](https://partner.steamgames.com/doc/api/ISteamFriends#LeaveClanChatRoom)

**PARAMS**
* `steamIDClan` (string)

**RETURN**
* `r` (bool)


### <a name="friends_get_clan_chat_member_count"></a>steamworks.friends_get_clan_chat_member_count(steamIDClan) - [ISteamFriends#GetClanChatMemberCount](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanChatMemberCount)

**PARAMS**
* `steamIDClan` (string)

**RETURN**
* `r` (int)


### <a name="friends_get_chat_member_by_index"></a>steamworks.friends_get_chat_member_by_index(steamIDClan, iUser) - [ISteamFriends#GetChatMemberByIndex](https://partner.steamgames.com/doc/api/ISteamFriends#GetChatMemberByIndex)

**PARAMS**
* `steamIDClan` (string)
* `iUser` (number)

**RETURN**
* `r` (class_CSteamID)


### <a name="friends_send_clan_chat_message"></a>steamworks.friends_send_clan_chat_message(steamIDClanChat, pchText) - [ISteamFriends#SendClanChatMessage](https://partner.steamgames.com/doc/api/ISteamFriends#SendClanChatMessage)

**PARAMS**
* `steamIDClanChat` (string)
* `pchText` (string)

**RETURN**
* `r` (bool)


### <a name="friends_get_clan_chat_message"></a>steamworks.friends_get_clan_chat_message(steamIDClanChat, iMessage, prgchText, cchTextMax, peChatEntryType) - [ISteamFriends#GetClanChatMessage](https://partner.steamgames.com/doc/api/ISteamFriends#GetClanChatMessage)

**PARAMS**
* `steamIDClanChat` (string)
* `iMessage` (number)
* `prgchText` (string)
* `cchTextMax` (number)
* `peChatEntryType` (EChatEntryType)

**RETURN**
* `r` (int)
* `peChatEntryType` (EChatEntryType)


### <a name="friends_is_clan_chat_admin"></a>steamworks.friends_is_clan_chat_admin(steamIDClanChat, steamIDUser) - [ISteamFriends#IsClanChatAdmin](https://partner.steamgames.com/doc/api/ISteamFriends#IsClanChatAdmin)

**PARAMS**
* `steamIDClanChat` (string)
* `steamIDUser` (string)

**RETURN**
* `r` (bool)


### <a name="friends_is_clan_chat_window_open_in_steam"></a>steamworks.friends_is_clan_chat_window_open_in_steam(steamIDClanChat) - [ISteamFriends#IsClanChatWindowOpenInSteam](https://partner.steamgames.com/doc/api/ISteamFriends#IsClanChatWindowOpenInSteam)

**PARAMS**
* `steamIDClanChat` (string)

**RETURN**
* `r` (bool)


### <a name="friends_open_clan_chat_window_in_steam"></a>steamworks.friends_open_clan_chat_window_in_steam(steamIDClanChat) - [ISteamFriends#OpenClanChatWindowInSteam](https://partner.steamgames.com/doc/api/ISteamFriends#OpenClanChatWindowInSteam)

**PARAMS**
* `steamIDClanChat` (string)

**RETURN**
* `r` (bool)


### <a name="friends_close_clan_chat_window_in_steam"></a>steamworks.friends_close_clan_chat_window_in_steam(steamIDClanChat) - [ISteamFriends#CloseClanChatWindowInSteam](https://partner.steamgames.com/doc/api/ISteamFriends#CloseClanChatWindowInSteam)

**PARAMS**
* `steamIDClanChat` (string)

**RETURN**
* `r` (bool)


### <a name="friends_set_listen_for_friends_messages"></a>steamworks.friends_set_listen_for_friends_messages(bInterceptEnabled) - [ISteamFriends#SetListenForFriendsMessages](https://partner.steamgames.com/doc/api/ISteamFriends#SetListenForFriendsMessages)

**PARAMS**
* `bInterceptEnabled` (boolean)

**RETURN**
* `r` (bool)


### <a name="friends_reply_to_friend_message"></a>steamworks.friends_reply_to_friend_message(steamIDFriend, pchMsgToSend) - [ISteamFriends#ReplyToFriendMessage](https://partner.steamgames.com/doc/api/ISteamFriends#ReplyToFriendMessage)

**PARAMS**
* `steamIDFriend` (string)
* `pchMsgToSend` (string)

**RETURN**
* `r` (bool)


### <a name="friends_get_friend_message"></a>steamworks.friends_get_friend_message(steamIDFriend, iMessageID, pvData, cubData, peChatEntryType) - [ISteamFriends#GetFriendMessage](https://partner.steamgames.com/doc/api/ISteamFriends#GetFriendMessage)

**PARAMS**
* `steamIDFriend` (string)
* `iMessageID` (number)
* `pvData` (string)
* `cubData` (number)
* `peChatEntryType` (EChatEntryType)

**RETURN**
* `r` (int)
* `peChatEntryType` (EChatEntryType)


### <a name="friends_get_follower_count"></a>steamworks.friends_get_follower_count(steamID) - [ISteamFriends#GetFollowerCount](https://partner.steamgames.com/doc/api/ISteamFriends#GetFollowerCount)

**PARAMS**
* `steamID` (string)

**CALLBACK**
* `FriendsGetFollowerCount_t`

### <a name="friends_is_following"></a>steamworks.friends_is_following(steamID) - [ISteamFriends#IsFollowing](https://partner.steamgames.com/doc/api/ISteamFriends#IsFollowing)

**PARAMS**
* `steamID` (string)

**CALLBACK**
* `FriendsIsFollowing_t`

### <a name="friends_enumerate_following_list"></a>steamworks.friends_enumerate_following_list(unStartIndex) - [ISteamFriends#EnumerateFollowingList](https://partner.steamgames.com/doc/api/ISteamFriends#EnumerateFollowingList)

**PARAMS**
* `unStartIndex` (number)

**CALLBACK**
* `FriendsEnumerateFollowingList_t`

### <a name="friends_is_clan_public"></a>steamworks.friends_is_clan_public(steamIDClan) - [ISteamFriends#IsClanPublic](https://partner.steamgames.com/doc/api/ISteamFriends#IsClanPublic)

**PARAMS**
* `steamIDClan` (string)

**RETURN**
* `r` (bool)


### <a name="friends_is_clan_official_game_group"></a>steamworks.friends_is_clan_official_game_group(steamIDClan) - [ISteamFriends#IsClanOfficialGameGroup](https://partner.steamgames.com/doc/api/ISteamFriends#IsClanOfficialGameGroup)

**PARAMS**
* `steamIDClan` (string)

**RETURN**
* `r` (bool)


### <a name="utils_get_seconds_since_app_active"></a>steamworks.utils_get_seconds_since_app_active() - [ISteamUtils#GetSecondsSinceAppActive](https://partner.steamgames.com/doc/api/ISteamUtils#GetSecondsSinceAppActive)


**RETURN**
* `r` (uint32)


### <a name="utils_get_seconds_since_computer_active"></a>steamworks.utils_get_seconds_since_computer_active() - [ISteamUtils#GetSecondsSinceComputerActive](https://partner.steamgames.com/doc/api/ISteamUtils#GetSecondsSinceComputerActive)


**RETURN**
* `r` (uint32)


### <a name="utils_get_connected_universe"></a>steamworks.utils_get_connected_universe() - [ISteamUtils#GetConnectedUniverse](https://partner.steamgames.com/doc/api/ISteamUtils#GetConnectedUniverse)


**RETURN**
* `r` (EUniverse)


### <a name="utils_get_server_real_time"></a>steamworks.utils_get_server_real_time() - [ISteamUtils#GetServerRealTime](https://partner.steamgames.com/doc/api/ISteamUtils#GetServerRealTime)


**RETURN**
* `r` (uint32)


### <a name="utils_get_ip_country"></a>steamworks.utils_get_ip_country() - [ISteamUtils#GetIPCountry](https://partner.steamgames.com/doc/api/ISteamUtils#GetIPCountry)


**RETURN**
* `r` (const_char_ptr)


### <a name="utils_get_image_size"></a>steamworks.utils_get_image_size(iImage, pnWidth, pnHeight) - [ISteamUtils#GetImageSize](https://partner.steamgames.com/doc/api/ISteamUtils#GetImageSize)

**PARAMS**
* `iImage` (number)
* `pnWidth` (number)
* `pnHeight` (number)

**RETURN**
* `r` (bool)
* `pnHeight` (uint32)
* `pnWidth` (uint32)


### <a name="utils_get_image_rgba"></a>steamworks.utils_get_image_rgba(iImage, pubDest, nDestBufferSize) - [ISteamUtils#GetImageRGBA](https://partner.steamgames.com/doc/api/ISteamUtils#GetImageRGBA)

**PARAMS**
* `iImage` (number)
* `pubDest` (string)
* `nDestBufferSize` (number)

**RETURN**
* `r` (bool)


### <a name="utils_get_cserip_port"></a>steamworks.utils_get_cserip_port(unIP, usPort) - [ISteamUtils#GetCSERIPPort](https://partner.steamgames.com/doc/api/ISteamUtils#GetCSERIPPort)

**PARAMS**
* `unIP` (number)
* `usPort` (number)

**RETURN**
* `r` (bool)
* `usPort` (uint16)
* `unIP` (uint32)


### <a name="utils_get_current_battery_power"></a>steamworks.utils_get_current_battery_power() - [ISteamUtils#GetCurrentBatteryPower](https://partner.steamgames.com/doc/api/ISteamUtils#GetCurrentBatteryPower)


**RETURN**
* `r` (uint8)


### <a name="utils_get_app_id"></a>steamworks.utils_get_app_id() - [ISteamUtils#GetAppID](https://partner.steamgames.com/doc/api/ISteamUtils#GetAppID)


**RETURN**
* `r` (uint32)


### <a name="utils_set_overlay_notification_position"></a>steamworks.utils_set_overlay_notification_position(eNotificationPosition) - [ISteamUtils#SetOverlayNotificationPosition](https://partner.steamgames.com/doc/api/ISteamUtils#SetOverlayNotificationPosition)

**PARAMS**
* `eNotificationPosition` (ENotificationPosition)


### <a name="utils_is_api_call_completed"></a>steamworks.utils_is_api_call_completed(hSteamAPICall, pbFailed) - [ISteamUtils#IsAPICallCompleted](https://partner.steamgames.com/doc/api/ISteamUtils#IsAPICallCompleted)

**PARAMS**
* `hSteamAPICall` (number)
* `pbFailed` (boolean)

**RETURN**
* `r` (bool)
* `pbFailed` (bool)


### <a name="utils_get_api_call_failure_reason"></a>steamworks.utils_get_api_call_failure_reason(hSteamAPICall) - [ISteamUtils#GetAPICallFailureReason](https://partner.steamgames.com/doc/api/ISteamUtils#GetAPICallFailureReason)

**PARAMS**
* `hSteamAPICall` (number)

**RETURN**
* `r` (ESteamAPICallFailure)


### <a name="utils_get_api_call_result"></a>steamworks.utils_get_api_call_result(hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed) - [ISteamUtils#GetAPICallResult](https://partner.steamgames.com/doc/api/ISteamUtils#GetAPICallResult)

**PARAMS**
* `hSteamAPICall` (number)
* `pCallback` (string)
* `cubCallback` (number)
* `iCallbackExpected` (number)
* `pbFailed` (boolean)

**RETURN**
* `r` (bool)
* `pbFailed` (bool)


### <a name="utils_get_ipc_call_count"></a>steamworks.utils_get_ipc_call_count() - [ISteamUtils#GetIPCCallCount](https://partner.steamgames.com/doc/api/ISteamUtils#GetIPCCallCount)


**RETURN**
* `r` (uint32)


### <a name="utils_is_overlay_enabled"></a>steamworks.utils_is_overlay_enabled() - [ISteamUtils#IsOverlayEnabled](https://partner.steamgames.com/doc/api/ISteamUtils#IsOverlayEnabled)


**RETURN**
* `r` (bool)


### <a name="utils_overlay_needs_present"></a>steamworks.utils_overlay_needs_present() - [ISteamUtils#BOverlayNeedsPresent](https://partner.steamgames.com/doc/api/ISteamUtils#BOverlayNeedsPresent)


**RETURN**
* `r` (bool)


### <a name="utils_check_file_signature"></a>steamworks.utils_check_file_signature(szFileName) - [ISteamUtils#CheckFileSignature](https://partner.steamgames.com/doc/api/ISteamUtils#CheckFileSignature)

**PARAMS**
* `szFileName` (string)

**CALLBACK**
* `CheckFileSignature_t`

### <a name="utils_show_gamepad_text_input"></a>steamworks.utils_show_gamepad_text_input(eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText) - [ISteamUtils#ShowGamepadTextInput](https://partner.steamgames.com/doc/api/ISteamUtils#ShowGamepadTextInput)

**PARAMS**
* `eInputMode` (EGamepadTextInputMode)
* `eLineInputMode` (EGamepadTextInputLineMode)
* `pchDescription` (string)
* `unCharMax` (number)
* `pchExistingText` (string)

**RETURN**
* `r` (bool)


### <a name="utils_get_entered_gamepad_text_length"></a>steamworks.utils_get_entered_gamepad_text_length() - [ISteamUtils#GetEnteredGamepadTextLength](https://partner.steamgames.com/doc/api/ISteamUtils#GetEnteredGamepadTextLength)


**RETURN**
* `r` (uint32)


### <a name="utils_get_entered_gamepad_text_input"></a>steamworks.utils_get_entered_gamepad_text_input(pchText, cchText) - [ISteamUtils#GetEnteredGamepadTextInput](https://partner.steamgames.com/doc/api/ISteamUtils#GetEnteredGamepadTextInput)

**PARAMS**
* `pchText` (string)
* `cchText` (number)

**RETURN**
* `r` (bool)


### <a name="utils_get_steam_ui_language"></a>steamworks.utils_get_steam_ui_language() - [ISteamUtils#GetSteamUILanguage](https://partner.steamgames.com/doc/api/ISteamUtils#GetSteamUILanguage)


**RETURN**
* `r` (const_char_ptr)


### <a name="utils_is_steam_running_in_vr"></a>steamworks.utils_is_steam_running_in_vr() - [ISteamUtils#IsSteamRunningInVR](https://partner.steamgames.com/doc/api/ISteamUtils#IsSteamRunningInVR)


**RETURN**
* `r` (bool)


### <a name="utils_set_overlay_notification_inset"></a>steamworks.utils_set_overlay_notification_inset(nHorizontalInset, nVerticalInset) - [ISteamUtils#SetOverlayNotificationInset](https://partner.steamgames.com/doc/api/ISteamUtils#SetOverlayNotificationInset)

**PARAMS**
* `nHorizontalInset` (number)
* `nVerticalInset` (number)


### <a name="utils_is_steam_in_big_picture_mode"></a>steamworks.utils_is_steam_in_big_picture_mode() - [ISteamUtils#IsSteamInBigPictureMode](https://partner.steamgames.com/doc/api/ISteamUtils#IsSteamInBigPictureMode)


**RETURN**
* `r` (bool)


### <a name="utils_start_vr_dashboard"></a>steamworks.utils_start_vr_dashboard() - [ISteamUtils#StartVRDashboard](https://partner.steamgames.com/doc/api/ISteamUtils#StartVRDashboard)



### <a name="utils_is_vr_headset_streaming_enabled"></a>steamworks.utils_is_vr_headset_streaming_enabled() - [ISteamUtils#IsVRHeadsetStreamingEnabled](https://partner.steamgames.com/doc/api/ISteamUtils#IsVRHeadsetStreamingEnabled)


**RETURN**
* `r` (bool)


### <a name="utils_set_vr_headset_streaming_enabled"></a>steamworks.utils_set_vr_headset_streaming_enabled(bEnabled) - [ISteamUtils#SetVRHeadsetStreamingEnabled](https://partner.steamgames.com/doc/api/ISteamUtils#SetVRHeadsetStreamingEnabled)

**PARAMS**
* `bEnabled` (boolean)


### <a name="matchmaking_get_favorite_game_count"></a>steamworks.matchmaking_get_favorite_game_count() - [ISteamMatchmaking#GetFavoriteGameCount](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetFavoriteGameCount)


**RETURN**
* `r` (int)


### <a name="matchmaking_get_favorite_game"></a>steamworks.matchmaking_get_favorite_game(iGame, pnAppID, pnIP, pnConnPort, pnQueryPort, punFlags, pRTime32LastPlayedOnServer) - [ISteamMatchmaking#GetFavoriteGame](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetFavoriteGame)

**PARAMS**
* `iGame` (number)
* `pnAppID` (number)
* `pnIP` (number)
* `pnConnPort` (number)
* `pnQueryPort` (number)
* `punFlags` (number)
* `pRTime32LastPlayedOnServer` (number)

**RETURN**
* `r` (bool)
* `pRTime32LastPlayedOnServer` (uint32)
* `punFlags` (uint32)
* `pnQueryPort` (uint16)
* `pnConnPort` (uint16)
* `pnIP` (uint32)
* `pnAppID` (AppId_t)


### <a name="matchmaking_add_favorite_game"></a>steamworks.matchmaking_add_favorite_game(nAppID, nIP, nConnPort, nQueryPort, unFlags, rTime32LastPlayedOnServer) - [ISteamMatchmaking#AddFavoriteGame](https://partner.steamgames.com/doc/api/ISteamMatchmaking#AddFavoriteGame)

**PARAMS**
* `nAppID` (number)
* `nIP` (number)
* `nConnPort` (number)
* `nQueryPort` (number)
* `unFlags` (number)
* `rTime32LastPlayedOnServer` (number)

**RETURN**
* `r` (int)


### <a name="matchmaking_remove_favorite_game"></a>steamworks.matchmaking_remove_favorite_game(nAppID, nIP, nConnPort, nQueryPort, unFlags) - [ISteamMatchmaking#RemoveFavoriteGame](https://partner.steamgames.com/doc/api/ISteamMatchmaking#RemoveFavoriteGame)

**PARAMS**
* `nAppID` (number)
* `nIP` (number)
* `nConnPort` (number)
* `nQueryPort` (number)
* `unFlags` (number)

**RETURN**
* `r` (bool)


### <a name="matchmaking_request_lobby_list"></a>steamworks.matchmaking_request_lobby_list() - [ISteamMatchmaking#RequestLobbyList](https://partner.steamgames.com/doc/api/ISteamMatchmaking#RequestLobbyList)


**CALLBACK**
* `LobbyMatchList_t`

### <a name="matchmaking_add_request_lobby_list_string_filter"></a>steamworks.matchmaking_add_request_lobby_list_string_filter(pchKeyToMatch, pchValueToMatch, eComparisonType) - [ISteamMatchmaking#AddRequestLobbyListStringFilter](https://partner.steamgames.com/doc/api/ISteamMatchmaking#AddRequestLobbyListStringFilter)

**PARAMS**
* `pchKeyToMatch` (string)
* `pchValueToMatch` (string)
* `eComparisonType` (ELobbyComparison)


### <a name="matchmaking_add_request_lobby_list_numerical_filter"></a>steamworks.matchmaking_add_request_lobby_list_numerical_filter(pchKeyToMatch, nValueToMatch, eComparisonType) - [ISteamMatchmaking#AddRequestLobbyListNumericalFilter](https://partner.steamgames.com/doc/api/ISteamMatchmaking#AddRequestLobbyListNumericalFilter)

**PARAMS**
* `pchKeyToMatch` (string)
* `nValueToMatch` (number)
* `eComparisonType` (ELobbyComparison)


### <a name="matchmaking_add_request_lobby_list_near_value_filter"></a>steamworks.matchmaking_add_request_lobby_list_near_value_filter(pchKeyToMatch, nValueToBeCloseTo) - [ISteamMatchmaking#AddRequestLobbyListNearValueFilter](https://partner.steamgames.com/doc/api/ISteamMatchmaking#AddRequestLobbyListNearValueFilter)

**PARAMS**
* `pchKeyToMatch` (string)
* `nValueToBeCloseTo` (number)


### <a name="matchmaking_add_request_lobby_list_filter_slots_available"></a>steamworks.matchmaking_add_request_lobby_list_filter_slots_available(nSlotsAvailable) - [ISteamMatchmaking#AddRequestLobbyListFilterSlotsAvailable](https://partner.steamgames.com/doc/api/ISteamMatchmaking#AddRequestLobbyListFilterSlotsAvailable)

**PARAMS**
* `nSlotsAvailable` (number)


### <a name="matchmaking_add_request_lobby_list_distance_filter"></a>steamworks.matchmaking_add_request_lobby_list_distance_filter(eLobbyDistanceFilter) - [ISteamMatchmaking#AddRequestLobbyListDistanceFilter](https://partner.steamgames.com/doc/api/ISteamMatchmaking#AddRequestLobbyListDistanceFilter)

**PARAMS**
* `eLobbyDistanceFilter` (ELobbyDistanceFilter)


### <a name="matchmaking_add_request_lobby_list_result_count_filter"></a>steamworks.matchmaking_add_request_lobby_list_result_count_filter(cMaxResults) - [ISteamMatchmaking#AddRequestLobbyListResultCountFilter](https://partner.steamgames.com/doc/api/ISteamMatchmaking#AddRequestLobbyListResultCountFilter)

**PARAMS**
* `cMaxResults` (number)


### <a name="matchmaking_add_request_lobby_list_compatible_members_filter"></a>steamworks.matchmaking_add_request_lobby_list_compatible_members_filter(steamIDLobby) - [ISteamMatchmaking#AddRequestLobbyListCompatibleMembersFilter](https://partner.steamgames.com/doc/api/ISteamMatchmaking#AddRequestLobbyListCompatibleMembersFilter)

**PARAMS**
* `steamIDLobby` (string)


### <a name="matchmaking_get_lobby_by_index"></a>steamworks.matchmaking_get_lobby_by_index(iLobby) - [ISteamMatchmaking#GetLobbyByIndex](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyByIndex)

**PARAMS**
* `iLobby` (number)

**RETURN**
* `r` (class_CSteamID)


### <a name="matchmaking_create_lobby"></a>steamworks.matchmaking_create_lobby(eLobbyType, cMaxMembers) - [ISteamMatchmaking#CreateLobby](https://partner.steamgames.com/doc/api/ISteamMatchmaking#CreateLobby)

**PARAMS**
* `eLobbyType` (ELobbyType)
* `cMaxMembers` (number)

**CALLBACK**
* `LobbyCreated_t`

### <a name="matchmaking_join_lobby"></a>steamworks.matchmaking_join_lobby(steamIDLobby) - [ISteamMatchmaking#JoinLobby](https://partner.steamgames.com/doc/api/ISteamMatchmaking#JoinLobby)

**PARAMS**
* `steamIDLobby` (string)

**CALLBACK**
* `LobbyEnter_t`

### <a name="matchmaking_leave_lobby"></a>steamworks.matchmaking_leave_lobby(steamIDLobby) - [ISteamMatchmaking#LeaveLobby](https://partner.steamgames.com/doc/api/ISteamMatchmaking#LeaveLobby)

**PARAMS**
* `steamIDLobby` (string)


### <a name="matchmaking_invite_user_to_lobby"></a>steamworks.matchmaking_invite_user_to_lobby(steamIDLobby, steamIDInvitee) - [ISteamMatchmaking#InviteUserToLobby](https://partner.steamgames.com/doc/api/ISteamMatchmaking#InviteUserToLobby)

**PARAMS**
* `steamIDLobby` (string)
* `steamIDInvitee` (string)

**RETURN**
* `r` (bool)


### <a name="matchmaking_get_num_lobby_members"></a>steamworks.matchmaking_get_num_lobby_members(steamIDLobby) - [ISteamMatchmaking#GetNumLobbyMembers](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetNumLobbyMembers)

**PARAMS**
* `steamIDLobby` (string)

**RETURN**
* `r` (int)


### <a name="matchmaking_get_lobby_member_by_index"></a>steamworks.matchmaking_get_lobby_member_by_index(steamIDLobby, iMember) - [ISteamMatchmaking#GetLobbyMemberByIndex](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyMemberByIndex)

**PARAMS**
* `steamIDLobby` (string)
* `iMember` (number)

**RETURN**
* `r` (class_CSteamID)


### <a name="matchmaking_get_lobby_data"></a>steamworks.matchmaking_get_lobby_data(steamIDLobby, pchKey) - [ISteamMatchmaking#GetLobbyData](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyData)

**PARAMS**
* `steamIDLobby` (string)
* `pchKey` (string)

**RETURN**
* `r` (const_char_ptr)


### <a name="matchmaking_set_lobby_data"></a>steamworks.matchmaking_set_lobby_data(steamIDLobby, pchKey, pchValue) - [ISteamMatchmaking#SetLobbyData](https://partner.steamgames.com/doc/api/ISteamMatchmaking#SetLobbyData)

**PARAMS**
* `steamIDLobby` (string)
* `pchKey` (string)
* `pchValue` (string)

**RETURN**
* `r` (bool)


### <a name="matchmaking_get_lobby_data_count"></a>steamworks.matchmaking_get_lobby_data_count(steamIDLobby) - [ISteamMatchmaking#GetLobbyDataCount](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyDataCount)

**PARAMS**
* `steamIDLobby` (string)

**RETURN**
* `r` (int)


### <a name="matchmaking_get_lobby_data_by_index"></a>steamworks.matchmaking_get_lobby_data_by_index(steamIDLobby, iLobbyData, pchKey, cchKeyBufferSize, pchValue, cchValueBufferSize) - [ISteamMatchmaking#GetLobbyDataByIndex](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyDataByIndex)

**PARAMS**
* `steamIDLobby` (string)
* `iLobbyData` (number)
* `pchKey` (string)
* `cchKeyBufferSize` (number)
* `pchValue` (string)
* `cchValueBufferSize` (number)

**RETURN**
* `r` (bool)


### <a name="matchmaking_delete_lobby_data"></a>steamworks.matchmaking_delete_lobby_data(steamIDLobby, pchKey) - [ISteamMatchmaking#DeleteLobbyData](https://partner.steamgames.com/doc/api/ISteamMatchmaking#DeleteLobbyData)

**PARAMS**
* `steamIDLobby` (string)
* `pchKey` (string)

**RETURN**
* `r` (bool)


### <a name="matchmaking_get_lobby_member_data"></a>steamworks.matchmaking_get_lobby_member_data(steamIDLobby, steamIDUser, pchKey) - [ISteamMatchmaking#GetLobbyMemberData](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyMemberData)

**PARAMS**
* `steamIDLobby` (string)
* `steamIDUser` (string)
* `pchKey` (string)

**RETURN**
* `r` (const_char_ptr)


### <a name="matchmaking_set_lobby_member_data"></a>steamworks.matchmaking_set_lobby_member_data(steamIDLobby, pchKey, pchValue) - [ISteamMatchmaking#SetLobbyMemberData](https://partner.steamgames.com/doc/api/ISteamMatchmaking#SetLobbyMemberData)

**PARAMS**
* `steamIDLobby` (string)
* `pchKey` (string)
* `pchValue` (string)


### <a name="matchmaking_send_lobby_chat_msg"></a>steamworks.matchmaking_send_lobby_chat_msg(steamIDLobby, pvMsgBody, cubMsgBody) - [ISteamMatchmaking#SendLobbyChatMsg](https://partner.steamgames.com/doc/api/ISteamMatchmaking#SendLobbyChatMsg)

**PARAMS**
* `steamIDLobby` (string)
* `pvMsgBody` (string)
* `cubMsgBody` (number)

**RETURN**
* `r` (bool)


### <a name="matchmaking_get_lobby_chat_entry"></a>steamworks.matchmaking_get_lobby_chat_entry(steamIDLobby, iChatID, pvData, cubData, peChatEntryType) - [ISteamMatchmaking#GetLobbyChatEntry](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyChatEntry)

**PARAMS**
* `steamIDLobby` (string)
* `iChatID` (number)
* `pvData` (string)
* `cubData` (number)
* `peChatEntryType` (EChatEntryType)

**RETURN**
* `r` (int)
* `peChatEntryType` (EChatEntryType)


### <a name="matchmaking_request_lobby_data"></a>steamworks.matchmaking_request_lobby_data(steamIDLobby) - [ISteamMatchmaking#RequestLobbyData](https://partner.steamgames.com/doc/api/ISteamMatchmaking#RequestLobbyData)

**PARAMS**
* `steamIDLobby` (string)

**RETURN**
* `r` (bool)


### <a name="matchmaking_set_lobby_game_server"></a>steamworks.matchmaking_set_lobby_game_server(steamIDLobby, unGameServerIP, unGameServerPort, steamIDGameServer) - [ISteamMatchmaking#SetLobbyGameServer](https://partner.steamgames.com/doc/api/ISteamMatchmaking#SetLobbyGameServer)

**PARAMS**
* `steamIDLobby` (string)
* `unGameServerIP` (number)
* `unGameServerPort` (number)
* `steamIDGameServer` (string)


### <a name="matchmaking_get_lobby_game_server"></a>steamworks.matchmaking_get_lobby_game_server(steamIDLobby, punGameServerIP, punGameServerPort) - [ISteamMatchmaking#GetLobbyGameServer](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyGameServer)

**PARAMS**
* `steamIDLobby` (string)
* `punGameServerIP` (number)
* `punGameServerPort` (number)

**RETURN**
* `r` (bool)
* `punGameServerPort` (uint16)
* `punGameServerIP` (uint32)


### <a name="matchmaking_set_lobby_member_limit"></a>steamworks.matchmaking_set_lobby_member_limit(steamIDLobby, cMaxMembers) - [ISteamMatchmaking#SetLobbyMemberLimit](https://partner.steamgames.com/doc/api/ISteamMatchmaking#SetLobbyMemberLimit)

**PARAMS**
* `steamIDLobby` (string)
* `cMaxMembers` (number)

**RETURN**
* `r` (bool)


### <a name="matchmaking_get_lobby_member_limit"></a>steamworks.matchmaking_get_lobby_member_limit(steamIDLobby) - [ISteamMatchmaking#GetLobbyMemberLimit](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyMemberLimit)

**PARAMS**
* `steamIDLobby` (string)

**RETURN**
* `r` (int)


### <a name="matchmaking_set_lobby_type"></a>steamworks.matchmaking_set_lobby_type(steamIDLobby, eLobbyType) - [ISteamMatchmaking#SetLobbyType](https://partner.steamgames.com/doc/api/ISteamMatchmaking#SetLobbyType)

**PARAMS**
* `steamIDLobby` (string)
* `eLobbyType` (ELobbyType)

**RETURN**
* `r` (bool)


### <a name="matchmaking_set_lobby_joinable"></a>steamworks.matchmaking_set_lobby_joinable(steamIDLobby, bLobbyJoinable) - [ISteamMatchmaking#SetLobbyJoinable](https://partner.steamgames.com/doc/api/ISteamMatchmaking#SetLobbyJoinable)

**PARAMS**
* `steamIDLobby` (string)
* `bLobbyJoinable` (boolean)

**RETURN**
* `r` (bool)


### <a name="matchmaking_get_lobby_owner"></a>steamworks.matchmaking_get_lobby_owner(steamIDLobby) - [ISteamMatchmaking#GetLobbyOwner](https://partner.steamgames.com/doc/api/ISteamMatchmaking#GetLobbyOwner)

**PARAMS**
* `steamIDLobby` (string)

**RETURN**
* `r` (class_CSteamID)


### <a name="matchmaking_set_lobby_owner"></a>steamworks.matchmaking_set_lobby_owner(steamIDLobby, steamIDNewOwner) - [ISteamMatchmaking#SetLobbyOwner](https://partner.steamgames.com/doc/api/ISteamMatchmaking#SetLobbyOwner)

**PARAMS**
* `steamIDLobby` (string)
* `steamIDNewOwner` (string)

**RETURN**
* `r` (bool)


### <a name="matchmaking_set_linked_lobby"></a>steamworks.matchmaking_set_linked_lobby(steamIDLobby, steamIDLobbyDependent) - [ISteamMatchmaking#SetLinkedLobby](https://partner.steamgames.com/doc/api/ISteamMatchmaking#SetLinkedLobby)

**PARAMS**
* `steamIDLobby` (string)
* `steamIDLobbyDependent` (string)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_write"></a>steamworks.remote_storage_file_write(pchFile, pvData, cubData) - [ISteamRemoteStorage#FileWrite](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileWrite)

**PARAMS**
* `pchFile` (string)
* `pvData` (string)
* `cubData` (number)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_read"></a>steamworks.remote_storage_file_read(pchFile, pvData, cubDataToRead) - [ISteamRemoteStorage#FileRead](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileRead)

**PARAMS**
* `pchFile` (string)
* `pvData` (string)
* `cubDataToRead` (number)

**RETURN**
* `r` (int32)


### <a name="remote_storage_file_write_async"></a>steamworks.remote_storage_file_write_async(pchFile, pvData, cubData) - [ISteamRemoteStorage#FileWriteAsync](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileWriteAsync)

**PARAMS**
* `pchFile` (string)
* `pvData` (string)
* `cubData` (number)

**CALLBACK**
* `RemoteStorageFileWriteAsyncComplete_t`

### <a name="remote_storage_file_read_async"></a>steamworks.remote_storage_file_read_async(pchFile, nOffset, cubToRead) - [ISteamRemoteStorage#FileReadAsync](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileReadAsync)

**PARAMS**
* `pchFile` (string)
* `nOffset` (number)
* `cubToRead` (number)

**CALLBACK**
* `RemoteStorageFileReadAsyncComplete_t`

### <a name="remote_storage_file_read_async_complete"></a>steamworks.remote_storage_file_read_async_complete(hReadCall, pvBuffer, cubToRead) - [ISteamRemoteStorage#FileReadAsyncComplete](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileReadAsyncComplete)

**PARAMS**
* `hReadCall` (number)
* `pvBuffer` (string)
* `cubToRead` (number)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_forget"></a>steamworks.remote_storage_file_forget(pchFile) - [ISteamRemoteStorage#FileForget](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileForget)

**PARAMS**
* `pchFile` (string)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_delete"></a>steamworks.remote_storage_file_delete(pchFile) - [ISteamRemoteStorage#FileDelete](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileDelete)

**PARAMS**
* `pchFile` (string)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_share"></a>steamworks.remote_storage_file_share(pchFile) - [ISteamRemoteStorage#FileShare](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileShare)

**PARAMS**
* `pchFile` (string)

**CALLBACK**
* `RemoteStorageFileShareResult_t`

### <a name="remote_storage_set_sync_platforms"></a>steamworks.remote_storage_set_sync_platforms(pchFile, eRemoteStoragePlatform) - [ISteamRemoteStorage#SetSyncPlatforms](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#SetSyncPlatforms)

**PARAMS**
* `pchFile` (string)
* `eRemoteStoragePlatform` (ERemoteStoragePlatform)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_write_stream_open"></a>steamworks.remote_storage_file_write_stream_open(pchFile) - [ISteamRemoteStorage#FileWriteStreamOpen](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileWriteStreamOpen)

**PARAMS**
* `pchFile` (string)

**RETURN**
* `r` (UGCFileWriteStreamHandle_t)


### <a name="remote_storage_file_write_stream_write_chunk"></a>steamworks.remote_storage_file_write_stream_write_chunk(writeHandle, pvData, cubData) - [ISteamRemoteStorage#FileWriteStreamWriteChunk](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileWriteStreamWriteChunk)

**PARAMS**
* `writeHandle` (number)
* `pvData` (string)
* `cubData` (number)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_write_stream_close"></a>steamworks.remote_storage_file_write_stream_close(writeHandle) - [ISteamRemoteStorage#FileWriteStreamClose](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileWriteStreamClose)

**PARAMS**
* `writeHandle` (number)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_write_stream_cancel"></a>steamworks.remote_storage_file_write_stream_cancel(writeHandle) - [ISteamRemoteStorage#FileWriteStreamCancel](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileWriteStreamCancel)

**PARAMS**
* `writeHandle` (number)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_exists"></a>steamworks.remote_storage_file_exists(pchFile) - [ISteamRemoteStorage#FileExists](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FileExists)

**PARAMS**
* `pchFile` (string)

**RETURN**
* `r` (bool)


### <a name="remote_storage_file_persisted"></a>steamworks.remote_storage_file_persisted(pchFile) - [ISteamRemoteStorage#FilePersisted](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#FilePersisted)

**PARAMS**
* `pchFile` (string)

**RETURN**
* `r` (bool)


### <a name="remote_storage_get_file_size"></a>steamworks.remote_storage_get_file_size(pchFile) - [ISteamRemoteStorage#GetFileSize](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetFileSize)

**PARAMS**
* `pchFile` (string)

**RETURN**
* `r` (int32)


### <a name="remote_storage_get_file_timestamp"></a>steamworks.remote_storage_get_file_timestamp(pchFile) - [ISteamRemoteStorage#GetFileTimestamp](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetFileTimestamp)

**PARAMS**
* `pchFile` (string)

**RETURN**
* `r` (int64)


### <a name="remote_storage_get_sync_platforms"></a>steamworks.remote_storage_get_sync_platforms(pchFile) - [ISteamRemoteStorage#GetSyncPlatforms](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetSyncPlatforms)

**PARAMS**
* `pchFile` (string)

**RETURN**
* `r` (ERemoteStoragePlatform)


### <a name="remote_storage_get_file_count"></a>steamworks.remote_storage_get_file_count() - [ISteamRemoteStorage#GetFileCount](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetFileCount)


**RETURN**
* `r` (int32)


### <a name="remote_storage_get_file_name_and_size"></a>steamworks.remote_storage_get_file_name_and_size(iFile, pnFileSizeInBytes) - [ISteamRemoteStorage#GetFileNameAndSize](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetFileNameAndSize)

**PARAMS**
* `iFile` (number)
* `pnFileSizeInBytes` (number)

**RETURN**
* `r` (const_char_ptr)
* `pnFileSizeInBytes` (int32)


### <a name="remote_storage_get_quota"></a>steamworks.remote_storage_get_quota(pnTotalBytes, puAvailableBytes) - [ISteamRemoteStorage#GetQuota](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetQuota)

**PARAMS**
* `pnTotalBytes` (string)
* `puAvailableBytes` (string)

**RETURN**
* `r` (bool)
* `puAvailableBytes` (uint64)
* `pnTotalBytes` (uint64)


### <a name="remote_storage_is_cloud_enabled_for_account"></a>steamworks.remote_storage_is_cloud_enabled_for_account() - [ISteamRemoteStorage#IsCloudEnabledForAccount](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#IsCloudEnabledForAccount)


**RETURN**
* `r` (bool)


### <a name="remote_storage_is_cloud_enabled_for_app"></a>steamworks.remote_storage_is_cloud_enabled_for_app() - [ISteamRemoteStorage#IsCloudEnabledForApp](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#IsCloudEnabledForApp)


**RETURN**
* `r` (bool)


### <a name="remote_storage_set_cloud_enabled_for_app"></a>steamworks.remote_storage_set_cloud_enabled_for_app(bEnabled) - [ISteamRemoteStorage#SetCloudEnabledForApp](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#SetCloudEnabledForApp)

**PARAMS**
* `bEnabled` (boolean)


### <a name="remote_storage_ugc_download"></a>steamworks.remote_storage_ugc_download(hContent, unPriority) - [ISteamRemoteStorage#UGCDownload](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#UGCDownload)

**PARAMS**
* `hContent` (number)
* `unPriority` (number)

**CALLBACK**
* `RemoteStorageDownloadUGCResult_t`

### <a name="remote_storage_get_ugc_download_progress"></a>steamworks.remote_storage_get_ugc_download_progress(hContent, pnBytesDownloaded, pnBytesExpected) - [ISteamRemoteStorage#GetUGCDownloadProgress](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetUGCDownloadProgress)

**PARAMS**
* `hContent` (number)
* `pnBytesDownloaded` (number)
* `pnBytesExpected` (number)

**RETURN**
* `r` (bool)
* `pnBytesExpected` (int32)
* `pnBytesDownloaded` (int32)


### <a name="remote_storage_get_ugc_details"></a>steamworks.remote_storage_get_ugc_details(hContent, pnAppID, pnFileSizeInBytes) - [ISteamRemoteStorage#GetUGCDetails](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetUGCDetails)

**PARAMS**
* `hContent` (number)
* `pnAppID` (number)
* `pnFileSizeInBytes` (number)

**RETURN**
* `r` (bool)
* `pnFileSizeInBytes` (int32)
* `pnAppID` (AppId_t)
* `ppchName` (string)


### <a name="remote_storage_ugc_read"></a>steamworks.remote_storage_ugc_read(hContent, pvData, cubDataToRead, cOffset, eAction) - [ISteamRemoteStorage#UGCRead](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#UGCRead)

**PARAMS**
* `hContent` (number)
* `pvData` (string)
* `cubDataToRead` (number)
* `cOffset` (number)
* `eAction` (EUGCReadAction)

**RETURN**
* `r` (int32)


### <a name="remote_storage_get_cached_ugc_count"></a>steamworks.remote_storage_get_cached_ugc_count() - [ISteamRemoteStorage#GetCachedUGCCount](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetCachedUGCCount)


**RETURN**
* `r` (int32)


### <a name="remote_storage_get_cached_ugc_handle"></a>steamworks.remote_storage_get_cached_ugc_handle(iCachedContent) - [ISteamRemoteStorage#GetCachedUGCHandle](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#GetCachedUGCHandle)

**PARAMS**
* `iCachedContent` (number)

**RETURN**
* `r` (UGCHandle_t)


### <a name="remote_storage_ugc_download_to_location"></a>steamworks.remote_storage_ugc_download_to_location(hContent, pchLocation, unPriority) - [ISteamRemoteStorage#UGCDownloadToLocation](https://partner.steamgames.com/doc/api/ISteamRemoteStorage#UGCDownloadToLocation)

**PARAMS**
* `hContent` (number)
* `pchLocation` (string)
* `unPriority` (number)

**CALLBACK**
* `RemoteStorageDownloadUGCResult_t`

### <a name="user_stats_request_current_stats"></a>steamworks.user_stats_request_current_stats() - [ISteamUserStats#RequestCurrentStats](https://partner.steamgames.com/doc/api/ISteamUserStats#RequestCurrentStats)


**RETURN**
* `r` (bool)


### <a name="user_stats_get_stat_int"></a>steamworks.user_stats_get_stat_int(pchName, pData) - [ISteamUserStats#GetStat](https://partner.steamgames.com/doc/api/ISteamUserStats#GetStat)

**PARAMS**
* `pchName` (string)
* `pData` (number)

**RETURN**
* `r` (bool)
* `pData` (int32)


### <a name="user_stats_get_stat_float"></a>steamworks.user_stats_get_stat_float(pchName, pData) - [ISteamUserStats#GetStat](https://partner.steamgames.com/doc/api/ISteamUserStats#GetStat)

**PARAMS**
* `pchName` (string)
* `pData` (number)

**RETURN**
* `r` (bool)
* `pData` (float)


### <a name="user_stats_set_stat_int"></a>steamworks.user_stats_set_stat_int(pchName, nData) - [ISteamUserStats#SetStat](https://partner.steamgames.com/doc/api/ISteamUserStats#SetStat)

**PARAMS**
* `pchName` (string)
* `nData` (number)

**RETURN**
* `r` (bool)


### <a name="user_stats_set_stat_float"></a>steamworks.user_stats_set_stat_float(pchName, fData) - [ISteamUserStats#SetStat](https://partner.steamgames.com/doc/api/ISteamUserStats#SetStat)

**PARAMS**
* `pchName` (string)
* `fData` (number)

**RETURN**
* `r` (bool)


### <a name="user_stats_update_avg_rate_stat"></a>steamworks.user_stats_update_avg_rate_stat(pchName, flCountThisSession, dSessionLength) - [ISteamUserStats#UpdateAvgRateStat](https://partner.steamgames.com/doc/api/ISteamUserStats#UpdateAvgRateStat)

**PARAMS**
* `pchName` (string)
* `flCountThisSession` (number)
* `dSessionLength` (double)

**RETURN**
* `r` (bool)


### <a name="user_stats_get_achievement"></a>steamworks.user_stats_get_achievement(pchName, pbAchieved) - [ISteamUserStats#GetAchievement](https://partner.steamgames.com/doc/api/ISteamUserStats#GetAchievement)

**PARAMS**
* `pchName` (string)
* `pbAchieved` (boolean)

**RETURN**
* `r` (bool)
* `pbAchieved` (bool)


### <a name="user_stats_set_achievement"></a>steamworks.user_stats_set_achievement(pchName) - [ISteamUserStats#SetAchievement](https://partner.steamgames.com/doc/api/ISteamUserStats#SetAchievement)

**PARAMS**
* `pchName` (string)

**RETURN**
* `r` (bool)


### <a name="user_stats_clear_achievement"></a>steamworks.user_stats_clear_achievement(pchName) - [ISteamUserStats#ClearAchievement](https://partner.steamgames.com/doc/api/ISteamUserStats#ClearAchievement)

**PARAMS**
* `pchName` (string)

**RETURN**
* `r` (bool)


### <a name="user_stats_get_achievement_and_unlock_time"></a>steamworks.user_stats_get_achievement_and_unlock_time(pchName, pbAchieved, punUnlockTime) - [ISteamUserStats#GetAchievementAndUnlockTime](https://partner.steamgames.com/doc/api/ISteamUserStats#GetAchievementAndUnlockTime)

**PARAMS**
* `pchName` (string)
* `pbAchieved` (boolean)
* `punUnlockTime` (number)

**RETURN**
* `r` (bool)
* `punUnlockTime` (uint32)
* `pbAchieved` (bool)


### <a name="user_stats_store_stats"></a>steamworks.user_stats_store_stats() - [ISteamUserStats#StoreStats](https://partner.steamgames.com/doc/api/ISteamUserStats#StoreStats)


**RETURN**
* `r` (bool)


### <a name="user_stats_get_achievement_icon"></a>steamworks.user_stats_get_achievement_icon(pchName) - [ISteamUserStats#GetAchievementIcon](https://partner.steamgames.com/doc/api/ISteamUserStats#GetAchievementIcon)

**PARAMS**
* `pchName` (string)

**RETURN**
* `r` (int)


### <a name="user_stats_get_achievement_display_attribute"></a>steamworks.user_stats_get_achievement_display_attribute(pchName, pchKey) - [ISteamUserStats#GetAchievementDisplayAttribute](https://partner.steamgames.com/doc/api/ISteamUserStats#GetAchievementDisplayAttribute)

**PARAMS**
* `pchName` (string)
* `pchKey` (string)

**RETURN**
* `r` (const_char_ptr)


### <a name="user_stats_indicate_achievement_progress"></a>steamworks.user_stats_indicate_achievement_progress(pchName, nCurProgress, nMaxProgress) - [ISteamUserStats#IndicateAchievementProgress](https://partner.steamgames.com/doc/api/ISteamUserStats#IndicateAchievementProgress)

**PARAMS**
* `pchName` (string)
* `nCurProgress` (number)
* `nMaxProgress` (number)

**RETURN**
* `r` (bool)


### <a name="user_stats_get_num_achievements"></a>steamworks.user_stats_get_num_achievements() - [ISteamUserStats#GetNumAchievements](https://partner.steamgames.com/doc/api/ISteamUserStats#GetNumAchievements)


**RETURN**
* `r` (uint32)


### <a name="user_stats_get_achievement_name"></a>steamworks.user_stats_get_achievement_name(iAchievement) - [ISteamUserStats#GetAchievementName](https://partner.steamgames.com/doc/api/ISteamUserStats#GetAchievementName)

**PARAMS**
* `iAchievement` (number)

**RETURN**
* `r` (const_char_ptr)


### <a name="user_stats_request_user_stats"></a>steamworks.user_stats_request_user_stats(steamIDUser) - [ISteamUserStats#RequestUserStats](https://partner.steamgames.com/doc/api/ISteamUserStats#RequestUserStats)

**PARAMS**
* `steamIDUser` (string)

**CALLBACK**
* `UserStatsReceived_t`

### <a name="user_stats_get_user_stat_int"></a>steamworks.user_stats_get_user_stat_int(steamIDUser, pchName, pData) - [ISteamUserStats#GetUserStat](https://partner.steamgames.com/doc/api/ISteamUserStats#GetUserStat)

**PARAMS**
* `steamIDUser` (string)
* `pchName` (string)
* `pData` (number)

**RETURN**
* `r` (bool)
* `pData` (int32)


### <a name="user_stats_get_user_stat_float"></a>steamworks.user_stats_get_user_stat_float(steamIDUser, pchName, pData) - [ISteamUserStats#GetUserStat](https://partner.steamgames.com/doc/api/ISteamUserStats#GetUserStat)

**PARAMS**
* `steamIDUser` (string)
* `pchName` (string)
* `pData` (number)

**RETURN**
* `r` (bool)
* `pData` (float)


### <a name="user_stats_get_user_achievement"></a>steamworks.user_stats_get_user_achievement(steamIDUser, pchName, pbAchieved) - [ISteamUserStats#GetUserAchievement](https://partner.steamgames.com/doc/api/ISteamUserStats#GetUserAchievement)

**PARAMS**
* `steamIDUser` (string)
* `pchName` (string)
* `pbAchieved` (boolean)

**RETURN**
* `r` (bool)
* `pbAchieved` (bool)


### <a name="user_stats_get_user_achievement_and_unlock_time"></a>steamworks.user_stats_get_user_achievement_and_unlock_time(steamIDUser, pchName, pbAchieved, punUnlockTime) - [ISteamUserStats#GetUserAchievementAndUnlockTime](https://partner.steamgames.com/doc/api/ISteamUserStats#GetUserAchievementAndUnlockTime)

**PARAMS**
* `steamIDUser` (string)
* `pchName` (string)
* `pbAchieved` (boolean)
* `punUnlockTime` (number)

**RETURN**
* `r` (bool)
* `punUnlockTime` (uint32)
* `pbAchieved` (bool)


### <a name="user_stats_reset_all_stats"></a>steamworks.user_stats_reset_all_stats(bAchievementsToo) - [ISteamUserStats#ResetAllStats](https://partner.steamgames.com/doc/api/ISteamUserStats#ResetAllStats)

**PARAMS**
* `bAchievementsToo` (boolean)

**RETURN**
* `r` (bool)


### <a name="user_stats_find_or_create_leaderboard"></a>steamworks.user_stats_find_or_create_leaderboard(pchLeaderboardName, eLeaderboardSortMethod, eLeaderboardDisplayType) - [ISteamUserStats#FindOrCreateLeaderboard](https://partner.steamgames.com/doc/api/ISteamUserStats#FindOrCreateLeaderboard)

**PARAMS**
* `pchLeaderboardName` (string)
* `eLeaderboardSortMethod` (ELeaderboardSortMethod)
* `eLeaderboardDisplayType` (ELeaderboardDisplayType)

**CALLBACK**
* `LeaderboardFindResult_t`

### <a name="user_stats_find_leaderboard"></a>steamworks.user_stats_find_leaderboard(pchLeaderboardName) - [ISteamUserStats#FindLeaderboard](https://partner.steamgames.com/doc/api/ISteamUserStats#FindLeaderboard)

**PARAMS**
* `pchLeaderboardName` (string)

**CALLBACK**
* `LeaderboardFindResult_t`

### <a name="user_stats_get_leaderboard_name"></a>steamworks.user_stats_get_leaderboard_name(hSteamLeaderboard) - [ISteamUserStats#GetLeaderboardName](https://partner.steamgames.com/doc/api/ISteamUserStats#GetLeaderboardName)

**PARAMS**
* `hSteamLeaderboard` (number)

**RETURN**
* `r` (const_char_ptr)


### <a name="user_stats_get_leaderboard_entry_count"></a>steamworks.user_stats_get_leaderboard_entry_count(hSteamLeaderboard) - [ISteamUserStats#GetLeaderboardEntryCount](https://partner.steamgames.com/doc/api/ISteamUserStats#GetLeaderboardEntryCount)

**PARAMS**
* `hSteamLeaderboard` (number)

**RETURN**
* `r` (int)


### <a name="user_stats_get_leaderboard_sort_method"></a>steamworks.user_stats_get_leaderboard_sort_method(hSteamLeaderboard) - [ISteamUserStats#GetLeaderboardSortMethod](https://partner.steamgames.com/doc/api/ISteamUserStats#GetLeaderboardSortMethod)

**PARAMS**
* `hSteamLeaderboard` (number)

**RETURN**
* `r` (ELeaderboardSortMethod)


### <a name="user_stats_get_leaderboard_display_type"></a>steamworks.user_stats_get_leaderboard_display_type(hSteamLeaderboard) - [ISteamUserStats#GetLeaderboardDisplayType](https://partner.steamgames.com/doc/api/ISteamUserStats#GetLeaderboardDisplayType)

**PARAMS**
* `hSteamLeaderboard` (number)

**RETURN**
* `r` (ELeaderboardDisplayType)


### <a name="user_stats_download_leaderboard_entries"></a>steamworks.user_stats_download_leaderboard_entries(hSteamLeaderboard, eLeaderboardDataRequest, nRangeStart, nRangeEnd) - [ISteamUserStats#DownloadLeaderboardEntries](https://partner.steamgames.com/doc/api/ISteamUserStats#DownloadLeaderboardEntries)

**PARAMS**
* `hSteamLeaderboard` (number)
* `eLeaderboardDataRequest` (ELeaderboardDataRequest)
* `nRangeStart` (number)
* `nRangeEnd` (number)

**CALLBACK**
* `LeaderboardScoresDownloaded_t`

### <a name="user_stats_download_leaderboard_entries_for_users"></a>steamworks.user_stats_download_leaderboard_entries_for_users(hSteamLeaderboard, prgUsers, cUsers) - [ISteamUserStats#DownloadLeaderboardEntriesForUsers](https://partner.steamgames.com/doc/api/ISteamUserStats#DownloadLeaderboardEntriesForUsers)

**PARAMS**
* `hSteamLeaderboard` (number)
* `prgUsers` (string)
* `cUsers` (number)

**CALLBACK**
* `LeaderboardScoresDownloaded_t`

### <a name="user_stats_get_downloaded_leaderboard_entry"></a>steamworks.user_stats_get_downloaded_leaderboard_entry(hSteamLeaderboardEntries, index, pLeaderboardEntry, pDetails, cDetailsMax) - [ISteamUserStats#GetDownloadedLeaderboardEntry](https://partner.steamgames.com/doc/api/ISteamUserStats#GetDownloadedLeaderboardEntry)

**PARAMS**
* `hSteamLeaderboardEntries` (number)
* `index` (number)
* `pLeaderboardEntry` (table)
* `pDetails` (number)
* `cDetailsMax` (number)

**RETURN**
* `r` (bool)
* `pLeaderboardEntry` (struct LeaderboardEntry_t)
* `pDetails` (table) cDetailsMax


### <a name="user_stats_upload_leaderboard_score"></a>steamworks.user_stats_upload_leaderboard_score(hSteamLeaderboard, eLeaderboardUploadScoreMethod, nScore, pScoreDetails, cScoreDetailsCount) - [ISteamUserStats#UploadLeaderboardScore](https://partner.steamgames.com/doc/api/ISteamUserStats#UploadLeaderboardScore)

**PARAMS**
* `hSteamLeaderboard` (number)
* `eLeaderboardUploadScoreMethod` (ELeaderboardUploadScoreMethod)
* `nScore` (number)
* `pScoreDetails` (number)
* `cScoreDetailsCount` (number)

**CALLBACK**
* `LeaderboardScoreUploaded_t`

### <a name="user_stats_attach_leaderboard_ugc"></a>steamworks.user_stats_attach_leaderboard_ugc(hSteamLeaderboard, hUGC) - [ISteamUserStats#AttachLeaderboardUGC](https://partner.steamgames.com/doc/api/ISteamUserStats#AttachLeaderboardUGC)

**PARAMS**
* `hSteamLeaderboard` (number)
* `hUGC` (number)

**CALLBACK**
* `LeaderboardUGCSet_t`

### <a name="user_stats_get_number_of_current_players"></a>steamworks.user_stats_get_number_of_current_players() - [ISteamUserStats#GetNumberOfCurrentPlayers](https://partner.steamgames.com/doc/api/ISteamUserStats#GetNumberOfCurrentPlayers)


**CALLBACK**
* `NumberOfCurrentPlayers_t`

### <a name="user_stats_request_global_achievement_percentages"></a>steamworks.user_stats_request_global_achievement_percentages() - [ISteamUserStats#RequestGlobalAchievementPercentages](https://partner.steamgames.com/doc/api/ISteamUserStats#RequestGlobalAchievementPercentages)


**CALLBACK**
* `GlobalAchievementPercentagesReady_t`

### <a name="user_stats_get_most_achieved_achievement_info"></a>steamworks.user_stats_get_most_achieved_achievement_info(pchName, unNameBufLen, pflPercent, pbAchieved) - [ISteamUserStats#GetMostAchievedAchievementInfo](https://partner.steamgames.com/doc/api/ISteamUserStats#GetMostAchievedAchievementInfo)

**PARAMS**
* `pchName` (string)
* `unNameBufLen` (number)
* `pflPercent` (number)
* `pbAchieved` (boolean)

**RETURN**
* `r` (int)
* `pbAchieved` (bool)
* `pflPercent` (float)


### <a name="user_stats_get_next_most_achieved_achievement_info"></a>steamworks.user_stats_get_next_most_achieved_achievement_info(iIteratorPrevious, pchName, unNameBufLen, pflPercent, pbAchieved) - [ISteamUserStats#GetNextMostAchievedAchievementInfo](https://partner.steamgames.com/doc/api/ISteamUserStats#GetNextMostAchievedAchievementInfo)

**PARAMS**
* `iIteratorPrevious` (number)
* `pchName` (string)
* `unNameBufLen` (number)
* `pflPercent` (number)
* `pbAchieved` (boolean)

**RETURN**
* `r` (int)
* `pbAchieved` (bool)
* `pflPercent` (float)


### <a name="user_stats_get_achievement_achieved_percent"></a>steamworks.user_stats_get_achievement_achieved_percent(pchName, pflPercent) - [ISteamUserStats#GetAchievementAchievedPercent](https://partner.steamgames.com/doc/api/ISteamUserStats#GetAchievementAchievedPercent)

**PARAMS**
* `pchName` (string)
* `pflPercent` (number)

**RETURN**
* `r` (bool)
* `pflPercent` (float)


### <a name="user_stats_request_global_stats"></a>steamworks.user_stats_request_global_stats(nHistoryDays) - [ISteamUserStats#RequestGlobalStats](https://partner.steamgames.com/doc/api/ISteamUserStats#RequestGlobalStats)

**PARAMS**
* `nHistoryDays` (number)

**CALLBACK**
* `GlobalStatsReceived_t`

### <a name="user_stats_get_global_stat_int"></a>steamworks.user_stats_get_global_stat_int(pchStatName, pData) - [ISteamUserStats#GetGlobalStat](https://partner.steamgames.com/doc/api/ISteamUserStats#GetGlobalStat)

**PARAMS**
* `pchStatName` (string)
* `pData` (string)

**RETURN**
* `r` (bool)
* `pData` (int64)


### <a name="user_stats_get_global_stat_float"></a>steamworks.user_stats_get_global_stat_float(pchStatName, pData) - [ISteamUserStats#GetGlobalStat](https://partner.steamgames.com/doc/api/ISteamUserStats#GetGlobalStat)

**PARAMS**
* `pchStatName` (string)
* `pData` (double)

**RETURN**
* `r` (bool)
* `pData` (double)


### <a name="user_stats_get_global_stat_int_history"></a>steamworks.user_stats_get_global_stat_int_history(pchStatName, pData, cubData) - [ISteamUserStats#GetGlobalStatHistory](https://partner.steamgames.com/doc/api/ISteamUserStats#GetGlobalStatHistory)

**PARAMS**
* `pchStatName` (string)
* `pData` (string)
* `cubData` (number)

**RETURN**
* `r` (int32)


### <a name="user_stats_get_global_stat_float_history"></a>steamworks.user_stats_get_global_stat_float_history(pchStatName, pData, cubData) - [ISteamUserStats#GetGlobalStatHistory](https://partner.steamgames.com/doc/api/ISteamUserStats#GetGlobalStatHistory)

**PARAMS**
* `pchStatName` (string)
* `pData` (double)
* `cubData` (number)

**RETURN**
* `r` (int32)


### <a name="apps_is_subscribed"></a>steamworks.apps_is_subscribed() - [ISteamApps#BIsSubscribed](https://partner.steamgames.com/doc/api/ISteamApps#BIsSubscribed)


**RETURN**
* `r` (bool)


### <a name="apps_is_low_violence"></a>steamworks.apps_is_low_violence() - [ISteamApps#BIsLowViolence](https://partner.steamgames.com/doc/api/ISteamApps#BIsLowViolence)


**RETURN**
* `r` (bool)


### <a name="apps_is_cybercafe"></a>steamworks.apps_is_cybercafe() - [ISteamApps#BIsCybercafe](https://partner.steamgames.com/doc/api/ISteamApps#BIsCybercafe)


**RETURN**
* `r` (bool)


### <a name="apps_is_vac_banned"></a>steamworks.apps_is_vac_banned() - [ISteamApps#BIsVACBanned](https://partner.steamgames.com/doc/api/ISteamApps#BIsVACBanned)


**RETURN**
* `r` (bool)


### <a name="apps_get_current_game_language"></a>steamworks.apps_get_current_game_language() - [ISteamApps#GetCurrentGameLanguage](https://partner.steamgames.com/doc/api/ISteamApps#GetCurrentGameLanguage)


**RETURN**
* `r` (const_char_ptr)


### <a name="apps_get_available_game_languages"></a>steamworks.apps_get_available_game_languages() - [ISteamApps#GetAvailableGameLanguages](https://partner.steamgames.com/doc/api/ISteamApps#GetAvailableGameLanguages)


**RETURN**
* `r` (const_char_ptr)


### <a name="apps_is_subscribed_app"></a>steamworks.apps_is_subscribed_app(appID) - [ISteamApps#BIsSubscribedApp](https://partner.steamgames.com/doc/api/ISteamApps#BIsSubscribedApp)

**PARAMS**
* `appID` (number)

**RETURN**
* `r` (bool)


### <a name="apps_is_dlc_installed"></a>steamworks.apps_is_dlc_installed(appID) - [ISteamApps#BIsDlcInstalled](https://partner.steamgames.com/doc/api/ISteamApps#BIsDlcInstalled)

**PARAMS**
* `appID` (number)

**RETURN**
* `r` (bool)


### <a name="apps_get_earliest_purchase_unix_time"></a>steamworks.apps_get_earliest_purchase_unix_time(nAppID) - [ISteamApps#GetEarliestPurchaseUnixTime](https://partner.steamgames.com/doc/api/ISteamApps#GetEarliestPurchaseUnixTime)

**PARAMS**
* `nAppID` (number)

**RETURN**
* `r` (uint32)


### <a name="apps_is_subscribed_from_free_weekend"></a>steamworks.apps_is_subscribed_from_free_weekend() - [ISteamApps#BIsSubscribedFromFreeWeekend](https://partner.steamgames.com/doc/api/ISteamApps#BIsSubscribedFromFreeWeekend)


**RETURN**
* `r` (bool)


### <a name="apps_get_dlc_count"></a>steamworks.apps_get_dlc_count() - [ISteamApps#GetDLCCount](https://partner.steamgames.com/doc/api/ISteamApps#GetDLCCount)


**RETURN**
* `r` (int)


### <a name="apps_get_dlc_data_by_index"></a>steamworks.apps_get_dlc_data_by_index(iDLC, pAppID, pbAvailable, pchName, cchNameBufferSize) - [ISteamApps#BGetDLCDataByIndex](https://partner.steamgames.com/doc/api/ISteamApps#BGetDLCDataByIndex)

**PARAMS**
* `iDLC` (number)
* `pAppID` (number)
* `pbAvailable` (boolean)
* `pchName` (string)
* `cchNameBufferSize` (number)

**RETURN**
* `r` (bool)
* `pbAvailable` (bool)
* `pAppID` (AppId_t)


### <a name="apps_install_dlc"></a>steamworks.apps_install_dlc(nAppID) - [ISteamApps#InstallDLC](https://partner.steamgames.com/doc/api/ISteamApps#InstallDLC)

**PARAMS**
* `nAppID` (number)


### <a name="apps_uninstall_dlc"></a>steamworks.apps_uninstall_dlc(nAppID) - [ISteamApps#UninstallDLC](https://partner.steamgames.com/doc/api/ISteamApps#UninstallDLC)

**PARAMS**
* `nAppID` (number)


### <a name="apps_request_app_proof_of_purchase_key"></a>steamworks.apps_request_app_proof_of_purchase_key(nAppID) - [ISteamApps#RequestAppProofOfPurchaseKey](https://partner.steamgames.com/doc/api/ISteamApps#RequestAppProofOfPurchaseKey)

**PARAMS**
* `nAppID` (number)


### <a name="apps_get_current_beta_name"></a>steamworks.apps_get_current_beta_name(pchName, cchNameBufferSize) - [ISteamApps#GetCurrentBetaName](https://partner.steamgames.com/doc/api/ISteamApps#GetCurrentBetaName)

**PARAMS**
* `pchName` (string)
* `cchNameBufferSize` (number)

**RETURN**
* `r` (bool)


### <a name="apps_mark_content_corrupt"></a>steamworks.apps_mark_content_corrupt(bMissingFilesOnly) - [ISteamApps#MarkContentCorrupt](https://partner.steamgames.com/doc/api/ISteamApps#MarkContentCorrupt)

**PARAMS**
* `bMissingFilesOnly` (boolean)

**RETURN**
* `r` (bool)


### <a name="apps_get_installed_depots"></a>steamworks.apps_get_installed_depots(appID, pvecDepots, cMaxDepots) - [ISteamApps#GetInstalledDepots](https://partner.steamgames.com/doc/api/ISteamApps#GetInstalledDepots)

**PARAMS**
* `appID` (number)
* `pvecDepots` (number)
* `cMaxDepots` (number)

**RETURN**
* `r` (uint32)
* `pvecDepots` (DepotId_t)


### <a name="apps_get_app_install_dir"></a>steamworks.apps_get_app_install_dir(appID, pchFolder, cchFolderBufferSize) - [ISteamApps#GetAppInstallDir](https://partner.steamgames.com/doc/api/ISteamApps#GetAppInstallDir)

**PARAMS**
* `appID` (number)
* `pchFolder` (string)
* `cchFolderBufferSize` (number)

**RETURN**
* `r` (uint32)


### <a name="apps_is_app_installed"></a>steamworks.apps_is_app_installed(appID) - [ISteamApps#BIsAppInstalled](https://partner.steamgames.com/doc/api/ISteamApps#BIsAppInstalled)

**PARAMS**
* `appID` (number)

**RETURN**
* `r` (bool)


### <a name="apps_get_app_owner"></a>steamworks.apps_get_app_owner() - [ISteamApps#GetAppOwner](https://partner.steamgames.com/doc/api/ISteamApps#GetAppOwner)


**RETURN**
* `r` (class_CSteamID)


### <a name="apps_get_launch_query_param"></a>steamworks.apps_get_launch_query_param(pchKey) - [ISteamApps#GetLaunchQueryParam](https://partner.steamgames.com/doc/api/ISteamApps#GetLaunchQueryParam)

**PARAMS**
* `pchKey` (string)

**RETURN**
* `r` (const_char_ptr)


### <a name="apps_get_dlc_download_progress"></a>steamworks.apps_get_dlc_download_progress(nAppID, punBytesDownloaded, punBytesTotal) - [ISteamApps#GetDlcDownloadProgress](https://partner.steamgames.com/doc/api/ISteamApps#GetDlcDownloadProgress)

**PARAMS**
* `nAppID` (number)
* `punBytesDownloaded` (string)
* `punBytesTotal` (string)

**RETURN**
* `r` (bool)
* `punBytesTotal` (uint64)
* `punBytesDownloaded` (uint64)


### <a name="apps_get_app_build_id"></a>steamworks.apps_get_app_build_id() - [ISteamApps#GetAppBuildId](https://partner.steamgames.com/doc/api/ISteamApps#GetAppBuildId)


**RETURN**
* `r` (int)


### <a name="apps_request_all_proof_of_purchase_keys"></a>steamworks.apps_request_all_proof_of_purchase_keys() - [ISteamApps#RequestAllProofOfPurchaseKeys](https://partner.steamgames.com/doc/api/ISteamApps#RequestAllProofOfPurchaseKeys)



### <a name="apps_get_file_details"></a>steamworks.apps_get_file_details(pszFileName) - [ISteamApps#GetFileDetails](https://partner.steamgames.com/doc/api/ISteamApps#GetFileDetails)

**PARAMS**
* `pszFileName` (string)

**CALLBACK**
* `FileDetailsResult_t`

### <a name="networking_send_p2p_packet"></a>steamworks.networking_send_p2p_packet(steamIDRemote, pubData, cubData, eP2PSendType, nChannel) - [ISteamNetworking#SendP2PPacket](https://partner.steamgames.com/doc/api/ISteamNetworking#SendP2PPacket)

**PARAMS**
* `steamIDRemote` (string)
* `pubData` (string)
* `cubData` (number)
* `eP2PSendType` (EP2PSend)
* `nChannel` (number)

**RETURN**
* `r` (bool)


### <a name="networking_is_p2p_packet_available"></a>steamworks.networking_is_p2p_packet_available(pcubMsgSize, nChannel) - [ISteamNetworking#IsP2PPacketAvailable](https://partner.steamgames.com/doc/api/ISteamNetworking#IsP2PPacketAvailable)

**PARAMS**
* `pcubMsgSize` (number)
* `nChannel` (number)

**RETURN**
* `r` (bool)
* `pcubMsgSize` (uint32)


### <a name="networking_read_p2p_packet"></a>steamworks.networking_read_p2p_packet(pubDest, cubDest, pcubMsgSize, psteamIDRemote, nChannel) - [ISteamNetworking#ReadP2PPacket](https://partner.steamgames.com/doc/api/ISteamNetworking#ReadP2PPacket)

**PARAMS**
* `pubDest` (string)
* `cubDest` (number)
* `pcubMsgSize` (number)
* `psteamIDRemote` (string)
* `nChannel` (number)

**RETURN**
* `r` (bool)
* `psteamIDRemote` (CSteamID)
* `pcubMsgSize` (uint32)


### <a name="networking_accept_p2p_session_with_user"></a>steamworks.networking_accept_p2p_session_with_user(steamIDRemote) - [ISteamNetworking#AcceptP2PSessionWithUser](https://partner.steamgames.com/doc/api/ISteamNetworking#AcceptP2PSessionWithUser)

**PARAMS**
* `steamIDRemote` (string)

**RETURN**
* `r` (bool)


### <a name="networking_close_p2p_session_with_user"></a>steamworks.networking_close_p2p_session_with_user(steamIDRemote) - [ISteamNetworking#CloseP2PSessionWithUser](https://partner.steamgames.com/doc/api/ISteamNetworking#CloseP2PSessionWithUser)

**PARAMS**
* `steamIDRemote` (string)

**RETURN**
* `r` (bool)


### <a name="networking_close_p2p_channel_with_user"></a>steamworks.networking_close_p2p_channel_with_user(steamIDRemote, nChannel) - [ISteamNetworking#CloseP2PChannelWithUser](https://partner.steamgames.com/doc/api/ISteamNetworking#CloseP2PChannelWithUser)

**PARAMS**
* `steamIDRemote` (string)
* `nChannel` (number)

**RETURN**
* `r` (bool)


### <a name="networking_get_p2p_session_state"></a>steamworks.networking_get_p2p_session_state(steamIDRemote, pConnectionState) - [ISteamNetworking#GetP2PSessionState](https://partner.steamgames.com/doc/api/ISteamNetworking#GetP2PSessionState)

**PARAMS**
* `steamIDRemote` (string)
* `pConnectionState` (table)

**RETURN**
* `r` (bool)
* `pConnectionState` (struct P2PSessionState_t)


### <a name="networking_allow_p2p_packet_relay"></a>steamworks.networking_allow_p2p_packet_relay(bAllow) - [ISteamNetworking#AllowP2PPacketRelay](https://partner.steamgames.com/doc/api/ISteamNetworking#AllowP2PPacketRelay)

**PARAMS**
* `bAllow` (boolean)

**RETURN**
* `r` (bool)


### <a name="networking_create_listen_socket"></a>steamworks.networking_create_listen_socket(nVirtualP2PPort, nIP, nPort, bAllowUseOfPacketRelay) - [ISteamNetworking#CreateListenSocket](https://partner.steamgames.com/doc/api/ISteamNetworking#CreateListenSocket)

**PARAMS**
* `nVirtualP2PPort` (number)
* `nIP` (number)
* `nPort` (number)
* `bAllowUseOfPacketRelay` (boolean)

**RETURN**
* `r` (SNetListenSocket_t)


### <a name="networking_create_p2p_connection_socket"></a>steamworks.networking_create_p2p_connection_socket(steamIDTarget, nVirtualPort, nTimeoutSec, bAllowUseOfPacketRelay) - [ISteamNetworking#CreateP2PConnectionSocket](https://partner.steamgames.com/doc/api/ISteamNetworking#CreateP2PConnectionSocket)

**PARAMS**
* `steamIDTarget` (string)
* `nVirtualPort` (number)
* `nTimeoutSec` (number)
* `bAllowUseOfPacketRelay` (boolean)

**RETURN**
* `r` (SNetSocket_t)


### <a name="networking_create_connection_socket"></a>steamworks.networking_create_connection_socket(nIP, nPort, nTimeoutSec) - [ISteamNetworking#CreateConnectionSocket](https://partner.steamgames.com/doc/api/ISteamNetworking#CreateConnectionSocket)

**PARAMS**
* `nIP` (number)
* `nPort` (number)
* `nTimeoutSec` (number)

**RETURN**
* `r` (SNetSocket_t)


### <a name="networking_destroy_socket"></a>steamworks.networking_destroy_socket(hSocket, bNotifyRemoteEnd) - [ISteamNetworking#DestroySocket](https://partner.steamgames.com/doc/api/ISteamNetworking#DestroySocket)

**PARAMS**
* `hSocket` (number)
* `bNotifyRemoteEnd` (boolean)

**RETURN**
* `r` (bool)


### <a name="networking_destroy_listen_socket"></a>steamworks.networking_destroy_listen_socket(hSocket, bNotifyRemoteEnd) - [ISteamNetworking#DestroyListenSocket](https://partner.steamgames.com/doc/api/ISteamNetworking#DestroyListenSocket)

**PARAMS**
* `hSocket` (number)
* `bNotifyRemoteEnd` (boolean)

**RETURN**
* `r` (bool)


### <a name="networking_send_data_on_socket"></a>steamworks.networking_send_data_on_socket(hSocket, pubData, cubData, bReliable) - [ISteamNetworking#SendDataOnSocket](https://partner.steamgames.com/doc/api/ISteamNetworking#SendDataOnSocket)

**PARAMS**
* `hSocket` (number)
* `pubData` (string)
* `cubData` (number)
* `bReliable` (boolean)

**RETURN**
* `r` (bool)


### <a name="networking_is_data_available_on_socket"></a>steamworks.networking_is_data_available_on_socket(hSocket, pcubMsgSize) - [ISteamNetworking#IsDataAvailableOnSocket](https://partner.steamgames.com/doc/api/ISteamNetworking#IsDataAvailableOnSocket)

**PARAMS**
* `hSocket` (number)
* `pcubMsgSize` (number)

**RETURN**
* `r` (bool)
* `pcubMsgSize` (uint32)


### <a name="networking_retrieve_data_from_socket"></a>steamworks.networking_retrieve_data_from_socket(hSocket, pubDest, cubDest, pcubMsgSize) - [ISteamNetworking#RetrieveDataFromSocket](https://partner.steamgames.com/doc/api/ISteamNetworking#RetrieveDataFromSocket)

**PARAMS**
* `hSocket` (number)
* `pubDest` (string)
* `cubDest` (number)
* `pcubMsgSize` (number)

**RETURN**
* `r` (bool)
* `pcubMsgSize` (uint32)


### <a name="networking_is_data_available"></a>steamworks.networking_is_data_available(hListenSocket, pcubMsgSize, phSocket) - [ISteamNetworking#IsDataAvailable](https://partner.steamgames.com/doc/api/ISteamNetworking#IsDataAvailable)

**PARAMS**
* `hListenSocket` (number)
* `pcubMsgSize` (number)
* `phSocket` (number)

**RETURN**
* `r` (bool)
* `phSocket` (SNetSocket_t)
* `pcubMsgSize` (uint32)


### <a name="networking_retrieve_data"></a>steamworks.networking_retrieve_data(hListenSocket, pubDest, cubDest, pcubMsgSize, phSocket) - [ISteamNetworking#RetrieveData](https://partner.steamgames.com/doc/api/ISteamNetworking#RetrieveData)

**PARAMS**
* `hListenSocket` (number)
* `pubDest` (string)
* `cubDest` (number)
* `pcubMsgSize` (number)
* `phSocket` (number)

**RETURN**
* `r` (bool)
* `phSocket` (SNetSocket_t)
* `pcubMsgSize` (uint32)


### <a name="networking_get_socket_info"></a>steamworks.networking_get_socket_info(hSocket, pSteamIDRemote, peSocketStatus, punIPRemote, punPortRemote) - [ISteamNetworking#GetSocketInfo](https://partner.steamgames.com/doc/api/ISteamNetworking#GetSocketInfo)

**PARAMS**
* `hSocket` (number)
* `pSteamIDRemote` (string)
* `peSocketStatus` (number)
* `punIPRemote` (number)
* `punPortRemote` (number)

**RETURN**
* `r` (bool)
* `punPortRemote` (uint16)
* `punIPRemote` (uint32)
* `peSocketStatus` (int)
* `pSteamIDRemote` (CSteamID)


### <a name="networking_get_listen_socket_info"></a>steamworks.networking_get_listen_socket_info(hListenSocket, pnIP, pnPort) - [ISteamNetworking#GetListenSocketInfo](https://partner.steamgames.com/doc/api/ISteamNetworking#GetListenSocketInfo)

**PARAMS**
* `hListenSocket` (number)
* `pnIP` (number)
* `pnPort` (number)

**RETURN**
* `r` (bool)
* `pnPort` (uint16)
* `pnIP` (uint32)


### <a name="networking_get_socket_connection_type"></a>steamworks.networking_get_socket_connection_type(hSocket) - [ISteamNetworking#GetSocketConnectionType](https://partner.steamgames.com/doc/api/ISteamNetworking#GetSocketConnectionType)

**PARAMS**
* `hSocket` (number)

**RETURN**
* `r` (ESNetSocketConnectionType)


### <a name="networking_get_max_packet_size"></a>steamworks.networking_get_max_packet_size(hSocket) - [ISteamNetworking#GetMaxPacketSize](https://partner.steamgames.com/doc/api/ISteamNetworking#GetMaxPacketSize)

**PARAMS**
* `hSocket` (number)

**RETURN**
* `r` (int)


### <a name="music_is_enabled"></a>steamworks.music_is_enabled() - [ISteamMusic#BIsEnabled](https://partner.steamgames.com/doc/api/ISteamMusic#BIsEnabled)


**RETURN**
* `r` (bool)


### <a name="music_is_playing"></a>steamworks.music_is_playing() - [ISteamMusic#BIsPlaying](https://partner.steamgames.com/doc/api/ISteamMusic#BIsPlaying)


**RETURN**
* `r` (bool)


### <a name="music_get_playback_status"></a>steamworks.music_get_playback_status() - [ISteamMusic#GetPlaybackStatus](https://partner.steamgames.com/doc/api/ISteamMusic#GetPlaybackStatus)


**RETURN**
* `r` (AudioPlayback_Status)


### <a name="music_play"></a>steamworks.music_play() - [ISteamMusic#Play](https://partner.steamgames.com/doc/api/ISteamMusic#Play)



### <a name="music_pause"></a>steamworks.music_pause() - [ISteamMusic#Pause](https://partner.steamgames.com/doc/api/ISteamMusic#Pause)



### <a name="music_play_previous"></a>steamworks.music_play_previous() - [ISteamMusic#PlayPrevious](https://partner.steamgames.com/doc/api/ISteamMusic#PlayPrevious)



### <a name="music_play_next"></a>steamworks.music_play_next() - [ISteamMusic#PlayNext](https://partner.steamgames.com/doc/api/ISteamMusic#PlayNext)



### <a name="music_set_volume"></a>steamworks.music_set_volume(flVolume) - [ISteamMusic#SetVolume](https://partner.steamgames.com/doc/api/ISteamMusic#SetVolume)

**PARAMS**
* `flVolume` (number)


### <a name="music_get_volume"></a>steamworks.music_get_volume() - [ISteamMusic#GetVolume](https://partner.steamgames.com/doc/api/ISteamMusic#GetVolume)


**RETURN**
* `r` (float)


### <a name="ugc_create_query_user_ugc_request"></a>steamworks.ugc_create_query_user_ugc_request(unAccountID, eListType, eMatchingUGCType, eSortOrder, nCreatorAppID, nConsumerAppID, unPage) - [ISteamUGC#CreateQueryUserUGCRequest](https://partner.steamgames.com/doc/api/ISteamUGC#CreateQueryUserUGCRequest)

**PARAMS**
* `unAccountID` (number)
* `eListType` (EUserUGCList)
* `eMatchingUGCType` (EUGCMatchingUGCType)
* `eSortOrder` (EUserUGCListSortOrder)
* `nCreatorAppID` (number)
* `nConsumerAppID` (number)
* `unPage` (number)

**RETURN**
* `r` (UGCQueryHandle_t)


### <a name="ugc_create_query_all_ugc_request"></a>steamworks.ugc_create_query_all_ugc_request(eQueryType, eMatchingeMatchingUGCTypeFileType, nCreatorAppID, nConsumerAppID, unPage) - [ISteamUGC#CreateQueryAllUGCRequest](https://partner.steamgames.com/doc/api/ISteamUGC#CreateQueryAllUGCRequest)

**PARAMS**
* `eQueryType` (EUGCQuery)
* `eMatchingeMatchingUGCTypeFileType` (EUGCMatchingUGCType)
* `nCreatorAppID` (number)
* `nConsumerAppID` (number)
* `unPage` (number)

**RETURN**
* `r` (UGCQueryHandle_t)


### <a name="ugc_create_query_ugc_details_request"></a>steamworks.ugc_create_query_ugc_details_request(pvecPublishedFileID, unNumPublishedFileIDs) - [ISteamUGC#CreateQueryUGCDetailsRequest](https://partner.steamgames.com/doc/api/ISteamUGC#CreateQueryUGCDetailsRequest)

**PARAMS**
* `pvecPublishedFileID` (number)
* `unNumPublishedFileIDs` (number)

**RETURN**
* `r` (UGCQueryHandle_t)
* `pvecPublishedFileID` (PublishedFileId_t)


### <a name="ugc_send_query_ugc_request"></a>steamworks.ugc_send_query_ugc_request(handle) - [ISteamUGC#SendQueryUGCRequest](https://partner.steamgames.com/doc/api/ISteamUGC#SendQueryUGCRequest)

**PARAMS**
* `handle` (number)

**CALLBACK**
* `SteamUGCQueryCompleted_t`

### <a name="ugc_get_query_ugc_result"></a>steamworks.ugc_get_query_ugc_result(handle, index, pDetails) - [ISteamUGC#GetQueryUGCResult](https://partner.steamgames.com/doc/api/ISteamUGC#GetQueryUGCResult)

**PARAMS**
* `handle` (number)
* `index` (number)
* `pDetails` (table)

**RETURN**
* `r` (bool)
* `pDetails` (struct SteamUGCDetails_t)


### <a name="ugc_get_query_ugc_preview_url"></a>steamworks.ugc_get_query_ugc_preview_url(handle, index, pchURL, cchURLSize) - [ISteamUGC#GetQueryUGCPreviewURL](https://partner.steamgames.com/doc/api/ISteamUGC#GetQueryUGCPreviewURL)

**PARAMS**
* `handle` (number)
* `index` (number)
* `pchURL` (string)
* `cchURLSize` (number)

**RETURN**
* `r` (bool)


### <a name="ugc_get_query_ugc_metadata"></a>steamworks.ugc_get_query_ugc_metadata(handle, index, pchMetadata, cchMetadatasize) - [ISteamUGC#GetQueryUGCMetadata](https://partner.steamgames.com/doc/api/ISteamUGC#GetQueryUGCMetadata)

**PARAMS**
* `handle` (number)
* `index` (number)
* `pchMetadata` (string)
* `cchMetadatasize` (number)

**RETURN**
* `r` (bool)


### <a name="ugc_get_query_ugc_children"></a>steamworks.ugc_get_query_ugc_children(handle, index, pvecPublishedFileID, cMaxEntries) - [ISteamUGC#GetQueryUGCChildren](https://partner.steamgames.com/doc/api/ISteamUGC#GetQueryUGCChildren)

**PARAMS**
* `handle` (number)
* `index` (number)
* `pvecPublishedFileID` (number)
* `cMaxEntries` (number)

**RETURN**
* `r` (bool)
* `pvecPublishedFileID` (PublishedFileId_t)


### <a name="ugc_get_query_ugc_statistic"></a>steamworks.ugc_get_query_ugc_statistic(handle, index, eStatType, pStatValue) - [ISteamUGC#GetQueryUGCStatistic](https://partner.steamgames.com/doc/api/ISteamUGC#GetQueryUGCStatistic)

**PARAMS**
* `handle` (number)
* `index` (number)
* `eStatType` (EItemStatistic)
* `pStatValue` (string)

**RETURN**
* `r` (bool)
* `pStatValue` (uint64)


### <a name="ugc_get_query_ugc_num_additional_previews"></a>steamworks.ugc_get_query_ugc_num_additional_previews(handle, index) - [ISteamUGC#GetQueryUGCNumAdditionalPreviews](https://partner.steamgames.com/doc/api/ISteamUGC#GetQueryUGCNumAdditionalPreviews)

**PARAMS**
* `handle` (number)
* `index` (number)

**RETURN**
* `r` (uint32)


### <a name="ugc_get_query_ugc_additional_preview"></a>steamworks.ugc_get_query_ugc_additional_preview(handle, index, previewIndex, pchURLOrVideoID, cchURLSize, pchOriginalFileName, cchOriginalFileNameSize, pPreviewType) - [ISteamUGC#GetQueryUGCAdditionalPreview](https://partner.steamgames.com/doc/api/ISteamUGC#GetQueryUGCAdditionalPreview)

**PARAMS**
* `handle` (number)
* `index` (number)
* `previewIndex` (number)
* `pchURLOrVideoID` (string)
* `cchURLSize` (number)
* `pchOriginalFileName` (string)
* `cchOriginalFileNameSize` (number)
* `pPreviewType` (EItemPreviewType)

**RETURN**
* `r` (bool)
* `pPreviewType` (EItemPreviewType)


### <a name="ugc_get_query_ugc_num_key_value_tags"></a>steamworks.ugc_get_query_ugc_num_key_value_tags(handle, index) - [ISteamUGC#GetQueryUGCNumKeyValueTags](https://partner.steamgames.com/doc/api/ISteamUGC#GetQueryUGCNumKeyValueTags)

**PARAMS**
* `handle` (number)
* `index` (number)

**RETURN**
* `r` (uint32)


### <a name="ugc_get_query_ugc_key_value_tag"></a>steamworks.ugc_get_query_ugc_key_value_tag(handle, index, keyValueTagIndex, pchKey, cchKeySize, pchValue, cchValueSize) - [ISteamUGC#GetQueryUGCKeyValueTag](https://partner.steamgames.com/doc/api/ISteamUGC#GetQueryUGCKeyValueTag)

**PARAMS**
* `handle` (number)
* `index` (number)
* `keyValueTagIndex` (number)
* `pchKey` (string)
* `cchKeySize` (number)
* `pchValue` (string)
* `cchValueSize` (number)

**RETURN**
* `r` (bool)


### <a name="ugc_release_query_ugc_request"></a>steamworks.ugc_release_query_ugc_request(handle) - [ISteamUGC#ReleaseQueryUGCRequest](https://partner.steamgames.com/doc/api/ISteamUGC#ReleaseQueryUGCRequest)

**PARAMS**
* `handle` (number)

**RETURN**
* `r` (bool)


### <a name="ugc_add_required_tag"></a>steamworks.ugc_add_required_tag(handle, pTagName) - [ISteamUGC#AddRequiredTag](https://partner.steamgames.com/doc/api/ISteamUGC#AddRequiredTag)

**PARAMS**
* `handle` (number)
* `pTagName` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_add_excluded_tag"></a>steamworks.ugc_add_excluded_tag(handle, pTagName) - [ISteamUGC#AddExcludedTag](https://partner.steamgames.com/doc/api/ISteamUGC#AddExcludedTag)

**PARAMS**
* `handle` (number)
* `pTagName` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_set_return_only_i_ds"></a>steamworks.ugc_set_return_only_i_ds(handle, bReturnOnlyIDs) - [ISteamUGC#SetReturnOnlyIDs](https://partner.steamgames.com/doc/api/ISteamUGC#SetReturnOnlyIDs)

**PARAMS**
* `handle` (number)
* `bReturnOnlyIDs` (boolean)

**RETURN**
* `r` (bool)


### <a name="ugc_set_return_key_value_tags"></a>steamworks.ugc_set_return_key_value_tags(handle, bReturnKeyValueTags) - [ISteamUGC#SetReturnKeyValueTags](https://partner.steamgames.com/doc/api/ISteamUGC#SetReturnKeyValueTags)

**PARAMS**
* `handle` (number)
* `bReturnKeyValueTags` (boolean)

**RETURN**
* `r` (bool)


### <a name="ugc_set_return_long_description"></a>steamworks.ugc_set_return_long_description(handle, bReturnLongDescription) - [ISteamUGC#SetReturnLongDescription](https://partner.steamgames.com/doc/api/ISteamUGC#SetReturnLongDescription)

**PARAMS**
* `handle` (number)
* `bReturnLongDescription` (boolean)

**RETURN**
* `r` (bool)


### <a name="ugc_set_return_metadata"></a>steamworks.ugc_set_return_metadata(handle, bReturnMetadata) - [ISteamUGC#SetReturnMetadata](https://partner.steamgames.com/doc/api/ISteamUGC#SetReturnMetadata)

**PARAMS**
* `handle` (number)
* `bReturnMetadata` (boolean)

**RETURN**
* `r` (bool)


### <a name="ugc_set_return_children"></a>steamworks.ugc_set_return_children(handle, bReturnChildren) - [ISteamUGC#SetReturnChildren](https://partner.steamgames.com/doc/api/ISteamUGC#SetReturnChildren)

**PARAMS**
* `handle` (number)
* `bReturnChildren` (boolean)

**RETURN**
* `r` (bool)


### <a name="ugc_set_return_additional_previews"></a>steamworks.ugc_set_return_additional_previews(handle, bReturnAdditionalPreviews) - [ISteamUGC#SetReturnAdditionalPreviews](https://partner.steamgames.com/doc/api/ISteamUGC#SetReturnAdditionalPreviews)

**PARAMS**
* `handle` (number)
* `bReturnAdditionalPreviews` (boolean)

**RETURN**
* `r` (bool)


### <a name="ugc_set_return_total_only"></a>steamworks.ugc_set_return_total_only(handle, bReturnTotalOnly) - [ISteamUGC#SetReturnTotalOnly](https://partner.steamgames.com/doc/api/ISteamUGC#SetReturnTotalOnly)

**PARAMS**
* `handle` (number)
* `bReturnTotalOnly` (boolean)

**RETURN**
* `r` (bool)


### <a name="ugc_set_return_playtime_stats"></a>steamworks.ugc_set_return_playtime_stats(handle, unDays) - [ISteamUGC#SetReturnPlaytimeStats](https://partner.steamgames.com/doc/api/ISteamUGC#SetReturnPlaytimeStats)

**PARAMS**
* `handle` (number)
* `unDays` (number)

**RETURN**
* `r` (bool)


### <a name="ugc_set_language"></a>steamworks.ugc_set_language(handle, pchLanguage) - [ISteamUGC#SetLanguage](https://partner.steamgames.com/doc/api/ISteamUGC#SetLanguage)

**PARAMS**
* `handle` (number)
* `pchLanguage` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_set_allow_cached_response"></a>steamworks.ugc_set_allow_cached_response(handle, unMaxAgeSeconds) - [ISteamUGC#SetAllowCachedResponse](https://partner.steamgames.com/doc/api/ISteamUGC#SetAllowCachedResponse)

**PARAMS**
* `handle` (number)
* `unMaxAgeSeconds` (number)

**RETURN**
* `r` (bool)


### <a name="ugc_set_cloud_file_name_filter"></a>steamworks.ugc_set_cloud_file_name_filter(handle, pMatchCloudFileName) - [ISteamUGC#SetCloudFileNameFilter](https://partner.steamgames.com/doc/api/ISteamUGC#SetCloudFileNameFilter)

**PARAMS**
* `handle` (number)
* `pMatchCloudFileName` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_set_match_any_tag"></a>steamworks.ugc_set_match_any_tag(handle, bMatchAnyTag) - [ISteamUGC#SetMatchAnyTag](https://partner.steamgames.com/doc/api/ISteamUGC#SetMatchAnyTag)

**PARAMS**
* `handle` (number)
* `bMatchAnyTag` (boolean)

**RETURN**
* `r` (bool)


### <a name="ugc_set_search_text"></a>steamworks.ugc_set_search_text(handle, pSearchText) - [ISteamUGC#SetSearchText](https://partner.steamgames.com/doc/api/ISteamUGC#SetSearchText)

**PARAMS**
* `handle` (number)
* `pSearchText` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_set_ranked_by_trend_days"></a>steamworks.ugc_set_ranked_by_trend_days(handle, unDays) - [ISteamUGC#SetRankedByTrendDays](https://partner.steamgames.com/doc/api/ISteamUGC#SetRankedByTrendDays)

**PARAMS**
* `handle` (number)
* `unDays` (number)

**RETURN**
* `r` (bool)


### <a name="ugc_add_required_key_value_tag"></a>steamworks.ugc_add_required_key_value_tag(handle, pKey, pValue) - [ISteamUGC#AddRequiredKeyValueTag](https://partner.steamgames.com/doc/api/ISteamUGC#AddRequiredKeyValueTag)

**PARAMS**
* `handle` (number)
* `pKey` (string)
* `pValue` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_request_ugc_details"></a>steamworks.ugc_request_ugc_details(nPublishedFileID, unMaxAgeSeconds) - [ISteamUGC#RequestUGCDetails](https://partner.steamgames.com/doc/api/ISteamUGC#RequestUGCDetails)

**PARAMS**
* `nPublishedFileID` (number)
* `unMaxAgeSeconds` (number)

**CALLBACK**
* `SteamUGCRequestUGCDetailsResult_t`

### <a name="ugc_create_item"></a>steamworks.ugc_create_item(nConsumerAppId, eFileType) - [ISteamUGC#CreateItem](https://partner.steamgames.com/doc/api/ISteamUGC#CreateItem)

**PARAMS**
* `nConsumerAppId` (number)
* `eFileType` (EWorkshopFileType)

**CALLBACK**
* `CreateItemResult_t`

### <a name="ugc_start_item_update"></a>steamworks.ugc_start_item_update(nConsumerAppId, nPublishedFileID) - [ISteamUGC#StartItemUpdate](https://partner.steamgames.com/doc/api/ISteamUGC#StartItemUpdate)

**PARAMS**
* `nConsumerAppId` (number)
* `nPublishedFileID` (number)

**RETURN**
* `r` (UGCUpdateHandle_t)


### <a name="ugc_set_item_title"></a>steamworks.ugc_set_item_title(handle, pchTitle) - [ISteamUGC#SetItemTitle](https://partner.steamgames.com/doc/api/ISteamUGC#SetItemTitle)

**PARAMS**
* `handle` (number)
* `pchTitle` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_set_item_description"></a>steamworks.ugc_set_item_description(handle, pchDescription) - [ISteamUGC#SetItemDescription](https://partner.steamgames.com/doc/api/ISteamUGC#SetItemDescription)

**PARAMS**
* `handle` (number)
* `pchDescription` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_set_item_update_language"></a>steamworks.ugc_set_item_update_language(handle, pchLanguage) - [ISteamUGC#SetItemUpdateLanguage](https://partner.steamgames.com/doc/api/ISteamUGC#SetItemUpdateLanguage)

**PARAMS**
* `handle` (number)
* `pchLanguage` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_set_item_metadata"></a>steamworks.ugc_set_item_metadata(handle, pchMetaData) - [ISteamUGC#SetItemMetadata](https://partner.steamgames.com/doc/api/ISteamUGC#SetItemMetadata)

**PARAMS**
* `handle` (number)
* `pchMetaData` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_set_item_visibility"></a>steamworks.ugc_set_item_visibility(handle, eVisibility) - [ISteamUGC#SetItemVisibility](https://partner.steamgames.com/doc/api/ISteamUGC#SetItemVisibility)

**PARAMS**
* `handle` (number)
* `eVisibility` (ERemoteStoragePublishedFileVisibility)

**RETURN**
* `r` (bool)


### <a name="ugc_set_item_tags"></a>steamworks.ugc_set_item_tags(updateHandle, pTags) - [ISteamUGC#SetItemTags](https://partner.steamgames.com/doc/api/ISteamUGC#SetItemTags)

**PARAMS**
* `updateHandle` (number)
* `pTags` (table)

**RETURN**
* `r` (bool)


### <a name="ugc_set_item_content"></a>steamworks.ugc_set_item_content(handle, pszContentFolder) - [ISteamUGC#SetItemContent](https://partner.steamgames.com/doc/api/ISteamUGC#SetItemContent)

**PARAMS**
* `handle` (number)
* `pszContentFolder` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_set_item_preview"></a>steamworks.ugc_set_item_preview(handle, pszPreviewFile) - [ISteamUGC#SetItemPreview](https://partner.steamgames.com/doc/api/ISteamUGC#SetItemPreview)

**PARAMS**
* `handle` (number)
* `pszPreviewFile` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_remove_item_key_value_tags"></a>steamworks.ugc_remove_item_key_value_tags(handle, pchKey) - [ISteamUGC#RemoveItemKeyValueTags](https://partner.steamgames.com/doc/api/ISteamUGC#RemoveItemKeyValueTags)

**PARAMS**
* `handle` (number)
* `pchKey` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_add_item_key_value_tag"></a>steamworks.ugc_add_item_key_value_tag(handle, pchKey, pchValue) - [ISteamUGC#AddItemKeyValueTag](https://partner.steamgames.com/doc/api/ISteamUGC#AddItemKeyValueTag)

**PARAMS**
* `handle` (number)
* `pchKey` (string)
* `pchValue` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_add_item_preview_file"></a>steamworks.ugc_add_item_preview_file(handle, pszPreviewFile, type) - [ISteamUGC#AddItemPreviewFile](https://partner.steamgames.com/doc/api/ISteamUGC#AddItemPreviewFile)

**PARAMS**
* `handle` (number)
* `pszPreviewFile` (string)
* `type` (EItemPreviewType)

**RETURN**
* `r` (bool)


### <a name="ugc_add_item_preview_video"></a>steamworks.ugc_add_item_preview_video(handle, pszVideoID) - [ISteamUGC#AddItemPreviewVideo](https://partner.steamgames.com/doc/api/ISteamUGC#AddItemPreviewVideo)

**PARAMS**
* `handle` (number)
* `pszVideoID` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_update_item_preview_file"></a>steamworks.ugc_update_item_preview_file(handle, index, pszPreviewFile) - [ISteamUGC#UpdateItemPreviewFile](https://partner.steamgames.com/doc/api/ISteamUGC#UpdateItemPreviewFile)

**PARAMS**
* `handle` (number)
* `index` (number)
* `pszPreviewFile` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_update_item_preview_video"></a>steamworks.ugc_update_item_preview_video(handle, index, pszVideoID) - [ISteamUGC#UpdateItemPreviewVideo](https://partner.steamgames.com/doc/api/ISteamUGC#UpdateItemPreviewVideo)

**PARAMS**
* `handle` (number)
* `index` (number)
* `pszVideoID` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_remove_item_preview"></a>steamworks.ugc_remove_item_preview(handle, index) - [ISteamUGC#RemoveItemPreview](https://partner.steamgames.com/doc/api/ISteamUGC#RemoveItemPreview)

**PARAMS**
* `handle` (number)
* `index` (number)

**RETURN**
* `r` (bool)


### <a name="ugc_submit_item_update"></a>steamworks.ugc_submit_item_update(handle, pchChangeNote) - [ISteamUGC#SubmitItemUpdate](https://partner.steamgames.com/doc/api/ISteamUGC#SubmitItemUpdate)

**PARAMS**
* `handle` (number)
* `pchChangeNote` (string)

**CALLBACK**
* `SubmitItemUpdateResult_t`

### <a name="ugc_get_item_update_progress"></a>steamworks.ugc_get_item_update_progress(handle, punBytesProcessed, punBytesTotal) - [ISteamUGC#GetItemUpdateProgress](https://partner.steamgames.com/doc/api/ISteamUGC#GetItemUpdateProgress)

**PARAMS**
* `handle` (number)
* `punBytesProcessed` (string)
* `punBytesTotal` (string)

**RETURN**
* `r` (EItemUpdateStatus)
* `punBytesTotal` (uint64)
* `punBytesProcessed` (uint64)


### <a name="ugc_set_user_item_vote"></a>steamworks.ugc_set_user_item_vote(nPublishedFileID, bVoteUp) - [ISteamUGC#SetUserItemVote](https://partner.steamgames.com/doc/api/ISteamUGC#SetUserItemVote)

**PARAMS**
* `nPublishedFileID` (number)
* `bVoteUp` (boolean)

**CALLBACK**
* `SetUserItemVoteResult_t`

### <a name="ugc_get_user_item_vote"></a>steamworks.ugc_get_user_item_vote(nPublishedFileID) - [ISteamUGC#GetUserItemVote](https://partner.steamgames.com/doc/api/ISteamUGC#GetUserItemVote)

**PARAMS**
* `nPublishedFileID` (number)

**CALLBACK**
* `GetUserItemVoteResult_t`

### <a name="ugc_add_item_to_favorites"></a>steamworks.ugc_add_item_to_favorites(nAppId, nPublishedFileID) - [ISteamUGC#AddItemToFavorites](https://partner.steamgames.com/doc/api/ISteamUGC#AddItemToFavorites)

**PARAMS**
* `nAppId` (number)
* `nPublishedFileID` (number)

**CALLBACK**
* `UserFavoriteItemsListChanged_t`

### <a name="ugc_remove_item_from_favorites"></a>steamworks.ugc_remove_item_from_favorites(nAppId, nPublishedFileID) - [ISteamUGC#RemoveItemFromFavorites](https://partner.steamgames.com/doc/api/ISteamUGC#RemoveItemFromFavorites)

**PARAMS**
* `nAppId` (number)
* `nPublishedFileID` (number)

**CALLBACK**
* `UserFavoriteItemsListChanged_t`

### <a name="ugc_subscribe_item"></a>steamworks.ugc_subscribe_item(nPublishedFileID) - [ISteamUGC#SubscribeItem](https://partner.steamgames.com/doc/api/ISteamUGC#SubscribeItem)

**PARAMS**
* `nPublishedFileID` (number)

**CALLBACK**
* `RemoteStorageSubscribePublishedFileResult_t`

### <a name="ugc_unsubscribe_item"></a>steamworks.ugc_unsubscribe_item(nPublishedFileID) - [ISteamUGC#UnsubscribeItem](https://partner.steamgames.com/doc/api/ISteamUGC#UnsubscribeItem)

**PARAMS**
* `nPublishedFileID` (number)

**CALLBACK**
* `RemoteStorageUnsubscribePublishedFileResult_t`

### <a name="ugc_get_num_subscribed_items"></a>steamworks.ugc_get_num_subscribed_items() - [ISteamUGC#GetNumSubscribedItems](https://partner.steamgames.com/doc/api/ISteamUGC#GetNumSubscribedItems)


**RETURN**
* `r` (uint32)


### <a name="ugc_get_subscribed_items"></a>steamworks.ugc_get_subscribed_items(pvecPublishedFileID, cMaxEntries) - [ISteamUGC#GetSubscribedItems](https://partner.steamgames.com/doc/api/ISteamUGC#GetSubscribedItems)

**PARAMS**
* `pvecPublishedFileID` (number)
* `cMaxEntries` (number)

**RETURN**
* `r` (uint32)
* `pvecPublishedFileID` (PublishedFileId_t)


### <a name="ugc_get_item_state"></a>steamworks.ugc_get_item_state(nPublishedFileID) - [ISteamUGC#GetItemState](https://partner.steamgames.com/doc/api/ISteamUGC#GetItemState)

**PARAMS**
* `nPublishedFileID` (number)

**RETURN**
* `r` (uint32)


### <a name="ugc_get_item_install_info"></a>steamworks.ugc_get_item_install_info(nPublishedFileID, punSizeOnDisk, pchFolder, cchFolderSize, punTimeStamp) - [ISteamUGC#GetItemInstallInfo](https://partner.steamgames.com/doc/api/ISteamUGC#GetItemInstallInfo)

**PARAMS**
* `nPublishedFileID` (number)
* `punSizeOnDisk` (string)
* `pchFolder` (string)
* `cchFolderSize` (number)
* `punTimeStamp` (number)

**RETURN**
* `r` (bool)
* `punTimeStamp` (uint32)
* `punSizeOnDisk` (uint64)


### <a name="ugc_get_item_download_info"></a>steamworks.ugc_get_item_download_info(nPublishedFileID, punBytesDownloaded, punBytesTotal) - [ISteamUGC#GetItemDownloadInfo](https://partner.steamgames.com/doc/api/ISteamUGC#GetItemDownloadInfo)

**PARAMS**
* `nPublishedFileID` (number)
* `punBytesDownloaded` (string)
* `punBytesTotal` (string)

**RETURN**
* `r` (bool)
* `punBytesTotal` (uint64)
* `punBytesDownloaded` (uint64)


### <a name="ugc_download_item"></a>steamworks.ugc_download_item(nPublishedFileID, bHighPriority) - [ISteamUGC#DownloadItem](https://partner.steamgames.com/doc/api/ISteamUGC#DownloadItem)

**PARAMS**
* `nPublishedFileID` (number)
* `bHighPriority` (boolean)

**RETURN**
* `r` (bool)


### <a name="ugc_init_workshop_for_game_server"></a>steamworks.ugc_init_workshop_for_game_server(unWorkshopDepotID, pszFolder) - [ISteamUGC#BInitWorkshopForGameServer](https://partner.steamgames.com/doc/api/ISteamUGC#BInitWorkshopForGameServer)

**PARAMS**
* `unWorkshopDepotID` (number)
* `pszFolder` (string)

**RETURN**
* `r` (bool)


### <a name="ugc_suspend_downloads"></a>steamworks.ugc_suspend_downloads(bSuspend) - [ISteamUGC#SuspendDownloads](https://partner.steamgames.com/doc/api/ISteamUGC#SuspendDownloads)

**PARAMS**
* `bSuspend` (boolean)


### <a name="ugc_start_playtime_tracking"></a>steamworks.ugc_start_playtime_tracking(pvecPublishedFileID, unNumPublishedFileIDs) - [ISteamUGC#StartPlaytimeTracking](https://partner.steamgames.com/doc/api/ISteamUGC#StartPlaytimeTracking)

**PARAMS**
* `pvecPublishedFileID` (number)
* `unNumPublishedFileIDs` (number)

**CALLBACK**
* `StartPlaytimeTrackingResult_t`

### <a name="ugc_stop_playtime_tracking"></a>steamworks.ugc_stop_playtime_tracking(pvecPublishedFileID, unNumPublishedFileIDs) - [ISteamUGC#StopPlaytimeTracking](https://partner.steamgames.com/doc/api/ISteamUGC#StopPlaytimeTracking)

**PARAMS**
* `pvecPublishedFileID` (number)
* `unNumPublishedFileIDs` (number)

**CALLBACK**
* `StopPlaytimeTrackingResult_t`

### <a name="ugc_stop_playtime_tracking_for_all_items"></a>steamworks.ugc_stop_playtime_tracking_for_all_items() - [ISteamUGC#StopPlaytimeTrackingForAllItems](https://partner.steamgames.com/doc/api/ISteamUGC#StopPlaytimeTrackingForAllItems)


**CALLBACK**
* `StopPlaytimeTrackingResult_t`

### <a name="ugc_add_dependency"></a>steamworks.ugc_add_dependency(nParentPublishedFileID, nChildPublishedFileID) - [ISteamUGC#AddDependency](https://partner.steamgames.com/doc/api/ISteamUGC#AddDependency)

**PARAMS**
* `nParentPublishedFileID` (number)
* `nChildPublishedFileID` (number)

**CALLBACK**
* `AddUGCDependencyResult_t`

### <a name="ugc_remove_dependency"></a>steamworks.ugc_remove_dependency(nParentPublishedFileID, nChildPublishedFileID) - [ISteamUGC#RemoveDependency](https://partner.steamgames.com/doc/api/ISteamUGC#RemoveDependency)

**PARAMS**
* `nParentPublishedFileID` (number)
* `nChildPublishedFileID` (number)

**CALLBACK**
* `RemoveUGCDependencyResult_t`

### <a name="ugc_add_app_dependency"></a>steamworks.ugc_add_app_dependency(nPublishedFileID, nAppID) - [ISteamUGC#AddAppDependency](https://partner.steamgames.com/doc/api/ISteamUGC#AddAppDependency)

**PARAMS**
* `nPublishedFileID` (number)
* `nAppID` (number)

**CALLBACK**
* `AddAppDependencyResult_t`

### <a name="ugc_remove_app_dependency"></a>steamworks.ugc_remove_app_dependency(nPublishedFileID, nAppID) - [ISteamUGC#RemoveAppDependency](https://partner.steamgames.com/doc/api/ISteamUGC#RemoveAppDependency)

**PARAMS**
* `nPublishedFileID` (number)
* `nAppID` (number)

**CALLBACK**
* `RemoveAppDependencyResult_t`

### <a name="ugc_get_app_dependencies"></a>steamworks.ugc_get_app_dependencies(nPublishedFileID) - [ISteamUGC#GetAppDependencies](https://partner.steamgames.com/doc/api/ISteamUGC#GetAppDependencies)

**PARAMS**
* `nPublishedFileID` (number)

**CALLBACK**
* `GetAppDependenciesResult_t`

### <a name="ugc_delete_item"></a>steamworks.ugc_delete_item(nPublishedFileID) - [ISteamUGC#DeleteItem](https://partner.steamgames.com/doc/api/ISteamUGC#DeleteItem)

**PARAMS**
* `nPublishedFileID` (number)

**CALLBACK**
* `DeleteItemResult_t`

### <a name="inventory_get_result_status"></a>steamworks.inventory_get_result_status(resultHandle) - [ISteamInventory#GetResultStatus](https://partner.steamgames.com/doc/api/ISteamInventory#GetResultStatus)

**PARAMS**
* `resultHandle` (number)

**RETURN**
* `r` (EResult)


### <a name="inventory_get_result_items"></a>steamworks.inventory_get_result_items(resultHandle, pOutItemsArray, punOutItemsArraySize) - [ISteamInventory#GetResultItems](https://partner.steamgames.com/doc/api/ISteamInventory#GetResultItems)

**PARAMS**
* `resultHandle` (number)
* `pOutItemsArray` (table)
* `punOutItemsArraySize` (number)

**RETURN**
* `r` (bool)
* `punOutItemsArraySize` (uint32)
* `pOutItemsArray` (table) punOutItemsArraySize


### <a name="inventory_get_result_item_property"></a>steamworks.inventory_get_result_item_property(resultHandle, unItemIndex, pchPropertyName, pchValueBuffer, punValueBufferSizeOut) - [ISteamInventory#GetResultItemProperty](https://partner.steamgames.com/doc/api/ISteamInventory#GetResultItemProperty)

**PARAMS**
* `resultHandle` (number)
* `unItemIndex` (number)
* `pchPropertyName` (string)
* `pchValueBuffer` (string)
* `punValueBufferSizeOut` (number)

**RETURN**
* `r` (bool)
* `punValueBufferSizeOut` (uint32)


### <a name="inventory_get_result_timestamp"></a>steamworks.inventory_get_result_timestamp(resultHandle) - [ISteamInventory#GetResultTimestamp](https://partner.steamgames.com/doc/api/ISteamInventory#GetResultTimestamp)

**PARAMS**
* `resultHandle` (number)

**RETURN**
* `r` (uint32)


### <a name="inventory_check_result_steam_id"></a>steamworks.inventory_check_result_steam_id(resultHandle, steamIDExpected) - [ISteamInventory#CheckResultSteamID](https://partner.steamgames.com/doc/api/ISteamInventory#CheckResultSteamID)

**PARAMS**
* `resultHandle` (number)
* `steamIDExpected` (string)

**RETURN**
* `r` (bool)


### <a name="inventory_destroy_result"></a>steamworks.inventory_destroy_result(resultHandle) - [ISteamInventory#DestroyResult](https://partner.steamgames.com/doc/api/ISteamInventory#DestroyResult)

**PARAMS**
* `resultHandle` (number)


### <a name="inventory_get_all_items"></a>steamworks.inventory_get_all_items(pResultHandle) - [ISteamInventory#GetAllItems](https://partner.steamgames.com/doc/api/ISteamInventory#GetAllItems)

**PARAMS**
* `pResultHandle` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_get_items_by_id"></a>steamworks.inventory_get_items_by_id(pResultHandle, pInstanceIDs, unCountInstanceIDs) - [ISteamInventory#GetItemsByID](https://partner.steamgames.com/doc/api/ISteamInventory#GetItemsByID)

**PARAMS**
* `pResultHandle` (number)
* `pInstanceIDs` (number)
* `unCountInstanceIDs` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_serialize_result"></a>steamworks.inventory_serialize_result(resultHandle, pOutBuffer, punOutBufferSize) - [ISteamInventory#SerializeResult](https://partner.steamgames.com/doc/api/ISteamInventory#SerializeResult)

**PARAMS**
* `resultHandle` (number)
* `pOutBuffer` (string)
* `punOutBufferSize` (number)

**RETURN**
* `r` (bool)
* `punOutBufferSize` (uint32)


### <a name="inventory_deserialize_result"></a>steamworks.inventory_deserialize_result(pOutResultHandle, pBuffer, unBufferSize, bRESERVED_MUST_BE_FALSE) - [ISteamInventory#DeserializeResult](https://partner.steamgames.com/doc/api/ISteamInventory#DeserializeResult)

**PARAMS**
* `pOutResultHandle` (number)
* `pBuffer` (string)
* `unBufferSize` (number)
* `bRESERVED_MUST_BE_FALSE` (boolean)

**RETURN**
* `r` (bool)
* `pOutResultHandle` (SteamInventoryResult_t)


### <a name="inventory_generate_items"></a>steamworks.inventory_generate_items(pResultHandle, pArrayItemDefs, punArrayQuantity, unArrayLength) - [ISteamInventory#GenerateItems](https://partner.steamgames.com/doc/api/ISteamInventory#GenerateItems)

**PARAMS**
* `pResultHandle` (number)
* `pArrayItemDefs` (number)
* `punArrayQuantity` (number)
* `unArrayLength` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_grant_promo_items"></a>steamworks.inventory_grant_promo_items(pResultHandle) - [ISteamInventory#GrantPromoItems](https://partner.steamgames.com/doc/api/ISteamInventory#GrantPromoItems)

**PARAMS**
* `pResultHandle` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_add_promo_item"></a>steamworks.inventory_add_promo_item(pResultHandle, itemDef) - [ISteamInventory#AddPromoItem](https://partner.steamgames.com/doc/api/ISteamInventory#AddPromoItem)

**PARAMS**
* `pResultHandle` (number)
* `itemDef` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_add_promo_items"></a>steamworks.inventory_add_promo_items(pResultHandle, pArrayItemDefs, unArrayLength) - [ISteamInventory#AddPromoItems](https://partner.steamgames.com/doc/api/ISteamInventory#AddPromoItems)

**PARAMS**
* `pResultHandle` (number)
* `pArrayItemDefs` (number)
* `unArrayLength` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_consume_item"></a>steamworks.inventory_consume_item(pResultHandle, itemConsume, unQuantity) - [ISteamInventory#ConsumeItem](https://partner.steamgames.com/doc/api/ISteamInventory#ConsumeItem)

**PARAMS**
* `pResultHandle` (number)
* `itemConsume` (number)
* `unQuantity` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_exchange_items"></a>steamworks.inventory_exchange_items(pResultHandle, pArrayGenerate, punArrayGenerateQuantity, unArrayGenerateLength, pArrayDestroy, punArrayDestroyQuantity, unArrayDestroyLength) - [ISteamInventory#ExchangeItems](https://partner.steamgames.com/doc/api/ISteamInventory#ExchangeItems)

**PARAMS**
* `pResultHandle` (number)
* `pArrayGenerate` (number)
* `punArrayGenerateQuantity` (number)
* `unArrayGenerateLength` (number)
* `pArrayDestroy` (number)
* `punArrayDestroyQuantity` (number)
* `unArrayDestroyLength` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_transfer_item_quantity"></a>steamworks.inventory_transfer_item_quantity(pResultHandle, itemIdSource, unQuantity, itemIdDest) - [ISteamInventory#TransferItemQuantity](https://partner.steamgames.com/doc/api/ISteamInventory#TransferItemQuantity)

**PARAMS**
* `pResultHandle` (number)
* `itemIdSource` (number)
* `unQuantity` (number)
* `itemIdDest` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_send_item_drop_heartbeat"></a>steamworks.inventory_send_item_drop_heartbeat() - [ISteamInventory#SendItemDropHeartbeat](https://partner.steamgames.com/doc/api/ISteamInventory#SendItemDropHeartbeat)



### <a name="inventory_trigger_item_drop"></a>steamworks.inventory_trigger_item_drop(pResultHandle, dropListDefinition) - [ISteamInventory#TriggerItemDrop](https://partner.steamgames.com/doc/api/ISteamInventory#TriggerItemDrop)

**PARAMS**
* `pResultHandle` (number)
* `dropListDefinition` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_trade_items"></a>steamworks.inventory_trade_items(pResultHandle, steamIDTradePartner, pArrayGive, pArrayGiveQuantity, nArrayGiveLength, pArrayGet, pArrayGetQuantity, nArrayGetLength) - [ISteamInventory#TradeItems](https://partner.steamgames.com/doc/api/ISteamInventory#TradeItems)

**PARAMS**
* `pResultHandle` (number)
* `steamIDTradePartner` (string)
* `pArrayGive` (number)
* `pArrayGiveQuantity` (number)
* `nArrayGiveLength` (number)
* `pArrayGet` (number)
* `pArrayGetQuantity` (number)
* `nArrayGetLength` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)


### <a name="inventory_load_item_definitions"></a>steamworks.inventory_load_item_definitions() - [ISteamInventory#LoadItemDefinitions](https://partner.steamgames.com/doc/api/ISteamInventory#LoadItemDefinitions)


**RETURN**
* `r` (bool)


### <a name="inventory_get_item_definition_i_ds"></a>steamworks.inventory_get_item_definition_i_ds(pItemDefIDs, punItemDefIDsArraySize) - [ISteamInventory#GetItemDefinitionIDs](https://partner.steamgames.com/doc/api/ISteamInventory#GetItemDefinitionIDs)

**PARAMS**
* `pItemDefIDs` (number)
* `punItemDefIDsArraySize` (number)

**RETURN**
* `r` (bool)
* `punItemDefIDsArraySize` (uint32)
* `pItemDefIDs` (table) punItemDefIDsArraySize


### <a name="inventory_get_item_definition_property"></a>steamworks.inventory_get_item_definition_property(iDefinition, pchPropertyName, pchValueBuffer, punValueBufferSizeOut) - [ISteamInventory#GetItemDefinitionProperty](https://partner.steamgames.com/doc/api/ISteamInventory#GetItemDefinitionProperty)

**PARAMS**
* `iDefinition` (number)
* `pchPropertyName` (string)
* `pchValueBuffer` (string)
* `punValueBufferSizeOut` (number)

**RETURN**
* `r` (bool)
* `punValueBufferSizeOut` (uint32)


### <a name="inventory_request_eligible_promo_item_definitions_i_ds"></a>steamworks.inventory_request_eligible_promo_item_definitions_i_ds(steamID) - [ISteamInventory#RequestEligiblePromoItemDefinitionsIDs](https://partner.steamgames.com/doc/api/ISteamInventory#RequestEligiblePromoItemDefinitionsIDs)

**PARAMS**
* `steamID` (string)

**CALLBACK**
* `SteamInventoryEligiblePromoItemDefIDs_t`

### <a name="inventory_get_eligible_promo_item_definition_i_ds"></a>steamworks.inventory_get_eligible_promo_item_definition_i_ds(steamID, pItemDefIDs, punItemDefIDsArraySize) - [ISteamInventory#GetEligiblePromoItemDefinitionIDs](https://partner.steamgames.com/doc/api/ISteamInventory#GetEligiblePromoItemDefinitionIDs)

**PARAMS**
* `steamID` (string)
* `pItemDefIDs` (number)
* `punItemDefIDsArraySize` (number)

**RETURN**
* `r` (bool)
* `punItemDefIDsArraySize` (uint32)
* `pItemDefIDs` (table) punItemDefIDsArraySize


### <a name="inventory_start_purchase"></a>steamworks.inventory_start_purchase(pArrayItemDefs, punArrayQuantity, unArrayLength) - [ISteamInventory#StartPurchase](https://partner.steamgames.com/doc/api/ISteamInventory#StartPurchase)

**PARAMS**
* `pArrayItemDefs` (number)
* `punArrayQuantity` (number)
* `unArrayLength` (number)

**CALLBACK**
* `SteamInventoryStartPurchaseResult_t`

### <a name="inventory_request_prices"></a>steamworks.inventory_request_prices() - [ISteamInventory#RequestPrices](https://partner.steamgames.com/doc/api/ISteamInventory#RequestPrices)


**CALLBACK**
* `SteamInventoryRequestPricesResult_t`

### <a name="inventory_get_num_items_with_prices"></a>steamworks.inventory_get_num_items_with_prices() - [ISteamInventory#GetNumItemsWithPrices](https://partner.steamgames.com/doc/api/ISteamInventory#GetNumItemsWithPrices)


**RETURN**
* `r` (uint32)


### <a name="inventory_get_items_with_prices"></a>steamworks.inventory_get_items_with_prices(pArrayItemDefs, pPrices, unArrayLength) - [ISteamInventory#GetItemsWithPrices](https://partner.steamgames.com/doc/api/ISteamInventory#GetItemsWithPrices)

**PARAMS**
* `pArrayItemDefs` (number)
* `pPrices` (string)
* `unArrayLength` (number)

**RETURN**
* `r` (bool)
* `pArrayItemDefs` (table) unArrayLength
* `pPrices` (table) unArrayLength


### <a name="inventory_get_item_price"></a>steamworks.inventory_get_item_price(iDefinition, pPrice) - [ISteamInventory#GetItemPrice](https://partner.steamgames.com/doc/api/ISteamInventory#GetItemPrice)

**PARAMS**
* `iDefinition` (number)
* `pPrice` (string)

**RETURN**
* `r` (bool)
* `pPrice` (uint64)


### <a name="inventory_start_update_properties"></a>steamworks.inventory_start_update_properties() - [ISteamInventory#StartUpdateProperties](https://partner.steamgames.com/doc/api/ISteamInventory#StartUpdateProperties)


**RETURN**
* `r` (SteamInventoryUpdateHandle_t)


### <a name="inventory_remove_property"></a>steamworks.inventory_remove_property(handle, nItemID, pchPropertyName) - [ISteamInventory#RemoveProperty](https://partner.steamgames.com/doc/api/ISteamInventory#RemoveProperty)

**PARAMS**
* `handle` (number)
* `nItemID` (number)
* `pchPropertyName` (string)

**RETURN**
* `r` (bool)


### <a name="inventory_set_property_string"></a>steamworks.inventory_set_property_string(handle, nItemID, pchPropertyName, pchPropertyValue) - [ISteamInventory#SetProperty](https://partner.steamgames.com/doc/api/ISteamInventory#SetProperty)

**PARAMS**
* `handle` (number)
* `nItemID` (number)
* `pchPropertyName` (string)
* `pchPropertyValue` (string)

**RETURN**
* `r` (bool)


### <a name="inventory_set_property_bool"></a>steamworks.inventory_set_property_bool(handle, nItemID, pchPropertyName, bValue) - [ISteamInventory#SetProperty](https://partner.steamgames.com/doc/api/ISteamInventory#SetProperty)

**PARAMS**
* `handle` (number)
* `nItemID` (number)
* `pchPropertyName` (string)
* `bValue` (boolean)

**RETURN**
* `r` (bool)


### <a name="inventory_set_property_int"></a>steamworks.inventory_set_property_int(handle, nItemID, pchPropertyName, nValue) - [ISteamInventory#SetProperty](https://partner.steamgames.com/doc/api/ISteamInventory#SetProperty)

**PARAMS**
* `handle` (number)
* `nItemID` (number)
* `pchPropertyName` (string)
* `nValue` (string)

**RETURN**
* `r` (bool)


### <a name="inventory_set_property_float"></a>steamworks.inventory_set_property_float(handle, nItemID, pchPropertyName, flValue) - [ISteamInventory#SetProperty](https://partner.steamgames.com/doc/api/ISteamInventory#SetProperty)

**PARAMS**
* `handle` (number)
* `nItemID` (number)
* `pchPropertyName` (string)
* `flValue` (number)

**RETURN**
* `r` (bool)


### <a name="inventory_submit_update_properties"></a>steamworks.inventory_submit_update_properties(handle, pResultHandle) - [ISteamInventory#SubmitUpdateProperties](https://partner.steamgames.com/doc/api/ISteamInventory#SubmitUpdateProperties)

**PARAMS**
* `handle` (number)
* `pResultHandle` (number)

**RETURN**
* `r` (bool)
* `pResultHandle` (SteamInventoryResult_t)



## <a name="callresults">Call results
The extension will pass all call results to the listener function:

    steamworks.set_listener(function(self, e, t)
        print(e)
        pprint(t)
    end)

* EncryptedAppTicketResponse_t (callresult)
* StoreAuthURLResponse_t (callresult)
* ClanOfficerListResponse_t (callresult)
* DownloadClanActivityCountsResult_t (callresult)
* JoinClanChatRoomCompletionResult_t (callresult)
* FriendsGetFollowerCount_t (callresult)
* FriendsIsFollowing_t (callresult)
* FriendsEnumerateFollowingList_t (callresult)
* SetPersonaNameResponse_t (callresult)
* CheckFileSignature_t (callresult)
* LobbyEnter_t (callresult)
* LobbyMatchList_t (callresult)
* LobbyCreated_t (callresult)
* RemoteStorageFileShareResult_t (callresult)
* RemoteStorageSubscribePublishedFileResult_t (callresult)
* RemoteStorageUnsubscribePublishedFileResult_t (callresult)
* RemoteStorageDownloadUGCResult_t (callresult)
* RemoteStorageFileWriteAsyncComplete_t (callresult)
* RemoteStorageFileReadAsyncComplete_t (callresult)
* UserStatsReceived_t (callresult)
* LeaderboardFindResult_t (callresult)
* LeaderboardScoresDownloaded_t (callresult)
* LeaderboardScoreUploaded_t (callresult)
* NumberOfCurrentPlayers_t (callresult)
* GlobalAchievementPercentagesReady_t (callresult)
* LeaderboardUGCSet_t (callresult)
* GlobalStatsReceived_t (callresult)
* FileDetailsResult_t (callresult)
* SteamUGCQueryCompleted_t (callresult)
* SteamUGCRequestUGCDetailsResult_t (callresult)
* CreateItemResult_t (callresult)
* SubmitItemUpdateResult_t (callresult)
* UserFavoriteItemsListChanged_t (callresult)
* SetUserItemVoteResult_t (callresult)
* GetUserItemVoteResult_t (callresult)
* StartPlaytimeTrackingResult_t (callresult)
* StopPlaytimeTrackingResult_t (callresult)
* AddUGCDependencyResult_t (callresult)
* RemoveUGCDependencyResult_t (callresult)
* AddAppDependencyResult_t (callresult)
* RemoveAppDependencyResult_t (callresult)
* GetAppDependenciesResult_t (callresult)
* DeleteItemResult_t (callresult)
* SteamInventoryEligiblePromoItemDefIDs_t (callresult)
* SteamInventoryStartPurchaseResult_t (callresult)
* SteamInventoryRequestPricesResult_t (callresult)


## <a name="callbacks">Callbacks
The extension will pass all callbacks to the listener function:

    steamworks.set_listener(function(self, e, t)
        print(e)
        pprint(t)
    end)

* PersonaStateChange_t (callback)
* GameOverlayActivated_t (callback)
* UserStatsReceived_t (callback)

## <a name="enums">Enums
The extension exports the following enums:

### EUniverse
* steamworks.UNIVERSE_INVALID 0
* steamworks.UNIVERSE_PUBLIC 1
* steamworks.UNIVERSE_BETA 2
* steamworks.UNIVERSE_INTERNAL 3
* steamworks.UNIVERSE_DEV 4
* steamworks.UNIVERSE_MAX 5

### EResult
* steamworks.RESULT_OK 1
* steamworks.RESULT_FAIL 2
* steamworks.RESULT_NO_CONNECTION 3
* steamworks.RESULT_INVALID_PASSWORD 5
* steamworks.RESULT_LOGGED_IN_ELSEWHERE 6
* steamworks.RESULT_INVALID_PROTOCOL_VER 7
* steamworks.RESULT_INVALID_PARAM 8
* steamworks.RESULT_FILE_NOT_FOUND 9
* steamworks.RESULT_BUSY 10
* steamworks.RESULT_INVALID_STATE 11
* steamworks.RESULT_INVALID_NAME 12
* steamworks.RESULT_INVALID_EMAIL 13
* steamworks.RESULT_DUPLICATE_NAME 14
* steamworks.RESULT_ACCESS_DENIED 15
* steamworks.RESULT_TIMEOUT 16
* steamworks.RESULT_BANNED 17
* steamworks.RESULT_ACCOUNT_NOT_FOUND 18
* steamworks.RESULT_INVALID_STEAM_ID 19
* steamworks.RESULT_SERVICE_UNAVAILABLE 20
* steamworks.RESULT_NOT_LOGGED_ON 21
* steamworks.RESULT_PENDING 22
* steamworks.RESULT_ENCRYPTION_FAILURE 23
* steamworks.RESULT_INSUFFICIENT_PRIVILEGE 24
* steamworks.RESULT_LIMIT_EXCEEDED 25
* steamworks.RESULT_REVOKED 26
* steamworks.RESULT_EXPIRED 27
* steamworks.RESULT_ALREADY_REDEEMED 28
* steamworks.RESULT_DUPLICATE_REQUEST 29
* steamworks.RESULT_ALREADY_OWNED 30
* steamworks.RESULT_IP_NOT_FOUND 31
* steamworks.RESULT_PERSIST_FAILED 32
* steamworks.RESULT_LOCKING_FAILED 33
* steamworks.RESULT_LOGON_SESSION_REPLACED 34
* steamworks.RESULT_CONNECT_FAILED 35
* steamworks.RESULT_HANDSHAKE_FAILED 36
* steamworks.RESULT_IO_FAILURE 37
* steamworks.RESULT_REMOTE_DISCONNECT 38
* steamworks.RESULT_SHOPPING_CART_NOT_FOUND 39
* steamworks.RESULT_BLOCKED 40
* steamworks.RESULT_IGNORED 41
* steamworks.RESULT_NO_MATCH 42
* steamworks.RESULT_ACCOUNT_DISABLED 43
* steamworks.RESULT_SERVICE_READ_ONLY 44
* steamworks.RESULT_ACCOUNT_NOT_FEATURED 45
* steamworks.RESULT_ADMINISTRATOR_OK 46
* steamworks.RESULT_CONTENT_VERSION 47
* steamworks.RESULT_TRY_ANOTHER_CM 48
* steamworks.RESULT_PASSWORD_REQUIRED_TO_KICK_SESSION 49
* steamworks.RESULT_ALREADY_LOGGED_IN_ELSEWHERE 50
* steamworks.RESULT_SUSPENDED 51
* steamworks.RESULT_CANCELLED 52
* steamworks.RESULT_DATA_CORRUPTION 53
* steamworks.RESULT_DISK_FULL 54
* steamworks.RESULT_REMOTE_CALL_FAILED 55
* steamworks.RESULT_PASSWORD_UNSET 56
* steamworks.RESULT_EXTERNAL_ACCOUNT_UNLINKED 57
* steamworks.RESULT_PSN_TICKET_INVALID 58
* steamworks.RESULT_EXTERNAL_ACCOUNT_ALREADY_LINKED 59
* steamworks.RESULT_REMOTE_FILE_CONFLICT 60
* steamworks.RESULT_ILLEGAL_PASSWORD 61
* steamworks.RESULT_SAME_AS_PREVIOUS_VALUE 62
* steamworks.RESULT_ACCOUNT_LOGON_DENIED 63
* steamworks.RESULT_CANNOT_USE_OLD_PASSWORD 64
* steamworks.RESULT_INVALID_LOGIN_AUTH_CODE 65
* steamworks.RESULT_ACCOUNT_LOGON_DENIED_NO_MAIL 66
* steamworks.RESULT_HARDWARE_NOT_CAPABLE_OF_IPT 67
* steamworks.RESULT_IPT_INIT_ERROR 68
* steamworks.RESULT_PARENTAL_CONTROL_RESTRICTED 69
* steamworks.RESULT_FACEBOOK_QUERY_ERROR 70
* steamworks.RESULT_EXPIRED_LOGIN_AUTH_CODE 71
* steamworks.RESULT_IP_LOGIN_RESTRICTION_FAILED 72
* steamworks.RESULT_ACCOUNT_LOCKED_DOWN 73
* steamworks.RESULT_ACCOUNT_LOGON_DENIED_VERIFIED_EMAIL_REQUIRED 74
* steamworks.RESULT_NO_MATCHING_URL 75
* steamworks.RESULT_BAD_RESPONSE 76
* steamworks.RESULT_REQUIRE_PASSWORD_RE_ENTRY 77
* steamworks.RESULT_VALUE_OUT_OF_RANGE 78
* steamworks.RESULT_UNEXPECTED_ERROR 79
* steamworks.RESULT_DISABLED 80
* steamworks.RESULT_INVALID_CEG_SUBMISSION 81
* steamworks.RESULT_RESTRICTED_DEVICE 82
* steamworks.RESULT_REGION_LOCKED 83
* steamworks.RESULT_RATE_LIMIT_EXCEEDED 84
* steamworks.RESULT_ACCOUNT_LOGIN_DENIED_NEED_TWO_FACTOR 85
* steamworks.RESULT_ITEM_DELETED 86
* steamworks.RESULT_ACCOUNT_LOGIN_DENIED_THROTTLE 87
* steamworks.RESULT_TWO_FACTOR_CODE_MISMATCH 88
* steamworks.RESULT_TWO_FACTOR_ACTIVATION_CODE_MISMATCH 89
* steamworks.RESULT_ACCOUNT_ASSOCIATED_TO_MULTIPLE_PARTNERS 90
* steamworks.RESULT_NOT_MODIFIED 91
* steamworks.RESULT_NO_MOBILE_DEVICE 92
* steamworks.RESULT_TIME_NOT_SYNCED 93
* steamworks.RESULT_SMS_CODE_FAILED 94
* steamworks.RESULT_ACCOUNT_LIMIT_EXCEEDED 95
* steamworks.RESULT_ACCOUNT_ACTIVITY_LIMIT_EXCEEDED 96
* steamworks.RESULT_PHONE_ACTIVITY_LIMIT_EXCEEDED 97
* steamworks.RESULT_REFUND_TO_WALLET 98
* steamworks.RESULT_EMAIL_SEND_FAILURE 99
* steamworks.RESULT_NOT_SETTLED 100
* steamworks.RESULT_NEED_CAPTCHA 101
* steamworks.RESULT_GSLT_DENIED 102
* steamworks.RESULT_GS_OWNER_DENIED 103
* steamworks.RESULT_INVALID_ITEM_TYPE 104
* steamworks.RESULT_IP_BANNED 105
* steamworks.RESULT_GSLT_EXPIRED 106
* steamworks.RESULT_INSUFFICIENT_FUNDS 107
* steamworks.RESULT_TOO_MANY_PENDING 108
* steamworks.RESULT_NO_SITE_LICENSES_FOUND 109
* steamworks.RESULT_WG_NETWORK_SEND_EXCEEDED 110
* steamworks.RESULT_ACCOUNT_NOT_FRIENDS 111
* steamworks.RESULT_LIMITED_USER_ACCOUNT 112

### EVoiceResult
* steamworks.VOICE_RESULT_OK 0
* steamworks.VOICE_RESULT_NOT_INITIALIZED 1
* steamworks.VOICE_RESULT_NOT_RECORDING 2
* steamworks.VOICE_RESULT_NO_DATA 3
* steamworks.VOICE_RESULT_BUFFER_TOO_SMALL 4
* steamworks.VOICE_RESULT_DATA_CORRUPTED 5
* steamworks.VOICE_RESULT_RESTRICTED 6
* steamworks.VOICE_RESULT_UNSUPPORTED_CODEC 7
* steamworks.VOICE_RESULT_RECEIVER_OUT_OF_DATE 8
* steamworks.VOICE_RESULT_RECEIVER_DID_NOT_ANSWER 9

### EDenyReason
* steamworks.DENY_INVALID 0
* steamworks.DENY_INVALID_VERSION 1
* steamworks.DENY_GENERIC 2
* steamworks.DENY_NOT_LOGGED_ON 3
* steamworks.DENY_NO_LICENSE 4
* steamworks.DENY_CHEATER 5
* steamworks.DENY_LOGGED_IN_ELSE_WHERE 6
* steamworks.DENY_UNKNOWN_TEXT 7
* steamworks.DENY_INCOMPATIBLE_ANTICHEAT 8
* steamworks.DENY_MEMORY_CORRUPTION 9
* steamworks.DENY_INCOMPATIBLE_SOFTWARE 10
* steamworks.DENY_STEAM_CONNECTION_LOST 11
* steamworks.DENY_STEAM_CONNECTION_ERROR 12
* steamworks.DENY_STEAM_RESPONSE_TIMED_OUT 13
* steamworks.DENY_STEAM_VALIDATION_STALLED 14
* steamworks.DENY_STEAM_OWNER_LEFT_GUEST_USER 15

### EBeginAuthSessionResult
* steamworks.BEGIN_AUTH_SESSION_RESULT_OK 0
* steamworks.BEGIN_AUTH_SESSION_RESULT_INVALID_TICKET 1
* steamworks.BEGIN_AUTH_SESSION_RESULT_DUPLICATE_REQUEST 2
* steamworks.BEGIN_AUTH_SESSION_RESULT_INVALID_VERSION 3
* steamworks.BEGIN_AUTH_SESSION_RESULT_GAME_MISMATCH 4
* steamworks.BEGIN_AUTH_SESSION_RESULT_EXPIRED_TICKET 5

### EAuthSessionResponse
* steamworks.AUTH_SESSION_RESPONSE_OK 0
* steamworks.AUTH_SESSION_RESPONSE_USER_NOT_CONNECTED_TO_STEAM 1
* steamworks.AUTH_SESSION_RESPONSE_NO_LICENSE_OR_EXPIRED 2
* steamworks.AUTH_SESSION_RESPONSE_VAC_BANNED 3
* steamworks.AUTH_SESSION_RESPONSE_LOGGED_IN_ELSE_WHERE 4
* steamworks.AUTH_SESSION_RESPONSE_VAC_CHECK_TIMED_OUT 5
* steamworks.AUTH_SESSION_RESPONSE_AUTH_TICKET_CANCELED 6
* steamworks.AUTH_SESSION_RESPONSE_AUTH_TICKET_INVALID_ALREADY_USED 7
* steamworks.AUTH_SESSION_RESPONSE_AUTH_TICKET_INVALID 8
* steamworks.AUTH_SESSION_RESPONSE_PUBLISHER_ISSUED_BAN 9

### EUserHasLicenseForAppResult
* steamworks.USER_HAS_LICENSE_RESULT_HAS_LICENSE 0
* steamworks.USER_HAS_LICENSE_RESULT_DOES_NOT_HAVE_LICENSE 1
* steamworks.USER_HAS_LICENSE_RESULT_NO_AUTH 2

### EAccountType
* steamworks.ACCOUNT_TYPE_INVALID 0
* steamworks.ACCOUNT_TYPE_INDIVIDUAL 1
* steamworks.ACCOUNT_TYPE_MULTISEAT 2
* steamworks.ACCOUNT_TYPE_GAME_SERVER 3
* steamworks.ACCOUNT_TYPE_ANON_GAME_SERVER 4
* steamworks.ACCOUNT_TYPE_PENDING 5
* steamworks.ACCOUNT_TYPE_CONTENT_SERVER 6
* steamworks.ACCOUNT_TYPE_CLAN 7
* steamworks.ACCOUNT_TYPE_CHAT 8
* steamworks.ACCOUNT_TYPE_CONSOLE_USER 9
* steamworks.ACCOUNT_TYPE_ANON_USER 10
* steamworks.ACCOUNT_TYPE_MAX 11

### EAppReleaseState
* steamworks.APP_RELEASE_STATE_UNKNOWN 0
* steamworks.APP_RELEASE_STATE_UNAVAILABLE 1
* steamworks.APP_RELEASE_STATE_PRERELEASE 2
* steamworks.APP_RELEASE_STATE_PRELOAD_ONLY 3
* steamworks.APP_RELEASE_STATE_RELEASED 4

### EAppOwnershipFlags
* steamworks.APP_OWNERSHIP_FLAGS_NONE 0
* steamworks.APP_OWNERSHIP_FLAGS_OWNS_LICENSE 1
* steamworks.APP_OWNERSHIP_FLAGS_FREE_LICENSE 2
* steamworks.APP_OWNERSHIP_FLAGS_REGION_RESTRICTED 4
* steamworks.APP_OWNERSHIP_FLAGS_LOW_VIOLENCE 8
* steamworks.APP_OWNERSHIP_FLAGS_INVALID_PLATFORM 16
* steamworks.APP_OWNERSHIP_FLAGS_SHARED_LICENSE 32
* steamworks.APP_OWNERSHIP_FLAGS_FREE_WEEKEND 64
* steamworks.APP_OWNERSHIP_FLAGS_RETAIL_LICENSE 128
* steamworks.APP_OWNERSHIP_FLAGS_LICENSE_LOCKED 256
* steamworks.APP_OWNERSHIP_FLAGS_LICENSE_PENDING 512
* steamworks.APP_OWNERSHIP_FLAGS_LICENSE_EXPIRED 1024
* steamworks.APP_OWNERSHIP_FLAGS_LICENSE_PERMANENT 2048
* steamworks.APP_OWNERSHIP_FLAGS_LICENSE_RECURRING 4096
* steamworks.APP_OWNERSHIP_FLAGS_LICENSE_CANCELED 8192
* steamworks.APP_OWNERSHIP_FLAGS_AUTO_GRANT 16384
* steamworks.APP_OWNERSHIP_FLAGS_PENDING_GIFT 32768
* steamworks.APP_OWNERSHIP_FLAGS_RENTAL_NOT_ACTIVATED 65536
* steamworks.APP_OWNERSHIP_FLAGS_RENTAL 131072
* steamworks.APP_OWNERSHIP_FLAGS_SITE_LICENSE 262144

### EAppType
* steamworks.APP_TYPE_INVALID 0
* steamworks.APP_TYPE_GAME 1
* steamworks.APP_TYPE_APPLICATION 2
* steamworks.APP_TYPE_TOOL 4
* steamworks.APP_TYPE_DEMO 8
* steamworks.APP_TYPE_MEDIA_DEPRECATED 16
* steamworks.APP_TYPE_DLC 32
* steamworks.APP_TYPE_GUIDE 64
* steamworks.APP_TYPE_DRIVER 128
* steamworks.APP_TYPE_CONFIG 256
* steamworks.APP_TYPE_HARDWARE 512
* steamworks.APP_TYPE_FRANCHISE 1024
* steamworks.APP_TYPE_VIDEO 2048
* steamworks.APP_TYPE_PLUGIN 4096
* steamworks.APP_TYPE_MUSIC 8192
* steamworks.APP_TYPE_SERIES 16384
* steamworks.APP_TYPE_COMIC 32768
* steamworks.APP_TYPE_SHORTCUT 1073741824
* steamworks.APP_TYPE_DEPOT_ONLY -2147483648

### ESteamUserStatType
* steamworks.STEAM_USER_STAT_TYPE_INVALID 0
* steamworks.STEAM_USER_STAT_TYPE_INT 1
* steamworks.STEAM_USER_STAT_TYPE_FLOAT 2
* steamworks.STEAM_USER_STAT_TYPE_AVGRATE 3
* steamworks.STEAM_USER_STAT_TYPE_ACHIEVEMENTS 4
* steamworks.STEAM_USER_STAT_TYPE_GROUPACHIEVEMENTS 5
* steamworks.STEAM_USER_STAT_TYPE_MAX 6

### EChatEntryType
* steamworks.CHAT_ENTRY_TYPE_INVALID 0
* steamworks.CHAT_ENTRY_TYPE_CHAT_MSG 1
* steamworks.CHAT_ENTRY_TYPE_TYPING 2
* steamworks.CHAT_ENTRY_TYPE_INVITE_GAME 3
* steamworks.CHAT_ENTRY_TYPE_EMOTE 4
* steamworks.CHAT_ENTRY_TYPE_LEFT_CONVERSATION 6
* steamworks.CHAT_ENTRY_TYPE_ENTERED 7
* steamworks.CHAT_ENTRY_TYPE_WAS_KICKED 8
* steamworks.CHAT_ENTRY_TYPE_WAS_BANNED 9
* steamworks.CHAT_ENTRY_TYPE_DISCONNECTED 10
* steamworks.CHAT_ENTRY_TYPE_HISTORICAL_CHAT 11
* steamworks.CHAT_ENTRY_TYPE_LINK_BLOCKED 14

### EChatRoomEnterResponse
* steamworks.CHAT_ROOM_ENTER_RESPONSE_SUCCESS 1
* steamworks.CHAT_ROOM_ENTER_RESPONSE_DOESNT_EXIST 2
* steamworks.CHAT_ROOM_ENTER_RESPONSE_NOT_ALLOWED 3
* steamworks.CHAT_ROOM_ENTER_RESPONSE_FULL 4
* steamworks.CHAT_ROOM_ENTER_RESPONSE_ERROR 5
* steamworks.CHAT_ROOM_ENTER_RESPONSE_BANNED 6
* steamworks.CHAT_ROOM_ENTER_RESPONSE_LIMITED 7
* steamworks.CHAT_ROOM_ENTER_RESPONSE_CLAN_DISABLED 8
* steamworks.CHAT_ROOM_ENTER_RESPONSE_COMMUNITY_BAN 9
* steamworks.CHAT_ROOM_ENTER_RESPONSE_MEMBER_BLOCKED_YOU 10
* steamworks.CHAT_ROOM_ENTER_RESPONSE_YOU_BLOCKED_MEMBER 11
* steamworks.CHAT_ROOM_ENTER_RESPONSE_RATELIMIT_EXCEEDED 15

### EChatSteamIDInstanceFlags
* steamworks.CHAT_ACCOUNT_INSTANCE_MASK 4095
* steamworks.CHAT_INSTANCE_FLAG_CLAN 524288
* steamworks.CHAT_INSTANCE_FLAG_LOBBY 262144
* steamworks.CHAT_INSTANCE_FLAG_MMS_LOBBY 131072

### EMarketingMessageFlags
* steamworks.MARKETING_MESSAGE_FLAGS_NONE 0
* steamworks.MARKETING_MESSAGE_FLAGS_HIGH_PRIORITY 1
* steamworks.MARKETING_MESSAGE_FLAGS_PLATFORM_WINDOWS 2
* steamworks.MARKETING_MESSAGE_FLAGS_PLATFORM_MAC 4
* steamworks.MARKETING_MESSAGE_FLAGS_PLATFORM_LINUX 8
* steamworks.MARKETING_MESSAGE_FLAGS_PLATFORM_RESTRICTIONS 14

### ENotificationPosition
* steamworks.POSITION_TOP_LEFT 0
* steamworks.POSITION_TOP_RIGHT 1
* steamworks.POSITION_BOTTOM_LEFT 2
* steamworks.POSITION_BOTTOM_RIGHT 3

### EBroadcastUploadResult
* steamworks.BROADCAST_UPLOAD_RESULT_NONE 0
* steamworks.BROADCAST_UPLOAD_RESULT_OK 1
* steamworks.BROADCAST_UPLOAD_RESULT_INIT_FAILED 2
* steamworks.BROADCAST_UPLOAD_RESULT_FRAME_FAILED 3
* steamworks.BROADCAST_UPLOAD_RESULT_TIMEOUT 4
* steamworks.BROADCAST_UPLOAD_RESULT_BANDWIDTH_EXCEEDED 5
* steamworks.BROADCAST_UPLOAD_RESULT_LOW_FPS 6
* steamworks.BROADCAST_UPLOAD_RESULT_MISSING_KEY_FRAMES 7
* steamworks.BROADCAST_UPLOAD_RESULT_NO_CONNECTION 8
* steamworks.BROADCAST_UPLOAD_RESULT_RELAY_FAILED 9
* steamworks.BROADCAST_UPLOAD_RESULT_SETTINGS_CHANGED 10
* steamworks.BROADCAST_UPLOAD_RESULT_MISSING_AUDIO 11
* steamworks.BROADCAST_UPLOAD_RESULT_TOO_FAR_BEHIND 12
* steamworks.BROADCAST_UPLOAD_RESULT_TRANSCODE_BEHIND 13

### ELaunchOptionType
* steamworks.LAUNCH_OPTION_TYPE_NONE 0
* steamworks.LAUNCH_OPTION_TYPE_DEFAULT 1
* steamworks.LAUNCH_OPTION_TYPE_SAFE_MODE 2
* steamworks.LAUNCH_OPTION_TYPE_MULTIPLAYER 3
* steamworks.LAUNCH_OPTION_TYPE_CONFIG 4
* steamworks.LAUNCH_OPTION_TYPE_OPEN_VR 5
* steamworks.LAUNCH_OPTION_TYPE_SERVER 6
* steamworks.LAUNCH_OPTION_TYPE_EDITOR 7
* steamworks.LAUNCH_OPTION_TYPE_MANUAL 8
* steamworks.LAUNCH_OPTION_TYPE_BENCHMARK 9
* steamworks.LAUNCH_OPTION_TYPE_OPTION1 10
* steamworks.LAUNCH_OPTION_TYPE_OPTION2 11
* steamworks.LAUNCH_OPTION_TYPE_OPTION3 12
* steamworks.LAUNCH_OPTION_TYPE_OCULUS_VR 13
* steamworks.LAUNCH_OPTION_TYPE_OPEN_VR_OVERLAY 14
* steamworks.LAUNCH_OPTION_TYPE_OSVR 15
* steamworks.LAUNCH_OPTION_TYPE_DIALOG 1000

### EVRHMDType
* steamworks.EVRHMD_TYPE_NONE -1
* steamworks.EVRHMD_TYPE_UNKNOWN 0
* steamworks.EVRHMD_TYPE_HTC_DEV 1
* steamworks.EVRHMD_TYPE_HTC_VIVE_PRE 2
* steamworks.EVRHMD_TYPE_HTC_VIVE 3
* steamworks.EVRHMD_TYPE_HTC_UNKNOWN 20
* steamworks.EVRHMD_TYPE_OCULUS_DK1 21
* steamworks.EVRHMD_TYPE_OCULUS_DK2 22
* steamworks.EVRHMD_TYPE_OCULUS_RIFT 23
* steamworks.EVRHMD_TYPE_OCULUS_UNKNOWN 40
* steamworks.EVRHMD_TYPE_ACER_UNKNOWN 50
* steamworks.EVRHMD_TYPE_ACER_WINDOWS_MR 51
* steamworks.EVRHMD_TYPE_DELL_UNKNOWN 60
* steamworks.EVRHMD_TYPE_DELL_VISOR 61
* steamworks.EVRHMD_TYPE_LENOVO_UNKNOWN 70
* steamworks.EVRHMD_TYPE_LENOVO_EXPLORER 71
* steamworks.EVRHMD_TYPE_HP_UNKNOWN 80
* steamworks.EVRHMD_TYPE_HP_WINDOWS_MR 81
* steamworks.EVRHMD_TYPE_SAMSUNG_UNKNOWN 90
* steamworks.EVRHMD_TYPE_SAMSUNG_ODYSSEY 91
* steamworks.EVRHMD_TYPE_UNANNOUNCED_UNKNOWN 100
* steamworks.EVRHMD_TYPE_UNANNOUNCED_WINDOWS_MR 101

### EFriendRelationship
* steamworks.FRIEND_RELATIONSHIP_NONE 0
* steamworks.FRIEND_RELATIONSHIP_BLOCKED 1
* steamworks.FRIEND_RELATIONSHIP_REQUEST_RECIPIENT 2
* steamworks.FRIEND_RELATIONSHIP_FRIEND 3
* steamworks.FRIEND_RELATIONSHIP_REQUEST_INITIATOR 4
* steamworks.FRIEND_RELATIONSHIP_IGNORED 5
* steamworks.FRIEND_RELATIONSHIP_IGNORED_FRIEND 6
* steamworks.FRIEND_RELATIONSHIP_SUGGESTED_DEPRECATED 7
* steamworks.FRIEND_RELATIONSHIP_MAX 8

### EPersonaState
* steamworks.PERSONA_STATE_OFFLINE 0
* steamworks.PERSONA_STATE_ONLINE 1
* steamworks.PERSONA_STATE_BUSY 2
* steamworks.PERSONA_STATE_AWAY 3
* steamworks.PERSONA_STATE_SNOOZE 4
* steamworks.PERSONA_STATE_LOOKING_TO_TRADE 5
* steamworks.PERSONA_STATE_LOOKING_TO_PLAY 6
* steamworks.PERSONA_STATE_MAX 7

### EFriendFlags
* steamworks.FRIEND_FLAG_NONE 0
* steamworks.FRIEND_FLAG_BLOCKED 1
* steamworks.FRIEND_FLAG_FRIENDSHIP_REQUESTED 2
* steamworks.FRIEND_FLAG_IMMEDIATE 4
* steamworks.FRIEND_FLAG_CLAN_MEMBER 8
* steamworks.FRIEND_FLAG_ON_GAME_SERVER 16
* steamworks.FRIEND_FLAG_REQUESTING_FRIENDSHIP 128
* steamworks.FRIEND_FLAG_REQUESTING_INFO 256
* steamworks.FRIEND_FLAG_IGNORED 512
* steamworks.FRIEND_FLAG_IGNORED_FRIEND 1024
* steamworks.FRIEND_FLAG_CHAT_MEMBER 4096
* steamworks.FRIEND_FLAG_ALL 65535

### EUserRestriction
* steamworks.USER_RESTRICTION_NONE 0
* steamworks.USER_RESTRICTION_UNKNOWN 1
* steamworks.USER_RESTRICTION_ANY_CHAT 2
* steamworks.USER_RESTRICTION_VOICE_CHAT 4
* steamworks.USER_RESTRICTION_GROUP_CHAT 8
* steamworks.USER_RESTRICTION_RATING 16
* steamworks.USER_RESTRICTION_GAME_INVITES 32
* steamworks.USER_RESTRICTION_TRADING 64

### EOverlayToStoreFlag
* steamworks.OVERLAY_TO_STORE_FLAG_NONE 0
* steamworks.OVERLAY_TO_STORE_FLAG_ADD_TO_CART 1
* steamworks.OVERLAY_TO_STORE_FLAG_ADD_TO_CART_AND_SHOW 2

### EPersonaChange
* steamworks.PERSONA_CHANGE_NAME 1
* steamworks.PERSONA_CHANGE_STATUS 2
* steamworks.PERSONA_CHANGE_COME_ONLINE 4
* steamworks.PERSONA_CHANGE_GONE_OFFLINE 8
* steamworks.PERSONA_CHANGE_GAME_PLAYED 16
* steamworks.PERSONA_CHANGE_GAME_SERVER 32
* steamworks.PERSONA_CHANGE_AVATAR 64
* steamworks.PERSONA_CHANGE_JOINED_SOURCE 128
* steamworks.PERSONA_CHANGE_LEFT_SOURCE 256
* steamworks.PERSONA_CHANGE_RELATIONSHIP_CHANGED 512
* steamworks.PERSONA_CHANGE_NAME_FIRST_SET 1024
* steamworks.PERSONA_CHANGE_FACEBOOK_INFO 2048
* steamworks.PERSONA_CHANGE_NICKNAME 4096
* steamworks.PERSONA_CHANGE_STEAM_LEVEL 8192

### ESteamAPICallFailure
* steamworks.STEAM_API_CALL_FAILURE_NONE -1
* steamworks.STEAM_API_CALL_FAILURE_STEAM_GONE 0
* steamworks.STEAM_API_CALL_FAILURE_NETWORK_FAILURE 1
* steamworks.STEAM_API_CALL_FAILURE_INVALID_HANDLE 2
* steamworks.STEAM_API_CALL_FAILURE_MISMATCHED_CALLBACK 3

### EGamepadTextInputMode
* steamworks.GAMEPAD_TEXT_INPUT_MODE_NORMAL 0
* steamworks.GAMEPAD_TEXT_INPUT_MODE_PASSWORD 1

### EGamepadTextInputLineMode
* steamworks.GAMEPAD_TEXT_INPUT_LINE_MODE_SINGLE_LINE 0
* steamworks.GAMEPAD_TEXT_INPUT_LINE_MODE_MULTIPLE_LINES 1

### ECheckFileSignature
* steamworks.CHECK_FILE_SIGNATURE_INVALID_SIGNATURE 0
* steamworks.CHECK_FILE_SIGNATURE_VALID_SIGNATURE 1
* steamworks.CHECK_FILE_SIGNATURE_FILE_NOT_FOUND 2
* steamworks.CHECK_FILE_SIGNATURE_NO_SIGNATURES_FOUND_FOR_THIS_APP 3
* steamworks.CHECK_FILE_SIGNATURE_NO_SIGNATURES_FOUND_FOR_THIS_FILE 4

### EMatchMakingServerResponse
* steamworks.E_SERVER_RESPONDED 0
* steamworks.E_SERVER_FAILED_TO_RESPOND 1
* steamworks.E_NO_SERVERS_LISTED_ON_MASTER_SERVER 2

### ELobbyType
* steamworks.LOBBY_TYPE_PRIVATE 0
* steamworks.LOBBY_TYPE_FRIENDS_ONLY 1
* steamworks.LOBBY_TYPE_PUBLIC 2
* steamworks.LOBBY_TYPE_INVISIBLE 3

### ELobbyComparison
* steamworks.LOBBY_COMPARISON_EQUAL_TO_OR_LESS_THAN -2
* steamworks.LOBBY_COMPARISON_LESS_THAN -1
* steamworks.LOBBY_COMPARISON_EQUAL 0
* steamworks.LOBBY_COMPARISON_GREATER_THAN 1
* steamworks.LOBBY_COMPARISON_EQUAL_TO_OR_GREATER_THAN 2
* steamworks.LOBBY_COMPARISON_NOT_EQUAL 3

### ELobbyDistanceFilter
* steamworks.LOBBY_DISTANCE_FILTER_CLOSE 0
* steamworks.LOBBY_DISTANCE_FILTER_DEFAULT 1
* steamworks.LOBBY_DISTANCE_FILTER_FAR 2
* steamworks.LOBBY_DISTANCE_FILTER_WORLDWIDE 3

### EChatMemberStateChange
* steamworks.CHAT_MEMBER_STATE_CHANGE_ENTERED 1
* steamworks.CHAT_MEMBER_STATE_CHANGE_LEFT 2
* steamworks.CHAT_MEMBER_STATE_CHANGE_DISCONNECTED 4
* steamworks.CHAT_MEMBER_STATE_CHANGE_KICKED 8
* steamworks.CHAT_MEMBER_STATE_CHANGE_BANNED 16

### ERemoteStoragePlatform
* steamworks.REMOTE_STORAGE_PLATFORM_NONE 0
* steamworks.REMOTE_STORAGE_PLATFORM_WINDOWS 1
* steamworks.REMOTE_STORAGE_PLATFORM_OSX 2
* steamworks.REMOTE_STORAGE_PLATFORM_PS3 4
* steamworks.REMOTE_STORAGE_PLATFORM_LINUX 8
* steamworks.REMOTE_STORAGE_PLATFORM_RESERVED2 16
* steamworks.REMOTE_STORAGE_PLATFORM_ALL -1

### ERemoteStoragePublishedFileVisibility
* steamworks.REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_PUBLIC 0
* steamworks.REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_FRIENDS_ONLY 1
* steamworks.REMOTE_STORAGE_PUBLISHED_FILE_VISIBILITY_PRIVATE 2

### EWorkshopFileType
* steamworks.WORKSHOP_FILE_TYPE_FIRST 0
* steamworks.WORKSHOP_FILE_TYPE_COMMUNITY 0
* steamworks.WORKSHOP_FILE_TYPE_MICROTRANSACTION 1
* steamworks.WORKSHOP_FILE_TYPE_COLLECTION 2
* steamworks.WORKSHOP_FILE_TYPE_ART 3
* steamworks.WORKSHOP_FILE_TYPE_VIDEO 4
* steamworks.WORKSHOP_FILE_TYPE_SCREENSHOT 5
* steamworks.WORKSHOP_FILE_TYPE_GAME 6
* steamworks.WORKSHOP_FILE_TYPE_SOFTWARE 7
* steamworks.WORKSHOP_FILE_TYPE_CONCEPT 8
* steamworks.WORKSHOP_FILE_TYPE_WEB_GUIDE 9
* steamworks.WORKSHOP_FILE_TYPE_INTEGRATED_GUIDE 10
* steamworks.WORKSHOP_FILE_TYPE_MERCH 11
* steamworks.WORKSHOP_FILE_TYPE_CONTROLLER_BINDING 12
* steamworks.WORKSHOP_FILE_TYPE_STEAMWORKS_ACCESS_INVITE 13
* steamworks.WORKSHOP_FILE_TYPE_STEAM_VIDEO 14
* steamworks.WORKSHOP_FILE_TYPE_GAME_MANAGED_ITEM 15
* steamworks.WORKSHOP_FILE_TYPE_MAX 16

### EUGCReadAction
* steamworks.UGC_READ_CONTINUE_READING_UNTIL_FINISHED 0
* steamworks.UGC_READ_CONTINUE_READING 1
* steamworks.UGC_READ_CLOSE 2

### ELeaderboardDataRequest
* steamworks.LEADERBOARD_DATA_REQUEST_GLOBAL 0
* steamworks.LEADERBOARD_DATA_REQUEST_GLOBAL_AROUND_USER 1
* steamworks.LEADERBOARD_DATA_REQUEST_FRIENDS 2
* steamworks.LEADERBOARD_DATA_REQUEST_USERS 3

### ELeaderboardSortMethod
* steamworks.LEADERBOARD_SORT_METHOD_NONE 0
* steamworks.LEADERBOARD_SORT_METHOD_ASCENDING 1
* steamworks.LEADERBOARD_SORT_METHOD_DESCENDING 2

### ELeaderboardDisplayType
* steamworks.LEADERBOARD_DISPLAY_TYPE_NONE 0
* steamworks.LEADERBOARD_DISPLAY_TYPE_NUMERIC 1
* steamworks.LEADERBOARD_DISPLAY_TYPE_TIME_SECONDS 2
* steamworks.LEADERBOARD_DISPLAY_TYPE_TIME_MILLI_SECONDS 3

### ELeaderboardUploadScoreMethod
* steamworks.LEADERBOARD_UPLOAD_SCORE_METHOD_NONE 0
* steamworks.LEADERBOARD_UPLOAD_SCORE_METHOD_KEEP_BEST 1
* steamworks.LEADERBOARD_UPLOAD_SCORE_METHOD_FORCE_UPDATE 2

### ERegisterActivationCodeResult
* steamworks.REGISTER_ACTIVATION_CODE_RESULT_OK 0
* steamworks.REGISTER_ACTIVATION_CODE_RESULT_FAIL 1
* steamworks.REGISTER_ACTIVATION_CODE_RESULT_ALREADY_REGISTERED 2
* steamworks.REGISTER_ACTIVATION_CODE_RESULT_TIMEOUT 3
* steamworks.REGISTER_ACTIVATION_CODE_ALREADY_OWNED 4

### EP2PSessionError
* steamworks.P2P_SESSION_ERROR_NONE 0
* steamworks.P2P_SESSION_ERROR_NOT_RUNNING_APP 1
* steamworks.P2P_SESSION_ERROR_NO_RIGHTS_TO_APP 2
* steamworks.P2P_SESSION_ERROR_DESTINATION_NOT_LOGGED_IN 3
* steamworks.P2P_SESSION_ERROR_TIMEOUT 4
* steamworks.P2P_SESSION_ERROR_MAX 5

### EP2PSend
* steamworks.P2P_SEND_UNRELIABLE 0
* steamworks.P2P_SEND_UNRELIABLE_NO_DELAY 1
* steamworks.P2P_SEND_RELIABLE 2
* steamworks.P2P_SEND_RELIABLE_WITH_BUFFERING 3

### ESNetSocketState
* steamworks.S_NET_SOCKET_STATE_INVALID 0
* steamworks.S_NET_SOCKET_STATE_CONNECTED 1
* steamworks.S_NET_SOCKET_STATE_INITIATED 10
* steamworks.S_NET_SOCKET_STATE_LOCAL_CANDIDATES_FOUND 11
* steamworks.S_NET_SOCKET_STATE_RECEIVED_REMOTE_CANDIDATES 12
* steamworks.S_NET_SOCKET_STATE_CHALLENGE_HANDSHAKE 15
* steamworks.S_NET_SOCKET_STATE_DISCONNECTING 21
* steamworks.S_NET_SOCKET_STATE_LOCAL_DISCONNECT 22
* steamworks.S_NET_SOCKET_STATE_TIMEOUT_DURING_CONNECT 23
* steamworks.S_NET_SOCKET_STATE_REMOTE_END_DISCONNECTED 24
* steamworks.S_NET_SOCKET_STATE_CONNECTION_BROKEN 25

### ESNetSocketConnectionType
* steamworks.S_NET_SOCKET_CONNECTION_TYPE_NOT_CONNECTED 0
* steamworks.S_NET_SOCKET_CONNECTION_TYPE_UDP 1
* steamworks.S_NET_SOCKET_CONNECTION_TYPE_UDP_RELAY 2

### EVRScreenshotType
* steamworks.VR_SCREENSHOT_TYPE_NONE 0
* steamworks.VR_SCREENSHOT_TYPE_MONO 1
* steamworks.VR_SCREENSHOT_TYPE_STEREO 2
* steamworks.VR_SCREENSHOT_TYPE_MONO_CUBEMAP 3
* steamworks.VR_SCREENSHOT_TYPE_MONO_PANORAMA 4
* steamworks.VR_SCREENSHOT_TYPE_STEREO_PANORAMA 5

### AudioPlayback_Status
* steamworks.AUDIO_PLAYBACK_UNDEFINED 0
* steamworks.AUDIO_PLAYBACK_PLAYING 1
* steamworks.AUDIO_PLAYBACK_PAUSED 2
* steamworks.AUDIO_PLAYBACK_IDLE 3

### EHTTPMethod
* steamworks.HTTP_METHOD_INVALID 0
* steamworks.HTTP_METHOD_GET 1
* steamworks.HTTP_METHOD_HEAD 2
* steamworks.HTTP_METHOD_POST 3
* steamworks.HTTP_METHOD_PUT 4
* steamworks.HTTP_METHOD_DELETE 5
* steamworks.HTTP_METHOD_OPTIONS 6
* steamworks.HTTP_METHOD_PATCH 7

### EHTTPStatusCode
* steamworks.HTTP_STATUS_CODE_INVALID 0
* steamworks.HTTP_STATUS_CODE100_CONTINUE 100
* steamworks.HTTP_STATUS_CODE101_SWITCHING_PROTOCOLS 101
* steamworks.HTTP_STATUS_CODE200OK 200
* steamworks.HTTP_STATUS_CODE201_CREATED 201
* steamworks.HTTP_STATUS_CODE202_ACCEPTED 202
* steamworks.HTTP_STATUS_CODE203_NON_AUTHORITATIVE 203
* steamworks.HTTP_STATUS_CODE204_NO_CONTENT 204
* steamworks.HTTP_STATUS_CODE205_RESET_CONTENT 205
* steamworks.HTTP_STATUS_CODE206_PARTIAL_CONTENT 206
* steamworks.HTTP_STATUS_CODE300_MULTIPLE_CHOICES 300
* steamworks.HTTP_STATUS_CODE301_MOVED_PERMANENTLY 301
* steamworks.HTTP_STATUS_CODE302_FOUND 302
* steamworks.HTTP_STATUS_CODE303_SEE_OTHER 303
* steamworks.HTTP_STATUS_CODE304_NOT_MODIFIED 304
* steamworks.HTTP_STATUS_CODE305_USE_PROXY 305
* steamworks.HTTP_STATUS_CODE307_TEMPORARY_REDIRECT 307
* steamworks.HTTP_STATUS_CODE400_BAD_REQUEST 400
* steamworks.HTTP_STATUS_CODE401_UNAUTHORIZED 401
* steamworks.HTTP_STATUS_CODE402_PAYMENT_REQUIRED 402
* steamworks.HTTP_STATUS_CODE403_FORBIDDEN 403
* steamworks.HTTP_STATUS_CODE404_NOT_FOUND 404
* steamworks.HTTP_STATUS_CODE405_METHOD_NOT_ALLOWED 405
* steamworks.HTTP_STATUS_CODE406_NOT_ACCEPTABLE 406
* steamworks.HTTP_STATUS_CODE407_PROXY_AUTH_REQUIRED 407
* steamworks.HTTP_STATUS_CODE408_REQUEST_TIMEOUT 408
* steamworks.HTTP_STATUS_CODE409_CONFLICT 409
* steamworks.HTTP_STATUS_CODE410_GONE 410
* steamworks.HTTP_STATUS_CODE411_LENGTH_REQUIRED 411
* steamworks.HTTP_STATUS_CODE412_PRECONDITION_FAILED 412
* steamworks.HTTP_STATUS_CODE413_REQUEST_ENTITY_TOO_LARGE 413
* steamworks.HTTP_STATUS_CODE414_REQUEST_URI_TOO_LONG 414
* steamworks.HTTP_STATUS_CODE415_UNSUPPORTED_MEDIA_TYPE 415
* steamworks.HTTP_STATUS_CODE416_REQUESTED_RANGE_NOT_SATISFIABLE 416
* steamworks.HTTP_STATUS_CODE417_EXPECTATION_FAILED 417
* steamworks.HTTP_STATUS_CODE4XX_UNKNOWN 418
* steamworks.HTTP_STATUS_CODE429_TOO_MANY_REQUESTS 429
* steamworks.HTTP_STATUS_CODE500_INTERNAL_SERVER_ERROR 500
* steamworks.HTTP_STATUS_CODE501_NOT_IMPLEMENTED 501
* steamworks.HTTP_STATUS_CODE502_BAD_GATEWAY 502
* steamworks.HTTP_STATUS_CODE503_SERVICE_UNAVAILABLE 503
* steamworks.HTTP_STATUS_CODE504_GATEWAY_TIMEOUT 504
* steamworks.HTTP_STATUS_CODE505HTTP_VERSION_NOT_SUPPORTED 505
* steamworks.HTTP_STATUS_CODE5XX_UNKNOWN 599

### ESteamControllerPad
* steamworks.STEAM_CONTROLLER_PAD_LEFT 0
* steamworks.STEAM_CONTROLLER_PAD_RIGHT 1

### EControllerSource
* steamworks.CONTROLLER_SOURCE_NONE 0
* steamworks.CONTROLLER_SOURCE_LEFT_TRACKPAD 1
* steamworks.CONTROLLER_SOURCE_RIGHT_TRACKPAD 2
* steamworks.CONTROLLER_SOURCE_JOYSTICK 3
* steamworks.CONTROLLER_SOURCE_ABXY 4
* steamworks.CONTROLLER_SOURCE_SWITCH 5
* steamworks.CONTROLLER_SOURCE_LEFT_TRIGGER 6
* steamworks.CONTROLLER_SOURCE_RIGHT_TRIGGER 7
* steamworks.CONTROLLER_SOURCE_GYRO 8
* steamworks.CONTROLLER_SOURCE_CENTER_TRACKPAD 9
* steamworks.CONTROLLER_SOURCE_RIGHT_JOYSTICK 10
* steamworks.CONTROLLER_SOURCE_D_PAD 11
* steamworks.CONTROLLER_SOURCE_KEY 12
* steamworks.CONTROLLER_SOURCE_MOUSE 13
* steamworks.CONTROLLER_SOURCE_COUNT 14

### EControllerSourceMode
* steamworks.CONTROLLER_SOURCE_MODE_NONE 0
* steamworks.CONTROLLER_SOURCE_MODE_DPAD 1
* steamworks.CONTROLLER_SOURCE_MODE_BUTTONS 2
* steamworks.CONTROLLER_SOURCE_MODE_FOUR_BUTTONS 3
* steamworks.CONTROLLER_SOURCE_MODE_ABSOLUTE_MOUSE 4
* steamworks.CONTROLLER_SOURCE_MODE_RELATIVE_MOUSE 5
* steamworks.CONTROLLER_SOURCE_MODE_JOYSTICK_MOVE 6
* steamworks.CONTROLLER_SOURCE_MODE_JOYSTICK_MOUSE 7
* steamworks.CONTROLLER_SOURCE_MODE_JOYSTICK_CAMERA 8
* steamworks.CONTROLLER_SOURCE_MODE_SCROLL_WHEEL 9
* steamworks.CONTROLLER_SOURCE_MODE_TRIGGER 10
* steamworks.CONTROLLER_SOURCE_MODE_TOUCH_MENU 11
* steamworks.CONTROLLER_SOURCE_MODE_MOUSE_JOYSTICK 12
* steamworks.CONTROLLER_SOURCE_MODE_MOUSE_REGION 13
* steamworks.CONTROLLER_SOURCE_MODE_RADIAL_MENU 14
* steamworks.CONTROLLER_SOURCE_MODE_SINGLE_BUTTON 15
* steamworks.CONTROLLER_SOURCE_MODE_SWITCHES 16

### EControllerActionOrigin
* steamworks.CONTROLLER_ACTION_ORIGIN_NONE 0
* steamworks.CONTROLLER_ACTION_ORIGIN_A 1
* steamworks.CONTROLLER_ACTION_ORIGIN_B 2
* steamworks.CONTROLLER_ACTION_ORIGIN_X 3
* steamworks.CONTROLLER_ACTION_ORIGIN_Y 4
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_BUMPER 5
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_BUMPER 6
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_GRIP 7
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_GRIP 8
* steamworks.CONTROLLER_ACTION_ORIGIN_START 9
* steamworks.CONTROLLER_ACTION_ORIGIN_BACK 10
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_PAD_TOUCH 11
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_PAD_SWIPE 12
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_PAD_CLICK 13
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_PAD_D_PAD_NORTH 14
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_PAD_D_PAD_SOUTH 15
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_PAD_D_PAD_WEST 16
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_PAD_D_PAD_EAST 17
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_TOUCH 18
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_SWIPE 19
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_CLICK 20
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_D_PAD_NORTH 21
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_D_PAD_SOUTH 22
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_D_PAD_WEST 23
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_PAD_D_PAD_EAST 24
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_TRIGGER_PULL 25
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_TRIGGER_CLICK 26
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_TRIGGER_PULL 27
* steamworks.CONTROLLER_ACTION_ORIGIN_RIGHT_TRIGGER_CLICK 28
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_STICK_MOVE 29
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_STICK_CLICK 30
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_STICK_D_PAD_NORTH 31
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_STICK_D_PAD_SOUTH 32
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_STICK_D_PAD_WEST 33
* steamworks.CONTROLLER_ACTION_ORIGIN_LEFT_STICK_D_PAD_EAST 34
* steamworks.CONTROLLER_ACTION_ORIGIN_GYRO_MOVE 35
* steamworks.CONTROLLER_ACTION_ORIGIN_GYRO_PITCH 36
* steamworks.CONTROLLER_ACTION_ORIGIN_GYRO_YAW 37
* steamworks.CONTROLLER_ACTION_ORIGIN_GYRO_ROLL 38
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_X 39
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_CIRCLE 40
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_TRIANGLE 41
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_SQUARE 42
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_BUMPER 43
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_BUMPER 44
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_OPTIONS 45
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_SHARE 46
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_TOUCH 47
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_SWIPE 48
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_CLICK 49
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_NORTH 50
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_SOUTH 51
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_WEST 52
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_PAD_D_PAD_EAST 53
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_TOUCH 54
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_SWIPE 55
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_CLICK 56
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_NORTH 57
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_SOUTH 58
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_WEST 59
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_PAD_D_PAD_EAST 60
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_TOUCH 61
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_SWIPE 62
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_CLICK 63
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_NORTH 64
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_SOUTH 65
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_WEST 66
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_CENTER_PAD_D_PAD_EAST 67
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_TRIGGER_PULL 68
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_TRIGGER_CLICK 69
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_TRIGGER_PULL 70
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_TRIGGER_CLICK 71
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_MOVE 72
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_CLICK 73
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_NORTH 74
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_SOUTH 75
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_WEST 76
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_LEFT_STICK_D_PAD_EAST 77
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_MOVE 78
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_CLICK 79
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_NORTH 80
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_SOUTH 81
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_WEST 82
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_RIGHT_STICK_D_PAD_EAST 83
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_D_PAD_NORTH 84
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_D_PAD_SOUTH 85
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_D_PAD_WEST 86
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_D_PAD_EAST 87
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_GYRO_MOVE 88
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_GYRO_PITCH 89
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_GYRO_YAW 90
* steamworks.CONTROLLER_ACTION_ORIGIN_PS4_GYRO_ROLL 91
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_A 92
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_B 93
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_X 94
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_Y 95
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_BUMPER 96
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_BUMPER 97
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_MENU 98
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_VIEW 99
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_TRIGGER_PULL 100
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_TRIGGER_CLICK 101
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_TRIGGER_PULL 102
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_TRIGGER_CLICK 103
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_MOVE 104
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_CLICK 105
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_NORTH 106
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_SOUTH 107
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_WEST 108
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_LEFT_STICK_D_PAD_EAST 109
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_MOVE 110
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_CLICK 111
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_NORTH 112
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_SOUTH 113
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_WEST 114
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_RIGHT_STICK_D_PAD_EAST 115
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_D_PAD_NORTH 116
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_D_PAD_SOUTH 117
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_D_PAD_WEST 118
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX_ONE_D_PAD_EAST 119
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_A 120
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_B 121
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_X 122
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_Y 123
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_BUMPER 124
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_BUMPER 125
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_START 126
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_BACK 127
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_TRIGGER_PULL 128
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_TRIGGER_CLICK 129
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_TRIGGER_PULL 130
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_TRIGGER_CLICK 131
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_MOVE 132
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_CLICK 133
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_NORTH 134
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_SOUTH 135
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_WEST 136
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_LEFT_STICK_D_PAD_EAST 137
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_MOVE 138
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_CLICK 139
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_NORTH 140
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_SOUTH 141
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_WEST 142
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_RIGHT_STICK_D_PAD_EAST 143
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_D_PAD_NORTH 144
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_D_PAD_SOUTH 145
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_D_PAD_WEST 146
* steamworks.CONTROLLER_ACTION_ORIGIN_X_BOX360_D_PAD_EAST 147
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_A 148
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_B 149
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_X 150
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_Y 151
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_BUMPER 152
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_BUMPER 153
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP 154
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_GRIP 155
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP_UPPER 156
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_GRIP_UPPER 157
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_BUMPER_PRESSURE 158
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_BUMPER_PRESSURE 159
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP_PRESSURE 160
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_GRIP_PRESSURE 161
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_GRIP_UPPER_PRESSURE 162
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_GRIP_UPPER_PRESSURE 163
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_START 164
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_BACK 165
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_TOUCH 166
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_SWIPE 167
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_CLICK 168
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_PRESSURE 169
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_D_PAD_NORTH 170
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_D_PAD_SOUTH 171
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_D_PAD_WEST 172
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_PAD_D_PAD_EAST 173
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_TOUCH 174
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_SWIPE 175
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_CLICK 176
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_PRESSURE 177
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_D_PAD_NORTH 178
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_D_PAD_SOUTH 179
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_D_PAD_WEST 180
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_PAD_D_PAD_EAST 181
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_TRIGGER_PULL 182
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_TRIGGER_CLICK 183
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_TRIGGER_PULL 184
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_RIGHT_TRIGGER_CLICK 185
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_MOVE 186
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_CLICK 187
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_D_PAD_NORTH 188
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_D_PAD_SOUTH 189
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_D_PAD_WEST 190
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_LEFT_STICK_D_PAD_EAST 191
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_GYRO_MOVE 192
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_GYRO_PITCH 193
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_GYRO_YAW 194
* steamworks.CONTROLLER_ACTION_ORIGIN_STEAM_V2_GYRO_ROLL 195
* steamworks.CONTROLLER_ACTION_ORIGIN_COUNT 196

### ESteamControllerLEDFlag
* steamworks.STEAM_CONTROLLER_LED_FLAG_SET_COLOR 0
* steamworks.STEAM_CONTROLLER_LED_FLAG_RESTORE_USER_DEFAULT 1

### ESteamInputType
* steamworks.STEAM_INPUT_TYPE_UNKNOWN 0
* steamworks.STEAM_INPUT_TYPE_STEAM_CONTROLLER 1
* steamworks.STEAM_INPUT_TYPE_X_BOX360_CONTROLLER 2
* steamworks.STEAM_INPUT_TYPE_X_BOX_ONE_CONTROLLER 3
* steamworks.STEAM_INPUT_TYPE_GENERIC_X_INPUT 4
* steamworks.STEAM_INPUT_TYPE_PS4_CONTROLLER 5

### EUGCMatchingUGCType
* steamworks.UGC_MATCHING_UGC_TYPE_ITEMS 0
* steamworks.UGC_MATCHING_UGC_TYPE_ITEMS_MTX 1
* steamworks.UGC_MATCHING_UGC_TYPE_ITEMS_READY_TO_USE 2
* steamworks.UGC_MATCHING_UGC_TYPE_COLLECTIONS 3
* steamworks.UGC_MATCHING_UGC_TYPE_ARTWORK 4
* steamworks.UGC_MATCHING_UGC_TYPE_VIDEOS 5
* steamworks.UGC_MATCHING_UGC_TYPE_SCREENSHOTS 6
* steamworks.UGC_MATCHING_UGC_TYPE_ALL_GUIDES 7
* steamworks.UGC_MATCHING_UGC_TYPE_WEB_GUIDES 8
* steamworks.UGC_MATCHING_UGC_TYPE_INTEGRATED_GUIDES 9
* steamworks.UGC_MATCHING_UGC_TYPE_USABLE_IN_GAME 10
* steamworks.UGC_MATCHING_UGC_TYPE_CONTROLLER_BINDINGS 11
* steamworks.UGC_MATCHING_UGC_TYPE_GAME_MANAGED_ITEMS 12
* steamworks.UGC_MATCHING_UGC_TYPE_ALL -1

### EUserUGCList
* steamworks.USER_UGC_LIST_PUBLISHED 0
* steamworks.USER_UGC_LIST_VOTED_ON 1
* steamworks.USER_UGC_LIST_VOTED_UP 2
* steamworks.USER_UGC_LIST_VOTED_DOWN 3
* steamworks.USER_UGC_LIST_WILL_VOTE_LATER 4
* steamworks.USER_UGC_LIST_FAVORITED 5
* steamworks.USER_UGC_LIST_SUBSCRIBED 6
* steamworks.USER_UGC_LIST_USED_OR_PLAYED 7
* steamworks.USER_UGC_LIST_FOLLOWED 8

### EUserUGCListSortOrder
* steamworks.USER_UGC_LIST_SORT_ORDER_CREATION_ORDER_DESC 0
* steamworks.USER_UGC_LIST_SORT_ORDER_CREATION_ORDER_ASC 1
* steamworks.USER_UGC_LIST_SORT_ORDER_TITLE_ASC 2
* steamworks.USER_UGC_LIST_SORT_ORDER_LAST_UPDATED_DESC 3
* steamworks.USER_UGC_LIST_SORT_ORDER_SUBSCRIPTION_DATE_DESC 4
* steamworks.USER_UGC_LIST_SORT_ORDER_VOTE_SCORE_DESC 5
* steamworks.USER_UGC_LIST_SORT_ORDER_FOR_MODERATION 6

### EUGCQuery
* steamworks.UGC_QUERY_RANKED_BY_VOTE 0
* steamworks.UGC_QUERY_RANKED_BY_PUBLICATION_DATE 1
* steamworks.UGC_QUERY_ACCEPTED_FOR_GAME_RANKED_BY_ACCEPTANCE_DATE 2
* steamworks.UGC_QUERY_RANKED_BY_TREND 3
* steamworks.UGC_QUERY_FAVORITED_BY_FRIENDS_RANKED_BY_PUBLICATION_DATE 4
* steamworks.UGC_QUERY_CREATED_BY_FRIENDS_RANKED_BY_PUBLICATION_DATE 5
* steamworks.UGC_QUERY_RANKED_BY_NUM_TIMES_REPORTED 6
* steamworks.UGC_QUERY_CREATED_BY_FOLLOWED_USERS_RANKED_BY_PUBLICATION_DATE 7
* steamworks.UGC_QUERY_NOT_YET_RATED 8
* steamworks.UGC_QUERY_RANKED_BY_TOTAL_VOTES_ASC 9
* steamworks.UGC_QUERY_RANKED_BY_VOTES_UP 10
* steamworks.UGC_QUERY_RANKED_BY_TEXT_SEARCH 11
* steamworks.UGC_QUERY_RANKED_BY_TOTAL_UNIQUE_SUBSCRIPTIONS 12
* steamworks.UGC_QUERY_RANKED_BY_PLAYTIME_TREND 13
* steamworks.UGC_QUERY_RANKED_BY_TOTAL_PLAYTIME 14
* steamworks.UGC_QUERY_RANKED_BY_AVERAGE_PLAYTIME_TREND 15
* steamworks.UGC_QUERY_RANKED_BY_LIFETIME_AVERAGE_PLAYTIME 16
* steamworks.UGC_QUERY_RANKED_BY_PLAYTIME_SESSIONS_TREND 17
* steamworks.UGC_QUERY_RANKED_BY_LIFETIME_PLAYTIME_SESSIONS 18

### EItemUpdateStatus
* steamworks.ITEM_UPDATE_STATUS_INVALID 0
* steamworks.ITEM_UPDATE_STATUS_PREPARING_CONFIG 1
* steamworks.ITEM_UPDATE_STATUS_PREPARING_CONTENT 2
* steamworks.ITEM_UPDATE_STATUS_UPLOADING_CONTENT 3
* steamworks.ITEM_UPDATE_STATUS_UPLOADING_PREVIEW_FILE 4
* steamworks.ITEM_UPDATE_STATUS_COMMITTING_CHANGES 5

### EItemState
* steamworks.ITEM_STATE_NONE 0
* steamworks.ITEM_STATE_SUBSCRIBED 1
* steamworks.ITEM_STATE_LEGACY_ITEM 2
* steamworks.ITEM_STATE_INSTALLED 4
* steamworks.ITEM_STATE_NEEDS_UPDATE 8
* steamworks.ITEM_STATE_DOWNLOADING 16
* steamworks.ITEM_STATE_DOWNLOAD_PENDING 32

### EItemStatistic
* steamworks.ITEM_STATISTIC_NUM_SUBSCRIPTIONS 0
* steamworks.ITEM_STATISTIC_NUM_FAVORITES 1
* steamworks.ITEM_STATISTIC_NUM_FOLLOWERS 2
* steamworks.ITEM_STATISTIC_NUM_UNIQUE_SUBSCRIPTIONS 3
* steamworks.ITEM_STATISTIC_NUM_UNIQUE_FAVORITES 4
* steamworks.ITEM_STATISTIC_NUM_UNIQUE_FOLLOWERS 5
* steamworks.ITEM_STATISTIC_NUM_UNIQUE_WEBSITE_VIEWS 6
* steamworks.ITEM_STATISTIC_REPORT_SCORE 7
* steamworks.ITEM_STATISTIC_NUM_SECONDS_PLAYED 8
* steamworks.ITEM_STATISTIC_NUM_PLAYTIME_SESSIONS 9
* steamworks.ITEM_STATISTIC_NUM_COMMENTS 10
* steamworks.ITEM_STATISTIC_NUM_SECONDS_PLAYED_DURING_TIME_PERIOD 11
* steamworks.ITEM_STATISTIC_NUM_PLAYTIME_SESSIONS_DURING_TIME_PERIOD 12

### EItemPreviewType
* steamworks.ITEM_PREVIEW_TYPE_IMAGE 0
* steamworks.ITEM_PREVIEW_TYPE_YOU_TUBE_VIDEO 1
* steamworks.ITEM_PREVIEW_TYPE_SKETCHFAB 2
* steamworks.ITEM_PREVIEW_TYPE_ENVIRONMENT_MAP_HORIZONTAL_CROSS 3
* steamworks.ITEM_PREVIEW_TYPE_ENVIRONMENT_MAP_LAT_LONG 4
* steamworks.ITEM_PREVIEW_TYPE_RESERVED_MAX 255

### ESteamItemFlags
* steamworks.STEAM_ITEM_NO_TRADE 1
* steamworks.STEAM_ITEM_REMOVED 256
* steamworks.STEAM_ITEM_CONSUMED 512

### EParentalFeature
* steamworks.FEATURE_INVALID 0
* steamworks.FEATURE_STORE 1
* steamworks.FEATURE_COMMUNITY 2
* steamworks.FEATURE_PROFILE 3
* steamworks.FEATURE_FRIENDS 4
* steamworks.FEATURE_NEWS 5
* steamworks.FEATURE_TRADING 6
* steamworks.FEATURE_SETTINGS 7
* steamworks.FEATURE_CONSOLE 8
* steamworks.FEATURE_BROWSER 9
* steamworks.FEATURE_PARENTAL_SETUP 10
* steamworks.FEATURE_LIBRARY 11
* steamworks.FEATURE_TEST 12
* steamworks.FEATURE_MAX 13

