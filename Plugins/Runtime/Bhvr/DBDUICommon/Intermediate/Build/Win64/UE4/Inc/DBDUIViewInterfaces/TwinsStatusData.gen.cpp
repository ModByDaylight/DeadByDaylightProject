// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TwinsStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinsStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTwinsStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FTwinsStatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FTwinsStatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTwinsStatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("TwinsStatusData"), sizeof(FTwinsStatusData), Get_Z_Construct_UScriptStruct_FTwinsStatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FTwinsStatusData>()
{
	return FTwinsStatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTwinsStatusData(FTwinsStatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("TwinsStatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFTwinsStatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFTwinsStatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TwinsStatusData")),new UScriptStruct::TCppStructOps<FTwinsStatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFTwinsStatusData;
	struct Z_Construct_UScriptStruct_FTwinsStatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwinsActive_MetaData[];
#endif
		static void NewProp_TwinsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TwinsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwinsStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TwinsStatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTwinsStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTwinsStatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTwinsStatusData_Statics::NewProp_TwinsActive_MetaData[] = {
		{ "Category", "TwinsStatusData" },
		{ "ModuleRelativePath", "Public/TwinsStatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTwinsStatusData_Statics::NewProp_TwinsActive_SetBit(void* Obj)
	{
		((FTwinsStatusData*)Obj)->TwinsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTwinsStatusData_Statics::NewProp_TwinsActive = { "TwinsActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTwinsStatusData), &Z_Construct_UScriptStruct_FTwinsStatusData_Statics::NewProp_TwinsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTwinsStatusData_Statics::NewProp_TwinsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwinsStatusData_Statics::NewProp_TwinsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTwinsStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTwinsStatusData_Statics::NewProp_TwinsActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTwinsStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"TwinsStatusData",
		sizeof(FTwinsStatusData),
		alignof(FTwinsStatusData),
		Z_Construct_UScriptStruct_FTwinsStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwinsStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTwinsStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTwinsStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTwinsStatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTwinsStatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TwinsStatusData"), sizeof(FTwinsStatusData), Get_Z_Construct_UScriptStruct_FTwinsStatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTwinsStatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTwinsStatusData_Hash() { return 2945883703U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
