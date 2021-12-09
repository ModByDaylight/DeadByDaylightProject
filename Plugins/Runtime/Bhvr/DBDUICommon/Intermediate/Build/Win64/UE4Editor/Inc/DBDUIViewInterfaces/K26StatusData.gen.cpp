// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K26StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FK26StatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FK26StatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FK26StatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK26StatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("K26StatusData"), sizeof(FK26StatusData), Get_Z_Construct_UScriptStruct_FK26StatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FK26StatusData>()
{
	return FK26StatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK26StatusData(FK26StatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("K26StatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFK26StatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFK26StatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K26StatusData")),new UScriptStruct::TCppStructOps<FK26StatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFK26StatusData;
	struct Z_Construct_UScriptStruct_FK26StatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCrowAttached_MetaData[];
#endif
		static void NewProp_IsCrowAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCrowAttached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26StatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/K26StatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK26StatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK26StatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26StatusData_Statics::NewProp_IsCrowAttached_MetaData[] = {
		{ "Category", "K26StatusData" },
		{ "ModuleRelativePath", "Public/K26StatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK26StatusData_Statics::NewProp_IsCrowAttached_SetBit(void* Obj)
	{
		((FK26StatusData*)Obj)->IsCrowAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK26StatusData_Statics::NewProp_IsCrowAttached = { "IsCrowAttached", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK26StatusData), &Z_Construct_UScriptStruct_FK26StatusData_Statics::NewProp_IsCrowAttached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26StatusData_Statics::NewProp_IsCrowAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26StatusData_Statics::NewProp_IsCrowAttached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FK26StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26StatusData_Statics::NewProp_IsCrowAttached,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK26StatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"K26StatusData",
		sizeof(FK26StatusData),
		alignof(FK26StatusData),
		Z_Construct_UScriptStruct_FK26StatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26StatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK26StatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26StatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK26StatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK26StatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K26StatusData"), sizeof(FK26StatusData), Get_Z_Construct_UScriptStruct_FK26StatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK26StatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK26StatusData_Hash() { return 4183451410U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
