// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreInputPromptWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreInputPromptWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
	DEFINE_FUNCTION(UCoreInputPromptWidget::execGetInputKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetInputKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputPromptWidget::execGetInputShortDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInputShortDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputPromptWidget::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputPromptWidget::execPromptNotFound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PromptNotFound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputPromptWidget::execSetEnabled)
	{
		P_GET_UBOOL(Z_Param_NewIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnabled(Z_Param_NewIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputPromptWidget::execSetInputKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_inputKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputKey(Z_Param_Out_inputKey);
		P_NATIVE_END;
	}
	static FName NAME_UCoreInputPromptWidget_DisplayPrompt = FName(TEXT("DisplayPrompt"));
	void UCoreInputPromptWidget::DisplayPrompt()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreInputPromptWidget_DisplayPrompt),NULL);
	}
	static FName NAME_UCoreInputPromptWidget_OnEnabledChanged = FName(TEXT("OnEnabledChanged"));
	void UCoreInputPromptWidget::OnEnabledChanged(bool NewIsEnabled)
	{
		CoreInputPromptWidget_eventOnEnabledChanged_Parms Parms;
		Parms.NewIsEnabled=NewIsEnabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreInputPromptWidget_OnEnabledChanged),&Parms);
	}
	void UCoreInputPromptWidget::StaticRegisterNativesUCoreInputPromptWidget()
	{
		UClass* Class = UCoreInputPromptWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputKey", &UCoreInputPromptWidget::execGetInputKey },
			{ "GetInputShortDisplayName", &UCoreInputPromptWidget::execGetInputShortDisplayName },
			{ "IsEnabled", &UCoreInputPromptWidget::execIsEnabled },
			{ "PromptNotFound", &UCoreInputPromptWidget::execPromptNotFound },
			{ "SetEnabled", &UCoreInputPromptWidget::execSetEnabled },
			{ "SetInputKey", &UCoreInputPromptWidget::execSetInputKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreInputPromptWidget_DisplayPrompt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptWidget_DisplayPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptWidget_DisplayPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptWidget, nullptr, "DisplayPrompt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptWidget_DisplayPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_DisplayPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptWidget_DisplayPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptWidget_DisplayPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics
	{
		struct CoreInputPromptWidget_eventGetInputKey_Parms
		{
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputPromptWidget_eventGetInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptWidget, nullptr, "GetInputKey", nullptr, nullptr, sizeof(CoreInputPromptWidget_eventGetInputKey_Parms), Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics
	{
		struct CoreInputPromptWidget_eventGetInputShortDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputPromptWidget_eventGetInputShortDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptWidget, nullptr, "GetInputShortDisplayName", nullptr, nullptr, sizeof(CoreInputPromptWidget_eventGetInputShortDisplayName_Parms), Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics
	{
		struct CoreInputPromptWidget_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreInputPromptWidget_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreInputPromptWidget_eventIsEnabled_Parms), &Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptWidget, nullptr, "IsEnabled", nullptr, nullptr, sizeof(CoreInputPromptWidget_eventIsEnabled_Parms), Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics
	{
		static void NewProp_NewIsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::NewProp_NewIsEnabled_SetBit(void* Obj)
	{
		((CoreInputPromptWidget_eventOnEnabledChanged_Parms*)Obj)->NewIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::NewProp_NewIsEnabled = { "NewIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreInputPromptWidget_eventOnEnabledChanged_Parms), &Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::NewProp_NewIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::NewProp_NewIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptWidget, nullptr, "OnEnabledChanged", nullptr, nullptr, sizeof(CoreInputPromptWidget_eventOnEnabledChanged_Parms), Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputPromptWidget_PromptNotFound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptWidget_PromptNotFound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptWidget_PromptNotFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptWidget, nullptr, "PromptNotFound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptWidget_PromptNotFound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_PromptNotFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptWidget_PromptNotFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptWidget_PromptNotFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics
	{
		struct CoreInputPromptWidget_eventSetEnabled_Parms
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
	void Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::NewProp_NewIsEnabled_SetBit(void* Obj)
	{
		((CoreInputPromptWidget_eventSetEnabled_Parms*)Obj)->NewIsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::NewProp_NewIsEnabled = { "NewIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreInputPromptWidget_eventSetEnabled_Parms), &Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::NewProp_NewIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::NewProp_NewIsEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptWidget, nullptr, "SetEnabled", nullptr, nullptr, sizeof(CoreInputPromptWidget_eventSetEnabled_Parms), Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics
	{
		struct CoreInputPromptWidget_eventSetInputKey_Parms
		{
			FKey inputKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inputKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::NewProp_inputKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::NewProp_inputKey = { "inputKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputPromptWidget_eventSetInputKey_Parms, inputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::NewProp_inputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::NewProp_inputKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::NewProp_inputKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptWidget, nullptr, "SetInputKey", nullptr, nullptr, sizeof(CoreInputPromptWidget_eventSetInputKey_Parms), Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreInputPromptWidget_NoRegister()
	{
		return UCoreInputPromptWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreInputPromptWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isEnabled_MetaData[];
#endif
		static void NewProp__isEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__inputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__unfoundInputKeyText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__unfoundInputKeyText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreInputPromptWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreInputPromptWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreInputPromptWidget_DisplayPrompt, "DisplayPrompt" }, // 329460141
		{ &Z_Construct_UFunction_UCoreInputPromptWidget_GetInputKey, "GetInputKey" }, // 3641444213
		{ &Z_Construct_UFunction_UCoreInputPromptWidget_GetInputShortDisplayName, "GetInputShortDisplayName" }, // 1509661724
		{ &Z_Construct_UFunction_UCoreInputPromptWidget_IsEnabled, "IsEnabled" }, // 3402502961
		{ &Z_Construct_UFunction_UCoreInputPromptWidget_OnEnabledChanged, "OnEnabledChanged" }, // 276633471
		{ &Z_Construct_UFunction_UCoreInputPromptWidget_PromptNotFound, "PromptNotFound" }, // 2429452394
		{ &Z_Construct_UFunction_UCoreInputPromptWidget_SetEnabled, "SetEnabled" }, // 3951084647
		{ &Z_Construct_UFunction_UCoreInputPromptWidget_SetInputKey, "SetInputKey" }, // 3343384298
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputPromptWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreInputPromptWidget.h" },
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__isEnabled_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInputPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__isEnabled_SetBit(void* Obj)
	{
		((UCoreInputPromptWidget*)Obj)->_isEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__isEnabled = { "_isEnabled", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreInputPromptWidget), &Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__isEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__isEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__isEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__inputKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInputPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__inputKey = { "_inputKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputPromptWidget, _inputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__inputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__inputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__unfoundInputKeyText_MetaData[] = {
		{ "Category", "CoreInputPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreInputPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__unfoundInputKeyText = { "_unfoundInputKeyText", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputPromptWidget, _unfoundInputKeyText), METADATA_PARAMS(Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__unfoundInputKeyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__unfoundInputKeyText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreInputPromptWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__isEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__inputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputPromptWidget_Statics::NewProp__unfoundInputKeyText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreInputPromptWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreInputPromptWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreInputPromptWidget_Statics::ClassParams = {
		&UCoreInputPromptWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreInputPromptWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreInputPromptWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreInputPromptWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreInputPromptWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreInputPromptWidget, 3972486273);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreInputPromptWidget>()
	{
		return UCoreInputPromptWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreInputPromptWidget(Z_Construct_UClass_UCoreInputPromptWidget, &UCoreInputPromptWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreInputPromptWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreInputPromptWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
