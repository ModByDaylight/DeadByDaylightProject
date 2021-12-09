// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/TextBlockOverrideProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBlockOverrideProperties() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockOverrideProperties();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
class UScriptStruct* FTextBlockOverrideProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextBlockOverrideProperties, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("TextBlockOverrideProperties"), sizeof(FTextBlockOverrideProperties), Get_Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FTextBlockOverrideProperties>()
{
	return FTextBlockOverrideProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTextBlockOverrideProperties(FTextBlockOverrideProperties::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("TextBlockOverrideProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFTextBlockOverrideProperties
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFTextBlockOverrideProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TextBlockOverrideProperties")),new UScriptStruct::TCppStructOps<FTextBlockOverrideProperties>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFTextBlockOverrideProperties;
	struct Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSize_MetaData[];
#endif
		static void NewProp_UseSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Opacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseOpacity_MetaData[];
#endif
		static void NewProp_UseOpacity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseColor_MetaData[];
#endif
		static void NewProp_UseColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TextBlockOverrideProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextBlockOverrideProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "TextBlockOverrideProperties" },
		{ "ModuleRelativePath", "Public/TextBlockOverrideProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextBlockOverrideProperties, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseSize_MetaData[] = {
		{ "Category", "TextBlockOverrideProperties" },
		{ "ModuleRelativePath", "Public/TextBlockOverrideProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseSize_SetBit(void* Obj)
	{
		((FTextBlockOverrideProperties*)Obj)->UseSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseSize = { "UseSize", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTextBlockOverrideProperties), &Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Opacity_MetaData[] = {
		{ "Category", "TextBlockOverrideProperties" },
		{ "ModuleRelativePath", "Public/TextBlockOverrideProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextBlockOverrideProperties, Opacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Opacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Opacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseOpacity_MetaData[] = {
		{ "Category", "TextBlockOverrideProperties" },
		{ "ModuleRelativePath", "Public/TextBlockOverrideProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseOpacity_SetBit(void* Obj)
	{
		((FTextBlockOverrideProperties*)Obj)->UseOpacity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseOpacity = { "UseOpacity", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTextBlockOverrideProperties), &Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseOpacity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "TextBlockOverrideProperties" },
		{ "ModuleRelativePath", "Public/TextBlockOverrideProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTextBlockOverrideProperties, Color), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseColor_MetaData[] = {
		{ "Category", "TextBlockOverrideProperties" },
		{ "ModuleRelativePath", "Public/TextBlockOverrideProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseColor_SetBit(void* Obj)
	{
		((FTextBlockOverrideProperties*)Obj)->UseColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseColor = { "UseColor", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTextBlockOverrideProperties), &Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Opacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::NewProp_UseColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"TextBlockOverrideProperties",
		sizeof(FTextBlockOverrideProperties),
		alignof(FTextBlockOverrideProperties),
		Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextBlockOverrideProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TextBlockOverrideProperties"), sizeof(FTextBlockOverrideProperties), Get_Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTextBlockOverrideProperties_Hash() { return 1290080846U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
