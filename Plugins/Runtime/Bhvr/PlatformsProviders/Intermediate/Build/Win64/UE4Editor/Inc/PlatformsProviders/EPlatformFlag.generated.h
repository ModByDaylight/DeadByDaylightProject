// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMSPROVIDERS_EPlatformFlag_generated_h
#error "EPlatformFlag.generated.h already included, missing '#pragma once' in EPlatformFlag.h"
#endif
#define PLATFORMSPROVIDERS_EPlatformFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_PlatformsProviders_Source_PlatformsProviders_Public_EPlatformFlag_h


#define FOREACH_ENUM_EPLATFORMFLAG(op) \
	op(EPlatformFlag::None) \
	op(EPlatformFlag::Android) \
	op(EPlatformFlag::DMM) \
	op(EPlatformFlag::IOS) \
	op(EPlatformFlag::Switch) \
	op(EPlatformFlag::PS4) \
	op(EPlatformFlag::Steam) \
	op(EPlatformFlag::WinGDK) \
	op(EPlatformFlag::Xbox) \
	op(EPlatformFlag::Stadia) \
	op(EPlatformFlag::PS5) \
	op(EPlatformFlag::XSX) \
	op(EPlatformFlag::Epic) 

enum class EPlatformFlag : uint32;
template<> PLATFORMSPROVIDERS_API UEnum* StaticEnum<EPlatformFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
