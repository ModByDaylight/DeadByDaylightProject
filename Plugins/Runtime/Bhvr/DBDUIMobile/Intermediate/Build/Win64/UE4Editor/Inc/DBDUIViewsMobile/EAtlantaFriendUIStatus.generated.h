// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSMOBILE_EAtlantaFriendUIStatus_generated_h
#error "EAtlantaFriendUIStatus.generated.h already included, missing '#pragma once' in EAtlantaFriendUIStatus.h"
#endif
#define DBDUIVIEWSMOBILE_EAtlantaFriendUIStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_EAtlantaFriendUIStatus_h


#define FOREACH_ENUM_EATLANTAFRIENDUISTATUS(op) \
	op(EAtlantaFriendUIStatus::Undefined) \
	op(EAtlantaFriendUIStatus::FriendSuggestion) \
	op(EAtlantaFriendUIStatus::FriendRequestSent) \
	op(EAtlantaFriendUIStatus::FriendRequestReceived) \
	op(EAtlantaFriendUIStatus::Available) \
	op(EAtlantaFriendUIStatus::InAMatch) \
	op(EAtlantaFriendUIStatus::Offline) \
	op(EAtlantaFriendUIStatus::AddFriendToSeeStatus) 

enum class EAtlantaFriendUIStatus : uint8;
template<> DBDUIVIEWSMOBILE_API UEnum* StaticEnum<EAtlantaFriendUIStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
