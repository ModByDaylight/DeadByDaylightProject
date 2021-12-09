// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINEPRESENCE_ERichPresenceStatus_generated_h
#error "ERichPresenceStatus.generated.h already included, missing '#pragma once' in ERichPresenceStatus.h"
#endif
#define ONLINEPRESENCE_ERichPresenceStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_OnlinePresence_Source_OnlinePresence_Public_ERichPresenceStatus_h


#define FOREACH_ENUM_ERICHPRESENCESTATUS(op) \
	op(ERichPresenceStatus::Offline) \
	op(ERichPresenceStatus::Connected) \
	op(ERichPresenceStatus::InMenus) \
	op(ERichPresenceStatus::InPartyLobby) \
	op(ERichPresenceStatus::InOnlineLobby) \
	op(ERichPresenceStatus::InMatch) 

enum class ERichPresenceStatus : uint8;
template<> ONLINEPRESENCE_API UEnum* StaticEnum<ERichPresenceStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
