// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIMANAGERS_EScaleType_generated_h
#error "EScaleType.generated.h already included, missing '#pragma once' in EScaleType.h"
#endif
#define DBDUIMANAGERS_EScaleType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIManagers_Public_EScaleType_h


#define FOREACH_ENUM_ESCALETYPE(op) \
	op(EScaleType::None) \
	op(EScaleType::Menu) \
	op(EScaleType::Hud) \
	op(EScaleType::SkillCheck) 

enum class EScaleType : uint8;
template<> DBDUIMANAGERS_API UEnum* StaticEnum<EScaleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
