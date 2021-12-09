// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_EInteractionPromptType_generated_h
#error "EInteractionPromptType.generated.h already included, missing '#pragma once' in EInteractionPromptType.h"
#endif
#define DBDUIVIEWINTERFACES_EInteractionPromptType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EInteractionPromptType_h


#define FOREACH_ENUM_EINTERACTIONPROMPTTYPE(op) \
	op(EInteractionPromptType::PressButton) \
	op(EInteractionPromptType::MashButton) \
	op(EInteractionPromptType::HoldButton) \
	op(EInteractionPromptType::AlternateTwoButtons) \
	op(EInteractionPromptType::WiggleThumbstick) \
	op(EInteractionPromptType::MovementAxes) \
	op(EInteractionPromptType::MovementKeys) 

enum class EInteractionPromptType : uint8;
template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EInteractionPromptType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
