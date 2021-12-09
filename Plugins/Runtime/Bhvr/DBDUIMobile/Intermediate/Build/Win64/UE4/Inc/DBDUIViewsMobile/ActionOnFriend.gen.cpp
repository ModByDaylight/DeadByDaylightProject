// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/ActionOnFriend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionOnFriend() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FActionOnFriend();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister();
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFriendUIData();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType();
// End Cross Module References
class UScriptStruct* FActionOnFriend::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSMOBILE_API uint32 Get_Z_Construct_UScriptStruct_FActionOnFriend_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActionOnFriend, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("ActionOnFriend"), sizeof(FActionOnFriend), Get_Z_Construct_UScriptStruct_FActionOnFriend_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSMOBILE_API UScriptStruct* StaticStruct<FActionOnFriend>()
{
	return FActionOnFriend::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActionOnFriend(FActionOnFriend::StaticStruct, TEXT("/Script/DBDUIViewsMobile"), TEXT("ActionOnFriend"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFActionOnFriend
{
	FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFActionOnFriend()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActionOnFriend")),new UScriptStruct::TCppStructOps<FActionOnFriend>);
	}
} ScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFActionOnFriend;
	struct Z_Construct_UScriptStruct_FActionOnFriend_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaFriendDataToUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtlantaFriendDataToUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionToProceed_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionToProceed;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionToProceed_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionOnFriend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActionOnFriend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActionOnFriend>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActionOnFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionOwner = { "ActionOwner", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionOnFriend, ActionOwner), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_AtlantaFriendDataToUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionOnFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_AtlantaFriendDataToUpdate = { "AtlantaFriendDataToUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionOnFriend, AtlantaFriendDataToUpdate), Z_Construct_UScriptStruct_FAtlantaFriendUIData, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_AtlantaFriendDataToUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_AtlantaFriendDataToUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionToProceed_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActionOnFriend.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionToProceed = { "ActionToProceed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActionOnFriend, ActionToProceed), Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionToProceed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionToProceed_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionToProceed_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActionOnFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_AtlantaFriendDataToUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionToProceed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActionOnFriend_Statics::NewProp_ActionToProceed_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActionOnFriend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
		nullptr,
		&NewStructOps,
		"ActionOnFriend",
		sizeof(FActionOnFriend),
		alignof(FActionOnFriend),
		Z_Construct_UScriptStruct_FActionOnFriend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionOnFriend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActionOnFriend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActionOnFriend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActionOnFriend()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActionOnFriend_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActionOnFriend"), sizeof(FActionOnFriend), Get_Z_Construct_UScriptStruct_FActionOnFriend_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActionOnFriend_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActionOnFriend_Hash() { return 3303495310U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
