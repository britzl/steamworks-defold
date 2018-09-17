# steamworks-defold
Steamworks support for Defold using the Defold extension system

This extension is a work in progress and not production ready. Please contribute!

## Installation
You can use Steamworks in your own project by adding this project as a [Defold library dependency](http://www.defold.com/manuals/libraries/). Open your game.project file and in the dependencies field under project add:

	https://github.com/britzl/steamworks-defold/archive/master.zip

Or point to the ZIP file of a [specific release](https://github.com/britzl/steamworks-defold/releases).

### Bundle resources
You need to bundle your app with the required Steam lib. Use the [bundle_resources setting in game.project](https://www.defold.com/manuals/project-settings/#_project) to specify folders to include. The libs you need to include can be found in the `steamworks/bundle/` folder.

### App ID
The Steamworks API will not initialize if it does not know the App ID of your game. When you launch your app from Steam itself then it will automatically have the App ID available. While developing you will need to hint this to Steam with a text file. Create the a text file called steam_appid.txt next to your executable containing just the App ID and nothing else. This overrides the value that Steam provides. You should not ship this with your builds.

## Usage
### Basic example

	function init(self)
		steamworks.init()

		steamworks.set_listener(function(self, event, data)
			print(event)
			pprint(data)
			if event == "UserStatsReceived_t" then
				print("Got user stats")
				pprint(data)
			end
		end)

		local user_id = steamworks.user_get_steam_id()
		steamworks.user_stats_request_current_stats()
	end

## Using the SteamAPI
The extension exposes most of the Steamworks functionality through an auto-generated API.

* Supported APIs
 * ISteamApps
 * ISteamAppTicket
 * ISteamClient
 * ISteamFriends
 * ISteamInventory
 * ISteamMatchmaking
 * ISteamMusic
 * ISteamNetworking
 * ISteamRemoteStorage
 * ISteamUser
 * ISteamUserStats
 * ISteamUtils
* Unsupported APIs
 * ISteamController
 * ISteamGameCoordinator (deprecated)
 * ISteamGameServer (for game servers, could be supported in the future)
 * ISteamGameServerStats (for game servers, could be supported in the future)
 * ISteamHTMLSurface
 * ISteamHTTP (use http.request instead)
 * ISteamMatchmakingServers
 * ISteamMusicRemote
 * ISteamScreenshots
 * ISteamUGC
 * ISteamUnifiedMessages
 * ISteamVideo

### Naming convention
Function names are converted to snake case using the following convention:

	SteamMatchmaking()->GetLobbyDataByIndex() -> steamworks.matchmaking_get_lobby_data_by_index()
	SteamNetworking()->IsP2PPacketAvailable() -> steamworks.networking_is_p2networking_is_p2p_packet_available()

### Generating the API
The API is generated from the `steam_api.json` which is part of the Steamworks SDK. The generator is written in Python using a Mustache template, `generate.py` and `extension.mtl` respectively. Some minor alterations have been made to the `steam_api.json` definition file.

### API Overview
Refer to the [API Overview](steamworks/api.md) for a list of all generated functions, constants and callbacks.

## Example app
Refer to the `examples` folder for an Defold application that showcases the use of many parts of the API. Build the example app from Defold and run it from the command line using one of `run_osx.sh`, `run_x86_64-linux.sh` and `run_x86_64-win32.bat`.
