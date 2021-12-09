// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/EActionOnFriendType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEActionOnFriendType() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	static UEnum* EActionOnFriendType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("EActionOnFriendType"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSMOBILE_API UEnum* StaticEnum<EActionOnFriendType>()
	{
		return EActionOnFriendType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EActionOnFriendType(EActionOnFriendType_StaticEnum, TEXT("/Script/DBDUIViewsMobile"), TEXT("EActionOnFriendType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType_Hash() { return 199525006U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EActionOnFriendType"), 0, Get_Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EActionOnFriendType::None", (int64)EActionOnFriendType::None },
				{ "EActionOnFriendType::SendFriendRequest", (int64)EActionOnFriendType::SendFriendRequest },
				{ "EActionOnFriendType::ConfirmFriendRequest", (int64)EActionOnFriendType::ConfirmFriendRequest },
				{ "EActionOnFriendType::DeclineFriendRequest", (int64)EActionOnFriendType::DeclineFriendRequest },
				{ "EActionOnFriendType::RemoveFriend", (int64)EActionOnFriendType::RemoveFriend },
				{ "EActionOnFriendType::AddToFavorite", (int64)EActionOnFriendType::AddToFavorite },
				{ "EActionOnFriendType::RemoveToFavorite", (int64)EActionOnFriendType::RemoveToFavorite },
				{ "EActionOnFriendType::Mute", (int64)EActionOnFriendType::Mute },
				{ "EActionOnFriendType::Unmute", (int64)EActionOnFriendType::Unmute },
				{ "EActionOnFriendType::InviteToParty", (int64)EActionOnFriendType::InviteToParty },
				{ "EActionOnFriendType::CancelInviteToParty", (int64)EActionOnFriendType::CancelInviteToParty },
				{ "EActionOnFriendType::Select", (int64)EActionOnFriendType::Select },
				{ "EActionOnFriendType::ConfirmAction", (int64)EActionOnFriendType::ConfirmAction },
				{ "EActionOnFriendType::DeclineAction", (int64)EActionOnFriendType::DeclineAction },
				{ "EActionOnFriendType::RemovePlayerFromParty", (int64)EActionOnFriendType::RemovePlayerFromParty },
				{ "EActionOnFriendType::Count", (int64)EActionOnFriendType::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AddToFavorite.Name", "EActionOnFriendType::AddToFavorite" },
				{ "CancelInviteToParty.Name", "EActionOnFriendType::CancelInviteToParty" },
				{ "ConfirmAction.Name", "EActionOnFriendType::ConfirmAction" },
				{ "ConfirmFriendRequest.Name", "EActionOnFriendType::ConfirmFriendRequest" },
				{ "Count.Name", "EActionOnFriendType::Count" },
				{ "DeclineAction.Name", "EActionOnFriendType::DeclineAction" },
				{ "DeclineFriendRequest.Name", "EActionOnFriendType::DeclineFriendRequest" },
				{ "InviteToParty.Name", "EActionOnFriendType::InviteToParty" },
				{ "ModuleRelativePath", "Public/EActionOnFriendType.h" },
				{ "Mute.Name", "EActionOnFriendType::Mute" },
				{ "None.Name", "EActionOnFriendType::None" },
				{ "RemoveFriend.Name", "EActionOnFriendType::RemoveFriend" },
				{ "RemovePlayerFromParty.Name", "EActionOnFriendType::RemovePlayerFromParty" },
				{ "RemoveToFavorite.Name", "EActionOnFriendType::RemoveToFavorite" },
				{ "Select.Name", "EActionOnFriendType::Select" },
				{ "SendFriendRequest.Name", "EActionOnFriendType::SendFriendRequest" },
				{ "Unmute.Name", "EActionOnFriendType::Unmute" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
				nullptr,
				"EActionOnFriendType",
				"EActionOnFriendType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
