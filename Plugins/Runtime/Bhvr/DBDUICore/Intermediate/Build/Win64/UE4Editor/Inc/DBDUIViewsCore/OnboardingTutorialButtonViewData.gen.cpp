// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/OnboardingTutorialButtonViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingTutorialButtonViewData() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialButtonStyle();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EOnboardingStepStatus();
// End Cross Module References
class UScriptStruct* FOnboardingTutorialButtonViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("OnboardingTutorialButtonViewData"), sizeof(FOnboardingTutorialButtonViewData), Get_Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FOnboardingTutorialButtonViewData>()
{
	return FOnboardingTutorialButtonViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnboardingTutorialButtonViewData(FOnboardingTutorialButtonViewData::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("OnboardingTutorialButtonViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFOnboardingTutorialButtonViewData
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFOnboardingTutorialButtonViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnboardingTutorialButtonViewData")),new UScriptStruct::TCppStructOps<FOnboardingTutorialButtonViewData>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFOnboardingTutorialButtonViewData;
	struct Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonStyle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewardsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewardsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TutorialId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StepId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StepStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StepStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialButtonViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnboardingTutorialButtonViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "OnboardingTutorialButtonViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialButtonViewData, ButtonStyle), Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_ButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_ButtonStyle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_ButtonStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_RewardsData_MetaData[] = {
		{ "Category", "OnboardingTutorialButtonViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_RewardsData = { "RewardsData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialButtonViewData, RewardsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_RewardsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_RewardsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_RewardsData_Inner = { "RewardsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "OnboardingTutorialButtonViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialButtonViewData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OnboardingTutorialButtonViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialButtonViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "OnboardingTutorialButtonViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialButtonViewData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_TutorialId_MetaData[] = {
		{ "Category", "OnboardingTutorialButtonViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_TutorialId = { "TutorialId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialButtonViewData, TutorialId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_TutorialId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_TutorialId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepId_MetaData[] = {
		{ "Category", "OnboardingTutorialButtonViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepId = { "StepId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialButtonViewData, StepId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepStatus_MetaData[] = {
		{ "Category", "OnboardingTutorialButtonViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialButtonViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepStatus = { "StepStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialButtonViewData, StepStatus), Z_Construct_UEnum_DBDSharedTypes_EOnboardingStepStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_ButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_ButtonStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_RewardsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_RewardsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_TutorialId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::NewProp_StepStatus_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"OnboardingTutorialButtonViewData",
		sizeof(FOnboardingTutorialButtonViewData),
		alignof(FOnboardingTutorialButtonViewData),
		Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnboardingTutorialButtonViewData"), sizeof(FOnboardingTutorialButtonViewData), Get_Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData_Hash() { return 1819856878U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
