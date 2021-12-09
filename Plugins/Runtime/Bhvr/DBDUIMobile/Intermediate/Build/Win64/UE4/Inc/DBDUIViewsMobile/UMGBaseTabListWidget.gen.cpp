// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGBaseTabListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBaseTabListWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseTabListWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseTabListWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	void UUMGBaseTabListWidget::StaticRegisterNativesUUMGBaseTabListWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGBaseTabListWidget_NoRegister()
	{
		return UUMGBaseTabListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBaseTabListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBaseTabListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseTabListWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBaseTabListWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBaseTabListWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBaseTabListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBaseTabListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBaseTabListWidget_Statics::ClassParams = {
		&UUMGBaseTabListWidget::StaticClass,
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
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBaseTabListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseTabListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBaseTabListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBaseTabListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBaseTabListWidget, 863397642);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGBaseTabListWidget>()
	{
		return UUMGBaseTabListWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBaseTabListWidget(Z_Construct_UClass_UUMGBaseTabListWidget, &UUMGBaseTabListWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGBaseTabListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBaseTabListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
