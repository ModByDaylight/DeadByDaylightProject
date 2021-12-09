// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreKeyListenerInputPromptWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreKeyListenerInputPromptWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EUIActionType();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptWidget_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore, nullptr, "CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_NewIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_NewIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execSetLabel)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_label);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLabel(Z_Param_Out_label);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreKeyListenerInputPromptWidget::execSetUIAction)
	{
		P_GET_ENUM(EUIActionType,Z_Param_actionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIAction(EUIActionType(Z_Param_actionType));
		P_NATIVE_END;
	}
	static FName NAME_UCoreKeyListenerInputPromptWidget_OnEnabledChanged = FName(TEXT("OnEnabledChanged"));
	void UCoreKeyListenerInputPromptWidget::OnEnabledChanged(bool NewIsEnabled)
	{
		CoreKeyListenerInputPromptWidget_eventOnEnabledChanged_Parms Parms;
		Parms.NewIsEnabled=NewIsEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreKeyListenerInputPromptWidget_OnEnabledChanged),&Parms);
	}
	void UCoreKeyListenerInputPromptWidget::StaticRegisterNativesUCoreKeyListenerInputPromptWidget()
	{
		UClass* Class = UCoreKeyListenerInputPromptWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnabled", &UCoreKeyListenerInputPromptWidget::execIsEnabled },
			{ "SetEnabled", &UCoreKeyListenerInputPromptWidget::execSetEnabled },
			{ "SetLabel", &UCoreKeyListenerInputPromptWidget::execSetLabel },
			{ "SetUIAction", &UCoreKeyListenerInputPromptWidget::execSetUIAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreKeyListenerInputPromptWidget_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreKeyListenerInputPromptWidget_eventIsEnabled_Parms), &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "IsEnabled", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventIsEnabled_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics
	{
		static void NewProp_NewIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::NewProp_NewIsEnabled_SetBit(void* Obj)
	{
		((CoreKeyListenerInputPromptWidget_eventOnEnabledChanged_Parms*)Obj)->NewIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::NewProp_NewIsEnabled = { "NewIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreKeyListenerInputPromptWidget_eventOnEnabledChanged_Parms), &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::NewProp_NewIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::NewProp_NewIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "OnEnabledChanged", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventOnEnabledChanged_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventSetEnabled_Parms
		{
			bool NewIsEnabled;
		};
		static void NewProp_NewIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::NewProp_NewIsEnabled_SetBit(void* Obj)
	{
		((CoreKeyListenerInputPromptWidget_eventSetEnabled_Parms*)Obj)->NewIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::NewProp_NewIsEnabled = { "NewIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreKeyListenerInputPromptWidget_eventSetEnabled_Parms), &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::NewProp_NewIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::NewProp_NewIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "SetEnabled", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventSetEnabled_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventSetLabel_Parms
		{
			FText label;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label = { "label", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerInputPromptWidget_eventSetLabel_Parms, label), METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::NewProp_label,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "SetLabel", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventSetLabel_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics
	{
		struct CoreKeyListenerInputPromptWidget_eventSetUIAction_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType = { "actionType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerInputPromptWidget_eventSetUIAction_Parms, actionType), Z_Construct_UEnum_DBDInput_EUIActionType, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::NewProp_actionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, nullptr, "SetUIAction", nullptr, nullptr, sizeof(CoreKeyListenerInputPromptWidget_eventSetUIAction_Parms), Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_NoRegister()
	{
		return UCoreKeyListenerInputPromptWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onKeyListenerInputPromptTriggeredDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onKeyListenerInputPromptTriggeredDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LabelTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LabelTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPrompt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_IsEnabled, "IsEnabled" }, // 3787098508
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_OnEnabledChanged, "OnEnabledChanged" }, // 1550568077
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetEnabled, "SetEnabled" }, // 2107254986
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetLabel, "SetLabel" }, // 1806990629
		{ &Z_Construct_UFunction_UCoreKeyListenerInputPromptWidget_SetUIAction, "SetUIAction" }, // 2212011815
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreKeyListenerInputPromptWidget.h" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate = { "_onKeyListenerInputPromptTriggeredDelegate", nullptr, (EPropertyFlags)0x0040100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, _onKeyListenerInputPromptTriggeredDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB_MetaData[] = {
		{ "Category", "CoreKeyListenerInputPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB = { "LabelTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, LabelTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt_MetaData[] = {
		{ "Category", "CoreKeyListenerInputPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt = { "InputPrompt", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, InputPrompt), Z_Construct_UClass_UCoreInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp__onKeyListenerInputPromptTriggeredDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_LabelTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::NewProp_InputPrompt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreKeyListenerInputPromptWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::ClassParams = {
		&UCoreKeyListenerInputPromptWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreKeyListenerInputPromptWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreKeyListenerInputPromptWidget, 2601154615);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreKeyListenerInputPromptWidget>()
	{
		return UCoreKeyListenerInputPromptWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreKeyListenerInputPromptWidget(Z_Construct_UClass_UCoreKeyListenerInputPromptWidget, &UCoreKeyListenerInputPromptWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreKeyListenerInputPromptWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreKeyListenerInputPromptWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
