// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PowerViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPowerViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLoadoutPartViewData();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FPowerViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPowerViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PowerViewData"), sizeof(FPowerViewData), Get_Z_Construct_UScriptStruct_FPowerViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPowerViewData>()
{
	return FPowerViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerViewData(FPowerViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PowerViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPowerViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPowerViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerViewData")),new UScriptStruct::TCppStructOps<FPowerViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPowerViewData;
	struct Z_Construct_UScriptStruct_FPowerViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCountDisplayForced_MetaData[];
#endif
		static void NewProp_IsCountDisplayForced_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCountDisplayForced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowKeyPrompt_MetaData[];
#endif
		static void NewProp_ShowKeyPrompt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowKeyPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActivated_MetaData[];
#endif
		static void NewProp_IsActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRechargeable_MetaData[];
#endif
		static void NewProp_IsRechargeable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRechargeable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsCountDisplayForced_MetaData[] = {
		{ "Category", "PowerViewData" },
		{ "ModuleRelativePath", "Public/PowerViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsCountDisplayForced_SetBit(void* Obj)
	{
		((FPowerViewData*)Obj)->IsCountDisplayForced = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsCountDisplayForced = { "IsCountDisplayForced", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerViewData), &Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsCountDisplayForced_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsCountDisplayForced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsCountDisplayForced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ShowKeyPrompt_MetaData[] = {
		{ "Category", "PowerViewData" },
		{ "ModuleRelativePath", "Public/PowerViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ShowKeyPrompt_SetBit(void* Obj)
	{
		((FPowerViewData*)Obj)->ShowKeyPrompt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ShowKeyPrompt = { "ShowKeyPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerViewData), &Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ShowKeyPrompt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ShowKeyPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ShowKeyPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ProgressValue_MetaData[] = {
		{ "Category", "PowerViewData" },
		{ "ModuleRelativePath", "Public/PowerViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ProgressValue = { "ProgressValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerViewData, ProgressValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ProgressValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ProgressValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "PowerViewData" },
		{ "ModuleRelativePath", "Public/PowerViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerViewData, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsActivated_MetaData[] = {
		{ "Category", "PowerViewData" },
		{ "ModuleRelativePath", "Public/PowerViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsActivated_SetBit(void* Obj)
	{
		((FPowerViewData*)Obj)->IsActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsActivated = { "IsActivated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerViewData), &Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsActivated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsRechargeable_MetaData[] = {
		{ "Category", "PowerViewData" },
		{ "ModuleRelativePath", "Public/PowerViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsRechargeable_SetBit(void* Obj)
	{
		((FPowerViewData*)Obj)->IsRechargeable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsRechargeable = { "IsRechargeable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerViewData), &Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsRechargeable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsRechargeable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsRechargeable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "PowerViewData" },
		{ "ModuleRelativePath", "Public/PowerViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerViewData, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_InputKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsCountDisplayForced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ShowKeyPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_ProgressValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_IsRechargeable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerViewData_Statics::NewProp_InputKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FBaseLoadoutPartViewData,
		&NewStructOps,
		"PowerViewData",
		sizeof(FPowerViewData),
		alignof(FPowerViewData),
		Z_Construct_UScriptStruct_FPowerViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerViewData"), sizeof(FPowerViewData), Get_Z_Construct_UScriptStruct_FPowerViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerViewData_Hash() { return 659042258U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
