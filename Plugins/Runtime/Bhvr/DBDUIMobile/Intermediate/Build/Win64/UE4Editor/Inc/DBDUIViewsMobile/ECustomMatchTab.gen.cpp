// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/ECustomMatchTab.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECustomMatchTab() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchTab();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	static UEnum* ECustomMatchTab_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchTab, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("ECustomMatchTab"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSMOBILE_API UEnum* StaticEnum<ECustomMatchTab>()
	{
		return ECustomMatchTab_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMatchTab(ECustomMatchTab_StaticEnum, TEXT("/Script/DBDUIViewsMobile"), TEXT("ECustomMatchTab"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchTab_Hash() { return 2493377469U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchTab()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMatchTab"), 0, Get_Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchTab_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomMatchTab::Perks", (int64)ECustomMatchTab::Perks },
				{ "ECustomMatchTab::ItemsAndAddons", (int64)ECustomMatchTab::ItemsAndAddons },
				{ "ECustomMatchTab::Offerings", (int64)ECustomMatchTab::Offerings },
				{ "ECustomMatchTab::Maps", (int64)ECustomMatchTab::Maps },
				{ "ECustomMatchTab::BotDifficulty", (int64)ECustomMatchTab::BotDifficulty },
				{ "ECustomMatchTab::BotCharacter", (int64)ECustomMatchTab::BotCharacter },
				{ "ECustomMatchTab::Count", (int64)ECustomMatchTab::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BotCharacter.Name", "ECustomMatchTab::BotCharacter" },
				{ "BotDifficulty.Name", "ECustomMatchTab::BotDifficulty" },
				{ "Count.Name", "ECustomMatchTab::Count" },
				{ "ItemsAndAddons.Name", "ECustomMatchTab::ItemsAndAddons" },
				{ "Maps.Name", "ECustomMatchTab::Maps" },
				{ "ModuleRelativePath", "Public/ECustomMatchTab.h" },
				{ "Offerings.Name", "ECustomMatchTab::Offerings" },
				{ "Perks.Name", "ECustomMatchTab::Perks" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
				nullptr,
				"ECustomMatchTab",
				"ECustomMatchTab",
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
