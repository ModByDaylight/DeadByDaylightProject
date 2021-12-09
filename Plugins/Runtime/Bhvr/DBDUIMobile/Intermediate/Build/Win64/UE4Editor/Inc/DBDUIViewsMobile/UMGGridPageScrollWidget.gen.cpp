// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGGridPageScrollWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGGridPageScrollWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGGridPageScrollWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGGridPageScrollWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGPageScrollWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	void UUMGGridPageScrollWidget::StaticRegisterNativesUUMGGridPageScrollWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGGridPageScrollWidget_NoRegister()
	{
		return UUMGGridPageScrollWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGGridPageScrollWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGGridPageScrollWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGPageScrollWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGGridPageScrollWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGGridPageScrollWidget.h" },
		{ "ModuleRelativePath", "Public/UMGGridPageScrollWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGGridPageScrollWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGGridPageScrollWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGGridPageScrollWidget_Statics::ClassParams = {
		&UUMGGridPageScrollWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGGridPageScrollWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGGridPageScrollWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGGridPageScrollWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGGridPageScrollWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGGridPageScrollWidget, 885134392);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGGridPageScrollWidget>()
	{
		return UUMGGridPageScrollWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGGridPageScrollWidget(Z_Construct_UClass_UUMGGridPageScrollWidget, &UUMGGridPageScrollWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGGridPageScrollWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGGridPageScrollWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
