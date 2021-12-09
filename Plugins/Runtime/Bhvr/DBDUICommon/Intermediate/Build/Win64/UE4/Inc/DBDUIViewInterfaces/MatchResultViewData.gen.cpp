// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/MatchResultViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchResultViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMatchResultViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EKillerResult();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
// End Cross Module References
class UScriptStruct* FMatchResultViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FMatchResultViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchResultViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("MatchResultViewData"), sizeof(FMatchResultViewData), Get_Z_Construct_UScriptStruct_FMatchResultViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FMatchResultViewData>()
{
	return FMatchResultViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchResultViewData(FMatchResultViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("MatchResultViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMatchResultViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMatchResultViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchResultViewData")),new UScriptStruct::TCppStructOps<FMatchResultViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFMatchResultViewData;
	struct Z_Construct_UScriptStruct_FMatchResultViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_KillerResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_KillerResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SurvivorResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurvivorResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSlasher_MetaData[];
#endif
		static void NewProp_IsSlasher_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSlasher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchResultViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchResultViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "MatchResultViewData" },
		{ "ModuleRelativePath", "Public/MatchResultViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchResultViewData, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_KillerResult_MetaData[] = {
		{ "Category", "MatchResultViewData" },
		{ "ModuleRelativePath", "Public/MatchResultViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_KillerResult = { "KillerResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchResultViewData, KillerResult), Z_Construct_UEnum_DBDUIViewInterfaces_EKillerResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_KillerResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_KillerResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_KillerResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_SurvivorResult_MetaData[] = {
		{ "Category", "MatchResultViewData" },
		{ "ModuleRelativePath", "Public/MatchResultViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_SurvivorResult = { "SurvivorResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchResultViewData, SurvivorResult), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_SurvivorResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_SurvivorResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_SurvivorResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_IsSlasher_MetaData[] = {
		{ "Category", "MatchResultViewData" },
		{ "ModuleRelativePath", "Public/MatchResultViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_IsSlasher_SetBit(void* Obj)
	{
		((FMatchResultViewData*)Obj)->IsSlasher = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_IsSlasher = { "IsSlasher", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMatchResultViewData), &Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_IsSlasher_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_IsSlasher_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_IsSlasher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchResultViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_KillerResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_KillerResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_SurvivorResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_SurvivorResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchResultViewData_Statics::NewProp_IsSlasher,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchResultViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"MatchResultViewData",
		sizeof(FMatchResultViewData),
		alignof(FMatchResultViewData),
		Z_Construct_UScriptStruct_FMatchResultViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchResultViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchResultViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchResultViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchResultViewData"), sizeof(FMatchResultViewData), Get_Z_Construct_UScriptStruct_FMatchResultViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchResultViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchResultViewData_Hash() { return 1663081700U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
