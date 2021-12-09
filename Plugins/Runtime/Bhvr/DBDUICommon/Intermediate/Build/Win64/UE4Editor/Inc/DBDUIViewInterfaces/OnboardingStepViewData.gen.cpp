// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/OnboardingStepViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingStepViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingStepViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingTutorialViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EOnboardingStepStatus();
// End Cross Module References
class UScriptStruct* FOnboardingStepViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FOnboardingStepViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnboardingStepViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("OnboardingStepViewData"), sizeof(FOnboardingStepViewData), Get_Z_Construct_UScriptStruct_FOnboardingStepViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FOnboardingStepViewData>()
{
	return FOnboardingStepViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnboardingStepViewData(FOnboardingStepViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("OnboardingStepViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFOnboardingStepViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFOnboardingStepViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnboardingStepViewData")),new UScriptStruct::TCppStructOps<FOnboardingStepViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFOnboardingStepViewData;
	struct Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tutorials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tutorials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StepId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnboardingStepViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnboardingStepViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Tutorials_MetaData[] = {
		{ "Category", "OnboardingStepViewData" },
		{ "ModuleRelativePath", "Public/OnboardingStepViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Tutorials = { "Tutorials", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingStepViewData, Tutorials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Tutorials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Tutorials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Tutorials_Inner = { "Tutorials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOnboardingTutorialViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Status_MetaData[] = {
		{ "Category", "OnboardingStepViewData" },
		{ "ModuleRelativePath", "Public/OnboardingStepViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingStepViewData, Status), Z_Construct_UEnum_DBDSharedTypes_EOnboardingStepStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_StepId_MetaData[] = {
		{ "Category", "OnboardingStepViewData" },
		{ "ModuleRelativePath", "Public/OnboardingStepViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_StepId = { "StepId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingStepViewData, StepId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_StepId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_StepId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Tutorials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Tutorials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_Status_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::NewProp_StepId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"OnboardingStepViewData",
		sizeof(FOnboardingStepViewData),
		alignof(FOnboardingStepViewData),
		Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnboardingStepViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnboardingStepViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnboardingStepViewData"), sizeof(FOnboardingStepViewData), Get_Z_Construct_UScriptStruct_FOnboardingStepViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnboardingStepViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnboardingStepViewData_Hash() { return 588207877U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
