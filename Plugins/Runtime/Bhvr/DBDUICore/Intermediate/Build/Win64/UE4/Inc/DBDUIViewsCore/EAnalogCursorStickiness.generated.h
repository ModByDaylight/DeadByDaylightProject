// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_EAnalogCursorStickiness_generated_h
#error "EAnalogCursorStickiness.generated.h already included, missing '#pragma once' in EAnalogCursorStickiness.h"
#endif
#define DBDUIVIEWSCORE_EAnalogCursorStickiness_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_EAnalogCursorStickiness_h


#define FOREACH_ENUM_EANALOGCURSORSTICKINESS(op) \
	op(EAnalogCursorStickiness::None) \
	op(EAnalogCursorStickiness::ButtonSmall) \
	op(EAnalogCursorStickiness::ButtonMedium) \
	op(EAnalogCursorStickiness::ButtonLarge) \
	op(EAnalogCursorStickiness::Bloodweb) \
	op(EAnalogCursorStickiness::Slow) 

enum class EAnalogCursorStickiness : uint8;
template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<EAnalogCursorStickiness>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
