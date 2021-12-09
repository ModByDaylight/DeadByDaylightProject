// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_EInputSwitcherDisplayRule_generated_h
#error "EInputSwitcherDisplayRule.generated.h already included, missing '#pragma once' in EInputSwitcherDisplayRule.h"
#endif
#define DBDUIVIEWSCORE_EInputSwitcherDisplayRule_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EInputSwitcherDisplayRule_h


#define FOREACH_ENUM_EINPUTSWITCHERDISPLAYRULE(op) \
	op(EInputSwitcherDisplayRule::Undefined) \
	op(EInputSwitcherDisplayRule::OnlyGamepad) \
	op(EInputSwitcherDisplayRule::OnlyKeyboard) \
	op(EInputSwitcherDisplayRule::Always) 

enum class EInputSwitcherDisplayRule : uint8;
template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<EInputSwitcherDisplayRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
