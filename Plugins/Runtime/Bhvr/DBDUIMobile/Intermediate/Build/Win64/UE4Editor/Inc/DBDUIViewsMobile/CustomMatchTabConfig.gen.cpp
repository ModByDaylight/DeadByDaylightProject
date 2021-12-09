// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/CustomMatchTabConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMatchTabConfig() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMatchTabConfig();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGAtlantaMatchConfigPageScrollItem_NoRegister();
// End Cross Module References
class UScriptStruct* FCustomMatchTabConfig::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSMOBILE_API uint32 Get_Z_Construct_UScriptStruct_FCustomMatchTabConfig_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomMatchTabConfig, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("CustomMatchTabConfig"), sizeof(FCustomMatchTabConfig), Get_Z_Construct_UScriptStruct_FCustomMatchTabConfig_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSMOBILE_API UScriptStruct* StaticStruct<FCustomMatchTabConfig>()
{
	return FCustomMatchTabConfig::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomMatchTabConfig(FCustomMatchTabConfig::StaticStruct, TEXT("/Script/DBDUIViewsMobile"), TEXT("CustomMatchTabConfig"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFCustomMatchTabConfig
{
	FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFCustomMatchTabConfig()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomMatchTabConfig")),new UScriptStruct::TCppStructOps<FCustomMatchTabConfig>);
	}
} ScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFCustomMatchTabConfig;
	struct Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_OptionButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Column;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Row;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomMatchTabConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomMatchTabConfig>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_OptionButtonClass_MetaData[] = {
		{ "Category", "CustomMatchTabConfig" },
		{ "ModuleRelativePath", "Public/CustomMatchTabConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_OptionButtonClass = { "OptionButtonClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMatchTabConfig, OptionButtonClass), Z_Construct_UClass_UUMGAtlantaMatchConfigPageScrollItem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_OptionButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_OptionButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Column_MetaData[] = {
		{ "Category", "CustomMatchTabConfig" },
		{ "ModuleRelativePath", "Public/CustomMatchTabConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMatchTabConfig, Column), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Column_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Row_MetaData[] = {
		{ "Category", "CustomMatchTabConfig" },
		{ "ModuleRelativePath", "Public/CustomMatchTabConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMatchTabConfig, Row), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Row_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemHeight_MetaData[] = {
		{ "Category", "CustomMatchTabConfig" },
		{ "ModuleRelativePath", "Public/CustomMatchTabConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemHeight = { "ItemHeight", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMatchTabConfig, ItemHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemWidth_MetaData[] = {
		{ "Category", "CustomMatchTabConfig" },
		{ "ModuleRelativePath", "Public/CustomMatchTabConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemWidth = { "ItemWidth", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMatchTabConfig, ItemWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_OptionButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Column,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_Row,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::NewProp_ItemWidth,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
		nullptr,
		&NewStructOps,
		"CustomMatchTabConfig",
		sizeof(FCustomMatchTabConfig),
		alignof(FCustomMatchTabConfig),
		Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomMatchTabConfig()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomMatchTabConfig_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomMatchTabConfig"), sizeof(FCustomMatchTabConfig), Get_Z_Construct_UScriptStruct_FCustomMatchTabConfig_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomMatchTabConfig_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomMatchTabConfig_Hash() { return 87442707U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
