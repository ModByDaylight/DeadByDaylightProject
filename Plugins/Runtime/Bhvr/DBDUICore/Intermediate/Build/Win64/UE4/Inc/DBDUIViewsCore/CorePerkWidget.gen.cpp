// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePerkWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePerkWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePerkWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePerkWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseLoadoutPartWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPerkViewInterface_NoRegister();
// End Cross Module References
	void UCorePerkWidget::StaticRegisterNativesUCorePerkWidget()
	{
	}
	UClass* Z_Construct_UClass_UCorePerkWidget_NoRegister()
	{
		return UCorePerkWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePerkWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePerkWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseLoadoutPartWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePerkWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorePerkWidget.h" },
		{ "ModuleRelativePath", "Public/CorePerkWidget.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCorePerkWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPerkViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCorePerkWidget, IPerkViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePerkWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePerkWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePerkWidget_Statics::ClassParams = {
		&UCorePerkWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCorePerkWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePerkWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePerkWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePerkWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePerkWidget, 3277108733);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePerkWidget>()
	{
		return UCorePerkWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePerkWidget(Z_Construct_UClass_UCorePerkWidget, &UCorePerkWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePerkWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePerkWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
