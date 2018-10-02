
local dll =  require('coreHelpers').loadDLL("boost.dll")

local function setupFuncTable (destDLL)
	destDLL:getCFunction("luaC_setupFuncTableFor_boost")(dll:getCFunction("luaC_funcTable")())
end

return { api = { setupFuncTable = setupFuncTable } } 