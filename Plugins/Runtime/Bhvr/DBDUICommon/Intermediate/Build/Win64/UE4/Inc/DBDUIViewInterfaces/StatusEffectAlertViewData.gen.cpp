// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StatusEffectAlertViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusEffectAlertViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectAlertViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAddonViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPerkViewData();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EHudStatusEffectAlertViewType();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FStatusEffectAlertViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatusEffectAlertViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("StatusEffectAlertViewData"), sizeof(FStatusEffectAlertViewData), Get_Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FStatusEffectAlertViewData>()
{
	return FStatusEffectAlertViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatusEffectAlertViewData(FStatusEffectAlertViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("StatusEffectAlertViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStatusEffectAlertViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStatusEffectAlertViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatusEffectAlertViewData")),new UScriptStruct::TCppStructOps<FStatusEffectAlertViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStatusEffectAlertViewData;
	struct Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddonViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerkViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceViewType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SourceViewType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceViewType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusEffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusEffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StatusEffectIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatusEffectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatusEffectAlertViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatusEffectAlertViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_AddonViewData_MetaData[] = {
		{ "Category", "StatusEffectAlertViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_AddonViewData = { "AddonViewData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectAlertViewData, AddonViewData), Z_Construct_UScriptStruct_FAddonViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_AddonViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_AddonViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_ItemViewData_MetaData[] = {
		{ "Category", "StatusEffectAlertViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_ItemViewData = { "ItemViewData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectAlertViewData, ItemViewData), Z_Construct_UScriptStruct_FItemViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_ItemViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_ItemViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_PerkViewData_MetaData[] = {
		{ "Category", "StatusEffectAlertViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_PerkViewData = { "PerkViewData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectAlertViewData, PerkViewData), Z_Construct_UScriptStruct_FPerkViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_PerkViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_PerkViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_SourceViewType_MetaData[] = {
		{ "Category", "StatusEffectAlertViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_SourceViewType = { "SourceViewType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectAlertViewData, SourceViewType), Z_Construct_UEnum_DBDUIViewInterfaces_EHudStatusEffectAlertViewType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_SourceViewType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_SourceViewType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_SourceViewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectType_MetaData[] = {
		{ "Category", "StatusEffectAlertViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectType = { "StatusEffectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectAlertViewData, StatusEffectType), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectIcon_MetaData[] = {
		{ "Category", "StatusEffectAlertViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectIcon = { "StatusEffectIcon", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectAlertViewData, StatusEffectIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectName_MetaData[] = {
		{ "Category", "StatusEffectAlertViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectAlertViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectName = { "StatusEffectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectAlertViewData, StatusEffectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_AddonViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_ItemViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_PerkViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_SourceViewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_SourceViewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::NewProp_StatusEffectName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"StatusEffectAlertViewData",
		sizeof(FStatusEffectAlertViewData),
		alignof(FStatusEffectAlertViewData),
		Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectAlertViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatusEffectAlertViewData"), sizeof(FStatusEffectAlertViewData), Get_Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatusEffectAlertViewData_Hash() { return 3312123023U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
