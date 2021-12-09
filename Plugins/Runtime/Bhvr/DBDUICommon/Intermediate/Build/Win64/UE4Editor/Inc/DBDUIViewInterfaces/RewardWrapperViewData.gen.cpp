// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/RewardWrapperViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewardWrapperViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationRewardViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterRewardViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ERewardType();
// End Cross Module References
class UScriptStruct* FRewardWrapperViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FRewardWrapperViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRewardWrapperViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("RewardWrapperViewData"), sizeof(FRewardWrapperViewData), Get_Z_Construct_UScriptStruct_FRewardWrapperViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FRewardWrapperViewData>()
{
	return FRewardWrapperViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRewardWrapperViewData(FRewardWrapperViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("RewardWrapperViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRewardWrapperViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRewardWrapperViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RewardWrapperViewData")),new UScriptStruct::TCppStructOps<FRewardWrapperViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFRewardWrapperViewData;
	struct Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationRewardViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomizationRewardViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyProgressionRewardViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrencyProgressionRewardViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterRewardViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterRewardViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RewardType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RewardType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RewardWrapperViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRewardWrapperViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CustomizationRewardViewData_MetaData[] = {
		{ "Category", "RewardWrapperViewData" },
		{ "ModuleRelativePath", "Public/RewardWrapperViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CustomizationRewardViewData = { "CustomizationRewardViewData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardWrapperViewData, CustomizationRewardViewData), Z_Construct_UScriptStruct_FCustomizationRewardViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CustomizationRewardViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CustomizationRewardViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CurrencyProgressionRewardViewData_MetaData[] = {
		{ "Category", "RewardWrapperViewData" },
		{ "ModuleRelativePath", "Public/RewardWrapperViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CurrencyProgressionRewardViewData = { "CurrencyProgressionRewardViewData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardWrapperViewData, CurrencyProgressionRewardViewData), Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CurrencyProgressionRewardViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CurrencyProgressionRewardViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CharacterRewardViewData_MetaData[] = {
		{ "Category", "RewardWrapperViewData" },
		{ "ModuleRelativePath", "Public/RewardWrapperViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CharacterRewardViewData = { "CharacterRewardViewData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardWrapperViewData, CharacterRewardViewData), Z_Construct_UScriptStruct_FCharacterRewardViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CharacterRewardViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CharacterRewardViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_RewardType_MetaData[] = {
		{ "Category", "RewardWrapperViewData" },
		{ "ModuleRelativePath", "Public/RewardWrapperViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_RewardType = { "RewardType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRewardWrapperViewData, RewardType), Z_Construct_UEnum_DBDSharedTypes_ERewardType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_RewardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_RewardType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_RewardType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CustomizationRewardViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CurrencyProgressionRewardViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_CharacterRewardViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_RewardType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::NewProp_RewardType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"RewardWrapperViewData",
		sizeof(FRewardWrapperViewData),
		alignof(FRewardWrapperViewData),
		Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRewardWrapperViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RewardWrapperViewData"), sizeof(FRewardWrapperViewData), Get_Z_Construct_UScriptStruct_FRewardWrapperViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRewardWrapperViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRewardWrapperViewData_Hash() { return 983500063U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
