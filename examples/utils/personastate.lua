local M = {}

PERSONASTATES = {
	[steamworks.PERSONASTATEOFFLINE] = "offline",
	[steamworks.PERSONASTATEONLINE] = "online",
	[steamworks.PERSONASTATEBUSY] = "busy",
	[steamworks.PERSONASTATEAWAY] = "away",
	[steamworks.PERSONASTATESNOOZE] = "snooze",
	[steamworks.PERSONASTATELOOKINGTOTRADE] = "looking to trade",
	[steamworks.PERSONASTATELOOKINGTOPLAY] = "looking to play",
}

function M.to_string(state)
	return PERSONASTATES[state]
end

return setmetatable(M, {
	__call = function(t, state)
		return M.to_string(state)
	end
})