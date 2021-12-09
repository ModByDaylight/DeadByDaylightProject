// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreEndGameCollapseBarWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreEndGameCollapseBarWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreEndGameCollapseBarWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreEndGameCollapseBarWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEndGameCollapseBarViewInterface_NoRegister();
// End Cross Module References
	static FName NAME_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation = FName(TEXT("PlayToZeroAnimation"));
	void UCoreEndGameCollapseBarWidget::PlayToZeroAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation),NULL);
	}
	static FName NAME_UCoreEndGameCollapseBarWidget_UpdateBarProgression = FName(TEXT("UpdateBarProgression"));
	void UCoreEndGameCollapseBarWidget::UpdateBarProgression(const float progress)
	{
		CoreEndGameCollapseBarWidget_eventUpdateBarProgression_Parms Parms;
		Parms.progress=progress;
		ProcessEvent(FindFunctionChecked(NAME_UCoreEndGameCollapseBarWidget_UpdateBarProgression),&Parms);
	}
	void UCoreEndGameCollapseBarWidget::StaticRegisterNativesUCoreEndGameCollapseBarWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreEndGameCollapseBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreEndGameCollapseBarWidget, nullptr, "PlayToZeroAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::NewProp_progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreEndGameCollapseBarWidget_eventUpdateBarProgression_Parms, progress), METADATA_PARAMS(Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::NewProp_progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::NewProp_progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreEndGameCollapseBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreEndGameCollapseBarWidget, nullptr, "UpdateBarProgression", nullptr, nullptr, sizeof(CoreEndGameCollapseBarWidget_eventUpdateBarProgression_Parms), Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreEndGameCollapseBarWidget_NoRegister()
	{
		return UCoreEndGameCollapseBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__progressBarInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__progressBarInterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_PlayToZeroAnimation, "PlayToZeroAnimation" }, // 3789028136
		{ &Z_Construct_UFunction_UCoreEndGameCollapseBarWidget_UpdateBarProgression, "UpdateBarProgression" }, // 1458424325
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreEndGameCollapseBarWidget.h" },
		{ "ModuleRelativePath", "Public/CoreEndGameCollapseBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::NewProp__progressBarInterpSpeed_MetaData[] = {
		{ "Category", "CoreEndGameCollapseBarWidget" },
		{ "ModuleRelativePath", "Public/CoreEndGameCollapseBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::NewProp__progressBarInterpSpeed = { "_progressBarInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreEndGameCollapseBarWidget, _progressBarInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::NewProp__progressBarInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::NewProp__progressBarInterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::NewProp__progressBarInterpSpeed,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEndGameCollapseBarViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreEndGameCollapseBarWidget, IEndGameCollapseBarViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreEndGameCollapseBarWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::ClassParams = {
		&UCoreEndGameCollapseBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreEndGameCollapseBarWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreEndGameCollapseBarWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreEndGameCollapseBarWidget, 1797023103);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreEndGameCollapseBarWidget>()
	{
		return UCoreEndGameCollapseBarWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreEndGameCollapseBarWidget(Z_Construct_UClass_UCoreEndGameCollapseBarWidget, &UCoreEndGameCollapseBarWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreEndGameCollapseBarWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreEndGameCollapseBarWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
