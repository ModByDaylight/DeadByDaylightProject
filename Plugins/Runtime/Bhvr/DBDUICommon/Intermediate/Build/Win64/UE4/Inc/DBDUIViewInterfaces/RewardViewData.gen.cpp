// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/RewardViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FRewardViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FRewardViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("RewardViewData"), sizeof(FRewardViewData), Get_Z_Construct_UScriptStruct_FRewardViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FRewardViewData>()
{
	return FRewardViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRewardViewData(FRewardViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("RewardViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRewardViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRewardViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RewardViewData")),new UScriptStruct::TCppStructOps<FRewardViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRewardViewData;
	struct Z_Construct_UScriptStruct_FRewardViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHighlighted_MetaData[];
#endif
		static void NewProp_IsHighlighted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHighlighted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RewardViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewardViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsHighlighted_MetaData[] = {
		{ "Category", "RewardViewData" },
		{ "ModuleRelativePath", "Public/RewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsHighlighted_SetBit(void* Obj)
	{
		((FRewardViewData*)Obj)->IsHighlighted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsHighlighted = { "IsHighlighted", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRewardViewData), &Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsHighlighted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsHighlighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsHighlighted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "RewardViewData" },
		{ "ModuleRelativePath", "Public/RewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((FRewardViewData*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRewardViewData), &Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsLocked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsHighlighted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardViewData_Statics::NewProp_IsLocked,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"RewardViewData",
		sizeof(FRewardViewData),
		alignof(FRewardViewData),
		Z_Construct_UScriptStruct_FRewardViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewardViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRewardViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RewardViewData"), sizeof(FRewardViewData), Get_Z_Construct_UScriptStruct_FRewardViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRewardViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRewardViewData_Hash() { return 2948171045U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
