// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/MatchOptionAssetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchOptionAssetData() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FMatchOptionAssetData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
class UScriptStruct* FMatchOptionAssetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSMOBILE_API uint32 Get_Z_Construct_UScriptStruct_FMatchOptionAssetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchOptionAssetData, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("MatchOptionAssetData"), sizeof(FMatchOptionAssetData), Get_Z_Construct_UScriptStruct_FMatchOptionAssetData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSMOBILE_API UScriptStruct* StaticStruct<FMatchOptionAssetData>()
{
	return FMatchOptionAssetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchOptionAssetData(FMatchOptionAssetData::StaticStruct, TEXT("/Script/DBDUIViewsMobile"), TEXT("MatchOptionAssetData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchOptionAssetData
{
	FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchOptionAssetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchOptionAssetData")),new UScriptStruct::TCppStructOps<FMatchOptionAssetData>);
	}
} ScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchOptionAssetData;
	struct Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchOptionAssetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchOptionAssetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "MatchOptionAssetData" },
		{ "ModuleRelativePath", "Public/MatchOptionAssetData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchOptionAssetData, Icon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_TextName_MetaData[] = {
		{ "Category", "MatchOptionAssetData" },
		{ "ModuleRelativePath", "Public/MatchOptionAssetData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_TextName = { "TextName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchOptionAssetData, TextName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_TextName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_TextName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::NewProp_TextName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
		nullptr,
		&NewStructOps,
		"MatchOptionAssetData",
		sizeof(FMatchOptionAssetData),
		alignof(FMatchOptionAssetData),
		Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchOptionAssetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchOptionAssetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchOptionAssetData"), sizeof(FMatchOptionAssetData), Get_Z_Construct_UScriptStruct_FMatchOptionAssetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchOptionAssetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchOptionAssetData_Hash() { return 3452566503U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
