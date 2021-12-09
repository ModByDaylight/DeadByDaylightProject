// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGFriendContextualMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGFriendContextualMenuWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendContextualMenuWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendContextualMenuWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	void UUMGFriendContextualMenuWidget::StaticRegisterNativesUUMGFriendContextualMenuWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGFriendContextualMenuWidget_NoRegister()
	{
		return UUMGFriendContextualMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGFriendContextualMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGFriendContextualMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendContextualMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGFriendContextualMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UMGFriendContextualMenuWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGFriendContextualMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGFriendContextualMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGFriendContextualMenuWidget_Statics::ClassParams = {
		&UUMGFriendContextualMenuWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGFriendContextualMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendContextualMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGFriendContextualMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGFriendContextualMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGFriendContextualMenuWidget, 1706795688);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGFriendContextualMenuWidget>()
	{
		return UUMGFriendContextualMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGFriendContextualMenuWidget(Z_Construct_UClass_UUMGFriendContextualMenuWidget, &UUMGFriendContextualMenuWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGFriendContextualMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGFriendContextualMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
