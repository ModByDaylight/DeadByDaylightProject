// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ExecutionerStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecutionerStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FExecutionerStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FExecutionerStatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FExecutionerStatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExecutionerStatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ExecutionerStatusData"), sizeof(FExecutionerStatusData), Get_Z_Construct_UScriptStruct_FExecutionerStatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FExecutionerStatusData>()
{
	return FExecutionerStatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExecutionerStatusData(FExecutionerStatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ExecutionerStatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFExecutionerStatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFExecutionerStatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExecutionerStatusData")),new UScriptStruct::TCppStructOps<FExecutionerStatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFExecutionerStatusData;
	struct Z_Construct_UScriptStruct_FExecutionerStatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgonyProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AgonyProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ExecutionerStatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExecutionerStatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::NewProp_AgonyProgress_MetaData[] = {
		{ "Category", "ExecutionerStatusData" },
		{ "ModuleRelativePath", "Public/ExecutionerStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::NewProp_AgonyProgress = { "AgonyProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExecutionerStatusData, AgonyProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::NewProp_AgonyProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::NewProp_AgonyProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::NewProp_AgonyProgress,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ExecutionerStatusData",
		sizeof(FExecutionerStatusData),
		alignof(FExecutionerStatusData),
		Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExecutionerStatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExecutionerStatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExecutionerStatusData"), sizeof(FExecutionerStatusData), Get_Z_Construct_UScriptStruct_FExecutionerStatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExecutionerStatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExecutionerStatusData_Hash() { return 3073548051U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
