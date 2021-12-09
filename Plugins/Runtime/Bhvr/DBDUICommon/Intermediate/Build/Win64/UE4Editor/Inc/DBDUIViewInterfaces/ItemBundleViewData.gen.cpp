// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ItemBundleViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBundleViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemBundleViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAddonViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemViewData();
// End Cross Module References
class UScriptStruct* FItemBundleViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FItemBundleViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemBundleViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ItemBundleViewData"), sizeof(FItemBundleViewData), Get_Z_Construct_UScriptStruct_FItemBundleViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FItemBundleViewData>()
{
	return FItemBundleViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemBundleViewData(FItemBundleViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ItemBundleViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFItemBundleViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFItemBundleViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemBundleViewData")),new UScriptStruct::TCppStructOps<FItemBundleViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFItemBundleViewData;
	struct Z_Construct_UScriptStruct_FItemBundleViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Addon2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Addon2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Addon1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Addon1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemBundleViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemBundleViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemBundleViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon2_MetaData[] = {
		{ "Category", "ItemBundleViewData" },
		{ "ModuleRelativePath", "Public/ItemBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon2 = { "Addon2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemBundleViewData, Addon2), Z_Construct_UScriptStruct_FAddonViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon1_MetaData[] = {
		{ "Category", "ItemBundleViewData" },
		{ "ModuleRelativePath", "Public/ItemBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon1 = { "Addon1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemBundleViewData, Addon1), Z_Construct_UScriptStruct_FAddonViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "ItemBundleViewData" },
		{ "ModuleRelativePath", "Public/ItemBundleViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemBundleViewData, Item), Z_Construct_UScriptStruct_FItemViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemBundleViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Addon1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemBundleViewData_Statics::NewProp_Item,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemBundleViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ItemBundleViewData",
		sizeof(FItemBundleViewData),
		alignof(FItemBundleViewData),
		Z_Construct_UScriptStruct_FItemBundleViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemBundleViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemBundleViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemBundleViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemBundleViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemBundleViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemBundleViewData"), sizeof(FItemBundleViewData), Get_Z_Construct_UScriptStruct_FItemBundleViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemBundleViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemBundleViewData_Hash() { return 3762022336U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
