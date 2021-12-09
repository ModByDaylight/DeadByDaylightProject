// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/K25StatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25StatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FK25StatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FK25StatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FK25StatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK25StatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("K25StatusData"), sizeof(FK25StatusData), Get_Z_Construct_UScriptStruct_FK25StatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FK25StatusData>()
{
	return FK25StatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK25StatusData(FK25StatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("K25StatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFK25StatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFK25StatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K25StatusData")),new UScriptStruct::TCppStructOps<FK25StatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFK25StatusData;
	struct Z_Construct_UScriptStruct_FK25StatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSolvingLamentConfiguration_MetaData[];
#endif
		static void NewProp_IsSolvingLamentConfiguration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSolvingLamentConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHoldingLamentConfiguration_MetaData[];
#endif
		static void NewProp_IsHoldingLamentConfiguration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHoldingLamentConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainHuntProgressPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChainHuntProgressPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25StatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/K25StatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK25StatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK25StatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_MetaData[] = {
		{ "Category", "K25StatusData" },
		{ "ModuleRelativePath", "Public/K25StatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_SetBit(void* Obj)
	{
		((FK25StatusData*)Obj)->IsSolvingLamentConfiguration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration = { "IsSolvingLamentConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK25StatusData), &Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_MetaData[] = {
		{ "Category", "K25StatusData" },
		{ "ModuleRelativePath", "Public/K25StatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_SetBit(void* Obj)
	{
		((FK25StatusData*)Obj)->IsHoldingLamentConfiguration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration = { "IsHoldingLamentConfiguration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK25StatusData), &Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_ChainHuntProgressPercentage_MetaData[] = {
		{ "Category", "K25StatusData" },
		{ "ModuleRelativePath", "Public/K25StatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_ChainHuntProgressPercentage = { "ChainHuntProgressPercentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25StatusData, ChainHuntProgressPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_ChainHuntProgressPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_ChainHuntProgressPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FK25StatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsSolvingLamentConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_IsHoldingLamentConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25StatusData_Statics::NewProp_ChainHuntProgressPercentage,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK25StatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"K25StatusData",
		sizeof(FK25StatusData),
		alignof(FK25StatusData),
		Z_Construct_UScriptStruct_FK25StatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25StatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK25StatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25StatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK25StatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK25StatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K25StatusData"), sizeof(FK25StatusData), Get_Z_Construct_UScriptStruct_FK25StatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK25StatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK25StatusData_Hash() { return 1949025879U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
