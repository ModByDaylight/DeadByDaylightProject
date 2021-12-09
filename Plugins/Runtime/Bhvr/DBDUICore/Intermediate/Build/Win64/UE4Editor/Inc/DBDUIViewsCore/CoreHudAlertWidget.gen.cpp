// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudAlertWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudAlertWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudAlertWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudAlertWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget_NoRegister();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudStatusEffectAlertItem_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudScoreAlertItem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudAlertViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreHudAlertWidget::execClearAlerts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAlerts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAlertWidget::execGetAlerts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCoreBaseUserWidget*>*)Z_Param__Result=P_THIS->GetAlerts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAlertWidget::execGetPendingAlerts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCoreBaseUserWidget*>*)Z_Param__Result=P_THIS->GetPendingAlerts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAlertWidget::execGetRemainingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAlertWidget::execOnClearAlertsComplete)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnClearAlertsComplete(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAlertWidget::execOnPopAlertComplete)
	{
		P_GET_OBJECT(UUITweenInstance,Z_Param_tween);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPopAlertComplete(Z_Param_tween);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreHudAlertWidget::execPopAlert)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopAlert();
		P_NATIVE_END;
	}
	void UCoreHudAlertWidget::StaticRegisterNativesUCoreHudAlertWidget()
	{
		UClass* Class = UCoreHudAlertWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAlerts", &UCoreHudAlertWidget::execClearAlerts },
			{ "GetAlerts", &UCoreHudAlertWidget::execGetAlerts },
			{ "GetPendingAlerts", &UCoreHudAlertWidget::execGetPendingAlerts },
			{ "GetRemainingTime", &UCoreHudAlertWidget::execGetRemainingTime },
			{ "OnClearAlertsComplete", &UCoreHudAlertWidget::execOnClearAlertsComplete },
			{ "OnPopAlertComplete", &UCoreHudAlertWidget::execOnPopAlertComplete },
			{ "PopAlert", &UCoreHudAlertWidget::execPopAlert },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreHudAlertWidget_ClearAlerts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAlertWidget_ClearAlerts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAlertWidget_ClearAlerts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAlertWidget, nullptr, "ClearAlerts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAlertWidget_ClearAlerts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_ClearAlerts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAlertWidget_ClearAlerts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAlertWidget_ClearAlerts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics
	{
		struct CoreHudAlertWidget_eventGetAlerts_Parms
		{
			TArray<UCoreBaseUserWidget*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAlertWidget_eventGetAlerts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreBaseUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAlertWidget, nullptr, "GetAlerts", nullptr, nullptr, sizeof(CoreHudAlertWidget_eventGetAlerts_Parms), Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics
	{
		struct CoreHudAlertWidget_eventGetPendingAlerts_Parms
		{
			TArray<UCoreBaseUserWidget*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAlertWidget_eventGetPendingAlerts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreBaseUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAlertWidget, nullptr, "GetPendingAlerts", nullptr, nullptr, sizeof(CoreHudAlertWidget_eventGetPendingAlerts_Parms), Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics
	{
		struct CoreHudAlertWidget_eventGetRemainingTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAlertWidget_eventGetRemainingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAlertWidget, nullptr, "GetRemainingTime", nullptr, nullptr, sizeof(CoreHudAlertWidget_eventGetRemainingTime_Parms), Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics
	{
		struct CoreHudAlertWidget_eventOnClearAlertsComplete_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAlertWidget_eventOnClearAlertsComplete_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAlertWidget, nullptr, "OnClearAlertsComplete", nullptr, nullptr, sizeof(CoreHudAlertWidget_eventOnClearAlertsComplete_Parms), Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics
	{
		struct CoreHudAlertWidget_eventOnPopAlertComplete_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::NewProp_tween = { "tween", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudAlertWidget_eventOnPopAlertComplete_Parms, tween), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::NewProp_tween,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAlertWidget, nullptr, "OnPopAlertComplete", nullptr, nullptr, sizeof(CoreHudAlertWidget_eventOnPopAlertComplete_Parms), Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreHudAlertWidget_PopAlert_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudAlertWidget_PopAlert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudAlertWidget_PopAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudAlertWidget, nullptr, "PopAlert", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudAlertWidget_PopAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudAlertWidget_PopAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudAlertWidget_PopAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudAlertWidget_PopAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreHudAlertWidget_NoRegister()
	{
		return UCoreHudAlertWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudAlertWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectAlertPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__statusEffectAlertPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusEffectAlertPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scoreAlertPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__scoreAlertPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__scoreAlertPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pendingAlerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__pendingAlerts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pendingAlerts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__alerts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__alerts;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__alerts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlertContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlertContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreHudStatusEffectAlertItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreHudStatusEffectAlertItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreHudScoreAlertItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreHudScoreAlertItemClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTranslationY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationTranslationY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AnimationEasing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimationEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimationDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingAlertDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PendingAlertDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullAlertDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullAlertDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondaryAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDisplayedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDisplayedItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudAlertWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreHudAlertWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreHudAlertWidget_ClearAlerts, "ClearAlerts" }, // 2646713180
		{ &Z_Construct_UFunction_UCoreHudAlertWidget_GetAlerts, "GetAlerts" }, // 834543276
		{ &Z_Construct_UFunction_UCoreHudAlertWidget_GetPendingAlerts, "GetPendingAlerts" }, // 2546310944
		{ &Z_Construct_UFunction_UCoreHudAlertWidget_GetRemainingTime, "GetRemainingTime" }, // 2044774677
		{ &Z_Construct_UFunction_UCoreHudAlertWidget_OnClearAlertsComplete, "OnClearAlertsComplete" }, // 1845090620
		{ &Z_Construct_UFunction_UCoreHudAlertWidget_OnPopAlertComplete, "OnPopAlertComplete" }, // 180651629
		{ &Z_Construct_UFunction_UCoreHudAlertWidget_PopAlert, "PopAlert" }, // 3752795816
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreHudAlertWidget.h" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__statusEffectAlertPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__statusEffectAlertPool = { "_statusEffectAlertPool", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, _statusEffectAlertPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__statusEffectAlertPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__statusEffectAlertPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__statusEffectAlertPool_Inner = { "_statusEffectAlertPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreHudStatusEffectAlertItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__scoreAlertPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__scoreAlertPool = { "_scoreAlertPool", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, _scoreAlertPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__scoreAlertPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__scoreAlertPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__scoreAlertPool_Inner = { "_scoreAlertPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreHudScoreAlertItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__pendingAlerts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreHudAlertWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__pendingAlerts = { "_pendingAlerts", nullptr, (EPropertyFlags)0x004000800000201c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, _pendingAlerts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__pendingAlerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__pendingAlerts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__pendingAlerts_Inner = { "_pendingAlerts", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreBaseUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__alerts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreHudAlertWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__alerts = { "_alerts", nullptr, (EPropertyFlags)0x004000800000201c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, _alerts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__alerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__alerts_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__alerts_Inner = { "_alerts", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreBaseUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AlertContainer_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AlertContainer = { "AlertContainer", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, AlertContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AlertContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AlertContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudStatusEffectAlertItemClass_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudStatusEffectAlertItemClass = { "CoreHudStatusEffectAlertItemClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, CoreHudStatusEffectAlertItemClass), Z_Construct_UClass_UCoreHudStatusEffectAlertItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudStatusEffectAlertItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudStatusEffectAlertItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudScoreAlertItemClass_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudScoreAlertItemClass = { "CoreHudScoreAlertItemClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, CoreHudScoreAlertItemClass), Z_Construct_UClass_UCoreHudScoreAlertItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudScoreAlertItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudScoreAlertItemClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationTranslationY_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationTranslationY = { "AnimationTranslationY", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, AnimationTranslationY), METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationTranslationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationTranslationY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationEasing_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationEasing = { "AnimationEasing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, AnimationEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationEasing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationDuration_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationDuration = { "AnimationDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, AnimationDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_PendingAlertDuration_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_PendingAlertDuration = { "PendingAlertDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, PendingAlertDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_PendingAlertDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_PendingAlertDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_FullAlertDuration_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_FullAlertDuration = { "FullAlertDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, FullAlertDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_FullAlertDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_FullAlertDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_SecondaryAlpha_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_SecondaryAlpha = { "SecondaryAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, SecondaryAlpha), METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_SecondaryAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_SecondaryAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_MaxDisplayedItems_MetaData[] = {
		{ "Category", "CoreHudAlertWidget" },
		{ "ModuleRelativePath", "Public/CoreHudAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_MaxDisplayedItems = { "MaxDisplayedItems", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreHudAlertWidget, MaxDisplayedItems), METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_MaxDisplayedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_MaxDisplayedItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreHudAlertWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__statusEffectAlertPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__statusEffectAlertPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__scoreAlertPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__scoreAlertPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__pendingAlerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__pendingAlerts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__alerts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp__alerts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AlertContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudStatusEffectAlertItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_CoreHudScoreAlertItemClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationTranslationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_AnimationDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_PendingAlertDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_FullAlertDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_SecondaryAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreHudAlertWidget_Statics::NewProp_MaxDisplayedItems,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHudAlertViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreHudAlertWidget, IHudAlertViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudAlertWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudAlertWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudAlertWidget_Statics::ClassParams = {
		&UCoreHudAlertWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreHudAlertWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudAlertWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudAlertWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudAlertWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudAlertWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudAlertWidget, 2375061269);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudAlertWidget>()
	{
		return UCoreHudAlertWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudAlertWidget(Z_Construct_UClass_UCoreHudAlertWidget, &UCoreHudAlertWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudAlertWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudAlertWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
