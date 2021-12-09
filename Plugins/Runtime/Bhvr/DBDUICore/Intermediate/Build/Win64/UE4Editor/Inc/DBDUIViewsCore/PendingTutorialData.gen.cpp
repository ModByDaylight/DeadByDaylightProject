// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/PendingTutorialData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePendingTutorialData() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPendingTutorialData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData();
// End Cross Module References
class UScriptStruct* FPendingTutorialData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FPendingTutorialData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingTutorialData, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("PendingTutorialData"), sizeof(FPendingTutorialData), Get_Z_Construct_UScriptStruct_FPendingTutorialData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FPendingTutorialData>()
{
	return FPendingTutorialData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPendingTutorialData(FPendingTutorialData::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("PendingTutorialData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFPendingTutorialData
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFPendingTutorialData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PendingTutorialData")),new UScriptStruct::TCppStructOps<FPendingTutorialData>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFPendingTutorialData;
	struct Z_Construct_UScriptStruct_FPendingTutorialData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_buttonViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingTutorialData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PendingTutorialData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingTutorialData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonViewData_MetaData[] = {
		{ "ModuleRelativePath", "Public/PendingTutorialData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonViewData = { "buttonViewData", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingTutorialData, buttonViewData), Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/PendingTutorialData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonIndex = { "buttonIndex", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingTutorialData, buttonIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingTutorialData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingTutorialData_Statics::NewProp_buttonIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingTutorialData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"PendingTutorialData",
		sizeof(FPendingTutorialData),
		alignof(FPendingTutorialData),
		Z_Construct_UScriptStruct_FPendingTutorialData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingTutorialData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingTutorialData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingTutorialData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPendingTutorialData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPendingTutorialData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PendingTutorialData"), sizeof(FPendingTutorialData), Get_Z_Construct_UScriptStruct_FPendingTutorialData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPendingTutorialData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPendingTutorialData_Hash() { return 3780871518U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
