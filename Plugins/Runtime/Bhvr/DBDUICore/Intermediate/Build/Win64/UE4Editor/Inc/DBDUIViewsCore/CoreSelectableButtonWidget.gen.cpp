// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreSelectableButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSelectableButtonWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister();
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics
	{
		struct _Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedAgainDelegate_Parms
		{
			UCoreSelectableButtonWidget* buttonTarget;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedAgainDelegate_Parms, buttonTarget), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSelectableButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore, nullptr, "CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedAgainDelegate_Parms), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedChangedDelegate_Parms
		{
			UCoreSelectableButtonWidget* buttonTarget;
			bool isSelected;
		};
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
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
	void Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((_Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedChangedDelegate_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedChangedDelegate_Parms), &Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::NewProp_buttonTarget = { "buttonTarget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedChangedDelegate_Parms, buttonTarget), Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::NewProp_buttonTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::NewProp_isSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::NewProp_buttonTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSelectableButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore, nullptr, "CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedChangedDelegate_Parms), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UCoreSelectableButtonWidget::execIsSelectable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelectable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSelectableButtonWidget::execIsSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreSelectableButtonWidget::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_NewIsSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_NewIsSelected);
		P_NATIVE_END;
	}
	static FName NAME_UCoreSelectableButtonWidget_OnSelectedChanged = FName(TEXT("OnSelectedChanged"));
	void UCoreSelectableButtonWidget::OnSelectedChanged(bool NewIsSelected)
	{
		CoreSelectableButtonWidget_eventOnSelectedChanged_Parms Parms;
		Parms.NewIsSelected=NewIsSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreSelectableButtonWidget_OnSelectedChanged),&Parms);
	}
	void UCoreSelectableButtonWidget::StaticRegisterNativesUCoreSelectableButtonWidget()
	{
		UClass* Class = UCoreSelectableButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsSelectable", &UCoreSelectableButtonWidget::execIsSelectable },
			{ "IsSelected", &UCoreSelectableButtonWidget::execIsSelected },
			{ "SetSelected", &UCoreSelectableButtonWidget::execSetSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics
	{
		struct CoreSelectableButtonWidget_eventIsSelectable_Parms
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
	void Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreSelectableButtonWidget_eventIsSelectable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreSelectableButtonWidget_eventIsSelectable_Parms), &Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSelectableButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSelectableButtonWidget, nullptr, "IsSelectable", nullptr, nullptr, sizeof(CoreSelectableButtonWidget_eventIsSelectable_Parms), Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics
	{
		struct CoreSelectableButtonWidget_eventIsSelected_Parms
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
	void Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreSelectableButtonWidget_eventIsSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreSelectableButtonWidget_eventIsSelected_Parms), &Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSelectableButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSelectableButtonWidget, nullptr, "IsSelected", nullptr, nullptr, sizeof(CoreSelectableButtonWidget_eventIsSelected_Parms), Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics
	{
		static void NewProp_NewIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::NewProp_NewIsSelected_SetBit(void* Obj)
	{
		((CoreSelectableButtonWidget_eventOnSelectedChanged_Parms*)Obj)->NewIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::NewProp_NewIsSelected = { "NewIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreSelectableButtonWidget_eventOnSelectedChanged_Parms), &Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::NewProp_NewIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::NewProp_NewIsSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSelectableButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSelectableButtonWidget, nullptr, "OnSelectedChanged", nullptr, nullptr, sizeof(CoreSelectableButtonWidget_eventOnSelectedChanged_Parms), Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics
	{
		struct CoreSelectableButtonWidget_eventSetSelected_Parms
		{
			bool NewIsSelected;
		};
		static void NewProp_NewIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewIsSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::NewProp_NewIsSelected_SetBit(void* Obj)
	{
		((CoreSelectableButtonWidget_eventSetSelected_Parms*)Obj)->NewIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::NewProp_NewIsSelected = { "NewIsSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreSelectableButtonWidget_eventSetSelected_Parms), &Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::NewProp_NewIsSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::NewProp_NewIsSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSelectableButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSelectableButtonWidget, nullptr, "SetSelected", nullptr, nullptr, sizeof(CoreSelectableButtonWidget_eventSetSelected_Parms), Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreSelectableButtonWidget_NoRegister()
	{
		return UCoreSelectableButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreSelectableButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectedAgainDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedAgainDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectedChangedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedChangedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelectable, "IsSelectable" }, // 113209749
		{ &Z_Construct_UFunction_UCoreSelectableButtonWidget_IsSelected, "IsSelected" }, // 1972828545
		{ &Z_Construct_UFunction_UCoreSelectableButtonWidget_OnSelectedChanged, "OnSelectedChanged" }, // 3896207389
		{ &Z_Construct_UFunction_UCoreSelectableButtonWidget_SetSelected, "SetSelected" }, // 410481608
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreSelectableButtonWidget.h" },
		{ "ModuleRelativePath", "Public/CoreSelectableButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedAgainDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreSelectableButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedAgainDelegate = { "OnSelectedAgainDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSelectableButtonWidget, OnSelectedAgainDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedAgainDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedAgainDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedAgainDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreSelectableButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedChangedDelegate = { "OnSelectedChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSelectableButtonWidget, OnSelectedChangedDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreSelectableButtonWidgetOnSelectedChangedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedChangedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedAgainDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::NewProp_OnSelectedChangedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreSelectableButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::ClassParams = {
		&UCoreSelectableButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreSelectableButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreSelectableButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreSelectableButtonWidget, 722236290);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreSelectableButtonWidget>()
	{
		return UCoreSelectableButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreSelectableButtonWidget(Z_Construct_UClass_UCoreSelectableButtonWidget, &UCoreSelectableButtonWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreSelectableButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreSelectableButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
