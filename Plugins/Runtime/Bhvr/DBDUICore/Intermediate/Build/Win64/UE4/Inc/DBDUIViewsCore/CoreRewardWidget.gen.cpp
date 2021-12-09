// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreRewardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreRewardWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	static FName NAME_UCoreRewardWidget_ClearData = FName(TEXT("ClearData"));
	void UCoreRewardWidget::ClearData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreRewardWidget_ClearData),NULL);
	}
	void UCoreRewardWidget::StaticRegisterNativesUCoreRewardWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreRewardWidget, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreRewardWidget_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreRewardWidget_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreRewardWidget_NoRegister()
	{
		return UCoreRewardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreRewardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreRewardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreRewardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreRewardWidget_ClearData, "ClearData" }, // 3189845260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreRewardWidget.h" },
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon_MetaData[] = {
		{ "Category", "CoreRewardWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon = { "RewardIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreRewardWidget, RewardIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreRewardWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreRewardWidget_Statics::NewProp_RewardIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreRewardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreRewardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreRewardWidget_Statics::ClassParams = {
		&UCoreRewardWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreRewardWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreRewardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreRewardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreRewardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreRewardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreRewardWidget, 3740617091);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreRewardWidget>()
	{
		return UCoreRewardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreRewardWidget(Z_Construct_UClass_UCoreRewardWidget, &UCoreRewardWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreRewardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreRewardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
