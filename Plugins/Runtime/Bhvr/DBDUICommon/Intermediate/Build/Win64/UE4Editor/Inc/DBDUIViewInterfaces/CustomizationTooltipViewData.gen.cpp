// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CustomizationTooltipViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationTooltipViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationTooltipViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FCustomizationTooltipViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizationTooltipViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CustomizationTooltipViewData"), sizeof(FCustomizationTooltipViewData), Get_Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCustomizationTooltipViewData>()
{
	return FCustomizationTooltipViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomizationTooltipViewData(FCustomizationTooltipViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CustomizationTooltipViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationTooltipViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationTooltipViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomizationTooltipViewData")),new UScriptStruct::TCppStructOps<FCustomizationTooltipViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCustomizationTooltipViewData;
	struct Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationDisabledMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CustomizationDisabledMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Prices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Prices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AssociatedRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AssociatedRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOwned_MetaData[];
#endif
		static void NewProp_IsOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEquipped_MetaData[];
#endif
		static void NewProp_IsEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUnbreakable_MetaData[];
#endif
		static void NewProp_IsUnbreakable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUnbreakable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocked_MetaData[];
#endif
		static void NewProp_IsLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleCategoryInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RoleCategoryInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CollectionDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityPartInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RarityPartInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizationTooltipViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CustomizationDisabledMessage_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CustomizationDisabledMessage = { "CustomizationDisabledMessage", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, CustomizationDisabledMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CustomizationDisabledMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CustomizationDisabledMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FCustomizationTooltipViewData*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationTooltipViewData), &Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Prices_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Prices = { "Prices", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, Prices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Prices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Prices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Prices_Inner = { "Prices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPriceViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_AssociatedRole_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_AssociatedRole = { "AssociatedRole", nullptr, (EPropertyFlags)0x0010000000002015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, AssociatedRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_AssociatedRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_AssociatedRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_AssociatedRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsOwned_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsOwned_SetBit(void* Obj)
	{
		((FCustomizationTooltipViewData*)Obj)->IsOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsOwned = { "IsOwned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationTooltipViewData), &Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsOwned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEquipped_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEquipped_SetBit(void* Obj)
	{
		((FCustomizationTooltipViewData*)Obj)->IsEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEquipped = { "IsEquipped", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationTooltipViewData), &Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEquipped_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsUnbreakable_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsUnbreakable_SetBit(void* Obj)
	{
		((FCustomizationTooltipViewData*)Obj)->IsUnbreakable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsUnbreakable = { "IsUnbreakable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationTooltipViewData), &Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsUnbreakable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsUnbreakable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsUnbreakable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsLocked_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsLocked_SetBit(void* Obj)
	{
		((FCustomizationTooltipViewData*)Obj)->IsLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsLocked = { "IsLocked", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCustomizationTooltipViewData), &Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RoleCategoryInfo_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RoleCategoryInfo = { "RoleCategoryInfo", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, RoleCategoryInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RoleCategoryInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RoleCategoryInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CollectionDisplayName_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CollectionDisplayName = { "CollectionDisplayName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, CollectionDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CollectionDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CollectionDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RarityPartInfo_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RarityPartInfo = { "RarityPartInfo", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, RarityPartInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RarityPartInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RarityPartInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_ParentName_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000002015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CustomizationTooltipViewData" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomizationTooltipViewData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CustomizationDisabledMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Prices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Prices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_AssociatedRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_AssociatedRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsUnbreakable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_IsLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RoleCategoryInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_CollectionDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_RarityPartInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_ParentName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"CustomizationTooltipViewData",
		sizeof(FCustomizationTooltipViewData),
		alignof(FCustomizationTooltipViewData),
		Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizationTooltipViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomizationTooltipViewData"), sizeof(FCustomizationTooltipViewData), Get_Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomizationTooltipViewData_Hash() { return 1038945063U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
