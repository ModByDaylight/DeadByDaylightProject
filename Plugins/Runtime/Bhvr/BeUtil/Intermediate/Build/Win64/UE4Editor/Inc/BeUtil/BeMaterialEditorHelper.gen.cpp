// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BeUtil/Public/BeMaterialEditorHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBeMaterialEditorHelper() {}
// Cross Module References
	BEUTIL_API UClass* Z_Construct_UClass_UBeMaterialEditorHelper_NoRegister();
	BEUTIL_API UClass* Z_Construct_UClass_UBeMaterialEditorHelper();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BeUtil();
	BEUTIL_API UScriptStruct* Z_Construct_UScriptStruct_FBeMaterialTexture();
	BEUTIL_API UScriptStruct* Z_Construct_UScriptStruct_FBeMaterialVector();
	BEUTIL_API UScriptStruct* Z_Construct_UScriptStruct_FBeMaterialScalar();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBeMaterialEditorHelper::execEditMaterialConstant)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_InMaterialInstance);
		P_GET_TARRAY(FBeMaterialScalar,Z_Param_InScalars);
		P_GET_TARRAY(FBeMaterialVector,Z_Param_InVectors);
		P_GET_TARRAY(FBeMaterialTexture,Z_Param_InTextures);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBeMaterialEditorHelper::EditMaterialConstant(Z_Param_InMaterialInstance,Z_Param_InScalars,Z_Param_InVectors,Z_Param_InTextures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBeMaterialEditorHelper::execReloadTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_InTexture);
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=UBeMaterialEditorHelper::ReloadTexture(Z_Param_InTexture,Z_Param_InSourceName);
		P_NATIVE_END;
	}
	void UBeMaterialEditorHelper::StaticRegisterNativesUBeMaterialEditorHelper()
	{
		UClass* Class = UBeMaterialEditorHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditMaterialConstant", &UBeMaterialEditorHelper::execEditMaterialConstant },
			{ "ReloadTexture", &UBeMaterialEditorHelper::execReloadTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics
	{
		struct BeMaterialEditorHelper_eventEditMaterialConstant_Parms
		{
			UMaterialInstanceConstant* InMaterialInstance;
			TArray<FBeMaterialScalar> InScalars;
			TArray<FBeMaterialVector> InVectors;
			TArray<FBeMaterialTexture> InTextures;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InTextures;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTextures_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InVectors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InVectors_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InScalars;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InScalars_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InTextures = { "InTextures", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeMaterialEditorHelper_eventEditMaterialConstant_Parms, InTextures), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InTextures_Inner = { "InTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBeMaterialTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InVectors = { "InVectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeMaterialEditorHelper_eventEditMaterialConstant_Parms, InVectors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InVectors_Inner = { "InVectors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBeMaterialVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InScalars = { "InScalars", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeMaterialEditorHelper_eventEditMaterialConstant_Parms, InScalars), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InScalars_Inner = { "InScalars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBeMaterialScalar, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InMaterialInstance = { "InMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeMaterialEditorHelper_eventEditMaterialConstant_Parms, InMaterialInstance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InVectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InVectors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InScalars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InScalars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::NewProp_InMaterialInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BeMaterialEditorHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeMaterialEditorHelper, nullptr, "EditMaterialConstant", nullptr, nullptr, sizeof(BeMaterialEditorHelper_eventEditMaterialConstant_Parms), Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics
	{
		struct BeMaterialEditorHelper_eventReloadTexture_Parms
		{
			UTexture* InTexture;
			FString InSourceName;
			UTexture* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSourceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeMaterialEditorHelper_eventReloadTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::NewProp_InSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::NewProp_InSourceName = { "InSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeMaterialEditorHelper_eventReloadTexture_Parms, InSourceName), METADATA_PARAMS(Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::NewProp_InSourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::NewProp_InSourceName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BeMaterialEditorHelper_eventReloadTexture_Parms, InTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::NewProp_InSourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BeMaterialEditorHelper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBeMaterialEditorHelper, nullptr, "ReloadTexture", nullptr, nullptr, sizeof(BeMaterialEditorHelper_eventReloadTexture_Parms), Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBeMaterialEditorHelper_NoRegister()
	{
		return UBeMaterialEditorHelper::StaticClass();
	}
	struct Z_Construct_UClass_UBeMaterialEditorHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBeMaterialEditorHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BeUtil,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBeMaterialEditorHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBeMaterialEditorHelper_EditMaterialConstant, "EditMaterialConstant" }, // 1439862245
		{ &Z_Construct_UFunction_UBeMaterialEditorHelper_ReloadTexture, "ReloadTexture" }, // 1988044410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBeMaterialEditorHelper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BeMaterialEditorHelper.h" },
		{ "ModuleRelativePath", "Public/BeMaterialEditorHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBeMaterialEditorHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBeMaterialEditorHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBeMaterialEditorHelper_Statics::ClassParams = {
		&UBeMaterialEditorHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBeMaterialEditorHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBeMaterialEditorHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBeMaterialEditorHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBeMaterialEditorHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBeMaterialEditorHelper, 708594493);
	template<> BEUTIL_API UClass* StaticClass<UBeMaterialEditorHelper>()
	{
		return UBeMaterialEditorHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBeMaterialEditorHelper(Z_Construct_UClass_UBeMaterialEditorHelper, &UBeMaterialEditorHelper::StaticClass, TEXT("/Script/BeUtil"), TEXT("UBeMaterialEditorHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBeMaterialEditorHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
