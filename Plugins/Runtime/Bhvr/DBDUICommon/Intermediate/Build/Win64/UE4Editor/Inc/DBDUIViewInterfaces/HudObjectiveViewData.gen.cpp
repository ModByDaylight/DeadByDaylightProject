// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudObjectiveViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudObjectiveViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FHudObjectiveViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam();
// End Cross Module References
class UScriptStruct* FHudObjectiveViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FHudObjectiveViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHudObjectiveViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("HudObjectiveViewData"), sizeof(FHudObjectiveViewData), Get_Z_Construct_UScriptStruct_FHudObjectiveViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FHudObjectiveViewData>()
{
	return FHudObjectiveViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHudObjectiveViewData(FHudObjectiveViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("HudObjectiveViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudObjectiveViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudObjectiveViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HudObjectiveViewData")),new UScriptStruct::TCppStructOps<FHudObjectiveViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudObjectiveViewData;
	struct Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nbGeneratorsLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_nbGeneratorsLeft;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isHatchOpen_MetaData[];
#endif
		static void NewProp_isHatchOpen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHatchOpen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerTeam;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerTeam_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HudObjectiveViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHudObjectiveViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_nbGeneratorsLeft_MetaData[] = {
		{ "Category", "HudObjectiveViewData" },
		{ "ModuleRelativePath", "Public/HudObjectiveViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_nbGeneratorsLeft = { "nbGeneratorsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudObjectiveViewData, nbGeneratorsLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_nbGeneratorsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_nbGeneratorsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_isHatchOpen_MetaData[] = {
		{ "Category", "HudObjectiveViewData" },
		{ "ModuleRelativePath", "Public/HudObjectiveViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_isHatchOpen_SetBit(void* Obj)
	{
		((FHudObjectiveViewData*)Obj)->isHatchOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_isHatchOpen = { "isHatchOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHudObjectiveViewData), &Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_isHatchOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_isHatchOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_isHatchOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_playerTeam_MetaData[] = {
		{ "Category", "HudObjectiveViewData" },
		{ "ModuleRelativePath", "Public/HudObjectiveViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_playerTeam = { "playerTeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudObjectiveViewData, playerTeam), Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_playerTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_playerTeam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_playerTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_nbGeneratorsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_isHatchOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_playerTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::NewProp_playerTeam_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"HudObjectiveViewData",
		sizeof(FHudObjectiveViewData),
		alignof(FHudObjectiveViewData),
		Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHudObjectiveViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHudObjectiveViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HudObjectiveViewData"), sizeof(FHudObjectiveViewData), Get_Z_Construct_UScriptStruct_FHudObjectiveViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHudObjectiveViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHudObjectiveViewData_Hash() { return 4189130695U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
