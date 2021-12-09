// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ScoreAlertViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreAlertViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FScoreAlertViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory();
// End Cross Module References
class UScriptStruct* FScoreAlertViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FScoreAlertViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreAlertViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ScoreAlertViewData"), sizeof(FScoreAlertViewData), Get_Z_Construct_UScriptStruct_FScoreAlertViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FScoreAlertViewData>()
{
	return FScoreAlertViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScoreAlertViewData(FScoreAlertViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ScoreAlertViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFScoreAlertViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFScoreAlertViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScoreAlertViewData")),new UScriptStruct::TCppStructOps<FScoreAlertViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFScoreAlertViewData;
	struct Z_Construct_UScriptStruct_FScoreAlertViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ScoreType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScoreType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScoreAlertViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreAlertViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "ScoreAlertViewData" },
		{ "ModuleRelativePath", "Public/ScoreAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreAlertViewData, Progress), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreValue_MetaData[] = {
		{ "Category", "ScoreAlertViewData" },
		{ "ModuleRelativePath", "Public/ScoreAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreValue = { "ScoreValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreAlertViewData, ScoreValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "ScoreAlertViewData" },
		{ "ModuleRelativePath", "Public/ScoreAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreAlertViewData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreType_MetaData[] = {
		{ "Category", "ScoreAlertViewData" },
		{ "ModuleRelativePath", "Public/ScoreAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreType = { "ScoreType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreAlertViewData, ScoreType), Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::NewProp_ScoreType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ScoreAlertViewData",
		sizeof(FScoreAlertViewData),
		alignof(FScoreAlertViewData),
		Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScoreAlertViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScoreAlertViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScoreAlertViewData"), sizeof(FScoreAlertViewData), Get_Z_Construct_UScriptStruct_FScoreAlertViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScoreAlertViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScoreAlertViewData_Hash() { return 3618608731U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
