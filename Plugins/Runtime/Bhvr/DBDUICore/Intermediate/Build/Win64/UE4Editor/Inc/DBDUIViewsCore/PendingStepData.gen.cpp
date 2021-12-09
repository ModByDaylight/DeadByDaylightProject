// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/PendingStepData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePendingStepData() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPendingStepData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPendingTutorialData();
// End Cross Module References
class UScriptStruct* FPendingStepData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FPendingStepData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingStepData, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("PendingStepData"), sizeof(FPendingStepData), Get_Z_Construct_UScriptStruct_FPendingStepData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FPendingStepData>()
{
	return FPendingStepData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPendingStepData(FPendingStepData::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("PendingStepData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFPendingStepData
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFPendingStepData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PendingStepData")),new UScriptStruct::TCppStructOps<FPendingStepData>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFPendingStepData;
	struct Z_Construct_UScriptStruct_FPendingStepData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tutorialData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tutorialData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tutorialData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingStepData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PendingStepData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPendingStepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingStepData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingStepData_Statics::NewProp_tutorialData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PendingStepData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPendingStepData_Statics::NewProp_tutorialData = { "tutorialData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingStepData, tutorialData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingStepData_Statics::NewProp_tutorialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingStepData_Statics::NewProp_tutorialData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPendingStepData_Statics::NewProp_tutorialData_Inner = { "tutorialData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPendingTutorialData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingStepData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingStepData_Statics::NewProp_tutorialData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingStepData_Statics::NewProp_tutorialData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingStepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"PendingStepData",
		sizeof(FPendingStepData),
		alignof(FPendingStepData),
		Z_Construct_UScriptStruct_FPendingStepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingStepData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingStepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingStepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPendingStepData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPendingStepData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PendingStepData"), sizeof(FPendingStepData), Get_Z_Construct_UScriptStruct_FPendingStepData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPendingStepData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPendingStepData_Hash() { return 3090023817U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
