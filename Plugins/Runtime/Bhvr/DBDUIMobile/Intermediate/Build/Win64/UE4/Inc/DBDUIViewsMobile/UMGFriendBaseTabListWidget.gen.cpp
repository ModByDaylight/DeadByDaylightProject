// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGFriendBaseTabListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGFriendBaseTabListWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendBaseTabListWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendBaseTabListWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseTabListWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	void UUMGFriendBaseTabListWidget::StaticRegisterNativesUUMGFriendBaseTabListWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGFriendBaseTabListWidget_NoRegister()
	{
		return UUMGFriendBaseTabListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGFriendBaseTabListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGFriendBaseTabListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseTabListWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendBaseTabListWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGFriendBaseTabListWidget.h" },
		{ "ModuleRelativePath", "Public/UMGFriendBaseTabListWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGFriendBaseTabListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGFriendBaseTabListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGFriendBaseTabListWidget_Statics::ClassParams = {
		&UUMGFriendBaseTabListWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGFriendBaseTabListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendBaseTabListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGFriendBaseTabListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGFriendBaseTabListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGFriendBaseTabListWidget, 1705358400);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGFriendBaseTabListWidget>()
	{
		return UUMGFriendBaseTabListWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGFriendBaseTabListWidget(Z_Construct_UClass_UUMGFriendBaseTabListWidget, &UUMGFriendBaseTabListWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGFriendBaseTabListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGFriendBaseTabListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
