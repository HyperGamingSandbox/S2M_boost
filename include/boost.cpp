#include "boost.h"

void *FuncTable_boost[] = {
	0, 0, 0, 0
   ,0, 0, 0, 0
   ,0, 0, 0, 0
};

EXPORT_DLL int luaC_setupFuncTableFor_boost(lua_State *L) {

	typedef void(*setuper)(void **);
	setuper v = (setuper)lua_touserdata_(L, 1);
	v(FuncTable_boost);

	return 0;
}
