// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EAnalogCursorStickiness.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAnalogCursorStickiness() {}
// Cross Module References
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EAnalogCursorStickiness();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static UEnum* EAnalogCursorStickiness_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsCore_EAnalogCursorStickiness, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("EAnalogCursorStickiness"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<EAnalogCursorStickiness>()
	{
		return EAnalogCursorStickiness_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAnalogCursorStickiness(EAnalogCursorStickiness_StaticEnum, TEXT("/Script/DBDUIViewsCore"), TEXT("EAnalogCursorStickiness"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsCore_EAnalogCursorStickiness_Hash() { return 558235551U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsCore_EAnalogCursorStickiness()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAnalogCursorStickiness"), 0, Get_Z_Construct_UEnum_DBDUIViewsCore_EAnalogCursorStickiness_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAnalogCursorStickiness::None", (int64)EAnalogCursorStickiness::None },
				{ "EAnalogCursorStickiness::ButtonSmall", (int64)EAnalogCursorStickiness::ButtonSmall },
				{ "EAnalogCursorStickiness::ButtonMedium", (int64)EAnalogCursorStickiness::ButtonMedium },
				{ "EAnalogCursorStickiness::ButtonLarge", (int64)EAnalogCursorStickiness::ButtonLarge },
				{ "EAnalogCursorStickiness::Bloodweb", (int64)EAnalogCursorStickiness::Bloodweb },
				{ "EAnalogCursorStickiness::Slow", (int64)EAnalogCursorStickiness::Slow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bloodweb.Name", "EAnalogCursorStickiness::Bloodweb" },
				{ "BlueprintType", "true" },
				{ "ButtonLarge.Name", "EAnalogCursorStickiness::ButtonLarge" },
				{ "ButtonMedium.Name", "EAnalogCursorStickiness::ButtonMedium" },
				{ "ButtonSmall.Name", "EAnalogCursorStickiness::ButtonSmall" },
				{ "ModuleRelativePath", "Public/EAnalogCursorStickiness.h" },
				{ "None.Name", "EAnalogCursorStickiness::None" },
				{ "Slow.Name", "EAnalogCursorStickiness::Slow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
				nullptr,
				"EAnalogCursorStickiness",
				"EAnalogCursorStickiness",
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
