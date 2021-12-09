// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/AddonViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddonViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAddonViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLoadoutPartViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
// End Cross Module References
class UScriptStruct* FAddonViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FAddonViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddonViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("AddonViewData"), sizeof(FAddonViewData), Get_Z_Construct_UScriptStruct_FAddonViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FAddonViewData>()
{
	return FAddonViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAddonViewData(FAddonViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("AddonViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAddonViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAddonViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AddonViewData")),new UScriptStruct::TCppStructOps<FAddonViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFAddonViewData;
	struct Z_Construct_UScriptStruct_FAddonViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StatusEffectType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StatusEffectType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Cooldown;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddonViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AddonViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddonViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddonViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_StatusEffectType_MetaData[] = {
		{ "Category", "AddonViewData" },
		{ "ModuleRelativePath", "Public/AddonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_StatusEffectType = { "StatusEffectType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAddonViewData, StatusEffectType), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_StatusEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_StatusEffectType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_StatusEffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_Cooldown_MetaData[] = {
		{ "Category", "AddonViewData" },
		{ "ModuleRelativePath", "Public/AddonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAddonViewData, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_Cooldown_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddonViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_StatusEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_StatusEffectType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddonViewData_Statics::NewProp_Cooldown,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddonViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FBaseLoadoutPartViewData,
		&NewStructOps,
		"AddonViewData",
		sizeof(FAddonViewData),
		alignof(FAddonViewData),
		Z_Construct_UScriptStruct_FAddonViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddonViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddonViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddonViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddonViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAddonViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AddonViewData"), sizeof(FAddonViewData), Get_Z_Construct_UScriptStruct_FAddonViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAddonViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAddonViewData_Hash() { return 2431835133U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
