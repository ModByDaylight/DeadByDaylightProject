// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSMOBILE_EActionOnFriendType_generated_h
#error "EActionOnFriendType.generated.h already included, missing '#pragma once' in EActionOnFriendType.h"
#endif
#define DBDUIVIEWSMOBILE_EActionOnFriendType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_EActionOnFriendType_h


#define FOREACH_ENUM_EACTIONONFRIENDTYPE(op) \
	op(EActionOnFriendType::None) \
	op(EActionOnFriendType::SendFriendRequest) \
	op(EActionOnFriendType::ConfirmFriendRequest) \
	op(EActionOnFriendType::DeclineFriendRequest) \
	op(EActionOnFriendType::RemoveFriend) \
	op(EActionOnFriendType::AddToFavorite) \
	op(EActionOnFriendType::RemoveToFavorite) \
	op(EActionOnFriendType::Mute) \
	op(EActionOnFriendType::Unmute) \
	op(EActionOnFriendType::InviteToParty) \
	op(EActionOnFriendType::CancelInviteToParty) \
	op(EActionOnFriendType::Select) \
	op(EActionOnFriendType::ConfirmAction) \
	op(EActionOnFriendType::DeclineAction) \
	op(EActionOnFriendType::RemovePlayerFromParty) \
	op(EActionOnFriendType::Count) 

enum class EActionOnFriendType : uint8;
template<> DBDUIVIEWSMOBILE_API UEnum* StaticEnum<EActionOnFriendType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
