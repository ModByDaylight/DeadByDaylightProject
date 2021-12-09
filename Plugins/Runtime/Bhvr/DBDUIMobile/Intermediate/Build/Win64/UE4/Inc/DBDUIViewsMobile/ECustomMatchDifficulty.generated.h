// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSMOBILE_ECustomMatchDifficulty_generated_h
#error "ECustomMatchDifficulty.generated.h already included, missing '#pragma once' in ECustomMatchDifficulty.h"
#endif
#define DBDUIVIEWSMOBILE_ECustomMatchDifficulty_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_ECustomMatchDifficulty_h


#define FOREACH_ENUM_ECUSTOMMATCHDIFFICULTY(op) \
	op(ECustomMatchDifficulty::Easy) \
	op(ECustomMatchDifficulty::Medium) \
	op(ECustomMatchDifficulty::Hard) \
	op(ECustomMatchDifficulty::Suggested) \
	op(ECustomMatchDifficulty::Random) \
	op(ECustomMatchDifficulty::None) \
	op(ECustomMatchDifficulty::Max) 

enum class ECustomMatchDifficulty : uint8;
template<> DBDUIVIEWSMOBILE_API UEnum* StaticEnum<ECustomMatchDifficulty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
