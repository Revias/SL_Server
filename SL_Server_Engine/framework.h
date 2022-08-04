// header.h: 표준 시스템 포함 파일
// 또는 프로젝트 특정 포함 파일이 들어 있는 포함 파일입니다.
//

#pragma once

#define WIN32_LEAN_AND_MEAN             // 거의 사용되지 않는 내용을 Windows 헤더에서 제외합니다.
// Windows 헤더 파일
#include <windows.h>
// C 런타임 헤더 파일입니다.
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <io.h>

#include <stdio.h>
#include <thread>
#include <mutex>
#include <string>
#include <algorithm>
#include <random>
#include <functional>
#include <array>

// 외부 라이브러리 헤더 파일
//--------------------------------------------------------------//
#include "json/json.h"
#include "json/json-forwards.h"


// TODO 필수 헤더 파일
//--------------------------------------------------------------//
#include "Util/Singleton.h"
#include "Util/Util.h"
#include "Util/Type.h"
#include "Util/Clock.h"
#include "Util/Thread.h"

// 전역 변수