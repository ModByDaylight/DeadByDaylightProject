// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StatusEffectViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusEffectViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FStatusEffectViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FStatusEffectViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatusEffectViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("StatusEffectViewData"), sizeof(FStatusEffectViewData), Get_Z_Construct_UScriptStruct_FStatusEffectViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FStatusEffectViewData>()
{
	return FStatusEffectViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatusEffectViewData(FStatusEffectViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("StatusEffectViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStatusEffectViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStatusEffectViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatusEffectViewData")),new UScriptStruct::TCppStructOps<FStatusEffectViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFStatusEffectViewData;
	struct Z_Construct_UScriptStruct_FStatusEffectViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Percentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Percentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusEffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusEffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IconTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatusEffectViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatusEffectViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Percentage_MetaData[] = {
		{ "Category", "StatusEffectViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectViewData, Percentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Percentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Percentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "StatusEffectViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectViewData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_StatusEffectType_MetaData[] = {
		{ "Category", "StatusEffectViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_StatusEffectType = { "StatusEffectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectViewData, StatusEffectType), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_StatusEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_StatusEffectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_StatusEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "StatusEffectViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectViewData, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_IconTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "StatusEffectViewData" },
		{ "ModuleRelativePath", "Public/StatusEffectViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatusEffectViewData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Percentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_StatusEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_StatusEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_IconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"StatusEffectViewData",
		sizeof(FStatusEffectViewData),
		alignof(FStatusEffectViewData),
		Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatusEffectViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatusEffectViewData"), sizeof(FStatusEffectViewData), Get_Z_Construct_UScriptStruct_FStatusEffectViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatusEffectViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatusEffectViewData_Hash() { return 415828983U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
