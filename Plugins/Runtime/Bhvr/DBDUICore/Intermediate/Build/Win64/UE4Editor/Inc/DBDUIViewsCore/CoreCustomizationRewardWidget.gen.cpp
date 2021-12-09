// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreCustomizationRewardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreCustomizationRewardWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCustomizationRewardWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCustomizationRewardWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationRewardViewData();
// End Cross Module References
	static FName NAME_UCoreCustomizationRewardWidget_SetData = FName(TEXT("SetData"));
	void UCoreCustomizationRewardWidget::SetData(FCustomizationRewardViewData const& customizationRewardViewData)
	{
		CoreCustomizationRewardWidget_eventSetData_Parms Parms;
		Parms.customizationRewardViewData=customizationRewardViewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCustomizationRewardWidget_SetData),&Parms);
	}
	void UCoreCustomizationRewardWidget::StaticRegisterNativesUCoreCustomizationRewardWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationRewardViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_customizationRewardViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::NewProp_customizationRewardViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::NewProp_customizationRewardViewData = { "customizationRewardViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCustomizationRewardWidget_eventSetData_Parms, customizationRewardViewData), Z_Construct_UScriptStruct_FCustomizationRewardViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::NewProp_customizationRewardViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::NewProp_customizationRewardViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::NewProp_customizationRewardViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCustomizationRewardWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreCustomizationRewardWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreCustomizationRewardWidget_NoRegister()
	{
		return UCoreCustomizationRewardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreRewardWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreCustomizationRewardWidget_SetData, "SetData" }, // 420499611
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreCustomizationRewardWidget.h" },
		{ "ModuleRelativePath", "Public/CoreCustomizationRewardWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreCustomizationRewardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::ClassParams = {
		&UCoreCustomizationRewardWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreCustomizationRewardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreCustomizationRewardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreCustomizationRewardWidget, 3771769154);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreCustomizationRewardWidget>()
	{
		return UCoreCustomizationRewardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreCustomizationRewardWidget(Z_Construct_UClass_UCoreCustomizationRewardWidget, &UCoreCustomizationRewardWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreCustomizationRewardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreCustomizationRewardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
