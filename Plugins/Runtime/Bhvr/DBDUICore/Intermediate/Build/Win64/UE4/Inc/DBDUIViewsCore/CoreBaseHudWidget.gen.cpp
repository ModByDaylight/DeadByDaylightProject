// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreBaseHudWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreBaseHudWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
// End Cross Module References
	DEFINE_FUNCTION(UCoreBaseHudWidget::execPlayFocusAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFocusAnimation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBaseHudWidget::execShouldPlayFocusAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldPlayFocusAnimation_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UCoreBaseHudWidget_PlayFocusAnimation = FName(TEXT("PlayFocusAnimation"));
	void UCoreBaseHudWidget::PlayFocusAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreBaseHudWidget_PlayFocusAnimation),NULL);
	}
	static FName NAME_UCoreBaseHudWidget_ShouldPlayFocusAnimation = FName(TEXT("ShouldPlayFocusAnimation"));
	bool UCoreBaseHudWidget::ShouldPlayFocusAnimation() const
	{
		CoreBaseHudWidget_eventShouldPlayFocusAnimation_Parms Parms;
		const_cast<UCoreBaseHudWidget*>(this)->ProcessEvent(FindFunctionChecked(NAME_UCoreBaseHudWidget_ShouldPlayFocusAnimation),&Parms);
		return !!Parms.ReturnValue;
	}
	void UCoreBaseHudWidget::StaticRegisterNativesUCoreBaseHudWidget()
	{
		UClass* Class = UCoreBaseHudWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayFocusAnimation", &UCoreBaseHudWidget::execPlayFocusAnimation },
			{ "ShouldPlayFocusAnimation", &UCoreBaseHudWidget::execShouldPlayFocusAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreBaseHudWidget_PlayFocusAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseHudWidget_PlayFocusAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseHudWidget_PlayFocusAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseHudWidget, nullptr, "PlayFocusAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseHudWidget_PlayFocusAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseHudWidget_PlayFocusAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseHudWidget_PlayFocusAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseHudWidget_PlayFocusAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreBaseHudWidget_eventShouldPlayFocusAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreBaseHudWidget_eventShouldPlayFocusAnimation_Parms), &Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseHudWidget, nullptr, "ShouldPlayFocusAnimation", nullptr, nullptr, sizeof(CoreBaseHudWidget_eventShouldPlayFocusAnimation_Parms), Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreBaseHudWidget_NoRegister()
	{
		return UCoreBaseHudWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreBaseHudWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAnimationMinOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAnimationMinOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAnimationMaxOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAnimationMaxOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAnimationEasing_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FocusAnimationEasing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FocusAnimationEasing_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAnimationDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAnimationDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusAnimationDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FocusAnimationDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreBaseHudWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreBaseHudWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreBaseHudWidget_PlayFocusAnimation, "PlayFocusAnimation" }, // 4001417926
		{ &Z_Construct_UFunction_UCoreBaseHudWidget_ShouldPlayFocusAnimation, "ShouldPlayFocusAnimation" }, // 61239404
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseHudWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreBaseHudWidget.h" },
		{ "ModuleRelativePath", "Public/CoreBaseHudWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMinOpacity_MetaData[] = {
		{ "Category", "CoreBaseHudWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMinOpacity = { "FocusAnimationMinOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationMinOpacity), METADATA_PARAMS(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMinOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMinOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMaxOpacity_MetaData[] = {
		{ "Category", "CoreBaseHudWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMaxOpacity = { "FocusAnimationMaxOpacity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationMaxOpacity), METADATA_PARAMS(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMaxOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMaxOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationEasing_MetaData[] = {
		{ "Category", "CoreBaseHudWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationEasing = { "FocusAnimationEasing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationEasing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationEasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationEasing_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationEasing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDelay_MetaData[] = {
		{ "Category", "CoreBaseHudWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDelay = { "FocusAnimationDelay", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationDelay), METADATA_PARAMS(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDuration_MetaData[] = {
		{ "Category", "CoreBaseHudWidget" },
		{ "ModuleRelativePath", "Public/CoreBaseHudWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDuration = { "FocusAnimationDuration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseHudWidget, FocusAnimationDuration), METADATA_PARAMS(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreBaseHudWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMinOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationMaxOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationEasing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationEasing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseHudWidget_Statics::NewProp_FocusAnimationDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreBaseHudWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreBaseHudWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreBaseHudWidget_Statics::ClassParams = {
		&UCoreBaseHudWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreBaseHudWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseHudWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreBaseHudWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseHudWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreBaseHudWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreBaseHudWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreBaseHudWidget, 3551918574);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreBaseHudWidget>()
	{
		return UCoreBaseHudWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreBaseHudWidget(Z_Construct_UClass_UCoreBaseHudWidget, &UCoreBaseHudWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreBaseHudWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreBaseHudWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
