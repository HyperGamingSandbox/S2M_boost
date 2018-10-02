#include "stdafx.h"
#include "Seed2.0\Seed2.0.h"
#include "Seed2.0\Seed2.0.cpp"

#include <boost\atomic.hpp>

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved ) {
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH: 
        break;
    }
    return TRUE;
}

void *boost_atomic_sint_new(short int c) {
	return new boost::atomic<short int>(c);
}

void boost_atomic_sint_delete(void *c) {
	auto a = (boost::atomic<short int> *)c;
	delete a;
}

short int  boost_atomic_sint_fetch_add(void *at, short b, boost::memory_order c) {
	auto a = (boost::atomic<short int> *)at;
	return a->fetch_add(b, c);
}

short int boost_atomic_sint_fetch_sub(void *at, short b, boost::memory_order c) {
	auto a = (boost::atomic<short int> *)at;
	return a->fetch_sub(b, c);
}

void boost_atomic_thread_fence(boost::memory_order c) {
	boost::atomic_thread_fence(c);
}


void funcTable_copy(void **tbl) {
	tbl[0] = boost_atomic_sint_new;
	tbl[1] = boost_atomic_sint_delete;
	tbl[2] = boost_atomic_sint_fetch_add;
	tbl[3] = boost_atomic_sint_fetch_sub;
	tbl[4] = boost_atomic_thread_fence;
}

EXPORT_DLL int luaC_funcTable(lua_State *L) {

	lua_pushlightuserdata_(L, funcTable_copy);
	return 1;
}