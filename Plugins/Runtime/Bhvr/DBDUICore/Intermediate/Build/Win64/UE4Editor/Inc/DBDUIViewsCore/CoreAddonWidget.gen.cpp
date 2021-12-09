// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreAddonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreAddonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAddonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAddonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseLoadoutPartWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UAddonViewInterface_NoRegister();
// End Cross Module References
	void UCoreAddonWidget::StaticRegisterNativesUCoreAddonWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreAddonWidget_NoRegister()
	{
		return UCoreAddonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreAddonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreAddonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseLoadoutPartWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreAddonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreAddonWidget.h" },
		{ "ModuleRelativePath", "Public/CoreAddonWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreAddonWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAddonViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreAddonWidget, IAddonViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreAddonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAddonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreAddonWidget_Statics::ClassParams = {
		&UCoreAddonWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreAddonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAddonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreAddonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreAddonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreAddonWidget, 3329200334);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreAddonWidget>()
	{
		return UCoreAddonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreAddonWidget(Z_Construct_UClass_UCoreAddonWidget, &UCoreAddonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreAddonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAddonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
