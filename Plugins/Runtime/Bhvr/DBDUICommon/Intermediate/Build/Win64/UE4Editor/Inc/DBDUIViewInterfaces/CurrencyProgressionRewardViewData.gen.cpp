// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CurrencyProgressionRewardViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurrencyProgressionRewardViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FCurrencyProgressionRewardViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CurrencyProgressionRewardViewData"), sizeof(FCurrencyProgressionRewardViewData), Get_Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCurrencyProgressionRewardViewData>()
{
	return FCurrencyProgressionRewardViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrencyProgressionRewardViewData(FCurrencyProgressionRewardViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CurrencyProgressionRewardViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyProgressionRewardViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyProgressionRewardViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CurrencyProgressionRewardViewData")),new UScriptStruct::TCppStructOps<FCurrencyProgressionRewardViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCurrencyProgressionRewardViewData;
	struct Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TooltipData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RewardIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardBackgroundMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_RewardBackgroundMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionRewardViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrencyProgressionRewardViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_TooltipData_MetaData[] = {
		{ "Category", "CurrencyProgressionRewardViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_TooltipData = { "TooltipData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionRewardViewData, TooltipData), Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_TooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_TooltipData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardIcon_MetaData[] = {
		{ "Category", "CurrencyProgressionRewardViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardIcon = { "RewardIcon", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionRewardViewData, RewardIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardBackgroundMaterial_MetaData[] = {
		{ "Category", "CurrencyProgressionRewardViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardBackgroundMaterial = { "RewardBackgroundMaterial", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionRewardViewData, RewardBackgroundMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardBackgroundMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardBackgroundMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "CurrencyProgressionRewardViewData" },
		{ "ModuleRelativePath", "Public/CurrencyProgressionRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrencyProgressionRewardViewData, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_Amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_TooltipData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_RewardBackgroundMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::NewProp_Amount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FRewardViewData,
		&NewStructOps,
		"CurrencyProgressionRewardViewData",
		sizeof(FCurrencyProgressionRewardViewData),
		alignof(FCurrencyProgressionRewardViewData),
		Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrencyProgressionRewardViewData"), sizeof(FCurrencyProgressionRewardViewData), Get_Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData_Hash() { return 358397635U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
