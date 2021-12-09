// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_ESingleHookState_generated_h
#error "ESingleHookState.generated.h already included, missing '#pragma once' in ESingleHookState.h"
#endif
#define DBDUIVIEWINTERFACES_ESingleHookState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ESingleHookState_h


#define FOREACH_ENUM_ESINGLEHOOKSTATE(op) \
	op(ESingleHookState::EMPTY) \
	op(ESingleHookState::UNHOOKED) \
	op(ESingleHookState::HOOKED) \
	op(ESingleHookState::DISCONNECTED) 

enum class ESingleHookState;
template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<ESingleHookState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
