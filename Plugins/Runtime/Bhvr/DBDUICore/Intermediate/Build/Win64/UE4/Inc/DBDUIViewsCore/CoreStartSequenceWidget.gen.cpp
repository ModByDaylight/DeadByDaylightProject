// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStartSequenceWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStartSequenceWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStartSequenceWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStartSequenceWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EThemeColorId();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStartSequenceViewInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore, nullptr, "CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCoreStartSequenceWidget::execOnHideStartSequenceComplete)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHideStartSequenceComplete(Z_Param_tween);
		P_NATIVE_END;
	}
	void UCoreStartSequenceWidget::StaticRegisterNativesUCoreStartSequenceWidget()
	{
		UClass* Class = UCoreStartSequenceWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHideStartSequenceComplete", &UCoreStartSequenceWidget::execOnHideStartSequenceComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics
	{
		struct CoreStartSequenceWidget_eventOnHideStartSequenceComplete_Parms
		{
			UUITweenInstance* tween;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tween;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStartSequenceWidget_eventOnHideStartSequenceComplete_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStartSequenceWidget, nullptr, "OnHideStartSequenceComplete", nullptr, nullptr, sizeof(CoreStartSequenceWidget_eventOnHideStartSequenceComplete_Parms), Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStartSequenceWidget_NoRegister()
	{
		return UCoreStartSequenceWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStartSequenceWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartSequenceFadeOutDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StartSequenceFadeOutDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapNameTextfield_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapNameTextfield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparatorImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SeparatorImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeNameTextfield_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThemeNameTextfield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BorderColors;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BorderColors_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BorderColors_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderColors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FadeOutEasing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FadeOutEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FadeInEasing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FadeInEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStartSequenceWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStartSequenceWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStartSequenceWidget_OnHideStartSequenceComplete, "OnHideStartSequenceComplete" }, // 635804727
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreStartSequenceWidget.h" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_StartSequenceFadeOutDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_StartSequenceFadeOutDelegate = { "StartSequenceFadeOutDelegate", nullptr, (EPropertyFlags)0x0040100000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, StartSequenceFadeOutDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreStartSequenceWidgetStartSequenceFadeOutDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_StartSequenceFadeOutDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_StartSequenceFadeOutDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_MapNameTextfield_MetaData[] = {
		{ "Category", "CoreStartSequenceWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_MapNameTextfield = { "MapNameTextfield", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, MapNameTextfield), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_MapNameTextfield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_MapNameTextfield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_SeparatorImage_MetaData[] = {
		{ "Category", "CoreStartSequenceWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_SeparatorImage = { "SeparatorImage", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, SeparatorImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_SeparatorImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_SeparatorImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_ThemeNameTextfield_MetaData[] = {
		{ "Category", "CoreStartSequenceWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_ThemeNameTextfield = { "ThemeNameTextfield", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, ThemeNameTextfield), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_ThemeNameTextfield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_ThemeNameTextfield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_DefaultColor_MetaData[] = {
		{ "Category", "CoreStartSequenceWidget" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_DefaultColor = { "DefaultColor", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, DefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_DefaultColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_DefaultColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors_MetaData[] = {
		{ "Category", "CoreStartSequenceWidget" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors = { "BorderColors", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, BorderColors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors_Key_KeyProp = { "BorderColors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EThemeColorId, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors_ValueProp = { "BorderColors", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutEasing_MetaData[] = {
		{ "Category", "CoreStartSequenceWidget" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutEasing = { "FadeOutEasing", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, FadeOutEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutEasing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInEasing_MetaData[] = {
		{ "Category", "CoreStartSequenceWidget" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInEasing = { "FadeInEasing", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, FadeInEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInEasing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "Category", "CoreStartSequenceWidget" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, FadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInDuration_MetaData[] = {
		{ "Category", "CoreStartSequenceWidget" },
		{ "ModuleRelativePath", "Public/CoreStartSequenceWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStartSequenceWidget, FadeInDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStartSequenceWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_StartSequenceFadeOutDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_MapNameTextfield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_SeparatorImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_ThemeNameTextfield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_DefaultColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_BorderColors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStartSequenceWidget_Statics::NewProp_FadeInDuration,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStartSequenceViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStartSequenceWidget, IStartSequenceViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStartSequenceWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStartSequenceWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStartSequenceWidget_Statics::ClassParams = {
		&UCoreStartSequenceWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStartSequenceWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStartSequenceWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStartSequenceWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStartSequenceWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStartSequenceWidget, 2193959152);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStartSequenceWidget>()
	{
		return UCoreStartSequenceWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStartSequenceWidget(Z_Construct_UClass_UCoreStartSequenceWidget, &UCoreStartSequenceWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStartSequenceWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStartSequenceWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
