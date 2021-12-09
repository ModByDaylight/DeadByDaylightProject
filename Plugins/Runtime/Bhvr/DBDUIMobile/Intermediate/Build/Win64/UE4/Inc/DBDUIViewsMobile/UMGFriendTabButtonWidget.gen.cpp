// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGFriendTabButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGFriendTabButtonWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendTabButtonWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendTabButtonWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseTabButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	void UUMGFriendTabButtonWidget::StaticRegisterNativesUUMGFriendTabButtonWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGFriendTabButtonWidget_NoRegister()
	{
		return UUMGFriendTabButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGFriendTabButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGFriendTabButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseTabButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendTabButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGFriendTabButtonWidget.h" },
		{ "ModuleRelativePath", "Public/UMGFriendTabButtonWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGFriendTabButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGFriendTabButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGFriendTabButtonWidget_Statics::ClassParams = {
		&UUMGFriendTabButtonWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGFriendTabButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendTabButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGFriendTabButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGFriendTabButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGFriendTabButtonWidget, 3852101774);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGFriendTabButtonWidget>()
	{
		return UUMGFriendTabButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGFriendTabButtonWidget(Z_Construct_UClass_UUMGFriendTabButtonWidget, &UUMGFriendTabButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGFriendTabButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGFriendTabButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
