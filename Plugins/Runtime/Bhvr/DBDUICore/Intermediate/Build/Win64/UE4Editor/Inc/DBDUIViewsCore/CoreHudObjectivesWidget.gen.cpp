// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudObjectivesWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudObjectivesWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudObjectivesWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudObjectivesWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudObjectivesViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister();
// End Cross Module References
	void UCoreHudObjectivesWidget::StaticRegisterNativesUCoreHudObjectivesWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreHudObjectivesWidget_NoRegister()
	{
		return UCoreHudObjectivesWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudObjectivesWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialSpacer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecialSpacer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreHudObjectivesWidget.h" },
		{ "ModuleRelativePath", "Public/CoreHudObjectivesWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::NewProp_SpecialSpacer_MetaData[] = {
		{ "Category", "CoreHudObjectivesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudObjectivesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::NewProp_SpecialSpacer = { "SpecialSpacer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudObjectivesWidget, SpecialSpacer), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::NewProp_SpecialSpacer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::NewProp_SpecialSpacer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::NewProp_SpecialSpacer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHudObjectivesViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudObjectivesWidget, IHudObjectivesViewInterface), false },
			{ Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudObjectivesWidget, ITutorialHighlightViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudObjectivesWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::ClassParams = {
		&UCoreHudObjectivesWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudObjectivesWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudObjectivesWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudObjectivesWidget, 4245117161);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudObjectivesWidget>()
	{
		return UCoreHudObjectivesWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudObjectivesWidget(Z_Construct_UClass_UCoreHudObjectivesWidget, &UCoreHudObjectivesWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudObjectivesWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudObjectivesWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
