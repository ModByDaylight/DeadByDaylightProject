// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/MatchConfigOptionUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchConfigOptionUIData() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FMatchConfigOptionUIData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
class UScriptStruct* FMatchConfigOptionUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSMOBILE_API uint32 Get_Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchConfigOptionUIData, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("MatchConfigOptionUIData"), sizeof(FMatchConfigOptionUIData), Get_Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSMOBILE_API UScriptStruct* StaticStruct<FMatchConfigOptionUIData>()
{
	return FMatchConfigOptionUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchConfigOptionUIData(FMatchConfigOptionUIData::StaticStruct, TEXT("/Script/DBDUIViewsMobile"), TEXT("MatchConfigOptionUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchConfigOptionUIData
{
	FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchConfigOptionUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchConfigOptionUIData")),new UScriptStruct::TCppStructOps<FMatchConfigOptionUIData>);
	}
} ScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchConfigOptionUIData;
	struct Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OptionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OptionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_OptionIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OptionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchConfigOptionUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchConfigOptionUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchConfigOptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionType = { "OptionType", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchConfigOptionUIData, OptionType), Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionIcon_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchConfigOptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionIcon = { "OptionIcon", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchConfigOptionUIData, OptionIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchConfigOptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionName = { "OptionName", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchConfigOptionUIData, OptionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_StringId_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchConfigOptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_StringId = { "StringId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchConfigOptionUIData, StringId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_StringId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_StringId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/MatchConfigOptionUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchConfigOptionUIData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_OptionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_StringId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
		nullptr,
		&NewStructOps,
		"MatchConfigOptionUIData",
		sizeof(FMatchConfigOptionUIData),
		alignof(FMatchConfigOptionUIData),
		Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchConfigOptionUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchConfigOptionUIData"), sizeof(FMatchConfigOptionUIData), Get_Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchConfigOptionUIData_Hash() { return 2439287948U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
