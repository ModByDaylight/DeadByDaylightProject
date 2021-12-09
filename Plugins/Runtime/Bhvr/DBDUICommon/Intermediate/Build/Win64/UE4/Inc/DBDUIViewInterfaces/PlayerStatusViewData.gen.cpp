// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlayerStatusViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatusViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FK26StatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FK25StatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FK24StatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTricksterStatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTwinsStatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlagueStatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPigStatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FNightmareStatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FGhostStatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FExecutionerStatusData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FDoctorStatusData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EObsessionUIState();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerStatus();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FPlayerStatusViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStatusViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PlayerStatusViewData"), sizeof(FPlayerStatusViewData), Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPlayerStatusViewData>()
{
	return FPlayerStatusViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerStatusViewData(FPlayerStatusViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PlayerStatusViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerStatusViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerStatusViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerStatusViewData")),new UScriptStruct::TCppStructOps<FPlayerStatusViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPlayerStatusViewData;
	struct Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K26StatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_K26StatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K25StatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_K25StatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K24StatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_K24StatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TricksterStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TricksterStatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwinsStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TwinsStatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlagueStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlagueStatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PigStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PigStatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NightmareStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NightmareStatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GhostStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GhostStatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecutionerStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExecutionerStatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoctorStatusData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DoctorStatusData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrainStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DrainStage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObsessionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObsessionState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObsessionState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocalPlayerAKiller_MetaData[];
#endif
		static void NewProp_IsLocalPlayerAKiller_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocalPlayerAKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBroken_MetaData[];
#endif
		static void NewProp_IsBroken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBroken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDeepWound_MetaData[];
#endif
		static void NewProp_IsDeepWound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDeepWound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatusState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerStatusState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerStatusState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPortraitIconOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPortraitIconOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPortraitIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPortraitIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStatusViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K26StatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K26StatusData = { "K26StatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, K26StatusData), Z_Construct_UScriptStruct_FK26StatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K26StatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K26StatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K25StatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K25StatusData = { "K25StatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, K25StatusData), Z_Construct_UScriptStruct_FK25StatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K25StatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K25StatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K24StatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K24StatusData = { "K24StatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, K24StatusData), Z_Construct_UScriptStruct_FK24StatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K24StatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K24StatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TricksterStatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TricksterStatusData = { "TricksterStatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, TricksterStatusData), Z_Construct_UScriptStruct_FTricksterStatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TricksterStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TricksterStatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TwinsStatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TwinsStatusData = { "TwinsStatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, TwinsStatusData), Z_Construct_UScriptStruct_FTwinsStatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TwinsStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TwinsStatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlagueStatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlagueStatusData = { "PlagueStatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PlagueStatusData), Z_Construct_UScriptStruct_FPlagueStatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlagueStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlagueStatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PigStatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PigStatusData = { "PigStatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PigStatusData), Z_Construct_UScriptStruct_FPigStatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PigStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PigStatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_NightmareStatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_NightmareStatusData = { "NightmareStatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, NightmareStatusData), Z_Construct_UScriptStruct_FNightmareStatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_NightmareStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_NightmareStatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_GhostStatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_GhostStatusData = { "GhostStatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, GhostStatusData), Z_Construct_UScriptStruct_FGhostStatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_GhostStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_GhostStatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ExecutionerStatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ExecutionerStatusData = { "ExecutionerStatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, ExecutionerStatusData), Z_Construct_UScriptStruct_FExecutionerStatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ExecutionerStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ExecutionerStatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DoctorStatusData_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DoctorStatusData = { "DoctorStatusData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, DoctorStatusData), Z_Construct_UScriptStruct_FDoctorStatusData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DoctorStatusData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DoctorStatusData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage = { "DrainStage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, DrainStage), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState = { "ObsessionState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, ObsessionState), Z_Construct_UEnum_DBDSharedTypes_EObsessionUIState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_SetBit(void* Obj)
	{
		((FPlayerStatusViewData*)Obj)->IsLocalPlayerAKiller = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller = { "IsLocalPlayerAKiller", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerStatusViewData), &Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_SetBit(void* Obj)
	{
		((FPlayerStatusViewData*)Obj)->IsBroken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken = { "IsBroken", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerStatusViewData), &Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_SetBit(void* Obj)
	{
		((FPlayerStatusViewData*)Obj)->IsDeepWound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound = { "IsDeepWound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerStatusViewData), &Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress = { "TimerProgress", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, TimerProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState = { "PlayerStatusState", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PlayerStatusState), Z_Construct_UEnum_DBDSharedTypes_EPlayerStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride = { "PlayerPortraitIconOverride", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PlayerPortraitIconOverride), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon = { "PlayerPortraitIcon", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PlayerPortraitIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "PlayerStatusViewData" },
		{ "ModuleRelativePath", "Public/PlayerStatusViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusViewData, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K26StatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K25StatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_K24StatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TricksterStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TwinsStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlagueStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PigStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_NightmareStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_GhostStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ExecutionerStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DoctorStatusData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_DrainStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_ObsessionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsLocalPlayerAKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsBroken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_IsDeepWound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_TimerProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerStatusState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIconOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerPortraitIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::NewProp_PlayerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"PlayerStatusViewData",
		sizeof(FPlayerStatusViewData),
		alignof(FPlayerStatusViewData),
		Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerStatusViewData"), sizeof(FPlayerStatusViewData), Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerStatusViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusViewData_Hash() { return 739305880U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
