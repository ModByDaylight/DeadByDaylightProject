// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/MobileBaseUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobileBaseUserWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMobileBaseUserWidget::execFinishTutorialVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishTutorialVisuals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileBaseUserWidget::execIsInTutorialState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInTutorialState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileBaseUserWidget::execPropagateOnHighlightWidgetClicked)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_onBoardingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PropagateOnHighlightWidgetClicked(Z_Param_onBoardingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileBaseUserWidget::execTriggerTutorialVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerTutorialVisuals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileBaseUserWidget::execTryBroadcastOnHighlightWidgetClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryBroadcastOnHighlightWidgetClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMobileBaseUserWidget::execTutorialAnimationFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TutorialAnimationFinished();
		P_NATIVE_END;
	}
	static FName NAME_UMobileBaseUserWidget_OnSynchronizeProperties = FName(TEXT("OnSynchronizeProperties"));
	void UMobileBaseUserWidget::OnSynchronizeProperties()
	{
		ProcessEvent(FindFunctionChecked(NAME_UMobileBaseUserWidget_OnSynchronizeProperties),NULL);
	}
	void UMobileBaseUserWidget::StaticRegisterNativesUMobileBaseUserWidget()
	{
		UClass* Class = UMobileBaseUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishTutorialVisuals", &UMobileBaseUserWidget::execFinishTutorialVisuals },
			{ "IsInTutorialState", &UMobileBaseUserWidget::execIsInTutorialState },
			{ "PropagateOnHighlightWidgetClicked", &UMobileBaseUserWidget::execPropagateOnHighlightWidgetClicked },
			{ "TriggerTutorialVisuals", &UMobileBaseUserWidget::execTriggerTutorialVisuals },
			{ "TryBroadcastOnHighlightWidgetClicked", &UMobileBaseUserWidget::execTryBroadcastOnHighlightWidgetClicked },
			{ "TutorialAnimationFinished", &UMobileBaseUserWidget::execTutorialAnimationFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMobileBaseUserWidget_FinishTutorialVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileBaseUserWidget_FinishTutorialVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileBaseUserWidget_FinishTutorialVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileBaseUserWidget, nullptr, "FinishTutorialVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileBaseUserWidget_FinishTutorialVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_FinishTutorialVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileBaseUserWidget_FinishTutorialVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileBaseUserWidget_FinishTutorialVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics
	{
		struct MobileBaseUserWidget_eventIsInTutorialState_Parms
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
	void Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MobileBaseUserWidget_eventIsInTutorialState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MobileBaseUserWidget_eventIsInTutorialState_Parms), &Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileBaseUserWidget, nullptr, "IsInTutorialState", nullptr, nullptr, sizeof(MobileBaseUserWidget_eventIsInTutorialState_Parms), Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileBaseUserWidget_OnSynchronizeProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileBaseUserWidget_OnSynchronizeProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileBaseUserWidget_OnSynchronizeProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileBaseUserWidget, nullptr, "OnSynchronizeProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileBaseUserWidget_OnSynchronizeProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_OnSynchronizeProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileBaseUserWidget_OnSynchronizeProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileBaseUserWidget_OnSynchronizeProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics
	{
		struct MobileBaseUserWidget_eventPropagateOnHighlightWidgetClicked_Parms
		{
			FName onBoardingID;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_onBoardingID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_onBoardingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::NewProp_onBoardingID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::NewProp_onBoardingID = { "onBoardingID", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MobileBaseUserWidget_eventPropagateOnHighlightWidgetClicked_Parms, onBoardingID), METADATA_PARAMS(Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::NewProp_onBoardingID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::NewProp_onBoardingID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::NewProp_onBoardingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileBaseUserWidget, nullptr, "PropagateOnHighlightWidgetClicked", nullptr, nullptr, sizeof(MobileBaseUserWidget_eventPropagateOnHighlightWidgetClicked_Parms), Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileBaseUserWidget_TriggerTutorialVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileBaseUserWidget_TriggerTutorialVisuals_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileBaseUserWidget_TriggerTutorialVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileBaseUserWidget, nullptr, "TriggerTutorialVisuals", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileBaseUserWidget_TriggerTutorialVisuals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_TriggerTutorialVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileBaseUserWidget_TriggerTutorialVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileBaseUserWidget_TriggerTutorialVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileBaseUserWidget, nullptr, "TryBroadcastOnHighlightWidgetClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMobileBaseUserWidget_TutorialAnimationFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMobileBaseUserWidget_TutorialAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMobileBaseUserWidget_TutorialAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMobileBaseUserWidget, nullptr, "TutorialAnimationFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMobileBaseUserWidget_TutorialAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMobileBaseUserWidget_TutorialAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMobileBaseUserWidget_TutorialAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMobileBaseUserWidget_TutorialAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMobileBaseUserWidget_NoRegister()
	{
		return UMobileBaseUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMobileBaseUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutorialNumberOfLoops_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__tutorialNumberOfLoops;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tutorialAnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__tutorialAnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighlightWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HighlightWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMobileBaseUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMobileBaseUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMobileBaseUserWidget_FinishTutorialVisuals, "FinishTutorialVisuals" }, // 2581540441
		{ &Z_Construct_UFunction_UMobileBaseUserWidget_IsInTutorialState, "IsInTutorialState" }, // 2261212723
		{ &Z_Construct_UFunction_UMobileBaseUserWidget_OnSynchronizeProperties, "OnSynchronizeProperties" }, // 1874737279
		{ &Z_Construct_UFunction_UMobileBaseUserWidget_PropagateOnHighlightWidgetClicked, "PropagateOnHighlightWidgetClicked" }, // 3126783587
		{ &Z_Construct_UFunction_UMobileBaseUserWidget_TriggerTutorialVisuals, "TriggerTutorialVisuals" }, // 2926902177
		{ &Z_Construct_UFunction_UMobileBaseUserWidget_TryBroadcastOnHighlightWidgetClicked, "TryBroadcastOnHighlightWidgetClicked" }, // 1142308340
		{ &Z_Construct_UFunction_UMobileBaseUserWidget_TutorialAnimationFinished, "TutorialAnimationFinished" }, // 5154576
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMobileBaseUserWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MobileBaseUserWidget.h" },
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialNumberOfLoops_MetaData[] = {
		{ "Category", "MobileBaseUserWidget" },
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialNumberOfLoops = { "_tutorialNumberOfLoops", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMobileBaseUserWidget, _tutorialNumberOfLoops), METADATA_PARAMS(Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialNumberOfLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialNumberOfLoops_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialAnimationName_MetaData[] = {
		{ "Category", "MobileBaseUserWidget" },
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialAnimationName = { "_tutorialAnimationName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMobileBaseUserWidget, _tutorialAnimationName), METADATA_PARAMS(Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialAnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp_HighlightWidget_MetaData[] = {
		{ "Category", "MobileBaseUserWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MobileBaseUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp_HighlightWidget = { "HighlightWidget", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMobileBaseUserWidget, HighlightWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp_HighlightWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp_HighlightWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMobileBaseUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialNumberOfLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp__tutorialAnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMobileBaseUserWidget_Statics::NewProp_HighlightWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMobileBaseUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMobileBaseUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMobileBaseUserWidget_Statics::ClassParams = {
		&UMobileBaseUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMobileBaseUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMobileBaseUserWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMobileBaseUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMobileBaseUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMobileBaseUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMobileBaseUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMobileBaseUserWidget, 2912662685);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UMobileBaseUserWidget>()
	{
		return UMobileBaseUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMobileBaseUserWidget(Z_Construct_UClass_UMobileBaseUserWidget, &UMobileBaseUserWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UMobileBaseUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMobileBaseUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
