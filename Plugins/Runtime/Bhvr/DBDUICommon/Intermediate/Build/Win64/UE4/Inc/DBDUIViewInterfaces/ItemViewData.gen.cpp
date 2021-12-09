// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ItemViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLoadoutPartViewData();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FItemViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FItemViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ItemViewData"), sizeof(FItemViewData), Get_Z_Construct_UScriptStruct_FItemViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FItemViewData>()
{
	return FItemViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemViewData(FItemViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ItemViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFItemViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFItemViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemViewData")),new UScriptStruct::TCppStructOps<FItemViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFItemViewData;
	struct Z_Construct_UScriptStruct_FItemViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLimitedItem_MetaData[];
#endif
		static void NewProp_IsLimitedItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLimitedItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowKeyPrompt_MetaData[];
#endif
		static void NewProp_ShowKeyPrompt_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowKeyPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnergyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnergyTypeValid_MetaData[];
#endif
		static void NewProp_IsEnergyTypeValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnergyTypeValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsLimitedItem_MetaData[] = {
		{ "Category", "ItemViewData" },
		{ "ModuleRelativePath", "Public/ItemViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsLimitedItem_SetBit(void* Obj)
	{
		((FItemViewData*)Obj)->IsLimitedItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsLimitedItem = { "IsLimitedItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemViewData), &Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsLimitedItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsLimitedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsLimitedItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_ShowKeyPrompt_MetaData[] = {
		{ "Category", "ItemViewData" },
		{ "ModuleRelativePath", "Public/ItemViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_ShowKeyPrompt_SetBit(void* Obj)
	{
		((FItemViewData*)Obj)->ShowKeyPrompt = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_ShowKeyPrompt = { "ShowKeyPrompt", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemViewData), &Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_ShowKeyPrompt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_ShowKeyPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_ShowKeyPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "ItemViewData" },
		{ "ModuleRelativePath", "Public/ItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemViewData, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "ItemViewData" },
		{ "ModuleRelativePath", "Public/ItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemViewData, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_EnergyLevel_MetaData[] = {
		{ "Category", "ItemViewData" },
		{ "ModuleRelativePath", "Public/ItemViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_EnergyLevel = { "EnergyLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemViewData, EnergyLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_EnergyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_EnergyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsEnergyTypeValid_MetaData[] = {
		{ "Category", "ItemViewData" },
		{ "ModuleRelativePath", "Public/ItemViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsEnergyTypeValid_SetBit(void* Obj)
	{
		((FItemViewData*)Obj)->IsEnergyTypeValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsEnergyTypeValid = { "IsEnergyTypeValid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemViewData), &Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsEnergyTypeValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsEnergyTypeValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsEnergyTypeValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsLimitedItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_ShowKeyPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_EnergyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemViewData_Statics::NewProp_IsEnergyTypeValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		Z_Construct_UScriptStruct_FBaseLoadoutPartViewData,
		&NewStructOps,
		"ItemViewData",
		sizeof(FItemViewData),
		alignof(FItemViewData),
		Z_Construct_UScriptStruct_FItemViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemViewData"), sizeof(FItemViewData), Get_Z_Construct_UScriptStruct_FItemViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemViewData_Hash() { return 2827701444U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
