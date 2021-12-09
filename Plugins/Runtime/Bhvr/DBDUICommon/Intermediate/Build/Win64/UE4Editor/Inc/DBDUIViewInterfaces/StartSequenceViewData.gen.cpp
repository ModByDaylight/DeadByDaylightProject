// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StartSequenceViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartSequenceViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStartSequenceViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EThemeColorId();
// End Cross Module References
class UScriptStruct* FStartSequenceViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FStartSequenceViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStartSequenceViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("StartSequenceViewData"), sizeof(FStartSequenceViewData), Get_Z_Construct_UScriptStruct_FStartSequenceViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FStartSequenceViewData>()
{
	return FStartSequenceViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStartSequenceViewData(FStartSequenceViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("StartSequenceViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStartSequenceViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStartSequenceViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StartSequenceViewData")),new UScriptStruct::TCppStructOps<FStartSequenceViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStartSequenceViewData;
	struct Z_Construct_UScriptStruct_FStartSequenceViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeColorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ThemeColorId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ThemeColorId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ThemeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StartSequenceViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStartSequenceViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeColorId_MetaData[] = {
		{ "Category", "StartSequenceViewData" },
		{ "ModuleRelativePath", "Public/StartSequenceViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeColorId = { "ThemeColorId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartSequenceViewData, ThemeColorId), Z_Construct_UEnum_DBDSharedTypes_EThemeColorId, METADATA_PARAMS(Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeColorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeColorId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeColorId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_MapName_MetaData[] = {
		{ "Category", "StartSequenceViewData" },
		{ "ModuleRelativePath", "Public/StartSequenceViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartSequenceViewData, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeName_MetaData[] = {
		{ "Category", "StartSequenceViewData" },
		{ "ModuleRelativePath", "Public/StartSequenceViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeName = { "ThemeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStartSequenceViewData, ThemeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeColorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeColorId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::NewProp_ThemeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"StartSequenceViewData",
		sizeof(FStartSequenceViewData),
		alignof(FStartSequenceViewData),
		Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStartSequenceViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStartSequenceViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StartSequenceViewData"), sizeof(FStartSequenceViewData), Get_Z_Construct_UScriptStruct_FStartSequenceViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStartSequenceViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStartSequenceViewData_Hash() { return 1125946522U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
