// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CharacterTooltipViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterTooltipViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterTooltipViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty();
// End Cross Module References
class UScriptStruct* FCharacterTooltipViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FCharacterTooltipViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterTooltipViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("CharacterTooltipViewData"), sizeof(FCharacterTooltipViewData), Get_Z_Construct_UScriptStruct_FCharacterTooltipViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FCharacterTooltipViewData>()
{
	return FCharacterTooltipViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterTooltipViewData(FCharacterTooltipViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("CharacterTooltipViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCharacterTooltipViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCharacterTooltipViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterTooltipViewData")),new UScriptStruct::TCppStructOps<FCharacterTooltipViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFCharacterTooltipViewData;
	struct Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterDisabledMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CharacterDisabledMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnabled_MetaData[];
#endif
		static void NewProp_IsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Difficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Difficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDLCPurchasable_MetaData[];
#endif
		static void NewProp_IsDLCPurchasable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDLCPurchasable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableInStore_MetaData[];
#endif
		static void NewProp_IsAvailableInStore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableInStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOwned_MetaData[];
#endif
		static void NewProp_IsOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNewInStore_MetaData[];
#endif
		static void NewProp_IsNewInStore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNewInStore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsUnlocked_MetaData[];
#endif
		static void NewProp_IsUnlocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Prestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Prestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DLCTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Biography_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Biography;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterTooltipViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_CharacterDisabledMessage_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_CharacterDisabledMessage = { "CharacterDisabledMessage", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterTooltipViewData, CharacterDisabledMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_CharacterDisabledMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_CharacterDisabledMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsEnabled_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsEnabled_SetBit(void* Obj)
	{
		((FCharacterTooltipViewData*)Obj)->IsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsEnabled = { "IsEnabled", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterTooltipViewData), &Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Difficulty_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Difficulty = { "Difficulty", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterTooltipViewData, Difficulty), Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Difficulty_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsDLCPurchasable_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsDLCPurchasable_SetBit(void* Obj)
	{
		((FCharacterTooltipViewData*)Obj)->IsDLCPurchasable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsDLCPurchasable = { "IsDLCPurchasable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterTooltipViewData), &Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsDLCPurchasable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsDLCPurchasable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsDLCPurchasable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsAvailableInStore_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsAvailableInStore_SetBit(void* Obj)
	{
		((FCharacterTooltipViewData*)Obj)->IsAvailableInStore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsAvailableInStore = { "IsAvailableInStore", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterTooltipViewData), &Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsAvailableInStore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsAvailableInStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsAvailableInStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsOwned_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsOwned_SetBit(void* Obj)
	{
		((FCharacterTooltipViewData*)Obj)->IsOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsOwned = { "IsOwned", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterTooltipViewData), &Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsOwned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsNewInStore_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsNewInStore_SetBit(void* Obj)
	{
		((FCharacterTooltipViewData*)Obj)->IsNewInStore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsNewInStore = { "IsNewInStore", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterTooltipViewData), &Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsNewInStore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsNewInStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsNewInStore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsUnlocked_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsUnlocked_SetBit(void* Obj)
	{
		((FCharacterTooltipViewData*)Obj)->IsUnlocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsUnlocked = { "IsUnlocked", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterTooltipViewData), &Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsUnlocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Prestige_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Prestige = { "Prestige", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterTooltipViewData, Prestige), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Prestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Prestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterTooltipViewData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DLCTitle_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DLCTitle = { "DLCTitle", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterTooltipViewData, DLCTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DLCTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DLCTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Biography_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Biography = { "Biography", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterTooltipViewData, Biography), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Biography_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Biography_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CharacterTooltipViewData" },
		{ "ModuleRelativePath", "Public/CharacterTooltipViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterTooltipViewData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_CharacterDisabledMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsDLCPurchasable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsAvailableInStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsNewInStore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_IsUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Prestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DLCTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_Biography,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"CharacterTooltipViewData",
		sizeof(FCharacterTooltipViewData),
		alignof(FCharacterTooltipViewData),
		Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterTooltipViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterTooltipViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterTooltipViewData"), sizeof(FCharacterTooltipViewData), Get_Z_Construct_UScriptStruct_FCharacterTooltipViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterTooltipViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterTooltipViewData_Hash() { return 2326724912U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
