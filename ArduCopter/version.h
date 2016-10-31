#pragma once

#include "ap_version.h"

#define THISFIRMWARE "APM:Copter+STorM32 V3.47"
#define FIRMWARE_VERSION 3,4,0,FIRMWARE_VERSION_TYPE_OFFICIAL

#ifndef GIT_VERSION
#define FIRMWARE_STRING THISFIRMWARE
#else
#define FIRMWARE_STRING THISFIRMWARE " (" GIT_VERSION ")"
#endif
