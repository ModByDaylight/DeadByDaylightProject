// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudObjectivesViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudObjectivesViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FHudObjectivesViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam();
// End Cross Module References
class UScriptStruct* FHudObjectivesViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FHudObjectivesViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHudObjectivesViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("HudObjectivesViewData"), sizeof(FHudObjectivesViewData), Get_Z_Construct_UScriptStruct_FHudObjectivesViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FHudObjectivesViewData>()
{
	return FHudObjectivesViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHudObjectivesViewData(FHudObjectivesViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("HudObjectivesViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudObjectivesViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudObjectivesViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HudObjectivesViewData")),new UScriptStruct::TCppStructOps<FHudObjectivesViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFHudObjectivesViewData;
	struct Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HudObjectivesViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHudObjectivesViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_nbGeneratorsLeft_MetaData[] = {
		{ "Category", "HudObjectivesViewData" },
		{ "ModuleRelativePath", "Public/HudObjectivesViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_nbGeneratorsLeft = { "nbGeneratorsLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudObjectivesViewData, nbGeneratorsLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_nbGeneratorsLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_nbGeneratorsLeft_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_isHatchOpen_MetaData[] = {
		{ "Category", "HudObjectivesViewData" },
		{ "ModuleRelativePath", "Public/HudObjectivesViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_isHatchOpen_SetBit(void* Obj)
	{
		((FHudObjectivesViewData*)Obj)->isHatchOpen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_isHatchOpen = { "isHatchOpen", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHudObjectivesViewData), &Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_isHatchOpen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_isHatchOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_isHatchOpen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_playerTeam_MetaData[] = {
		{ "Category", "HudObjectivesViewData" },
		{ "ModuleRelativePath", "Public/HudObjectivesViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_playerTeam = { "playerTeam", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHudObjectivesViewData, playerTeam), Z_Construct_UEnum_DBDSharedTypes_EPlayerTeam, METADATA_PARAMS(Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_playerTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_playerTeam_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_playerTeam_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_nbGeneratorsLeft,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_isHatchOpen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_playerTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::NewProp_playerTeam_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"HudObjectivesViewData",
		sizeof(FHudObjectivesViewData),
		alignof(FHudObjectivesViewData),
		Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHudObjectivesViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHudObjectivesViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HudObjectivesViewData"), sizeof(FHudObjectivesViewData), Get_Z_Construct_UScriptStruct_FHudObjectivesViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHudObjectivesViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHudObjectivesViewData_Hash() { return 1751622862U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
