// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/MatchConfigTabData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchConfigTabData() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FMatchConfigTabData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGAtlantaMatchConfigTab_NoRegister();
// End Cross Module References
class UScriptStruct* FMatchConfigTabData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSMOBILE_API uint32 Get_Z_Construct_UScriptStruct_FMatchConfigTabData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchConfigTabData, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("MatchConfigTabData"), sizeof(FMatchConfigTabData), Get_Z_Construct_UScriptStruct_FMatchConfigTabData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSMOBILE_API UScriptStruct* StaticStruct<FMatchConfigTabData>()
{
	return FMatchConfigTabData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchConfigTabData(FMatchConfigTabData::StaticStruct, TEXT("/Script/DBDUIViewsMobile"), TEXT("MatchConfigTabData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchConfigTabData
{
	FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchConfigTabData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatchConfigTabData")),new UScriptStruct::TCppStructOps<FMatchConfigTabData>);
	}
} ScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFMatchConfigTabData;
	struct Z_Construct_UScriptStruct_FMatchConfigTabData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOptionsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DefaultOptionsID;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultOptionsID_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultOptionsID_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultOptionsID_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TabIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchConfigTabData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchConfigTabData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID_MetaData[] = {
		{ "Category", "MatchConfigTabData" },
		{ "ModuleRelativePath", "Public/MatchConfigTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID = { "DefaultOptionsID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchConfigTabData, DefaultOptionsID), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID_Key_KeyProp = { "DefaultOptionsID_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID_ValueProp = { "DefaultOptionsID", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_TabIcon_MetaData[] = {
		{ "Category", "MatchConfigTabData" },
		{ "ModuleRelativePath", "Public/MatchConfigTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_TabIcon = { "TabIcon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchConfigTabData, TabIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_TabIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_TabIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_Widget_MetaData[] = {
		{ "Category", "MatchConfigTabData" },
		{ "ModuleRelativePath", "Public/MatchConfigTabData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchConfigTabData, Widget), Z_Construct_UClass_UUMGAtlantaMatchConfigTab_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_DefaultOptionsID_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_TabIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::NewProp_Widget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
		nullptr,
		&NewStructOps,
		"MatchConfigTabData",
		sizeof(FMatchConfigTabData),
		alignof(FMatchConfigTabData),
		Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchConfigTabData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchConfigTabData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchConfigTabData"), sizeof(FMatchConfigTabData), Get_Z_Construct_UScriptStruct_FMatchConfigTabData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchConfigTabData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchConfigTabData_Hash() { return 3325463511U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
