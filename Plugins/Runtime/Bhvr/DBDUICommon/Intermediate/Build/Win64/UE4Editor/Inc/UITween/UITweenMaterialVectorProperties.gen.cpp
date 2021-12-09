// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITween/Public/UITweenMaterialVectorProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUITweenMaterialVectorProperties() {}
// Cross Module References
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenMaterialVectorProperties_NoRegister();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenMaterialVectorProperties();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UITween();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
// End Cross Module References
	void UUITweenMaterialVectorProperties::StaticRegisterNativesUUITweenMaterialVectorProperties()
	{
	}
	UClass* Z_Construct_UClass_UUITweenMaterialVectorProperties_NoRegister()
	{
		return UUITweenMaterialVectorProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UITween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UITweenMaterialVectorProperties.h" },
		{ "ModuleRelativePath", "Public/UITweenMaterialVectorProperties.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/UITweenMaterialVectorProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUITweenMaterialVectorProperties, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::NewProp_MaterialInstance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::NewProp_MaterialInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUITweenMaterialVectorProperties>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::ClassParams = {
		&UUITweenMaterialVectorProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUITweenMaterialVectorProperties()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUITweenMaterialVectorProperties_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUITweenMaterialVectorProperties, 1447330568);
	template<> UITWEEN_API UClass* StaticClass<UUITweenMaterialVectorProperties>()
	{
		return UUITweenMaterialVectorProperties::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUITweenMaterialVectorProperties(Z_Construct_UClass_UUITweenMaterialVectorProperties, &UUITweenMaterialVectorProperties::StaticClass, TEXT("/Script/UITween"), TEXT("UUITweenMaterialVectorProperties"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUITweenMaterialVectorProperties);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
