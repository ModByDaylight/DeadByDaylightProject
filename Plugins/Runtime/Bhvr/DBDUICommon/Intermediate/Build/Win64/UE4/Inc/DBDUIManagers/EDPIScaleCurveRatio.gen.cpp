// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIManagers/Public/EDPIScaleCurveRatio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEDPIScaleCurveRatio() {}
// Cross Module References
	DBDUIMANAGERS_API UEnum* Z_Construct_UEnum_DBDUIManagers_EDPIScaleCurveRatio();
	UPackage* Z_Construct_UPackage__Script_DBDUIManagers();
// End Cross Module References
	static UEnum* EDPIScaleCurveRatio_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIManagers_EDPIScaleCurveRatio, Z_Construct_UPackage__Script_DBDUIManagers(), TEXT("EDPIScaleCurveRatio"));
		}
		return Singleton;
	}
	template<> DBDUIMANAGERS_API UEnum* StaticEnum<EDPIScaleCurveRatio>()
	{
		return EDPIScaleCurveRatio_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDPIScaleCurveRatio(EDPIScaleCurveRatio_StaticEnum, TEXT("/Script/DBDUIManagers"), TEXT("EDPIScaleCurveRatio"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIManagers_EDPIScaleCurveRatio_Hash() { return 405985780U; }
	UEnum* Z_Construct_UEnum_DBDUIManagers_EDPIScaleCurveRatio()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIManagers();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDPIScaleCurveRatio"), 0, Get_Z_Construct_UEnum_DBDUIManagers_EDPIScaleCurveRatio_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDPIScaleCurveRatio::Default", (int64)EDPIScaleCurveRatio::Default },
				{ "EDPIScaleCurveRatio::SmallerEqual4_3", (int64)EDPIScaleCurveRatio::SmallerEqual4_3 },
				{ "EDPIScaleCurveRatio::Mobile", (int64)EDPIScaleCurveRatio::Mobile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EDPIScaleCurveRatio::Default" },
				{ "Mobile.Name", "EDPIScaleCurveRatio::Mobile" },
				{ "ModuleRelativePath", "Public/EDPIScaleCurveRatio.h" },
				{ "SmallerEqual4_3.Name", "EDPIScaleCurveRatio::SmallerEqual4_3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIManagers,
				nullptr,
				"EDPIScaleCurveRatio",
				"EDPIScaleCurveRatio",
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
