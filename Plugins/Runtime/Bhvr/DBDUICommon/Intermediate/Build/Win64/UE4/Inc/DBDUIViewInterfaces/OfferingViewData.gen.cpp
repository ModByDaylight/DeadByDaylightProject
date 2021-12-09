// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/OfferingViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLoadoutPartViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemAvailability();
// End Cross Module References
class UScriptStruct* FOfferingViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FOfferingViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOfferingViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("OfferingViewData"), sizeof(FOfferingViewData), Get_Z_Construct_UScriptStruct_FOfferingViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FOfferingViewData>()
{
	return FOfferingViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOfferingViewData(FOfferingViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("OfferingViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFOfferingViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFOfferingViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OfferingViewData")),new UScriptStruct::TCppStructOps<FOfferingViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFOfferingViewData;
	struct Z_Construct_UScriptStruct_FOfferingViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Availability;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Availability_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StackCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OfferingViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOfferingViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_Availability_MetaData[] = {
		{ "Category", "OfferingViewData" },
		{ "ModuleRelativePath", "Public/OfferingViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_Availability = { "Availability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingViewData, Availability), Z_Construct_UEnum_DBDSharedTypes_EItemAvailability, METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_Availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_Availability_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_Availability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_StackCount_MetaData[] = {
		{ "Category", "OfferingViewData" },
		{ "ModuleRelativePath", "Public/OfferingViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_StackCount = { "StackCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingViewData, StackCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_StackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_StackCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOfferingViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_Availability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_Availability_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingViewData_Statics::NewProp_StackCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOfferingViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FBaseLoadoutPartViewData,
		&NewStructOps,
		"OfferingViewData",
		sizeof(FOfferingViewData),
		alignof(FOfferingViewData),
		Z_Construct_UScriptStruct_FOfferingViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOfferingViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOfferingViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OfferingViewData"), sizeof(FOfferingViewData), Get_Z_Construct_UScriptStruct_FOfferingViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOfferingViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOfferingViewData_Hash() { return 337981084U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
