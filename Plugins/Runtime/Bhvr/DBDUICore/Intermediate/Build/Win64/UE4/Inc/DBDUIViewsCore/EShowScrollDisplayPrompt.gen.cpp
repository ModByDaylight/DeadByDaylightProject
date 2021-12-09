// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EShowScrollDisplayPrompt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEShowScrollDisplayPrompt() {}
// Cross Module References
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EShowScrollDisplayPrompt();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static UEnum* EShowScrollDisplayPrompt_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsCore_EShowScrollDisplayPrompt, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("EShowScrollDisplayPrompt"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<EShowScrollDisplayPrompt>()
	{
		return EShowScrollDisplayPrompt_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShowScrollDisplayPrompt(EShowScrollDisplayPrompt_StaticEnum, TEXT("/Script/DBDUIViewsCore"), TEXT("EShowScrollDisplayPrompt"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsCore_EShowScrollDisplayPrompt_Hash() { return 2004675500U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsCore_EShowScrollDisplayPrompt()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShowScrollDisplayPrompt"), 0, Get_Z_Construct_UEnum_DBDUIViewsCore_EShowScrollDisplayPrompt_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShowScrollDisplayPrompt::DontShow", (int64)EShowScrollDisplayPrompt::DontShow },
				{ "EShowScrollDisplayPrompt::AlwaysShow", (int64)EShowScrollDisplayPrompt::AlwaysShow },
				{ "EShowScrollDisplayPrompt::ShowOnMouseOver", (int64)EShowScrollDisplayPrompt::ShowOnMouseOver },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlwaysShow.Name", "EShowScrollDisplayPrompt::AlwaysShow" },
				{ "BlueprintType", "true" },
				{ "DontShow.Name", "EShowScrollDisplayPrompt::DontShow" },
				{ "ModuleRelativePath", "Public/EShowScrollDisplayPrompt.h" },
				{ "ShowOnMouseOver.Name", "EShowScrollDisplayPrompt::ShowOnMouseOver" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
				nullptr,
				"EShowScrollDisplayPrompt",
				"EShowScrollDisplayPrompt",
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
