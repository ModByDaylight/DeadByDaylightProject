// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BHVRAnalytics/Public/BaseSingleStructIndexAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseSingleStructIndexAnalytics() {}
// Cross Module References
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
	UPackage* Z_Construct_UPackage__Script_BHVRAnalytics();
// End Cross Module References
class UScriptStruct* FBaseSingleStructIndexAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BHVRANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics, Z_Construct_UPackage__Script_BHVRAnalytics(), TEXT("BaseSingleStructIndexAnalytics"), sizeof(FBaseSingleStructIndexAnalytics), Get_Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Hash());
	}
	return Singleton;
}
template<> BHVRANALYTICS_API UScriptStruct* StaticStruct<FBaseSingleStructIndexAnalytics>()
{
	return FBaseSingleStructIndexAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseSingleStructIndexAnalytics(FBaseSingleStructIndexAnalytics::StaticStruct, TEXT("/Script/BHVRAnalytics"), TEXT("BaseSingleStructIndexAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_BHVRAnalytics_StaticRegisterNativesFBaseSingleStructIndexAnalytics
{
	FScriptStruct_BHVRAnalytics_StaticRegisterNativesFBaseSingleStructIndexAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseSingleStructIndexAnalytics")),new UScriptStruct::TCppStructOps<FBaseSingleStructIndexAnalytics>);
	}
} ScriptStruct_BHVRAnalytics_StaticRegisterNativesFBaseSingleStructIndexAnalytics;
	struct Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionGuid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseSingleStructIndexAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseSingleStructIndexAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::NewProp_SessionGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseSingleStructIndexAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::NewProp_SessionGuid = { "SessionGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseSingleStructIndexAnalytics, SessionGuid), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::NewProp_SessionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::NewProp_SessionGuid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::NewProp_SessionGuid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BHVRAnalytics,
		nullptr,
		&NewStructOps,
		"BaseSingleStructIndexAnalytics",
		sizeof(FBaseSingleStructIndexAnalytics),
		alignof(FBaseSingleStructIndexAnalytics),
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BHVRAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseSingleStructIndexAnalytics"), sizeof(FBaseSingleStructIndexAnalytics), Get_Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics_Hash() { return 2726266938U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
