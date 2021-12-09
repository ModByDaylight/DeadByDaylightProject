// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreOnboardingTutorialButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnboardingTutorialButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWrapperWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore, nullptr, "CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCoreOnboardingTutorialButtonWidget::execIsInUnavailableStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInUnavailableStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingTutorialButtonWidget::execOnRewardClicked)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardClicked(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingTutorialButtonWidget::execOnRewardPressed)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardPressed(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingTutorialButtonWidget::execOnRewardReleased)
	{
		P_GET_OBJECT(UCoreButtonWidget,Z_Param_buttonTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRewardReleased(Z_Param_buttonTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreOnboardingTutorialButtonWidget::execSetVisual)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisual();
		P_NATIVE_END;
	}
	static FName NAME_UCoreOnboardingTutorialButtonWidget_SetData = FName(TEXT("SetData"));
	void UCoreOnboardingTutorialButtonWidget::SetData(FOnboardingTutorialButtonViewData const& NewViewData, bool isRefreshingWithAnimation)
	{
		CoreOnboardingTutorialButtonWidget_eventSetData_Parms Parms;
		Parms.NewViewData=NewViewData;
		Parms.isRefreshingWithAnimation=isRefreshingWithAnimation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnboardingTutorialButtonWidget_SetData),&Parms);
	}
	static FName NAME_UCoreOnboardingTutorialButtonWidget_SetUIEnabled = FName(TEXT("SetUIEnabled"));
	void UCoreOnboardingTutorialButtonWidget::SetUIEnabled(bool enabled)
	{
		CoreOnboardingTutorialButtonWidget_eventSetUIEnabled_Parms Parms;
		Parms.enabled=enabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnboardingTutorialButtonWidget_SetUIEnabled),&Parms);
	}
	void UCoreOnboardingTutorialButtonWidget::StaticRegisterNativesUCoreOnboardingTutorialButtonWidget()
	{
		UClass* Class = UCoreOnboardingTutorialButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInUnavailableStep", &UCoreOnboardingTutorialButtonWidget::execIsInUnavailableStep },
			{ "OnRewardClicked", &UCoreOnboardingTutorialButtonWidget::execOnRewardClicked },
			{ "OnRewardPressed", &UCoreOnboardingTutorialButtonWidget::execOnRewardPressed },
			{ "OnRewardReleased", &UCoreOnboardingTutorialButtonWidget::execOnRewardReleased },
			{ "SetVisual", &UCoreOnboardingTutorialButtonWidget::execSetVisual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics
	{
		struct CoreOnboardingTutorialButtonWidget_eventIsInUnavailableStep_Parms
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
	void Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreOnboardingTutorialButtonWidget_eventIsInUnavailableStep_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreOnboardingTutorialButtonWidget_eventIsInUnavailableStep_Parms), &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget, nullptr, "IsInUnavailableStep", nullptr, nullptr, sizeof(CoreOnboardingTutorialButtonWidget_eventIsInUnavailableStep_Parms), Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics
	{
		struct CoreOnboardingTutorialButtonWidget_eventOnRewardClicked_Parms
		{
			UCoreButtonWidget* buttonTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingTutorialButtonWidget_eventOnRewardClicked_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget, nullptr, "OnRewardClicked", nullptr, nullptr, sizeof(CoreOnboardingTutorialButtonWidget_eventOnRewardClicked_Parms), Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics
	{
		struct CoreOnboardingTutorialButtonWidget_eventOnRewardPressed_Parms
		{
			UCoreButtonWidget* buttonTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingTutorialButtonWidget_eventOnRewardPressed_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget, nullptr, "OnRewardPressed", nullptr, nullptr, sizeof(CoreOnboardingTutorialButtonWidget_eventOnRewardPressed_Parms), Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics
	{
		struct CoreOnboardingTutorialButtonWidget_eventOnRewardReleased_Parms
		{
			UCoreButtonWidget* buttonTarget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_buttonTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_buttonTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingTutorialButtonWidget_eventOnRewardReleased_Parms, buttonTarget), Z_Construct_UClass_UCoreButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget, nullptr, "OnRewardReleased", nullptr, nullptr, sizeof(CoreOnboardingTutorialButtonWidget_eventOnRewardReleased_Parms), Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics
	{
		static void NewProp_isRefreshingWithAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isRefreshingWithAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::NewProp_isRefreshingWithAnimation_SetBit(void* Obj)
	{
		((CoreOnboardingTutorialButtonWidget_eventSetData_Parms*)Obj)->isRefreshingWithAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::NewProp_isRefreshingWithAnimation = { "isRefreshingWithAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreOnboardingTutorialButtonWidget_eventSetData_Parms), &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::NewProp_isRefreshingWithAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::NewProp_NewViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::NewProp_NewViewData = { "NewViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingTutorialButtonWidget_eventSetData_Parms, NewViewData), Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::NewProp_NewViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::NewProp_NewViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::NewProp_isRefreshingWithAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::NewProp_NewViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreOnboardingTutorialButtonWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((CoreOnboardingTutorialButtonWidget_eventSetUIEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreOnboardingTutorialButtonWidget_eventSetUIEnabled_Parms), &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget, nullptr, "SetUIEnabled", nullptr, nullptr, sizeof(CoreOnboardingTutorialButtonWidget_eventSetUIEnabled_Parms), Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetVisual_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget, nullptr, "SetVisual", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_NoRegister()
	{
		return UCoreOnboardingTutorialButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardWrappers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RewardWrappers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardWrappers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompletedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoleIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardsText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardsText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnavailablePressedSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnavailablePressedSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnavailablePressedSfxName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnavailablePressedSfxName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetDataAnimationCompleteDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetDataAnimationCompleteDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_IsInUnavailableStep, "IsInUnavailableStep" }, // 4026213501
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardClicked, "OnRewardClicked" }, // 609008110
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardPressed, "OnRewardPressed" }, // 2335019310
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_OnRewardReleased, "OnRewardReleased" }, // 1497373342
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetData, "SetData" }, // 1860252497
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetUIEnabled, "SetUIEnabled" }, // 630097517
		{ &Z_Construct_UFunction_UCoreOnboardingTutorialButtonWidget_SetVisual, "SetVisual" }, // 3643275753
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreOnboardingTutorialButtonWidget.h" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_ViewData_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_ViewData = { "ViewData", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, ViewData), Z_Construct_UScriptStruct_FOnboardingTutorialButtonViewData, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_ViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_ViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardWrappers_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardWrappers = { "RewardWrappers", nullptr, (EPropertyFlags)0x002008800000000c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, RewardWrappers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardWrappers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardWrappers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardWrappers_Inner = { "RewardWrappers", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreRewardWrapperWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_CompletedImage_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_CompletedImage = { "CompletedImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, CompletedImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_CompletedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_CompletedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_LockedImage_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_LockedImage = { "LockedImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, LockedImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_LockedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_LockedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_StateSwitcher_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_StateSwitcher = { "StateSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, StateSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_StateSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_StateSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RoleIcon_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RoleIcon = { "RoleIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, RoleIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RoleIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RoleIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardsText_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardsText = { "RewardsText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, RewardsText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardsText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, DescriptionText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_DescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_TitleText_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, TitleText), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfx_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfx = { "UnavailablePressedSfx", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, UnavailablePressedSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfxName_MetaData[] = {
		{ "Category", "CoreOnboardingTutorialButtonWidget" },
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfxName = { "UnavailablePressedSfxName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, UnavailablePressedSfxName), METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfxName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfxName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingTutorialButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate = { "OnSetDataAnimationCompleteDelegate", nullptr, (EPropertyFlags)0x0010100000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, OnSetDataAnimationCompleteDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_ViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardWrappers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardWrappers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_CompletedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_LockedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_StateSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RoleIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_RewardsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_DescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_UnavailablePressedSfxName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::NewProp_OnSetDataAnimationCompleteDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreOnboardingTutorialButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::ClassParams = {
		&UCoreOnboardingTutorialButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreOnboardingTutorialButtonWidget, 1629721981);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreOnboardingTutorialButtonWidget>()
	{
		return UCoreOnboardingTutorialButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreOnboardingTutorialButtonWidget(Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget, &UCoreOnboardingTutorialButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreOnboardingTutorialButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreOnboardingTutorialButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
