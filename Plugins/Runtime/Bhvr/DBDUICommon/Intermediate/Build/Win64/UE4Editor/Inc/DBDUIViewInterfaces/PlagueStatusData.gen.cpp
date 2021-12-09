// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlagueStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlagueStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlagueStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESicknessLevel();
// End Cross Module References
class UScriptStruct* FPlagueStatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPlagueStatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlagueStatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PlagueStatusData"), sizeof(FPlagueStatusData), Get_Z_Construct_UScriptStruct_FPlagueStatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPlagueStatusData>()
{
	return FPlagueStatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlagueStatusData(FPlagueStatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PlagueStatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlagueStatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlagueStatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlagueStatusData")),new UScriptStruct::TCppStructOps<FPlagueStatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlagueStatusData;
	struct Z_Construct_UScriptStruct_FPlagueStatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SicknessProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SicknessProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SicknessLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SicknessLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SicknessLevel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlagueStatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlagueStatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessProgress_MetaData[] = {
		{ "Category", "PlagueStatusData" },
		{ "ModuleRelativePath", "Public/PlagueStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessProgress = { "SicknessProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueStatusData, SicknessProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessLevel_MetaData[] = {
		{ "Category", "PlagueStatusData" },
		{ "ModuleRelativePath", "Public/PlagueStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessLevel = { "SicknessLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlagueStatusData, SicknessLevel), Z_Construct_UEnum_DBDSharedTypes_ESicknessLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlagueStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlagueStatusData_Statics::NewProp_SicknessLevel_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlagueStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"PlagueStatusData",
		sizeof(FPlagueStatusData),
		alignof(FPlagueStatusData),
		Z_Construct_UScriptStruct_FPlagueStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlagueStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlagueStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlagueStatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlagueStatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlagueStatusData"), sizeof(FPlagueStatusData), Get_Z_Construct_UScriptStruct_FPlagueStatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlagueStatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlagueStatusData_Hash() { return 3957426639U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
