// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreEquippedItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreEquippedItemWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreEquippedItemWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreEquippedItemWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEquippedItemViewInterface_NoRegister();
// End Cross Module References
	void UCoreEquippedItemWidget::StaticRegisterNativesUCoreEquippedItemWidget()
	{
	}
	UClass* Z_Construct_UClass_UCoreEquippedItemWidget_NoRegister()
	{
		return UCoreEquippedItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreEquippedItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDisappearSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDisappearSfx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreEquippedItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEquippedItemWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreEquippedItemWidget.h" },
		{ "ModuleRelativePath", "Public/CoreEquippedItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEquippedItemWidget_Statics::NewProp_ItemDisappearSfx_MetaData[] = {
		{ "Category", "CoreEquippedItemWidget" },
		{ "ModuleRelativePath", "Public/CoreEquippedItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreEquippedItemWidget_Statics::NewProp_ItemDisappearSfx = { "ItemDisappearSfx", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEquippedItemWidget, ItemDisappearSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreEquippedItemWidget_Statics::NewProp_ItemDisappearSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEquippedItemWidget_Statics::NewProp_ItemDisappearSfx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreEquippedItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEquippedItemWidget_Statics::NewProp_ItemDisappearSfx,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreEquippedItemWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEquippedItemViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreEquippedItemWidget, IEquippedItemViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreEquippedItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreEquippedItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreEquippedItemWidget_Statics::ClassParams = {
		&UCoreEquippedItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCoreEquippedItemWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEquippedItemWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreEquippedItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEquippedItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreEquippedItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreEquippedItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreEquippedItemWidget, 2618469414);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreEquippedItemWidget>()
	{
		return UCoreEquippedItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreEquippedItemWidget(Z_Construct_UClass_UCoreEquippedItemWidget, &UCoreEquippedItemWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreEquippedItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreEquippedItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
