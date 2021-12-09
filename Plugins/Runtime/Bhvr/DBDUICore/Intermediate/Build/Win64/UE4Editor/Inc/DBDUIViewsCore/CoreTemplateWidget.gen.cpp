// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTemplateWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTemplateWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTemplateWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTemplateWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTemplateViewInterface_NoRegister();
// End Cross Module References
	void UCoreTemplateWidget::StaticRegisterNativesUCoreTemplateWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreTemplateWidget_NoRegister()
	{
		return UCoreTemplateWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTemplateWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTemplateWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTemplateWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreTemplateWidget.h" },
		{ "ModuleRelativePath", "Public/CoreTemplateWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreTemplateWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTemplateViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreTemplateWidget, ITemplateViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTemplateWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTemplateWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTemplateWidget_Statics::ClassParams = {
		&UCoreTemplateWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreTemplateWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTemplateWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTemplateWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTemplateWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTemplateWidget, 1160820882);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTemplateWidget>()
	{
		return UCoreTemplateWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTemplateWidget(Z_Construct_UClass_UCoreTemplateWidget, &UCoreTemplateWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTemplateWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTemplateWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
