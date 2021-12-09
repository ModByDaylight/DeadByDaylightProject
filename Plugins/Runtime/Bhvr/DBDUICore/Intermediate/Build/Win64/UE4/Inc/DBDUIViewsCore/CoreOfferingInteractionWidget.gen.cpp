// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreOfferingInteractionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOfferingInteractionWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOfferingInteractionWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOfferingInteractionWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOfferingInteractionViewInterface_NoRegister();
// End Cross Module References
	void UCoreOfferingInteractionWidget::StaticRegisterNativesUCoreOfferingInteractionWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreOfferingInteractionWidget_NoRegister()
	{
		return UCoreOfferingInteractionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreOfferingInteractionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreOfferingInteractionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOfferingInteractionWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreOfferingInteractionWidget.h" },
		{ "ModuleRelativePath", "Public/CoreOfferingInteractionWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreOfferingInteractionWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOfferingInteractionViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreOfferingInteractionWidget, IOfferingInteractionViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreOfferingInteractionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreOfferingInteractionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreOfferingInteractionWidget_Statics::ClassParams = {
		&UCoreOfferingInteractionWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreOfferingInteractionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOfferingInteractionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreOfferingInteractionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreOfferingInteractionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreOfferingInteractionWidget, 653968195);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreOfferingInteractionWidget>()
	{
		return UCoreOfferingInteractionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreOfferingInteractionWidget(Z_Construct_UClass_UCoreOfferingInteractionWidget, &UCoreOfferingInteractionWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreOfferingInteractionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreOfferingInteractionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
