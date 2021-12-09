// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGFriendButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGFriendButtonWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendButtonWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendButtonWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EFriendTypeButton();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
// End Cross Module References
	void UUMGFriendButtonWidget::StaticRegisterNativesUUMGFriendButtonWidget()
	{
	}
	UClass* Z_Construct_UClass_UUMGFriendButtonWidget_NoRegister()
	{
		return UUMGFriendButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGFriendButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nonInteractableImages_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__nonInteractableImages;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__nonInteractableImages_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__nonInteractableImages_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__nonInteractableImages_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonInteractableImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonInteractableImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isInteractable_MetaData[];
#endif
		static void NewProp__isInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonInteractableActionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonInteractableActionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonInteractableExplanationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonInteractableExplanationText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonInteractableButtonStatePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonInteractableButtonStatePanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractableButtonStatePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractableButtonStatePanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGFriendButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGFriendButtonWidget.h" },
		{ "ModuleRelativePath", "Public/UMGFriendButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages_MetaData[] = {
		{ "Category", "UMGFriendButtonWidget" },
		{ "ModuleRelativePath", "Public/UMGFriendButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages = { "_nonInteractableImages", nullptr, (EPropertyFlags)0x0020080002010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendButtonWidget, _nonInteractableImages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages_Key_KeyProp = { "_nonInteractableImages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDUIViewsMobile_EFriendTypeButton, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages_ValueProp = { "_nonInteractableImages", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableImage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableImage = { "NonInteractableImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendButtonWidget, NonInteractableImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__isInteractable_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGFriendButtonWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__isInteractable_SetBit(void* Obj)
	{
		((UUMGFriendButtonWidget*)Obj)->_isInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__isInteractable = { "_isInteractable", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGFriendButtonWidget), &Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__isInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__isInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__isInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableActionText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableActionText = { "NonInteractableActionText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendButtonWidget, NonInteractableActionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableActionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableExplanationText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableExplanationText = { "NonInteractableExplanationText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendButtonWidget, NonInteractableExplanationText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableExplanationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableExplanationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableButtonStatePanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableButtonStatePanel = { "NonInteractableButtonStatePanel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendButtonWidget, NonInteractableButtonStatePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableButtonStatePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableButtonStatePanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_InteractableButtonStatePanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_InteractableButtonStatePanel = { "InteractableButtonStatePanel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendButtonWidget, InteractableButtonStatePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_InteractableButtonStatePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_InteractableButtonStatePanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGFriendButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__nonInteractableImages_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp__isInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableActionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableExplanationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_NonInteractableButtonStatePanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendButtonWidget_Statics::NewProp_InteractableButtonStatePanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGFriendButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGFriendButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGFriendButtonWidget_Statics::ClassParams = {
		&UUMGFriendButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGFriendButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGFriendButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGFriendButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGFriendButtonWidget, 4197229778);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGFriendButtonWidget>()
	{
		return UUMGFriendButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGFriendButtonWidget(Z_Construct_UClass_UUMGFriendButtonWidget, &UUMGFriendButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGFriendButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGFriendButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
