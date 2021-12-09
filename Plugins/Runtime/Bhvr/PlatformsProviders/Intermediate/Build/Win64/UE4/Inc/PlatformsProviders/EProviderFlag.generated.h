// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMSPROVIDERS_EProviderFlag_generated_h
#error "EProviderFlag.generated.h already included, missing '#pragma once' in EProviderFlag.h"
#endif
#define PLATFORMSPROVIDERS_EProviderFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_PlatformsProviders_Source_PlatformsProviders_Public_EProviderFlag_h


#define FOREACH_ENUM_EPROVIDERFLAG(op) \
	op(EProviderFlag::None) \
	op(EProviderFlag::Google) \
	op(EProviderFlag::DMM) \
	op(EProviderFlag::Facebook) \
	op(EProviderFlag::Nintendo) \
	op(EProviderFlag::PSN) \
	op(EProviderFlag::Steam) \
	op(EProviderFlag::WinGDK) \
	op(EProviderFlag::Xbox) \
	op(EProviderFlag::Apple) \
	op(EProviderFlag::Kraken) \
	op(EProviderFlag::Stadia) \
	op(EProviderFlag::GAS3) \
	op(EProviderFlag::Epic) 

enum class EProviderFlag : uint32;
template<> PLATFORMSPROVIDERS_API UEnum* StaticEnum<EProviderFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
