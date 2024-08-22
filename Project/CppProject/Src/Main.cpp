#include <iostream>

extern "C"
{
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

int main() {
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	luaL_dofile(L, "Lua/main.lua");
	lua_close(L);

	printf("Please enter to exit ...");
	getchar();
	return 0;
}