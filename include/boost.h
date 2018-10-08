#pragma once

#include <boost\memory_order.hpp>
typedef boost::memory_order mo;

extern void *FuncTable_boost[];

typedef void *(*boost_atomic_sint_new__)(short int);
#define boost_atomic_sint_new_ ((boost_atomic_sint_new__)FuncTable_boost[0])

typedef void (*boost_atomic_sint_delete__)(void *);
#define boost_atomic_sint_delete_ ((boost_atomic_sint_delete__)FuncTable_boost[1])

typedef short int  (*boost_atomic_sint_fetch_add__)(void *at, short b, mo c);
#define boost_atomic_sint_fetch_add_ ((boost_atomic_sint_fetch_add__)FuncTable_boost[2])

typedef short int (*boost_atomic_sint_fetch_sub__)(void *at, short b, mo c);
#define boost_atomic_sint_fetch_sub_ ((boost_atomic_sint_fetch_sub__)FuncTable_boost[3])

typedef void (*boost_atomic_thread_fence__)(mo c);
#define boost_atomic_thread_fence_ ((boost_atomic_thread_fence__)FuncTable_boost[4])


typedef void *(*boost_thread_new_shared_mutex__)();
#define boost_thread_new_shared_mutex_ ((boost_thread_new_shared_mutex__)FuncTable_boost[5])

typedef void (*boost_thread_shared_mutex_lock__)(void *v);
#define boost_thread_shared_mutex_lock_ ((boost_thread_shared_mutex_lock__)FuncTable_boost[6])

typedef void (*boost_thread_shared_mutex_lock_shared__)(void *v);
#define boost_thread_shared_mutex_lock_shared_ ((boost_thread_shared_mutex_lock_shared__)FuncTable_boost[7])

typedef void (*boost_thread_shared_mutex_unlock__)(void *v);
#define boost_thread_shared_mutex_unlock_ ((boost_thread_shared_mutex_unlock__)FuncTable_boost[8])

typedef void (*boost_thread_shared_mutex_unlock_shared__)(void *v);
#define boost_thread_shared_mutex_unlock_shared_ ((boost_thread_shared_mutex_unlock_shared__)FuncTable_boost[9])

typedef void (*boost_thread_delete_shared_mutex__)(void *);
#define boost_thread_delete_shared_mutex_ ((boost_thread_delete_shared_mutex__)FuncTable_boost[10])

typedef void (*boost_thread_yield__)();
#define boost_thread_yield_ ((boost_thread_yield__)FuncTable_boost[11])
