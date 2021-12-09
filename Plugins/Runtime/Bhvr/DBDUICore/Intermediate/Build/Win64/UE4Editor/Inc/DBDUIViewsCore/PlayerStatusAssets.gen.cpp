// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/PlayerStatusAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatusAssets() {}
// Cross Module References
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusAssets();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EPlayerStatusBloodSplatterType();
// End Cross Module References
class UScriptStruct* FPlayerStatusAssets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSCORE_API uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusAssets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStatusAssets, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("PlayerStatusAssets"), sizeof(FPlayerStatusAssets), Get_Z_Construct_UScriptStruct_FPlayerStatusAssets_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSCORE_API UScriptStruct* StaticStruct<FPlayerStatusAssets>()
{
	return FPlayerStatusAssets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerStatusAssets(FPlayerStatusAssets::StaticStruct, TEXT("/Script/DBDUIViewsCore"), TEXT("PlayerStatusAssets"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFPlayerStatusAssets
{
	FScriptStruct_DBDUIViewsCore_StaticRegisterNativesFPlayerStatusAssets()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerStatusAssets")),new UScriptStruct::TCppStructOps<FPlayerStatusAssets>);
	}
} ScriptStruct_DBDUIViewsCore_StaticRegisterNativesFPlayerStatusAssets;
	struct Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodSplatterType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BloodSplatterType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BloodSplatterType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PlayerStatusAssets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStatusAssets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "PlayerStatusAssets" },
		{ "ModuleRelativePath", "Public/PlayerStatusAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusAssets, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_IconTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodTexture_MetaData[] = {
		{ "Category", "PlayerStatusAssets" },
		{ "ModuleRelativePath", "Public/PlayerStatusAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodTexture = { "BloodTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusAssets, BloodTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodSplatterType_MetaData[] = {
		{ "Category", "PlayerStatusAssets" },
		{ "ModuleRelativePath", "Public/PlayerStatusAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodSplatterType = { "BloodSplatterType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerStatusAssets, BloodSplatterType), Z_Construct_UEnum_DBDUIViewsCore_EPlayerStatusBloodSplatterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodSplatterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodSplatterType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodSplatterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_IconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodSplatterType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::NewProp_BloodSplatterType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
		nullptr,
		&NewStructOps,
		"PlayerStatusAssets",
		sizeof(FPlayerStatusAssets),
		alignof(FPlayerStatusAssets),
		Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusAssets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusAssets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerStatusAssets"), sizeof(FPlayerStatusAssets), Get_Z_Construct_UScriptStruct_FPlayerStatusAssets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerStatusAssets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerStatusAssets_Hash() { return 2692637030U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
