// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreOfferingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOfferingWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOfferingWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOfferingWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseLoadoutPartWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOfferingViewInterface_NoRegister();
// End Cross Module References
	void UCoreOfferingWidget::StaticRegisterNativesUCoreOfferingWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreOfferingWidget_NoRegister()
	{
		return UCoreOfferingWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreOfferingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreOfferingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseLoadoutPartWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOfferingWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreOfferingWidget.h" },
		{ "ModuleRelativePath", "Public/CoreOfferingWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreOfferingWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOfferingViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreOfferingWidget, IOfferingViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreOfferingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreOfferingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreOfferingWidget_Statics::ClassParams = {
		&UCoreOfferingWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreOfferingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOfferingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreOfferingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreOfferingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreOfferingWidget, 513850686);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreOfferingWidget>()
	{
		return UCoreOfferingWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreOfferingWidget(Z_Construct_UClass_UCoreOfferingWidget, &UCoreOfferingWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreOfferingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreOfferingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
