// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudObjectiveWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudObjectiveWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudObjectiveWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudObjectiveWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudObjectiveViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister();
// End Cross Module References
	void UCoreHudObjectiveWidget::StaticRegisterNativesUCoreHudObjectiveWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreHudObjectiveWidget_NoRegister()
	{
		return UCoreHudObjectiveWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudObjectiveWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreHudObjectiveWidget.h" },
		{ "ModuleRelativePath", "Public/CoreHudObjectiveWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::NewProp_SpecialSpacer_MetaData[] = {
		{ "Category", "CoreHudObjectiveWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudObjectiveWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::NewProp_SpecialSpacer = { "SpecialSpacer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudObjectiveWidget, SpecialSpacer), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::NewProp_SpecialSpacer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::NewProp_SpecialSpacer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::NewProp_SpecialSpacer,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHudObjectiveViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudObjectiveWidget, IHudObjectiveViewInterface), false },
			{ Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudObjectiveWidget, ITutorialHighlightViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudObjectiveWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::ClassParams = {
		&UCoreHudObjectiveWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudObjectiveWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudObjectiveWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudObjectiveWidget, 2740139993);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudObjectiveWidget>()
	{
		return UCoreHudObjectiveWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudObjectiveWidget(Z_Construct_UClass_UCoreHudObjectiveWidget, &UCoreHudObjectiveWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudObjectiveWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudObjectiveWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
