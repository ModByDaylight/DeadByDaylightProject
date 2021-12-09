// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreItemBundleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreItemBundleWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreItemBundleWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreItemBundleWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UItemBundleViewInterface_NoRegister();
// End Cross Module References
	void UCoreItemBundleWidget::StaticRegisterNativesUCoreItemBundleWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreItemBundleWidget_NoRegister()
	{
		return UCoreItemBundleWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreItemBundleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreItemBundleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreItemBundleWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreItemBundleWidget.h" },
		{ "ModuleRelativePath", "Public/CoreItemBundleWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreItemBundleWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UItemBundleViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreItemBundleWidget, IItemBundleViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreItemBundleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreItemBundleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreItemBundleWidget_Statics::ClassParams = {
		&UCoreItemBundleWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreItemBundleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreItemBundleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreItemBundleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreItemBundleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreItemBundleWidget, 2389272536);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreItemBundleWidget>()
	{
		return UCoreItemBundleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreItemBundleWidget(Z_Construct_UClass_UCoreItemBundleWidget, &UCoreItemBundleWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreItemBundleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreItemBundleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
