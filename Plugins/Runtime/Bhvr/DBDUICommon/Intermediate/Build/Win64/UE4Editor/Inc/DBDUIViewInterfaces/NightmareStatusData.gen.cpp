// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/NightmareStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNightmareStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FNightmareStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESleepingUIState();
// End Cross Module References
class UScriptStruct* FNightmareStatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FNightmareStatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNightmareStatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("NightmareStatusData"), sizeof(FNightmareStatusData), Get_Z_Construct_UScriptStruct_FNightmareStatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FNightmareStatusData>()
{
	return FNightmareStatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNightmareStatusData(FNightmareStatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("NightmareStatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFNightmareStatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFNightmareStatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NightmareStatusData")),new UScriptStruct::TCppStructOps<FNightmareStatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFNightmareStatusData;
	struct Z_Construct_UScriptStruct_FNightmareStatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepProtectionRemainingDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SleepProtectionRemainingDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepingProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SleepingProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepingState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SleepingState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SleepingState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNightmareStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NightmareStatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNightmareStatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration_MetaData[] = {
		{ "Category", "NightmareStatusData" },
		{ "ModuleRelativePath", "Public/NightmareStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration = { "SleepProtectionRemainingDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNightmareStatusData, SleepProtectionRemainingDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingProgress_MetaData[] = {
		{ "Category", "NightmareStatusData" },
		{ "ModuleRelativePath", "Public/NightmareStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingProgress = { "SleepingProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNightmareStatusData, SleepingProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingState_MetaData[] = {
		{ "Category", "NightmareStatusData" },
		{ "ModuleRelativePath", "Public/NightmareStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingState = { "SleepingState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNightmareStatusData, SleepingState), Z_Construct_UEnum_DBDSharedTypes_ESleepingUIState, METADATA_PARAMS(Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNightmareStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepProtectionRemainingDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNightmareStatusData_Statics::NewProp_SleepingState_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNightmareStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"NightmareStatusData",
		sizeof(FNightmareStatusData),
		alignof(FNightmareStatusData),
		Z_Construct_UScriptStruct_FNightmareStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightmareStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNightmareStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNightmareStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNightmareStatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNightmareStatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NightmareStatusData"), sizeof(FNightmareStatusData), Get_Z_Construct_UScriptStruct_FNightmareStatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNightmareStatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNightmareStatusData_Hash() { return 1384997980U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
