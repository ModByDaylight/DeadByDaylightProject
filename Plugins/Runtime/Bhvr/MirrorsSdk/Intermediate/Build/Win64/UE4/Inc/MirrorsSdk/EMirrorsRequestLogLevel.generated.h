// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MIRRORSSDK_EMirrorsRequestLogLevel_generated_h
#error "EMirrorsRequestLogLevel.generated.h already included, missing '#pragma once' in EMirrorsRequestLogLevel.h"
#endif
#define MIRRORSSDK_EMirrorsRequestLogLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_MirrorsSdk_Source_MirrorsSdk_Public_EMirrorsRequestLogLevel_h


#define FOREACH_ENUM_EMIRRORSREQUESTLOGLEVEL(op) \
	op(EMirrorsRequestLogLevel::None) \
	op(EMirrorsRequestLogLevel::NetworkError) \
	op(EMirrorsRequestLogLevel::HttpError) \
	op(EMirrorsRequestLogLevel::All) 

enum class EMirrorsRequestLogLevel;
template<> MIRRORSSDK_API UEnum* StaticEnum<EMirrorsRequestLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
