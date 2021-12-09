// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/SkillCheckViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillCheckViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FSkillCheckViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FSkillCheckViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FSkillCheckViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillCheckViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("SkillCheckViewData"), sizeof(FSkillCheckViewData), Get_Z_Construct_UScriptStruct_FSkillCheckViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FSkillCheckViewData>()
{
	return FSkillCheckViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkillCheckViewData(FSkillCheckViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("SkillCheckViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFSkillCheckViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFSkillCheckViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkillCheckViewData")),new UScriptStruct::TCppStructOps<FSkillCheckViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFSkillCheckViewData;
	struct Z_Construct_UScriptStruct_FSkillCheckViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInsane_MetaData[];
#endif
		static void NewProp_IsInsane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInsane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMirrored_MetaData[];
#endif
		static void NewProp_IsMirrored_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMirrored;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReversed_MetaData[];
#endif
		static void NewProp_IsReversed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReversed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSpectating_MetaData[];
#endif
		static void NewProp_IsSpectating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSpectating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsHexed_MetaData[];
#endif
		static void NewProp_IsHexed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsHexed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusAreaLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusAreaLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusAreaStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusAreaStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAreaLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitAreaLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitAreaStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitAreaStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillCheckViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsInsane_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsInsane_SetBit(void* Obj)
	{
		((FSkillCheckViewData*)Obj)->IsInsane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsInsane = { "IsInsane", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckViewData), &Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsInsane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsInsane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsInsane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsMirrored_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsMirrored_SetBit(void* Obj)
	{
		((FSkillCheckViewData*)Obj)->IsMirrored = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsMirrored = { "IsMirrored", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckViewData), &Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsMirrored_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsMirrored_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsMirrored_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsReversed_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsReversed_SetBit(void* Obj)
	{
		((FSkillCheckViewData*)Obj)->IsReversed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsReversed = { "IsReversed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckViewData), &Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsReversed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsReversed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsReversed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsSpectating_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsSpectating_SetBit(void* Obj)
	{
		((FSkillCheckViewData*)Obj)->IsSpectating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsSpectating = { "IsSpectating", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckViewData), &Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsSpectating_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsSpectating_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsSpectating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsHexed_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsHexed_SetBit(void* Obj)
	{
		((FSkillCheckViewData*)Obj)->IsHexed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsHexed = { "IsHexed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckViewData), &Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsHexed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsHexed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsHexed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaLength_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaLength = { "BonusAreaLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckViewData, BonusAreaLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaStart_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaStart = { "BonusAreaStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckViewData, BonusAreaStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaLength_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaLength = { "HitAreaLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckViewData, HitAreaLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaStart_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaStart = { "HitAreaStart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckViewData, HitAreaStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_InputKey_MetaData[] = {
		{ "Category", "SkillCheckViewData" },
		{ "ModuleRelativePath", "Public/SkillCheckViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckViewData, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_InputKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsInsane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsMirrored,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsReversed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsSpectating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_IsHexed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_BonusAreaStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_HitAreaStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::NewProp_InputKey,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"SkillCheckViewData",
		sizeof(FSkillCheckViewData),
		alignof(FSkillCheckViewData),
		Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkillCheckViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkillCheckViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkillCheckViewData"), sizeof(FSkillCheckViewData), Get_Z_Construct_UScriptStruct_FSkillCheckViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkillCheckViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkillCheckViewData_Hash() { return 4253123822U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
