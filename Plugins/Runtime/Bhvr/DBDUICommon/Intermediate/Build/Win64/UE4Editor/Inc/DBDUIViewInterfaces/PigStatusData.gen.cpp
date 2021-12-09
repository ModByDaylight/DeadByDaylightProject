// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PigStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePigStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPigStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EReverseBearTrapUIState();
// End Cross Module References
class UScriptStruct* FPigStatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPigStatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPigStatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PigStatusData"), sizeof(FPigStatusData), Get_Z_Construct_UScriptStruct_FPigStatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPigStatusData>()
{
	return FPigStatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPigStatusData(FPigStatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PigStatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPigStatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPigStatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PigStatusData")),new UScriptStruct::TCppStructOps<FPigStatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPigStatusData;
	struct Z_Construct_UScriptStruct_FPigStatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReverseBearTrapState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReverseBearTrapState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReverseBearTrapState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPigStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PigStatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPigStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPigStatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_TimerProgress_MetaData[] = {
		{ "Category", "PigStatusData" },
		{ "ModuleRelativePath", "Public/PigStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_TimerProgress = { "TimerProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPigStatusData, TimerProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_TimerProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_TimerProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_ReverseBearTrapState_MetaData[] = {
		{ "Category", "PigStatusData" },
		{ "ModuleRelativePath", "Public/PigStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_ReverseBearTrapState = { "ReverseBearTrapState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPigStatusData, ReverseBearTrapState), Z_Construct_UEnum_DBDSharedTypes_EReverseBearTrapUIState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_ReverseBearTrapState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_ReverseBearTrapState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_ReverseBearTrapState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPigStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_TimerProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_ReverseBearTrapState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPigStatusData_Statics::NewProp_ReverseBearTrapState_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPigStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"PigStatusData",
		sizeof(FPigStatusData),
		alignof(FPigStatusData),
		Z_Construct_UScriptStruct_FPigStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPigStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPigStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPigStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPigStatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPigStatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PigStatusData"), sizeof(FPigStatusData), Get_Z_Construct_UScriptStruct_FPigStatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPigStatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPigStatusData_Hash() { return 882219800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
