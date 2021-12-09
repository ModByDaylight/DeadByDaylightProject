// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/InputPromptDataRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputPromptDataRow() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputPromptDataRow();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FInputPromptDataRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FInputPromptDataRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputPromptDataRow, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("InputPromptDataRow"), sizeof(FInputPromptDataRow), Get_Z_Construct_UScriptStruct_FInputPromptDataRow_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FInputPromptDataRow>()
{
	return FInputPromptDataRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputPromptDataRow(FInputPromptDataRow::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("InputPromptDataRow"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFInputPromptDataRow
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFInputPromptDataRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputPromptDataRow")),new UScriptStruct::TCppStructOps<FInputPromptDataRow>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFInputPromptDataRow;
	struct Z_Construct_UScriptStruct_FInputPromptDataRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowLabel_MetaData[];
#endif
		static void NewProp_ShowLabel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromptTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PromptTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InputLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputPromptDataRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputPromptDataRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_ShowLabel_MetaData[] = {
		{ "Category", "InputPromptDataRow" },
		{ "ModuleRelativePath", "Public/InputPromptDataRow.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_ShowLabel_SetBit(void* Obj)
	{
		((FInputPromptDataRow*)Obj)->ShowLabel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_ShowLabel = { "ShowLabel", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInputPromptDataRow), &Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_ShowLabel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_ShowLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_ShowLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_PromptTexture_MetaData[] = {
		{ "Category", "InputPromptDataRow" },
		{ "ModuleRelativePath", "Public/InputPromptDataRow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_PromptTexture = { "PromptTexture", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputPromptDataRow, PromptTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_PromptTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_PromptTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "InputPromptDataRow" },
		{ "ModuleRelativePath", "Public/InputPromptDataRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputPromptDataRow, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputLabel_MetaData[] = {
		{ "Category", "InputPromptDataRow" },
		{ "ModuleRelativePath", "Public/InputPromptDataRow.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputLabel = { "InputLabel", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputPromptDataRow, InputLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_ShowLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_PromptTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::NewProp_InputLabel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InputPromptDataRow",
		sizeof(FInputPromptDataRow),
		alignof(FInputPromptDataRow),
		Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputPromptDataRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputPromptDataRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputPromptDataRow"), sizeof(FInputPromptDataRow), Get_Z_Construct_UScriptStruct_FInputPromptDataRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputPromptDataRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputPromptDataRow_Hash() { return 937927225U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
