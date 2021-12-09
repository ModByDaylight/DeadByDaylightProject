// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/HtmlRichTextTag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHtmlRichTextTag() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHtmlRichTextTag();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
class UScriptStruct* FHtmlRichTextTag::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FHtmlRichTextTag_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHtmlRichTextTag, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("HtmlRichTextTag"), sizeof(FHtmlRichTextTag), Get_Z_Construct_UScriptStruct_FHtmlRichTextTag_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FHtmlRichTextTag>()
{
	return FHtmlRichTextTag::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHtmlRichTextTag(FHtmlRichTextTag::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("HtmlRichTextTag"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFHtmlRichTextTag
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFHtmlRichTextTag()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HtmlRichTextTag")),new UScriptStruct::TCppStructOps<FHtmlRichTextTag>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFHtmlRichTextTag;
	struct Z_Construct_UScriptStruct_FHtmlRichTextTag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHtmlRichTextTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HtmlRichTextTag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHtmlRichTextTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHtmlRichTextTag>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHtmlRichTextTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"HtmlRichTextTag",
		sizeof(FHtmlRichTextTag),
		alignof(FHtmlRichTextTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHtmlRichTextTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHtmlRichTextTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHtmlRichTextTag()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHtmlRichTextTag_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HtmlRichTextTag"), sizeof(FHtmlRichTextTag), Get_Z_Construct_UScriptStruct_FHtmlRichTextTag_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHtmlRichTextTag_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHtmlRichTextTag_Hash() { return 1004978618U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
