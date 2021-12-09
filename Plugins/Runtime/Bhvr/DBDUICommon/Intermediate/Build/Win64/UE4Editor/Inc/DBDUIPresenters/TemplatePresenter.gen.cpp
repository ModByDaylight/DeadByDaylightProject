// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/TemplatePresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplatePresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UTemplatePresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UTemplatePresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UTemplatePresenter::StaticRegisterNativesUTemplatePresenter()
	{
	}
	UClass* Z_Construct_UClass_UTemplatePresenter_NoRegister()
	{
		return UTemplatePresenter::StaticClass();
	}
	struct Z_Construct_UClass_UTemplatePresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TemplateWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplatePresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplatePresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TemplatePresenter.h" },
		{ "ModuleRelativePath", "Public/TemplatePresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplatePresenter_Statics::NewProp_TemplateWidgetClass_MetaData[] = {
		{ "Category", "TemplatePresenter" },
		{ "ModuleRelativePath", "Public/TemplatePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTemplatePresenter_Statics::NewProp_TemplateWidgetClass = { "TemplateWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTemplatePresenter, TemplateWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTemplatePresenter_Statics::NewProp_TemplateWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplatePresenter_Statics::NewProp_TemplateWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplatePresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplatePresenter_Statics::NewProp_TemplateWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplatePresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplatePresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplatePresenter_Statics::ClassParams = {
		&UTemplatePresenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTemplatePresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplatePresenter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplatePresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplatePresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplatePresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplatePresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplatePresenter, 3832200999);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UTemplatePresenter>()
	{
		return UTemplatePresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplatePresenter(Z_Construct_UClass_UTemplatePresenter, &UTemplatePresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UTemplatePresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplatePresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
