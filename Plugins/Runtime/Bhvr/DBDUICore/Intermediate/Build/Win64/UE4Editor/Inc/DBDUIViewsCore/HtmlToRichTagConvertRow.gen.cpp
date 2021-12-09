// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/HtmlToRichTagConvertRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHtmlToRichTagConvertRow() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FHtmlToRichTagConvertRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("HtmlToRichTagConvertRow"), sizeof(FHtmlToRichTagConvertRow), Get_Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FHtmlToRichTagConvertRow>()
{
	return FHtmlToRichTagConvertRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHtmlToRichTagConvertRow(FHtmlToRichTagConvertRow::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("HtmlToRichTagConvertRow"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFHtmlToRichTagConvertRow
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFHtmlToRichTagConvertRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HtmlToRichTagConvertRow")),new UScriptStruct::TCppStructOps<FHtmlToRichTagConvertRow>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFHtmlToRichTagConvertRow;
	struct Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RichTextTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RichTextTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HtmlTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HtmlTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HtmlToRichTagConvertRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHtmlToRichTagConvertRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_RichTextTag_MetaData[] = {
		{ "Category", "HtmlToRichTagConvertRow" },
		{ "ModuleRelativePath", "Public/HtmlToRichTagConvertRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_RichTextTag = { "RichTextTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHtmlToRichTagConvertRow, RichTextTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_RichTextTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_RichTextTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_HtmlTag_MetaData[] = {
		{ "Category", "HtmlToRichTagConvertRow" },
		{ "ModuleRelativePath", "Public/HtmlToRichTagConvertRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_HtmlTag = { "HtmlTag", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHtmlToRichTagConvertRow, HtmlTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_HtmlTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_HtmlTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_RichTextTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::NewProp_HtmlTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"HtmlToRichTagConvertRow",
		sizeof(FHtmlToRichTagConvertRow),
		alignof(FHtmlToRichTagConvertRow),
		Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HtmlToRichTagConvertRow"), sizeof(FHtmlToRichTagConvertRow), Get_Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHtmlToRichTagConvertRow_Hash() { return 2885830835U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
