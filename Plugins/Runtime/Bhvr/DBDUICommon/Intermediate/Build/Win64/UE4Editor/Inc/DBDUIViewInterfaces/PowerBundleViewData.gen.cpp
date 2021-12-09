// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PowerBundleViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerBundleViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPowerBundleViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAddonViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPowerViewData();
// End Cross Module References
class UScriptStruct* FPowerBundleViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPowerBundleViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerBundleViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PowerBundleViewData"), sizeof(FPowerBundleViewData), Get_Z_Construct_UScriptStruct_FPowerBundleViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPowerBundleViewData>()
{
	return FPowerBundleViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerBundleViewData(FPowerBundleViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PowerBundleViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPowerBundleViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPowerBundleViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerBundleViewData")),new UScriptStruct::TCppStructOps<FPowerBundleViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPowerBundleViewData;
	struct Z_Construct_UScriptStruct_FPowerBundleViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Addon2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Addon2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Addon1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Addon1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Power;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerBundleViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerBundleViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon2_MetaData[] = {
		{ "Category", "PowerBundleViewData" },
		{ "ModuleRelativePath", "Public/PowerBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon2 = { "Addon2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerBundleViewData, Addon2), Z_Construct_UScriptStruct_FAddonViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon1_MetaData[] = {
		{ "Category", "PowerBundleViewData" },
		{ "ModuleRelativePath", "Public/PowerBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon1 = { "Addon1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerBundleViewData, Addon1), Z_Construct_UScriptStruct_FAddonViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Power_MetaData[] = {
		{ "Category", "PowerBundleViewData" },
		{ "ModuleRelativePath", "Public/PowerBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerBundleViewData, Power), Z_Construct_UScriptStruct_FPowerViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Power_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Power_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Addon1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::NewProp_Power,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"PowerBundleViewData",
		sizeof(FPowerBundleViewData),
		alignof(FPowerBundleViewData),
		Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerBundleViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerBundleViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerBundleViewData"), sizeof(FPowerBundleViewData), Get_Z_Construct_UScriptStruct_FPowerBundleViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerBundleViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerBundleViewData_Hash() { return 616683238U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
