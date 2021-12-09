// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeUtil/Public/BeMaterialScalar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeMaterialScalar() {}
// Cross Module References
	BEUTIL_API UScriptStruct* Z_Construct_UScriptStruct_FBeMaterialScalar();
	UPackage* Z_Construct_UPackage__Script_BeUtil();
// End Cross Module References
class UScriptStruct* FBeMaterialScalar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BEUTIL_API uint32 Get_Z_Construct_UScriptStruct_FBeMaterialScalar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeMaterialScalar, Z_Construct_UPackage__Script_BeUtil(), TEXT("BeMaterialScalar"), sizeof(FBeMaterialScalar), Get_Z_Construct_UScriptStruct_FBeMaterialScalar_Hash());
	}
	return Singleton;
}
template<> BEUTIL_API UScriptStruct* StaticStruct<FBeMaterialScalar>()
{
	return FBeMaterialScalar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBeMaterialScalar(FBeMaterialScalar::StaticStruct, TEXT("/Script/BeUtil"), TEXT("BeMaterialScalar"), false, nullptr, nullptr);
static struct FScriptStruct_BeUtil_StaticRegisterNativesFBeMaterialScalar
{
	FScriptStruct_BeUtil_StaticRegisterNativesFBeMaterialScalar()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BeMaterialScalar")),new UScriptStruct::TCppStructOps<FBeMaterialScalar>);
	}
} ScriptStruct_BeUtil_StaticRegisterNativesFBeMaterialScalar;
	struct Z_Construct_UScriptStruct_FBeMaterialScalar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BeMaterialScalar.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeMaterialScalar>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Scalar_MetaData[] = {
		{ "Category", "BeMaterialScalar" },
		{ "ModuleRelativePath", "Public/BeMaterialScalar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Scalar = { "Scalar", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBeMaterialScalar, Scalar), METADATA_PARAMS(Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Scalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Scalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BeMaterialScalar" },
		{ "ModuleRelativePath", "Public/BeMaterialScalar.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBeMaterialScalar, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Scalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BeUtil,
		nullptr,
		&NewStructOps,
		"BeMaterialScalar",
		sizeof(FBeMaterialScalar),
		alignof(FBeMaterialScalar),
		Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBeMaterialScalar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBeMaterialScalar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BeUtil();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BeMaterialScalar"), sizeof(FBeMaterialScalar), Get_Z_Construct_UScriptStruct_FBeMaterialScalar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBeMaterialScalar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBeMaterialScalar_Hash() { return 963592331U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
