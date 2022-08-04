#pragma once
#include "../framework.h"
#include <atomic>


// 타입 정의
union UINT64					object_t;
typedef UINT64					oid_t;
typedef int32_t					packet_size_t;

typedef std::time_t				tick_t;
typedef std::thread				thread_t;
typedef std::thread::id			threadId_t;

typedef std::recursive_mutex	lock_t;


typedef std::string				str_t;
typedef std::wstring			wstr_t;


// 크기 정의
#define SIZE_8						8
#define SIZE_64						64
#define SIZE_128					128
#define SIZE_256					256
#define SIZE_512					512
#define SIZE_4096					4096
#define SIZE_8192					8192

#define DB_PARAM_SIZE				8192
#define SOCKET_BUF_SIZE				1024 * 18


// json
typedef Json::Value		json_t;