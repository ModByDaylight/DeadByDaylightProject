// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerStatusesContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerStatusesContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusesContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusesContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerStatusesContainerViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister();
// End Cross Module References
	void UCorePlayerStatusesContainerWidget::StaticRegisterNativesUCorePlayerStatusesContainerWidget()
	{
	}
	UClass* Z_Construct_UClass_UCorePlayerStatusesContainerWidget_NoRegister()
	{
		return UCorePlayerStatusesContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerStatusViewInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__playerStatusViewInterfaces;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__playerStatusViewInterfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatusWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PlayerStatusWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStatusWidgets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorePlayerStatusesContainerWidget.h" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusesContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp__playerStatusViewInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusesContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp__playerStatusViewInterfaces = { "_playerStatusViewInterfaces", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerStatusesContainerWidget, _playerStatusViewInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp__playerStatusViewInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp__playerStatusViewInterfaces_MetaData)) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp__playerStatusViewInterfaces_Inner = { "_playerStatusViewInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp_PlayerStatusWidgets_MetaData[] = {
		{ "Category", "CorePlayerStatusesContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusesContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp_PlayerStatusWidgets = { "PlayerStatusWidgets", nullptr, (EPropertyFlags)0x002008800000000c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerStatusesContainerWidget, PlayerStatusWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp_PlayerStatusWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp_PlayerStatusWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp_PlayerStatusWidgets_Inner = { "PlayerStatusWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCorePlayerStatusWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp__playerStatusViewInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp__playerStatusViewInterfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp_PlayerStatusWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::NewProp_PlayerStatusWidgets_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerStatusesContainerViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCorePlayerStatusesContainerWidget, IPlayerStatusesContainerViewInterface), false },
			{ Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCorePlayerStatusesContainerWidget, ITutorialHighlightViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerStatusesContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::ClassParams = {
		&UCorePlayerStatusesContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerStatusesContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerStatusesContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerStatusesContainerWidget, 1089788098);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerStatusesContainerWidget>()
	{
		return UCorePlayerStatusesContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerStatusesContainerWidget(Z_Construct_UClass_UCorePlayerStatusesContainerWidget, &UCorePlayerStatusesContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerStatusesContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerStatusesContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
