// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/TabWidgetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTabWidgetData() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FTabWidgetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FTabWidgetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTabWidgetData, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("TabWidgetData"), sizeof(FTabWidgetData), Get_Z_Construct_UScriptStruct_FTabWidgetData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FTabWidgetData>()
{
	return FTabWidgetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTabWidgetData(FTabWidgetData::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("TabWidgetData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFTabWidgetData
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFTabWidgetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TabWidgetData")),new UScriptStruct::TCppStructOps<FTabWidgetData>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFTabWidgetData;
	struct Z_Construct_UScriptStruct_FTabWidgetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForcesIconSize_MetaData[];
#endif
		static void NewProp_ForcesIconSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForcesIconSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTabWidgetData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TabWidgetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTabWidgetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "TabWidgetData" },
		{ "ModuleRelativePath", "Public/TabWidgetData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTabWidgetData, IconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_IconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_IconSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_ForcesIconSize_MetaData[] = {
		{ "Category", "TabWidgetData" },
		{ "ModuleRelativePath", "Public/TabWidgetData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_ForcesIconSize_SetBit(void* Obj)
	{
		((FTabWidgetData*)Obj)->ForcesIconSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_ForcesIconSize = { "ForcesIconSize", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTabWidgetData), &Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_ForcesIconSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_ForcesIconSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_ForcesIconSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "TabWidgetData" },
		{ "ModuleRelativePath", "Public/TabWidgetData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000002805, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTabWidgetData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "TabWidgetData" },
		{ "ModuleRelativePath", "Public/TabWidgetData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTabWidgetData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "TabWidgetData" },
		{ "ModuleRelativePath", "Public/TabWidgetData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTabWidgetData, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTabWidgetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_IconSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_ForcesIconSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTabWidgetData_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTabWidgetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"TabWidgetData",
		sizeof(FTabWidgetData),
		alignof(FTabWidgetData),
		Z_Construct_UScriptStruct_FTabWidgetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTabWidgetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTabWidgetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTabWidgetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTabWidgetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TabWidgetData"), sizeof(FTabWidgetData), Get_Z_Construct_UScriptStruct_FTabWidgetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTabWidgetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTabWidgetData_Hash() { return 4095541417U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
