// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TutorialObjectivesViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialObjectivesViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialObjectivesViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionPromptViewData();
// End Cross Module References
class UScriptStruct* FTutorialObjectivesViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialObjectivesViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("TutorialObjectivesViewData"), sizeof(FTutorialObjectivesViewData), Get_Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FTutorialObjectivesViewData>()
{
	return FTutorialObjectivesViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTutorialObjectivesViewData(FTutorialObjectivesViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("TutorialObjectivesViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFTutorialObjectivesViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFTutorialObjectivesViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TutorialObjectivesViewData")),new UScriptStruct::TCppStructOps<FTutorialObjectivesViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFTutorialObjectivesViewData;
	struct Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryInteractionPromptViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryInteractionPromptViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryInteractionPromptViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrimaryInteractionPromptViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TutorialObjectivesViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialObjectivesViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_SecondaryInteractionPromptViewData_MetaData[] = {
		{ "Category", "TutorialObjectivesViewData" },
		{ "ModuleRelativePath", "Public/TutorialObjectivesViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_SecondaryInteractionPromptViewData = { "SecondaryInteractionPromptViewData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialObjectivesViewData, SecondaryInteractionPromptViewData), Z_Construct_UScriptStruct_FInteractionPromptViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_SecondaryInteractionPromptViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_SecondaryInteractionPromptViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_PrimaryInteractionPromptViewData_MetaData[] = {
		{ "Category", "TutorialObjectivesViewData" },
		{ "ModuleRelativePath", "Public/TutorialObjectivesViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_PrimaryInteractionPromptViewData = { "PrimaryInteractionPromptViewData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialObjectivesViewData, PrimaryInteractionPromptViewData), Z_Construct_UScriptStruct_FInteractionPromptViewData, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_PrimaryInteractionPromptViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_PrimaryInteractionPromptViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "TutorialObjectivesViewData" },
		{ "ModuleRelativePath", "Public/TutorialObjectivesViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTutorialObjectivesViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_SecondaryInteractionPromptViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_PrimaryInteractionPromptViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"TutorialObjectivesViewData",
		sizeof(FTutorialObjectivesViewData),
		alignof(FTutorialObjectivesViewData),
		Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialObjectivesViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TutorialObjectivesViewData"), sizeof(FTutorialObjectivesViewData), Get_Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTutorialObjectivesViewData_Hash() { return 2660791729U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
