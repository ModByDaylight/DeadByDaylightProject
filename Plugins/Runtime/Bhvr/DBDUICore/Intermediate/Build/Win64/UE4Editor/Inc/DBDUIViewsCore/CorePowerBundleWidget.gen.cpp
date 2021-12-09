// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePowerBundleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePowerBundleWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePowerBundleWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePowerBundleWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPowerBundleViewInterface_NoRegister();
// End Cross Module References
	void UCorePowerBundleWidget::StaticRegisterNativesUCorePowerBundleWidget()
	{
	}
	UClass* Z_Construct_UClass_UCorePowerBundleWidget_NoRegister()
	{
		return UCorePowerBundleWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePowerBundleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePowerBundleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePowerBundleWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorePowerBundleWidget.h" },
		{ "ModuleRelativePath", "Public/CorePowerBundleWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCorePowerBundleWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPowerBundleViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCorePowerBundleWidget, IPowerBundleViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePowerBundleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePowerBundleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePowerBundleWidget_Statics::ClassParams = {
		&UCorePowerBundleWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCorePowerBundleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePowerBundleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePowerBundleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePowerBundleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePowerBundleWidget, 2912324153);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePowerBundleWidget>()
	{
		return UCorePowerBundleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePowerBundleWidget(Z_Construct_UClass_UCorePowerBundleWidget, &UCorePowerBundleWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePowerBundleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePowerBundleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
