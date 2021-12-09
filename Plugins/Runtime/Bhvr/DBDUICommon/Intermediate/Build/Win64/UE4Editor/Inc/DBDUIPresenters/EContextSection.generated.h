// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIPRESENTERS_EContextSection_generated_h
#error "EContextSection.generated.h already included, missing '#pragma once' in EContextSection.h"
#endif
#define DBDUIPRESENTERS_EContextSection_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_EContextSection_h


#define FOREACH_ENUM_ECONTEXTSECTION(op) \
	op(EContextSection::None) \
	op(EContextSection::Hud) \
	op(EContextSection::MainMenu) \
	op(EContextSection::Lobby) \
	op(EContextSection::Store) \
	op(EContextSection::Tally) \
	op(EContextSection::Archive) \
	op(EContextSection::Credits) \
	op(EContextSection::Onboarding) 

enum class EContextSection : uint8;
template<> DBDUIPRESENTERS_API UEnum* StaticEnum<EContextSection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
