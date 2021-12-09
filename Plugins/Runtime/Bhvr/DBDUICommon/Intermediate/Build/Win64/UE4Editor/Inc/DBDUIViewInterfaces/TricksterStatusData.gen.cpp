// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TricksterStatusData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTricksterStatusData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTricksterStatusData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
class UScriptStruct* FTricksterStatusData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FTricksterStatusData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTricksterStatusData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("TricksterStatusData"), sizeof(FTricksterStatusData), Get_Z_Construct_UScriptStruct_FTricksterStatusData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FTricksterStatusData>()
{
	return FTricksterStatusData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTricksterStatusData(FTricksterStatusData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("TricksterStatusData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFTricksterStatusData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFTricksterStatusData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TricksterStatusData")),new UScriptStruct::TCppStructOps<FTricksterStatusData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFTricksterStatusData;
	struct Z_Construct_UScriptStruct_FTricksterStatusData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasRecentlyDamagedByLaceration_MetaData[];
#endif
		static void NewProp_WasRecentlyDamagedByLaceration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasRecentlyDamagedByLaceration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDangerousLacerationLevel_MetaData[];
#endif
		static void NewProp_IsDangerousLacerationLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDangerousLacerationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumLacerationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumLacerationLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLacerationLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentLacerationLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTricksterStatusData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTricksterStatusData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_MetaData[] = {
		{ "Category", "TricksterStatusData" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_SetBit(void* Obj)
	{
		((FTricksterStatusData*)Obj)->WasRecentlyDamagedByLaceration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration = { "WasRecentlyDamagedByLaceration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTricksterStatusData), &Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_MetaData[] = {
		{ "Category", "TricksterStatusData" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_SetBit(void* Obj)
	{
		((FTricksterStatusData*)Obj)->IsDangerousLacerationLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel = { "IsDangerousLacerationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTricksterStatusData), &Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_MaximumLacerationLevel_MetaData[] = {
		{ "Category", "TricksterStatusData" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_MaximumLacerationLevel = { "MaximumLacerationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTricksterStatusData, MaximumLacerationLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_MaximumLacerationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_MaximumLacerationLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_CurrentLacerationLevel_MetaData[] = {
		{ "Category", "TricksterStatusData" },
		{ "ModuleRelativePath", "Public/TricksterStatusData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_CurrentLacerationLevel = { "CurrentLacerationLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTricksterStatusData, CurrentLacerationLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_CurrentLacerationLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_CurrentLacerationLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTricksterStatusData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_WasRecentlyDamagedByLaceration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_IsDangerousLacerationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_MaximumLacerationLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTricksterStatusData_Statics::NewProp_CurrentLacerationLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTricksterStatusData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"TricksterStatusData",
		sizeof(FTricksterStatusData),
		alignof(FTricksterStatusData),
		Z_Construct_UScriptStruct_FTricksterStatusData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTricksterStatusData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTricksterStatusData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTricksterStatusData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TricksterStatusData"), sizeof(FTricksterStatusData), Get_Z_Construct_UScriptStruct_FTricksterStatusData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTricksterStatusData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTricksterStatusData_Hash() { return 2061722879U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
