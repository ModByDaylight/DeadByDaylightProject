// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreInteractionPromptWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreInteractionPromptWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInteractionPromptWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInteractionPromptWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionPromptViewData();
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UDBDTextManager_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScaleBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreInteractionPromptWidget::execOnLargeTextSettingsChanged)
	{
		P_GET_UBOOL(Z_Param_isLargeTextEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLargeTextSettingsChanged(Z_Param_isLargeTextEnabled);
		P_NATIVE_END;
	}
	static FName NAME_UCoreInteractionPromptWidget_ClearData = FName(TEXT("ClearData"));
	void UCoreInteractionPromptWidget::ClearData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreInteractionPromptWidget_ClearData),NULL);
	}
	static FName NAME_UCoreInteractionPromptWidget_SetData = FName(TEXT("SetData"));
	void UCoreInteractionPromptWidget::SetData(FInteractionPromptViewData const& data)
	{
		CoreInteractionPromptWidget_eventSetData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreInteractionPromptWidget_SetData),&Parms);
	}
	void UCoreInteractionPromptWidget::StaticRegisterNativesUCoreInteractionPromptWidget()
	{
		UClass* Class = UCoreInteractionPromptWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLargeTextSettingsChanged", &UCoreInteractionPromptWidget::execOnLargeTextSettingsChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptWidget_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptWidget_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptWidget_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptWidget, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptWidget_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptWidget_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptWidget_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptWidget_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics
	{
		struct CoreInteractionPromptWidget_eventOnLargeTextSettingsChanged_Parms
		{
			bool isLargeTextEnabled;
		};
		static void NewProp_isLargeTextEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLargeTextEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::NewProp_isLargeTextEnabled_SetBit(void* Obj)
	{
		((CoreInteractionPromptWidget_eventOnLargeTextSettingsChanged_Parms*)Obj)->isLargeTextEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::NewProp_isLargeTextEnabled = { "isLargeTextEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreInteractionPromptWidget_eventOnLargeTextSettingsChanged_Parms), &Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::NewProp_isLargeTextEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::NewProp_isLargeTextEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptWidget, nullptr, "OnLargeTextSettingsChanged", nullptr, nullptr, sizeof(CoreInteractionPromptWidget_eventOnLargeTextSettingsChanged_Parms), Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInteractionPromptWidget_eventSetData_Parms, data), Z_Construct_UScriptStruct_FInteractionPromptViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreInteractionPromptWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreInteractionPromptWidget_NoRegister()
	{
		return UCoreInteractionPromptWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreInteractionPromptWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__textManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__textManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeTextScaleBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LargeTextScaleBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeTextScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LargeTextScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreInteractionPromptWidget_ClearData, "ClearData" }, // 3824353838
		{ &Z_Construct_UFunction_UCoreInteractionPromptWidget_OnLargeTextSettingsChanged, "OnLargeTextSettingsChanged" }, // 364387796
		{ &Z_Construct_UFunction_UCoreInteractionPromptWidget_SetData, "SetData" }, // 3174749407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreInteractionPromptWidget.h" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp__textManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp__textManager = { "_textManager", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptWidget, _textManager), Z_Construct_UClass_UDBDTextManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp__textManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp__textManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_ActionTB_MetaData[] = {
		{ "Category", "CoreInteractionPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_ActionTB = { "ActionTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptWidget, ActionTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_ActionTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_ActionTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScaleBox_MetaData[] = {
		{ "Category", "CoreInteractionPromptWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScaleBox = { "LargeTextScaleBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptWidget, LargeTextScaleBox), Z_Construct_UClass_UScaleBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScaleBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScaleBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScale_MetaData[] = {
		{ "Category", "CoreInteractionPromptWidget" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScale = { "LargeTextScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptWidget, LargeTextScale), METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp__textManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_ActionTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScaleBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::NewProp_LargeTextScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreInteractionPromptWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::ClassParams = {
		&UCoreInteractionPromptWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreInteractionPromptWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreInteractionPromptWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreInteractionPromptWidget, 3300693091);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreInteractionPromptWidget>()
	{
		return UCoreInteractionPromptWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreInteractionPromptWidget(Z_Construct_UClass_UCoreInteractionPromptWidget, &UCoreInteractionPromptWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreInteractionPromptWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreInteractionPromptWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
