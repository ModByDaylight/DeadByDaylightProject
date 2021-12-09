// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/OnboardingTutorialViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingTutorialViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingTutorialViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialButtonStyle();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialType();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FRewardWrapperViewData();
// End Cross Module References
class UScriptStruct* FOnboardingTutorialViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnboardingTutorialViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("OnboardingTutorialViewData"), sizeof(FOnboardingTutorialViewData), Get_Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FOnboardingTutorialViewData>()
{
	return FOnboardingTutorialViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnboardingTutorialViewData(FOnboardingTutorialViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("OnboardingTutorialViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFOnboardingTutorialViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFOnboardingTutorialViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnboardingTutorialViewData")),new UScriptStruct::TCppStructOps<FOnboardingTutorialViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFOnboardingTutorialViewData;
	struct Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonStyle;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonStyle_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TutorialType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TutorialType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlternativeRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AlternativeRewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlternativeRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainRewards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MainRewards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MainRewards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainRewardClaimed_MetaData[];
#endif
		static void NewProp_MainRewardClaimed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MainRewardClaimed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static void NewProp_Completed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TutorialId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnboardingTutorialViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialViewData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialViewData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000002015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialViewData, ButtonStyle), Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_ButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_ButtonStyle_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_ButtonStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialType_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialType = { "TutorialType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialViewData, TutorialType), Z_Construct_UEnum_DBDSharedTypes_EOnboardingTutorialType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_AlternativeRewards_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_AlternativeRewards = { "AlternativeRewards", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialViewData, AlternativeRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_AlternativeRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_AlternativeRewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_AlternativeRewards_Inner = { "AlternativeRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewards_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewards = { "MainRewards", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialViewData, MainRewards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewards_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewards_Inner = { "MainRewards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardWrapperViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewardClaimed_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewardClaimed_SetBit(void* Obj)
	{
		((FOnboardingTutorialViewData*)Obj)->MainRewardClaimed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewardClaimed = { "MainRewardClaimed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOnboardingTutorialViewData), &Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewardClaimed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewardClaimed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewardClaimed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Completed_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Completed_SetBit(void* Obj)
	{
		((FOnboardingTutorialViewData*)Obj)->Completed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOnboardingTutorialViewData), &Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Completed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Completed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialId_MetaData[] = {
		{ "Category", "OnboardingTutorialViewData" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialId = { "TutorialId", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingTutorialViewData, TutorialId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_ButtonStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_ButtonStyle_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_AlternativeRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_AlternativeRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_MainRewardClaimed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_Completed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::NewProp_TutorialId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"OnboardingTutorialViewData",
		sizeof(FOnboardingTutorialViewData),
		alignof(FOnboardingTutorialViewData),
		Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnboardingTutorialViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnboardingTutorialViewData"), sizeof(FOnboardingTutorialViewData), Get_Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnboardingTutorialViewData_Hash() { return 3033531602U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
