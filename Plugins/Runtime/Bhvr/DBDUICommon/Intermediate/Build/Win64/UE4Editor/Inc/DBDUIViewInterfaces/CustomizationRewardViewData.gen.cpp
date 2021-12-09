// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CustomizationRewardViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationRewardViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationRewardViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationTooltipViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FCustomizationRewardViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizationRewardViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CustomizationRewardViewData"), sizeof(FCustomizationRewardViewData), Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCustomizationRewardViewData>()
{
	return FCustomizationRewardViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizationRewardViewData(FCustomizationRewardViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CustomizationRewardViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationRewardViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationRewardViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizationRewardViewData")),new UScriptStruct::TCppStructOps<FCustomizationRewardViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationRewardViewData;
	struct Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TooltipData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUnbreakable_MetaData[];
#endif
		static void NewProp_IsUnbreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUnbreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEquipped_MetaData[];
#endif
		static void NewProp_IsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOwned_MetaData[];
#endif
		static void NewProp_IsOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizationRewardViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData = { "TooltipData", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, TooltipData), Z_Construct_UScriptStruct_FCustomizationTooltipViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsUnbreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable = { "IsUnbreakable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped = { "IsEquipped", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_SetBit(void* Obj)
	{
		((FCustomizationRewardViewData*)Obj)->IsOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned = { "IsOwned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationRewardViewData), &Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "CustomizationRewardViewData" },
		{ "ModuleRelativePath", "Public/CustomizationRewardViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationRewardViewData, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IconTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_TooltipData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsUnbreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IsOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::NewProp_IconTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FRewardViewData,
		&NewStructOps,
		"CustomizationRewardViewData",
		sizeof(FCustomizationRewardViewData),
		alignof(FCustomizationRewardViewData),
		Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizationRewardViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizationRewardViewData"), sizeof(FCustomizationRewardViewData), Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizationRewardViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizationRewardViewData_Hash() { return 2928931350U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
