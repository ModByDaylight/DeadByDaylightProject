// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDImage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDImage() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage();
	UMG_API UClass* Z_Construct_UClass_UImage();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDImage::execSetBrushFromSoftTextureWithDefault)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_softTexture);
		P_GET_UBOOL(Z_Param_matchSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromSoftTextureWithDefault(Z_Param_softTexture,Z_Param_matchSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDImage::execSetBrushFromTextureWithDefault)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_texture);
		P_GET_UBOOL(Z_Param_matchSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromTextureWithDefault(Z_Param_texture,Z_Param_matchSize);
		P_NATIVE_END;
	}
	void UDBDImage::StaticRegisterNativesUDBDImage()
	{
		UClass* Class = UDBDImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBrushFromSoftTextureWithDefault", &UDBDImage::execSetBrushFromSoftTextureWithDefault },
			{ "SetBrushFromTextureWithDefault", &UDBDImage::execSetBrushFromTextureWithDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics
	{
		struct DBDImage_eventSetBrushFromSoftTextureWithDefault_Parms
		{
			TSoftObjectPtr<UTexture2D> softTexture;
			bool matchSize;
		};
		static void NewProp_matchSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_matchSize;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::NewProp_matchSize_SetBit(void* Obj)
	{
		((DBDImage_eventSetBrushFromSoftTextureWithDefault_Parms*)Obj)->matchSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::NewProp_matchSize = { "matchSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDImage_eventSetBrushFromSoftTextureWithDefault_Parms), &Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::NewProp_matchSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDImage_eventSetBrushFromSoftTextureWithDefault_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::NewProp_matchSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::NewProp_softTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDImage, nullptr, "SetBrushFromSoftTextureWithDefault", nullptr, nullptr, sizeof(DBDImage_eventSetBrushFromSoftTextureWithDefault_Parms), Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics
	{
		struct DBDImage_eventSetBrushFromTextureWithDefault_Parms
		{
			UTexture2D* texture;
			bool matchSize;
		};
		static void NewProp_matchSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_matchSize;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::NewProp_matchSize_SetBit(void* Obj)
	{
		((DBDImage_eventSetBrushFromTextureWithDefault_Parms*)Obj)->matchSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::NewProp_matchSize = { "matchSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDImage_eventSetBrushFromTextureWithDefault_Parms), &Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::NewProp_matchSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDImage_eventSetBrushFromTextureWithDefault_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::NewProp_matchSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::NewProp_texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDImage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDImage, nullptr, "SetBrushFromTextureWithDefault", nullptr, nullptr, sizeof(DBDImage_eventSetBrushFromTextureWithDefault_Parms), Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDImage_NoRegister()
	{
		return UDBDImage::StaticClass();
	}
	struct Z_Construct_UClass_UDBDImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDImage_SetBrushFromSoftTextureWithDefault, "SetBrushFromSoftTextureWithDefault" }, // 3315281606
		{ &Z_Construct_UFunction_UDBDImage_SetBrushFromTextureWithDefault, "SetBrushFromTextureWithDefault" }, // 45827033
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDImage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDImage.h" },
		{ "ModuleRelativePath", "Public/DBDImage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDImage_Statics::NewProp_DefaultImage_MetaData[] = {
		{ "Category", "DBDImage" },
		{ "ModuleRelativePath", "Public/DBDImage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDImage_Statics::NewProp_DefaultImage = { "DefaultImage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDImage, DefaultImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDImage_Statics::NewProp_DefaultImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDImage_Statics::NewProp_DefaultImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDImage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDImage_Statics::NewProp_DefaultImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDImage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDImage_Statics::ClassParams = {
		&UDBDImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDImage_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDImage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDImage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDImage, 1546608261);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDImage>()
	{
		return UDBDImage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDImage(Z_Construct_UClass_UDBDImage, &UDBDImage::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDImage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDImage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
