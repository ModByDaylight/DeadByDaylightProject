// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerStatusKillerEffectWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerStatusKillerEffectWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusViewData();
// End Cross Module References
	DEFINE_FUNCTION(UCorePlayerStatusKillerEffectWidget::execClearVisual)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearVisual_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCorePlayerStatusKillerEffectWidget_ClearVisual = FName(TEXT("ClearVisual"));
	void UCorePlayerStatusKillerEffectWidget::ClearVisual()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerStatusKillerEffectWidget_ClearVisual),NULL);
	}
	static FName NAME_UCorePlayerStatusKillerEffectWidget_SetKillerData = FName(TEXT("SetKillerData"));
	void UCorePlayerStatusKillerEffectWidget::SetKillerData(FPlayerStatusViewData const& data)
	{
		CorePlayerStatusKillerEffectWidget_eventSetKillerData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerStatusKillerEffectWidget_SetKillerData),&Parms);
	}
	void UCorePlayerStatusKillerEffectWidget::StaticRegisterNativesUCorePlayerStatusKillerEffectWidget()
	{
		UClass* Class = UCorePlayerStatusKillerEffectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearVisual", &UCorePlayerStatusKillerEffectWidget::execClearVisual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_ClearVisual_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_ClearVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusKillerEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_ClearVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget, nullptr, "ClearVisual", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_ClearVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_ClearVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_ClearVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_ClearVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusKillerEffectWidget_eventSetKillerData_Parms, data), Z_Construct_UScriptStruct_FPlayerStatusViewData, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusKillerEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget, nullptr, "SetKillerData", nullptr, nullptr, sizeof(CorePlayerStatusKillerEffectWidget_eventSetKillerData_Parms), Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_NoRegister()
	{
		return UCorePlayerStatusKillerEffectWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_ClearVisual, "ClearVisual" }, // 1369266301
		{ &Z_Construct_UFunction_UCorePlayerStatusKillerEffectWidget_SetKillerData, "SetKillerData" }, // 4284499636
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorePlayerStatusKillerEffectWidget.h" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusKillerEffectWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerStatusKillerEffectWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_Statics::ClassParams = {
		&UCorePlayerStatusKillerEffectWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerStatusKillerEffectWidget, 4046225376);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerStatusKillerEffectWidget>()
	{
		return UCorePlayerStatusKillerEffectWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerStatusKillerEffectWidget(Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget, &UCorePlayerStatusKillerEffectWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerStatusKillerEffectWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerStatusKillerEffectWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
