// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreScreenIndicatorWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreScreenIndicatorWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreScreenIndicatorWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreScreenIndicatorWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FScreenIndicatorViewData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static FName NAME_UCoreScreenIndicatorWidget_ClearData = FName(TEXT("ClearData"));
	void UCoreScreenIndicatorWidget::ClearData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreScreenIndicatorWidget_ClearData),NULL);
	}
	static FName NAME_UCoreScreenIndicatorWidget_SetData = FName(TEXT("SetData"));
	void UCoreScreenIndicatorWidget::SetData(FScreenIndicatorViewData const& data)
	{
		CoreScreenIndicatorWidget_eventSetData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreScreenIndicatorWidget_SetData),&Parms);
	}
	void UCoreScreenIndicatorWidget::StaticRegisterNativesUCoreScreenIndicatorWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreScreenIndicatorWidget_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreScreenIndicatorWidget_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreScreenIndicatorWidget_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreScreenIndicatorWidget, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreScreenIndicatorWidget_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorWidget_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreScreenIndicatorWidget_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreScreenIndicatorWidget_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreScreenIndicatorWidget_eventSetData_Parms, data), Z_Construct_UScriptStruct_FScreenIndicatorViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreScreenIndicatorWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreScreenIndicatorWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreScreenIndicatorWidget_NoRegister()
	{
		return UCoreScreenIndicatorWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistanceAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistanceAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDistanceRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDistanceRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceClamping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DistanceClamping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndicatorPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndicatorPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InactiveTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreScreenIndicatorWidget_ClearData, "ClearData" }, // 3747301551
		{ &Z_Construct_UFunction_UCoreScreenIndicatorWidget_SetData, "SetData" }, // 1733995778
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreScreenIndicatorWidget.h" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceAlpha_MetaData[] = {
		{ "Category", "CoreScreenIndicatorWidget" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceAlpha = { "MinDistanceAlpha", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorWidget, MinDistanceAlpha), METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceRatio_MetaData[] = {
		{ "Category", "CoreScreenIndicatorWidget" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceRatio = { "MinDistanceRatio", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorWidget, MinDistanceRatio), METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_DistanceClamping_MetaData[] = {
		{ "Category", "CoreScreenIndicatorWidget" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_DistanceClamping = { "DistanceClamping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorWidget, DistanceClamping), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_DistanceClamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_DistanceClamping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_IndicatorPadding_MetaData[] = {
		{ "Category", "CoreScreenIndicatorWidget" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_IndicatorPadding = { "IndicatorPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorWidget, IndicatorPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_IndicatorPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_IndicatorPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_InactiveTime_MetaData[] = {
		{ "Category", "CoreScreenIndicatorWidget" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_InactiveTime = { "InactiveTime", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorWidget, InactiveTime), METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_InactiveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_InactiveTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_MinDistanceRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_DistanceClamping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_IndicatorPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::NewProp_InactiveTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreScreenIndicatorWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::ClassParams = {
		&UCoreScreenIndicatorWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreScreenIndicatorWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreScreenIndicatorWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreScreenIndicatorWidget, 1027277144);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreScreenIndicatorWidget>()
	{
		return UCoreScreenIndicatorWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreScreenIndicatorWidget(Z_Construct_UClass_UCoreScreenIndicatorWidget, &UCoreScreenIndicatorWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreScreenIndicatorWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreScreenIndicatorWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
