// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreCurrencyProgressionRewardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreCurrencyProgressionRewardWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData();
// End Cross Module References
	static FName NAME_UCoreCurrencyProgressionRewardWidget_SetData = FName(TEXT("SetData"));
	void UCoreCurrencyProgressionRewardWidget::SetData(FCurrencyProgressionRewardViewData const& currencyProgressionRewardViewData)
	{
		CoreCurrencyProgressionRewardWidget_eventSetData_Parms Parms;
		Parms.currencyProgressionRewardViewData=currencyProgressionRewardViewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCurrencyProgressionRewardWidget_SetData),&Parms);
	}
	void UCoreCurrencyProgressionRewardWidget::StaticRegisterNativesUCoreCurrencyProgressionRewardWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyProgressionRewardViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_currencyProgressionRewardViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::NewProp_currencyProgressionRewardViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::NewProp_currencyProgressionRewardViewData = { "currencyProgressionRewardViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCurrencyProgressionRewardWidget_eventSetData_Parms, currencyProgressionRewardViewData), Z_Construct_UScriptStruct_FCurrencyProgressionRewardViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::NewProp_currencyProgressionRewardViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::NewProp_currencyProgressionRewardViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::NewProp_currencyProgressionRewardViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCurrencyProgressionRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreCurrencyProgressionRewardWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_NoRegister()
	{
		return UCoreCurrencyProgressionRewardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreRewardWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreCurrencyProgressionRewardWidget_SetData, "SetData" }, // 842673992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreCurrencyProgressionRewardWidget.h" },
		{ "ModuleRelativePath", "Public/CoreCurrencyProgressionRewardWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreCurrencyProgressionRewardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_Statics::ClassParams = {
		&UCoreCurrencyProgressionRewardWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreCurrencyProgressionRewardWidget, 65726004);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreCurrencyProgressionRewardWidget>()
	{
		return UCoreCurrencyProgressionRewardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreCurrencyProgressionRewardWidget(Z_Construct_UClass_UCoreCurrencyProgressionRewardWidget, &UCoreCurrencyProgressionRewardWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreCurrencyProgressionRewardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreCurrencyProgressionRewardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
