// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSMOBILE_ECustomMatchOptions_generated_h
#error "ECustomMatchOptions.generated.h already included, missing '#pragma once' in ECustomMatchOptions.h"
#endif
#define DBDUIVIEWSMOBILE_ECustomMatchOptions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_ECustomMatchOptions_h


#define FOREACH_ENUM_ECUSTOMMATCHOPTIONS(op) \
	op(ECustomMatchOptions::All) \
	op(ECustomMatchOptions::None) \
	op(ECustomMatchOptions::Owned) \
	op(ECustomMatchOptions::Random) \
	op(ECustomMatchOptions::Special) \
	op(ECustomMatchOptions::Count) 

enum class ECustomMatchOptions : uint8;
template<> DBDUIVIEWSMOBILE_API UEnum* StaticEnum<ECustomMatchOptions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
