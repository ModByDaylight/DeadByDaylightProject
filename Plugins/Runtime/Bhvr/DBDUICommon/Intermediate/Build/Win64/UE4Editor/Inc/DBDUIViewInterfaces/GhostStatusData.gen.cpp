// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/GhostStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FGhostStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FGhostStatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FGhostStatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGhostStatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("GhostStatusData"), sizeof(FGhostStatusData), Get_Z_Construct_UScriptStruct_FGhostStatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FGhostStatusData>()
{
	return FGhostStatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGhostStatusData(FGhostStatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("GhostStatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFGhostStatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFGhostStatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GhostStatusData")),new UScriptStruct::TCppStructOps<FGhostStatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFGhostStatusData;
	struct Z_Construct_UScriptStruct_FGhostStatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StalkingProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StalkingProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsExposed_MetaData[];
#endif
		static void NewProp_IsExposed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExposed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GhostStatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGhostStatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_StalkingProgress_MetaData[] = {
		{ "Category", "GhostStatusData" },
		{ "ModuleRelativePath", "Public/GhostStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_StalkingProgress = { "StalkingProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGhostStatusData, StalkingProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_StalkingProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_StalkingProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_IsExposed_MetaData[] = {
		{ "Category", "GhostStatusData" },
		{ "ModuleRelativePath", "Public/GhostStatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_IsExposed_SetBit(void* Obj)
	{
		((FGhostStatusData*)Obj)->IsExposed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_IsExposed = { "IsExposed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGhostStatusData), &Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_IsExposed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_IsExposed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_IsExposed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGhostStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_StalkingProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGhostStatusData_Statics::NewProp_IsExposed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGhostStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"GhostStatusData",
		sizeof(FGhostStatusData),
		alignof(FGhostStatusData),
		Z_Construct_UScriptStruct_FGhostStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGhostStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGhostStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGhostStatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGhostStatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GhostStatusData"), sizeof(FGhostStatusData), Get_Z_Construct_UScriptStruct_FGhostStatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGhostStatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGhostStatusData_Hash() { return 1875777044U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
