// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIManagers/Public/DPIScaleCurveForRatio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDPIScaleCurveForRatio() {}
// Cross Module References
	DBDUIMANAGERS_API UScriptStruct* Z_Construct_UScriptStruct_FDPIScaleCurveForRatio();
	UPackage* Z_Construct_UPackage__Script_DBDUIManagers();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DBDUIMANAGERS_API UEnum* Z_Construct_UEnum_DBDUIManagers_EDPIScaleCurveRatio();
// End Cross Module References
class UScriptStruct* FDPIScaleCurveForRatio::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIMANAGERS_API uint32 Get_Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDPIScaleCurveForRatio, Z_Construct_UPackage__Script_DBDUIManagers(), TEXT("DPIScaleCurveForRatio"), sizeof(FDPIScaleCurveForRatio), Get_Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Hash());
	}
	return Singleton;
}
template<> DBDUIMANAGERS_API UScriptStruct* StaticStruct<FDPIScaleCurveForRatio>()
{
	return FDPIScaleCurveForRatio::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDPIScaleCurveForRatio(FDPIScaleCurveForRatio::StaticStruct, TEXT("/Script/DBDUIManagers"), TEXT("DPIScaleCurveForRatio"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIManagers_StaticRegisterNativesFDPIScaleCurveForRatio
{
	FScriptStruct_DBDUIManagers_StaticRegisterNativesFDPIScaleCurveForRatio()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DPIScaleCurveForRatio")),new UScriptStruct::TCppStructOps<FDPIScaleCurveForRatio>);
	}
} ScriptStruct_DBDUIManagers_StaticRegisterNativesFDPIScaleCurveForRatio;
	struct Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DPIScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DPIScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Ratio;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ratio_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DPIScaleCurveForRatio.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDPIScaleCurveForRatio>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_DPIScaleCurve_MetaData[] = {
		{ "Category", "DPIScaleCurveForRatio" },
		{ "ModuleRelativePath", "Public/DPIScaleCurveForRatio.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_DPIScaleCurve = { "DPIScaleCurve", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDPIScaleCurveForRatio, DPIScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_DPIScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_DPIScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "DPIScaleCurveForRatio" },
		{ "ModuleRelativePath", "Public/DPIScaleCurveForRatio.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDPIScaleCurveForRatio, Ratio), Z_Construct_UEnum_DBDUIManagers_EDPIScaleCurveRatio, METADATA_PARAMS(Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_Ratio_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_Ratio_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_DPIScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_Ratio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::NewProp_Ratio_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIManagers,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"DPIScaleCurveForRatio",
		sizeof(FDPIScaleCurveForRatio),
		alignof(FDPIScaleCurveForRatio),
		Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDPIScaleCurveForRatio()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIManagers();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DPIScaleCurveForRatio"), sizeof(FDPIScaleCurveForRatio), Get_Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDPIScaleCurveForRatio_Hash() { return 114523191U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
