// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeUtil/Public/BeMaterialVector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeMaterialVector() {}
// Cross Module References
	BEUTIL_API UScriptStruct* Z_Construct_UScriptStruct_FBeMaterialVector();
	UPackage* Z_Construct_UPackage__Script_BeUtil();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FBeMaterialVector::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BEUTIL_API uint32 Get_Z_Construct_UScriptStruct_FBeMaterialVector_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeMaterialVector, Z_Construct_UPackage__Script_BeUtil(), TEXT("BeMaterialVector"), sizeof(FBeMaterialVector), Get_Z_Construct_UScriptStruct_FBeMaterialVector_Hash());
	}
	return Singleton;
}
template<> BEUTIL_API UScriptStruct* StaticStruct<FBeMaterialVector>()
{
	return FBeMaterialVector::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBeMaterialVector(FBeMaterialVector::StaticStruct, TEXT("/Script/BeUtil"), TEXT("BeMaterialVector"), false, nullptr, nullptr);
static struct FScriptStruct_BeUtil_StaticRegisterNativesFBeMaterialVector
{
	FScriptStruct_BeUtil_StaticRegisterNativesFBeMaterialVector()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BeMaterialVector")),new UScriptStruct::TCppStructOps<FBeMaterialVector>);
	}
} ScriptStruct_BeUtil_StaticRegisterNativesFBeMaterialVector;
	struct Z_Construct_UScriptStruct_FBeMaterialVector_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeMaterialVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BeMaterialVector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeMaterialVector>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "BeMaterialVector" },
		{ "ModuleRelativePath", "Public/BeMaterialVector.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBeMaterialVector, Vector), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "BeMaterialVector" },
		{ "ModuleRelativePath", "Public/BeMaterialVector.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBeMaterialVector, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeMaterialVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Vector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeMaterialVector_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeMaterialVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BeUtil,
		nullptr,
		&NewStructOps,
		"BeMaterialVector",
		sizeof(FBeMaterialVector),
		alignof(FBeMaterialVector),
		Z_Construct_UScriptStruct_FBeMaterialVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBeMaterialVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeMaterialVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBeMaterialVector()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBeMaterialVector_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BeUtil();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BeMaterialVector"), sizeof(FBeMaterialVector), Get_Z_Construct_UScriptStruct_FBeMaterialVector_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBeMaterialVector_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBeMaterialVector_Hash() { return 548179952U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
