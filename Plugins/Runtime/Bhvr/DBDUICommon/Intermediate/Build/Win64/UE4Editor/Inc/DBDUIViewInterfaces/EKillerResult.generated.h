// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_EKillerResult_generated_h
#error "EKillerResult.generated.h already included, missing '#pragma once' in EKillerResult.h"
#endif
#define DBDUIVIEWINTERFACES_EKillerResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EKillerResult_h


#define FOREACH_ENUM_EKILLERRESULT(op) \
	op(EKillerResult::DisgracefulDefeat) \
	op(EKillerResult::EntityDispleased) \
	op(EKillerResult::BrutalKiller) \
	op(EKillerResult::RuthlessKiller) \
	op(EKillerResult::MercilessKiller) 

enum class EKillerResult : uint8;
template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EKillerResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
