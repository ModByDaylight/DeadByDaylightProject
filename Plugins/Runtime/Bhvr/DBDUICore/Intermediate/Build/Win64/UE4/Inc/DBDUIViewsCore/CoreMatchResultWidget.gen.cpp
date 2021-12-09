// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreMatchResultWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreMatchResultWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMatchResultWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreMatchResultWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMatchResultViewInterface_NoRegister();
// End Cross Module References
	void UCoreMatchResultWidget::StaticRegisterNativesUCoreMatchResultWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreMatchResultWidget_NoRegister()
	{
		return UCoreMatchResultWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreMatchResultWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreMatchResultWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreMatchResultWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreMatchResultWidget.h" },
		{ "ModuleRelativePath", "Public/CoreMatchResultWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMatchResultViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreMatchResultWidget, IMatchResultViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreMatchResultWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreMatchResultWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreMatchResultWidget_Statics::ClassParams = {
		&UCoreMatchResultWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreMatchResultWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreMatchResultWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreMatchResultWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreMatchResultWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreMatchResultWidget, 2986477623);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreMatchResultWidget>()
	{
		return UCoreMatchResultWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreMatchResultWidget(Z_Construct_UClass_UCoreMatchResultWidget, &UCoreMatchResultWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreMatchResultWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreMatchResultWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
