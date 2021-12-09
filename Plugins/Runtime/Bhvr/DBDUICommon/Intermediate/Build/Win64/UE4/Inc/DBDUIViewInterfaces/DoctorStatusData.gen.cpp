// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/DoctorStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoctorStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDoctorStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EAfflictionLevel();
// End Cross Module References
class UScriptStruct* FDoctorStatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FDoctorStatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoctorStatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("DoctorStatusData"), sizeof(FDoctorStatusData), Get_Z_Construct_UScriptStruct_FDoctorStatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FDoctorStatusData>()
{
	return FDoctorStatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDoctorStatusData(FDoctorStatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("DoctorStatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDoctorStatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDoctorStatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DoctorStatusData")),new UScriptStruct::TCppStructOps<FDoctorStatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFDoctorStatusData;
	struct Z_Construct_UScriptStruct_FDoctorStatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AfflictionLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AfflictionLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AfflictionLevel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoctorStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DoctorStatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoctorStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoctorStatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoctorStatusData_Statics::NewProp_AfflictionLevel_MetaData[] = {
		{ "Category", "DoctorStatusData" },
		{ "ModuleRelativePath", "Public/DoctorStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDoctorStatusData_Statics::NewProp_AfflictionLevel = { "AfflictionLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDoctorStatusData, AfflictionLevel), Z_Construct_UEnum_DBDSharedTypes_EAfflictionLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FDoctorStatusData_Statics::NewProp_AfflictionLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoctorStatusData_Statics::NewProp_AfflictionLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDoctorStatusData_Statics::NewProp_AfflictionLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoctorStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoctorStatusData_Statics::NewProp_AfflictionLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoctorStatusData_Statics::NewProp_AfflictionLevel_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoctorStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"DoctorStatusData",
		sizeof(FDoctorStatusData),
		alignof(FDoctorStatusData),
		Z_Construct_UScriptStruct_FDoctorStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoctorStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoctorStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoctorStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoctorStatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDoctorStatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DoctorStatusData"), sizeof(FDoctorStatusData), Get_Z_Construct_UScriptStruct_FDoctorStatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDoctorStatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDoctorStatusData_Hash() { return 2055144436U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
