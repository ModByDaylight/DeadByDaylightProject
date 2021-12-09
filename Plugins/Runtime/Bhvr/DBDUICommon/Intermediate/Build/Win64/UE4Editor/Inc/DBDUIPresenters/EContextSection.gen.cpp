// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/EContextSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEContextSection() {}
// Cross Module References
	DBDUIPRESENTERS_API UEnum* Z_Construct_UEnum_DBDUIPresenters_EContextSection();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	static UEnum* EContextSection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIPresenters_EContextSection, Z_Construct_UPackage__Script_DBDUIPresenters(), TEXT("EContextSection"));
		}
		return Singleton;
	}
	template<> DBDUIPRESENTERS_API UEnum* StaticEnum<EContextSection>()
	{
		return EContextSection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContextSection(EContextSection_StaticEnum, TEXT("/Script/DBDUIPresenters"), TEXT("EContextSection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIPresenters_EContextSection_Hash() { return 437181638U; }
	UEnum* Z_Construct_UEnum_DBDUIPresenters_EContextSection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIPresenters();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContextSection"), 0, Get_Z_Construct_UEnum_DBDUIPresenters_EContextSection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContextSection::None", (int64)EContextSection::None },
				{ "EContextSection::Hud", (int64)EContextSection::Hud },
				{ "EContextSection::MainMenu", (int64)EContextSection::MainMenu },
				{ "EContextSection::Lobby", (int64)EContextSection::Lobby },
				{ "EContextSection::Store", (int64)EContextSection::Store },
				{ "EContextSection::Tally", (int64)EContextSection::Tally },
				{ "EContextSection::Archive", (int64)EContextSection::Archive },
				{ "EContextSection::Credits", (int64)EContextSection::Credits },
				{ "EContextSection::Onboarding", (int64)EContextSection::Onboarding },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Archive.Name", "EContextSection::Archive" },
				{ "Credits.Name", "EContextSection::Credits" },
				{ "Hud.Name", "EContextSection::Hud" },
				{ "Lobby.Name", "EContextSection::Lobby" },
				{ "MainMenu.Name", "EContextSection::MainMenu" },
				{ "ModuleRelativePath", "Public/EContextSection.h" },
				{ "None.Name", "EContextSection::None" },
				{ "Onboarding.Name", "EContextSection::Onboarding" },
				{ "Store.Name", "EContextSection::Store" },
				{ "Tally.Name", "EContextSection::Tally" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIPresenters,
				nullptr,
				"EContextSection",
				"EContextSection",
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
