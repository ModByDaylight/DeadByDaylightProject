// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlinePresence/Public/ERichPresenceStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERichPresenceStatus() {}
// Cross Module References
	ONLINEPRESENCE_API UEnum* Z_Construct_UEnum_OnlinePresence_ERichPresenceStatus();
	UPackage* Z_Construct_UPackage__Script_OnlinePresence();
// End Cross Module References
	static UEnum* ERichPresenceStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlinePresence_ERichPresenceStatus, Z_Construct_UPackage__Script_OnlinePresence(), TEXT("ERichPresenceStatus"));
		}
		return Singleton;
	}
	template<> ONLINEPRESENCE_API UEnum* StaticEnum<ERichPresenceStatus>()
	{
		return ERichPresenceStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERichPresenceStatus(ERichPresenceStatus_StaticEnum, TEXT("/Script/OnlinePresence"), TEXT("ERichPresenceStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlinePresence_ERichPresenceStatus_Hash() { return 3106655758U; }
	UEnum* Z_Construct_UEnum_OnlinePresence_ERichPresenceStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlinePresence();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERichPresenceStatus"), 0, Get_Z_Construct_UEnum_OnlinePresence_ERichPresenceStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERichPresenceStatus::Offline", (int64)ERichPresenceStatus::Offline },
				{ "ERichPresenceStatus::Connected", (int64)ERichPresenceStatus::Connected },
				{ "ERichPresenceStatus::InMenus", (int64)ERichPresenceStatus::InMenus },
				{ "ERichPresenceStatus::InPartyLobby", (int64)ERichPresenceStatus::InPartyLobby },
				{ "ERichPresenceStatus::InOnlineLobby", (int64)ERichPresenceStatus::InOnlineLobby },
				{ "ERichPresenceStatus::InMatch", (int64)ERichPresenceStatus::InMatch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Connected.Name", "ERichPresenceStatus::Connected" },
				{ "InMatch.Name", "ERichPresenceStatus::InMatch" },
				{ "InMenus.Name", "ERichPresenceStatus::InMenus" },
				{ "InOnlineLobby.Name", "ERichPresenceStatus::InOnlineLobby" },
				{ "InPartyLobby.Name", "ERichPresenceStatus::InPartyLobby" },
				{ "ModuleRelativePath", "Public/ERichPresenceStatus.h" },
				{ "Offline.Name", "ERichPresenceStatus::Offline" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlinePresence,
				nullptr,
				"ERichPresenceStatus",
				"ERichPresenceStatus",
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
