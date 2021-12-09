// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/BaseLoadoutPartViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLoadoutPartViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLoadoutPartViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FBaseLoadoutPartViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("BaseLoadoutPartViewData"), sizeof(FBaseLoadoutPartViewData), Get_Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FBaseLoadoutPartViewData>()
{
	return FBaseLoadoutPartViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseLoadoutPartViewData(FBaseLoadoutPartViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("BaseLoadoutPartViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFBaseLoadoutPartViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFBaseLoadoutPartViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseLoadoutPartViewData")),new UScriptStruct::TCppStructOps<FBaseLoadoutPartViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFBaseLoadoutPartViewData;
	struct Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IconTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseLoadoutPartViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseLoadoutPartViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "BaseLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/BaseLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseLoadoutPartViewData, Rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_Rarity_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "BaseLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/BaseLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseLoadoutPartViewData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "BaseLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/BaseLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseLoadoutPartViewData, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_IconTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "BaseLoadoutPartViewData" },
		{ "ModuleRelativePath", "Public/BaseLoadoutPartViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseLoadoutPartViewData, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_ItemId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_Rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_Rarity_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_IconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::NewProp_ItemId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"BaseLoadoutPartViewData",
		sizeof(FBaseLoadoutPartViewData),
		alignof(FBaseLoadoutPartViewData),
		Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseLoadoutPartViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseLoadoutPartViewData"), sizeof(FBaseLoadoutPartViewData), Get_Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseLoadoutPartViewData_Hash() { return 2778753451U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
