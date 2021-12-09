// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeUtil/Public/BeMaterialTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeMaterialTexture() {}
// Cross Module References
	BEUTIL_API UScriptStruct* Z_Construct_UScriptStruct_FBeMaterialTexture();
	UPackage* Z_Construct_UPackage__Script_BeUtil();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
class UScriptStruct* FBeMaterialTexture::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BEUTIL_API uint32 Get_Z_Construct_UScriptStruct_FBeMaterialTexture_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeMaterialTexture, Z_Construct_UPackage__Script_BeUtil(), TEXT("BeMaterialTexture"), sizeof(FBeMaterialTexture), Get_Z_Construct_UScriptStruct_FBeMaterialTexture_Hash());
	}
	return Singleton;
}
template<> BEUTIL_API UScriptStruct* StaticStruct<FBeMaterialTexture>()
{
	return FBeMaterialTexture::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBeMaterialTexture(FBeMaterialTexture::StaticStruct, TEXT("/Script/BeUtil"), TEXT("BeMaterialTexture"), false, nullptr, nullptr);
static struct FScriptStruct_BeUtil_StaticRegisterNativesFBeMaterialTexture
{
	FScriptStruct_BeUtil_StaticRegisterNativesFBeMaterialTexture()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BeMaterialTexture")),new UScriptStruct::TCppStructOps<FBeMaterialTexture>);
	}
} ScriptStruct_BeUtil_StaticRegisterNativesFBeMaterialTexture;
	struct Z_Construct_UScriptStruct_FBeMaterialTexture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BeMaterialTexture.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeMaterialTexture>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "BeMaterialTexture" },
		{ "ModuleRelativePath", "Public/BeMaterialTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBeMaterialTexture, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BeMaterialTexture" },
		{ "ModuleRelativePath", "Public/BeMaterialTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBeMaterialTexture, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BeUtil,
		nullptr,
		&NewStructOps,
		"BeMaterialTexture",
		sizeof(FBeMaterialTexture),
		alignof(FBeMaterialTexture),
		Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBeMaterialTexture()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBeMaterialTexture_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BeUtil();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BeMaterialTexture"), sizeof(FBeMaterialTexture), Get_Z_Construct_UScriptStruct_FBeMaterialTexture_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBeMaterialTexture_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBeMaterialTexture_Hash() { return 1110403240U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
