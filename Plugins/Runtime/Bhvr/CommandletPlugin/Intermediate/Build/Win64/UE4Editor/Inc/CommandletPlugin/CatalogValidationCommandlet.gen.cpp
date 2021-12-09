// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommandletPlugin/Public/CatalogValidationCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCatalogValidationCommandlet() {}
// Cross Module References
	COMMANDLETPLUGIN_API UClass* Z_Construct_UClass_UCatalogValidationCommandlet_NoRegister();
	COMMANDLETPLUGIN_API UClass* Z_Construct_UClass_UCatalogValidationCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_CommandletPlugin();
// End Cross Module References
	void UCatalogValidationCommandlet::StaticRegisterNativesUCatalogValidationCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UCatalogValidationCommandlet_NoRegister()
	{
		return UCatalogValidationCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCatalogValidationCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCatalogValidationCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_CommandletPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCatalogValidationCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CatalogValidationCommandlet.h" },
		{ "ModuleRelativePath", "Public/CatalogValidationCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCatalogValidationCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCatalogValidationCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCatalogValidationCommandlet_Statics::ClassParams = {
		&UCatalogValidationCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCatalogValidationCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCatalogValidationCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCatalogValidationCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCatalogValidationCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCatalogValidationCommandlet, 2618821408);
	template<> COMMANDLETPLUGIN_API UClass* StaticClass<UCatalogValidationCommandlet>()
	{
		return UCatalogValidationCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCatalogValidationCommandlet(Z_Construct_UClass_UCatalogValidationCommandlet, &UCatalogValidationCommandlet::StaticClass, TEXT("/Script/CommandletPlugin"), TEXT("UCatalogValidationCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCatalogValidationCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
