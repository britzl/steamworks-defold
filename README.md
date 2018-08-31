# steamworks-defold
Steamworks support for Defold using the Defold extension system

This extension is a work in progress and not production ready. Please contribute!


## Bundle resources
You need to bundle your app with the required Steam lib. Use the [bundle_resources setting in game.project](https://www.defold.com/manuals/project-settings/#_project) to specify folders to include. The libs you need to include can be found in the `steamworks/bundle/` folder.

## App ID
The Steamworks API will not initialize if it does not know the App ID of your game. When you launch your app from Steam itself then it will automatically have the App ID available. While developing you will need to hint this to Steam with a text file. Create the a text file called steam_appid.txt next to your executable containing just the App ID and nothing else. This overrides the value that Steam provides. You should not ship this with your builds.
