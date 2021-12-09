// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/MatchConfigDifficultyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchConfigDifficultyData() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FMatchConfigDifficultyData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
class UScriptStruct* FMatchConfigDifficultyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSMOBILE_API uint32 Get_Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchConfigDifficultyData, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("MatchConfigDifficultyData"), sizeof(FMatchConfigDifficultyData), Get_Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSMOBILE_API UScriptStruct* StaticStruct<FMatchConfigDifficultyData>()
{
	return FMatchConfigDifficultyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchConfigDifficultyData(FMatchConfigDifficultyData::StaticStruct, TEXT("/Script/DBDUIViewsMobile"), TEXT("MatchConfigDifficultyData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchConfigDifficultyData
{
	FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchConfigDifficultyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchConfigDifficultyData")),new UScriptStruct::TCppStructOps<FMatchConfigDifficultyData>);
	}
} ScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchConfigDifficultyData;
	struct Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DifficultyIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchConfigDifficultyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchConfigDifficultyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::NewProp_DifficultyIcon_MetaData[] = {
		{ "Category", "MatchConfigDifficultyData" },
		{ "ModuleRelativePath", "Public/MatchConfigDifficultyData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::NewProp_DifficultyIcon = { "DifficultyIcon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchConfigDifficultyData, DifficultyIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::NewProp_DifficultyIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::NewProp_DifficultyIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::NewProp_DifficultyIcon,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
		nullptr,
		&NewStructOps,
		"MatchConfigDifficultyData",
		sizeof(FMatchConfigDifficultyData),
		alignof(FMatchConfigDifficultyData),
		Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchConfigDifficultyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchConfigDifficultyData"), sizeof(FMatchConfigDifficultyData), Get_Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchConfigDifficultyData_Hash() { return 659835097U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
