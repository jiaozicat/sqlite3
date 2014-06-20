#ifndef __LSQLITE3_H__
#define __LSQLITE3_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "lauxlib.h"

LUALIB_API int luaopen_lsqlite3(lua_State *L);

#if __cplusplus
}
#endif

#endif //__LSQLITE3_H__
