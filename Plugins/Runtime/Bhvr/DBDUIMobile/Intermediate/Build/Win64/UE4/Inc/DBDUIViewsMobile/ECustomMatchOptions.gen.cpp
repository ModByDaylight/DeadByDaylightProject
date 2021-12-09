// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/ECustomMatchOptions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECustomMatchOptions() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	static UEnum* ECustomMatchOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("ECustomMatchOptions"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSMOBILE_API UEnum* StaticEnum<ECustomMatchOptions>()
	{
		return ECustomMatchOptions_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomMatchOptions(ECustomMatchOptions_StaticEnum, TEXT("/Script/DBDUIViewsMobile"), TEXT("ECustomMatchOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions_Hash() { return 2696521279U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomMatchOptions"), 0, Get_Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomMatchOptions::All", (int64)ECustomMatchOptions::All },
				{ "ECustomMatchOptions::None", (int64)ECustomMatchOptions::None },
				{ "ECustomMatchOptions::Owned", (int64)ECustomMatchOptions::Owned },
				{ "ECustomMatchOptions::Random", (int64)ECustomMatchOptions::Random },
				{ "ECustomMatchOptions::Special", (int64)ECustomMatchOptions::Special },
				{ "ECustomMatchOptions::Count", (int64)ECustomMatchOptions::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ECustomMatchOptions::All" },
				{ "Count.Name", "ECustomMatchOptions::Count" },
				{ "ModuleRelativePath", "Public/ECustomMatchOptions.h" },
				{ "None.Name", "ECustomMatchOptions::None" },
				{ "Owned.Name", "ECustomMatchOptions::Owned" },
				{ "Random.Name", "ECustomMatchOptions::Random" },
				{ "Special.Name", "ECustomMatchOptions::Special" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
				nullptr,
				"ECustomMatchOptions",
				"ECustomMatchOptions",
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
