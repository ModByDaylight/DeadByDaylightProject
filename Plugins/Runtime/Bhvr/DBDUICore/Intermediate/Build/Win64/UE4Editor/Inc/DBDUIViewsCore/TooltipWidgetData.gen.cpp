// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/TooltipWidgetData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTooltipWidgetData() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTooltipWidgetData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_ETooltipType();
// End Cross Module References
class UScriptStruct* FTooltipWidgetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FTooltipWidgetData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTooltipWidgetData, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("TooltipWidgetData"), sizeof(FTooltipWidgetData), Get_Z_Construct_UScriptStruct_FTooltipWidgetData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FTooltipWidgetData>()
{
	return FTooltipWidgetData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTooltipWidgetData(FTooltipWidgetData::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("TooltipWidgetData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFTooltipWidgetData
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFTooltipWidgetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TooltipWidgetData")),new UScriptStruct::TCppStructOps<FTooltipWidgetData>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFTooltipWidgetData;
	struct Z_Construct_UScriptStruct_FTooltipWidgetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TooltipType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TooltipType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TooltipWidgetData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTooltipWidgetData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "TooltipWidgetData" },
		{ "ModuleRelativePath", "Public/TooltipWidgetData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTooltipWidgetData, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_TooltipType_MetaData[] = {
		{ "Category", "TooltipWidgetData" },
		{ "ModuleRelativePath", "Public/TooltipWidgetData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_TooltipType = { "TooltipType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTooltipWidgetData, TooltipType), Z_Construct_UEnum_DBDUIViewsCore_ETooltipType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_TooltipType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_TooltipType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_TooltipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_WidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_TooltipType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::NewProp_TooltipType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"TooltipWidgetData",
		sizeof(FTooltipWidgetData),
		alignof(FTooltipWidgetData),
		Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTooltipWidgetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTooltipWidgetData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TooltipWidgetData"), sizeof(FTooltipWidgetData), Get_Z_Construct_UScriptStruct_FTooltipWidgetData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTooltipWidgetData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTooltipWidgetData_Hash() { return 2309779933U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
