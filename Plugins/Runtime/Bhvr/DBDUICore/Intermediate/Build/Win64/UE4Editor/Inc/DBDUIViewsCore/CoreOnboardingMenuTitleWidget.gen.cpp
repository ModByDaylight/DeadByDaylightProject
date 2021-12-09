// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreOnboardingMenuTitleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnboardingMenuTitleWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreOnboardingMenuTitleWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static FName NAME_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle = FName(TEXT("ResetOnboardingMenuSubtitle"));
	void UCoreOnboardingMenuTitleWidget::ResetOnboardingMenuSubtitle()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle),NULL);
	}
	static FName NAME_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle = FName(TEXT("SetOnboardingMenuDoubleTitle"));
	void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuDoubleTitle(FText const& menuTitle, FText const& menuSubTitle)
	{
		CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuDoubleTitle_Parms Parms;
		Parms.menuTitle=menuTitle;
		Parms.menuSubTitle=menuSubTitle;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle),&Parms);
	}
	static FName NAME_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle = FName(TEXT("SetOnboardingMenuSubtitle"));
	void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuSubtitle(FText const& menuTitle)
	{
		CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuSubtitle_Parms Parms;
		Parms.menuTitle=menuTitle;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle),&Parms);
	}
	static FName NAME_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle = FName(TEXT("SetOnboardingMenuTitle"));
	void UCoreOnboardingMenuTitleWidget::SetOnboardingMenuTitle(FText const& menuTitle)
	{
		CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuTitle_Parms Parms;
		Parms.menuTitle=menuTitle;
		ProcessEvent(FindFunctionChecked(NAME_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle),&Parms);
	}
	void UCoreOnboardingMenuTitleWidget::StaticRegisterNativesUCoreOnboardingMenuTitleWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuTitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingMenuTitleWidget, nullptr, "ResetOnboardingMenuSubtitle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuSubTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_menuSubTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_menuTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuSubTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuSubTitle = { "menuSubTitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuDoubleTitle_Parms, menuSubTitle), METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuSubTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuSubTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuTitle = { "menuTitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuDoubleTitle_Parms, menuTitle), METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuSubTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::NewProp_menuTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuTitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingMenuTitleWidget, nullptr, "SetOnboardingMenuDoubleTitle", nullptr, nullptr, sizeof(CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuDoubleTitle_Parms), Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_menuTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::NewProp_menuTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::NewProp_menuTitle = { "menuTitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuSubtitle_Parms, menuTitle), METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::NewProp_menuTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::NewProp_menuTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::NewProp_menuTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuTitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingMenuTitleWidget, nullptr, "SetOnboardingMenuSubtitle", nullptr, nullptr, sizeof(CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuSubtitle_Parms), Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_menuTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::NewProp_menuTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::NewProp_menuTitle = { "menuTitle", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuTitle_Parms, menuTitle), METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::NewProp_menuTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::NewProp_menuTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::NewProp_menuTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuTitleWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreOnboardingMenuTitleWidget, nullptr, "SetOnboardingMenuTitle", nullptr, nullptr, sizeof(CoreOnboardingMenuTitleWidget_eventSetOnboardingMenuTitle_Parms), Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_NoRegister()
	{
		return UCoreOnboardingMenuTitleWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_ResetOnboardingMenuSubtitle, "ResetOnboardingMenuSubtitle" }, // 86748628
		{ &Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuDoubleTitle, "SetOnboardingMenuDoubleTitle" }, // 3623817633
		{ &Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuSubtitle, "SetOnboardingMenuSubtitle" }, // 4133716748
		{ &Z_Construct_UFunction_UCoreOnboardingMenuTitleWidget_SetOnboardingMenuTitle, "SetOnboardingMenuTitle" }, // 3070498895
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreOnboardingMenuTitleWidget.h" },
		{ "ModuleRelativePath", "Public/CoreOnboardingMenuTitleWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreOnboardingMenuTitleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_Statics::ClassParams = {
		&UCoreOnboardingMenuTitleWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreOnboardingMenuTitleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreOnboardingMenuTitleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreOnboardingMenuTitleWidget, 3612045094);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreOnboardingMenuTitleWidget>()
	{
		return UCoreOnboardingMenuTitleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreOnboardingMenuTitleWidget(Z_Construct_UClass_UCoreOnboardingMenuTitleWidget, &UCoreOnboardingMenuTitleWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreOnboardingMenuTitleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreOnboardingMenuTitleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
