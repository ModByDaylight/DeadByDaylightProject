// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/EFriendTypeButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEFriendTypeButton() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EFriendTypeButton();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	static UEnum* EFriendTypeButton_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsMobile_EFriendTypeButton, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("EFriendTypeButton"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSMOBILE_API UEnum* StaticEnum<EFriendTypeButton>()
	{
		return EFriendTypeButton_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFriendTypeButton(EFriendTypeButton_StaticEnum, TEXT("/Script/DBDUIViewsMobile"), TEXT("EFriendTypeButton"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsMobile_EFriendTypeButton_Hash() { return 2815400060U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EFriendTypeButton()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFriendTypeButton"), 0, Get_Z_Construct_UEnum_DBDUIViewsMobile_EFriendTypeButton_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFriendTypeButton::InvitePlayerToParty", (int64)EFriendTypeButton::InvitePlayerToParty },
				{ "EFriendTypeButton::RemovePlayerFromParty", (int64)EFriendTypeButton::RemovePlayerFromParty },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "InvitePlayerToParty.Name", "EFriendTypeButton::InvitePlayerToParty" },
				{ "ModuleRelativePath", "Public/EFriendTypeButton.h" },
				{ "RemovePlayerFromParty.Name", "EFriendTypeButton::RemovePlayerFromParty" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
				nullptr,
				"EFriendTypeButton",
				"EFriendTypeButton",
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
