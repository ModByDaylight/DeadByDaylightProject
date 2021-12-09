// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreButtonPromptWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreButtonPromptWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonPromptWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonPromptWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EUIActionType();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptTextWidget_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore, nullptr, "CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCoreButtonPromptWidget::execSetAction)
	{
		P_GET_ENUM(EUIActionType,Z_Param_actionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAction(EUIActionType(Z_Param_actionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonPromptWidget::execSetInputKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputKey(Z_Param_Out_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreButtonPromptWidget::execSetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Out_text);
		P_NATIVE_END;
	}
	static FName NAME_UCoreButtonPromptWidget_DisablePrompts = FName(TEXT("DisablePrompts"));
	void UCoreButtonPromptWidget::DisablePrompts()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonPromptWidget_DisablePrompts),NULL);
	}
	static FName NAME_UCoreButtonPromptWidget_EnablePrompts = FName(TEXT("EnablePrompts"));
	void UCoreButtonPromptWidget::EnablePrompts()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreButtonPromptWidget_EnablePrompts),NULL);
	}
	void UCoreButtonPromptWidget::StaticRegisterNativesUCoreButtonPromptWidget()
	{
		UClass* Class = UCoreButtonPromptWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAction", &UCoreButtonPromptWidget::execSetAction },
			{ "SetInputKey", &UCoreButtonPromptWidget::execSetInputKey },
			{ "SetText", &UCoreButtonPromptWidget::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreButtonPromptWidget_DisablePrompts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonPromptWidget_DisablePrompts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonPromptWidget_DisablePrompts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonPromptWidget, nullptr, "DisablePrompts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonPromptWidget_DisablePrompts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_DisablePrompts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonPromptWidget_DisablePrompts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonPromptWidget_DisablePrompts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonPromptWidget_EnablePrompts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonPromptWidget_EnablePrompts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonPromptWidget_EnablePrompts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonPromptWidget, nullptr, "EnablePrompts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonPromptWidget_EnablePrompts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_EnablePrompts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonPromptWidget_EnablePrompts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonPromptWidget_EnablePrompts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics
	{
		struct CoreButtonPromptWidget_eventSetAction_Parms
		{
			EUIActionType actionType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_actionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_actionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::NewProp_actionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::NewProp_actionType = { "actionType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonPromptWidget_eventSetAction_Parms, actionType), Z_Construct_UEnum_DBDInput_EUIActionType, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::NewProp_actionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::NewProp_actionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::NewProp_actionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::NewProp_actionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::NewProp_actionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonPromptWidget, nullptr, "SetAction", nullptr, nullptr, sizeof(CoreButtonPromptWidget_eventSetAction_Parms), Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics
	{
		struct CoreButtonPromptWidget_eventSetInputKey_Parms
		{
			FKey key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonPromptWidget_eventSetInputKey_Parms, key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonPromptWidget, nullptr, "SetInputKey", nullptr, nullptr, sizeof(CoreButtonPromptWidget_eventSetInputKey_Parms), Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics
	{
		struct CoreButtonPromptWidget_eventSetText_Parms
		{
			FText text;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreButtonPromptWidget_eventSetText_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreButtonPromptWidget, nullptr, "SetText", nullptr, nullptr, sizeof(CoreButtonPromptWidget_eventSetText_Parms), Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreButtonPromptWidget_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreButtonPromptWidget_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreButtonPromptWidget_NoRegister()
	{
		return UCoreButtonPromptWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreButtonPromptWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__buttonPromptTriggeredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__buttonPromptTriggeredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__buttonTextField_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__buttonTextField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputPromptText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputPromptText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorReleaseSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorReleaseSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorPressSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorPressSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorOverSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorOverSfx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreButtonPromptWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreButtonPromptWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreButtonPromptWidget_DisablePrompts, "DisablePrompts" }, // 2819983844
		{ &Z_Construct_UFunction_UCoreButtonPromptWidget_EnablePrompts, "EnablePrompts" }, // 3597517291
		{ &Z_Construct_UFunction_UCoreButtonPromptWidget_SetAction, "SetAction" }, // 4248124925
		{ &Z_Construct_UFunction_UCoreButtonPromptWidget_SetInputKey, "SetInputKey" }, // 187223051
		{ &Z_Construct_UFunction_UCoreButtonPromptWidget_SetText, "SetText" }, // 3489396744
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonPromptWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreButtonPromptWidget.h" },
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonPromptTriggeredDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonPromptTriggeredDelegate = { "_buttonPromptTriggeredDelegate", nullptr, (EPropertyFlags)0x0040100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonPromptWidget, _buttonPromptTriggeredDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreButtonPromptWidgetButtonPromptTriggeredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonPromptTriggeredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonPromptTriggeredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonTextField_MetaData[] = {
		{ "Category", "CoreButtonPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonTextField = { "_buttonTextField", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonPromptWidget, _buttonTextField), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonTextField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonTextField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__inputPromptText_MetaData[] = {
		{ "Category", "CoreButtonPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__inputPromptText = { "_inputPromptText", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonPromptWidget, _inputPromptText), Z_Construct_UClass_UCoreInputPromptTextWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__inputPromptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__inputPromptText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorReleaseSfx_MetaData[] = {
		{ "Category", "CoreButtonPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorReleaseSfx = { "CursorReleaseSfx", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonPromptWidget, CursorReleaseSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorReleaseSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorReleaseSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorPressSfx_MetaData[] = {
		{ "Category", "CoreButtonPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorPressSfx = { "CursorPressSfx", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonPromptWidget, CursorPressSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorPressSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorPressSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorOverSfx_MetaData[] = {
		{ "Category", "CoreButtonPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreButtonPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorOverSfx = { "CursorOverSfx", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreButtonPromptWidget, CursorOverSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorOverSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorOverSfx_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreButtonPromptWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonPromptTriggeredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__buttonTextField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp__inputPromptText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorReleaseSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorPressSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreButtonPromptWidget_Statics::NewProp_CursorOverSfx,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreButtonPromptWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreButtonPromptWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreButtonPromptWidget_Statics::ClassParams = {
		&UCoreButtonPromptWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreButtonPromptWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreButtonPromptWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreButtonPromptWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreButtonPromptWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreButtonPromptWidget, 3874537771);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreButtonPromptWidget>()
	{
		return UCoreButtonPromptWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreButtonPromptWidget(Z_Construct_UClass_UCoreButtonPromptWidget, &UCoreButtonPromptWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreButtonPromptWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreButtonPromptWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
