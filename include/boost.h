#pragma once

#include <boost\memory_order.hpp>

extern void *FuncTable_boost[];

typedef void *(*boost_atomic_sint_new__)(short int);
#define boost_atomic_sint_new_ ((boost_atomic_sint_new__)FuncTable_boost[0])

typedef void (*boost_atomic_sint_delete__)(void *);
#define boost_atomic_sint_delete_ ((boost_atomic_sint_delete__)FuncTable_boost[1])

typedef short int  (*boost_atomic_sint_fetch_add__)(void *at, short b, boost::memory_order c);
#define boost_atomic_sint_fetch_add_ ((boost_atomic_sint_fetch_add__)FuncTable_boost[2])

typedef short int (*boost_atomic_sint_fetch_sub__)(void *at, short b, boost::memory_order c);
#define boost_atomic_sint_fetch_sub_ ((boost_atomic_sint_fetch_sub__)FuncTable_boost[3])

typedef void (*boost_atomic_thread_fence__)(boost::memory_order c);
#define boost_atomic_thread_fence_ ((boost_atomic_thread_fence__)FuncTable_boost[4])
