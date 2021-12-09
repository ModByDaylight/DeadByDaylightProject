// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/OnboardingTutorialSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingTutorialSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UOnboardingTutorialSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UOnboardingTutorialSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOnboardingTutorialViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UOnboardingTutorialSubPresenter::execOnSelectTutorial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stepId);
		P_GET_PROPERTY(FStrProperty,Z_Param_tutorialId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectTutorial(Z_Param_stepId,Z_Param_tutorialId);
		P_NATIVE_END;
	}
	void UOnboardingTutorialSubPresenter::StaticRegisterNativesUOnboardingTutorialSubPresenter()
	{
		UClass* Class = UOnboardingTutorialSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSelectTutorial", &UOnboardingTutorialSubPresenter::execOnSelectTutorial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics
	{
		struct OnboardingTutorialSubPresenter_eventOnSelectTutorial_Parms
		{
			FString stepId;
			FString tutorialId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tutorialId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_tutorialId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stepId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stepId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_tutorialId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_tutorialId = { "tutorialId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingTutorialSubPresenter_eventOnSelectTutorial_Parms, tutorialId), METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_tutorialId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_tutorialId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_stepId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_stepId = { "stepId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingTutorialSubPresenter_eventOnSelectTutorial_Parms, stepId), METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_stepId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_stepId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_tutorialId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::NewProp_stepId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingTutorialSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingTutorialSubPresenter, nullptr, "OnSelectTutorial", nullptr, nullptr, sizeof(OnboardingTutorialSubPresenter_eventOnSelectTutorial_Parms), Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnboardingTutorialSubPresenter_NoRegister()
	{
		return UOnboardingTutorialSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onboardingTutorialWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__onboardingTutorialWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnboardingTutorialSubPresenter_OnSelectTutorial, "OnSelectTutorial" }, // 20866294
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnboardingTutorialSubPresenter.h" },
		{ "ModuleRelativePath", "Public/OnboardingTutorialSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::NewProp__onboardingTutorialWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/OnboardingTutorialSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::NewProp__onboardingTutorialWidget = { "_onboardingTutorialWidget", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnboardingTutorialSubPresenter, _onboardingTutorialWidget), Z_Construct_UClass_UOnboardingTutorialViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::NewProp__onboardingTutorialWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::NewProp__onboardingTutorialWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::NewProp__onboardingTutorialWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnboardingTutorialSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::ClassParams = {
		&UOnboardingTutorialSubPresenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnboardingTutorialSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnboardingTutorialSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnboardingTutorialSubPresenter, 742641411);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UOnboardingTutorialSubPresenter>()
	{
		return UOnboardingTutorialSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnboardingTutorialSubPresenter(Z_Construct_UClass_UOnboardingTutorialSubPresenter, &UOnboardingTutorialSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UOnboardingTutorialSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnboardingTutorialSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
