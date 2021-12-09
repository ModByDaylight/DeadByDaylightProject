// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreInteractionProgressWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreInteractionProgressWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInteractionProgressWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInteractionProgressWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStatusEffectIcon_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UInteractionProgressViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreInteractionProgressWidget::execSetProficiencies)
	{
		P_GET_TARRAY_REF(FStatusEffectViewData,Z_Param_Out_proficiencyDatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProficiencies(Z_Param_Out_proficiencyDatas);
		P_NATIVE_END;
	}
	void UCoreInteractionProgressWidget::StaticRegisterNativesUCoreInteractionProgressWidget()
	{
		UClass* Class = UCoreInteractionProgressWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetProficiencies", &UCoreInteractionProgressWidget::execSetProficiencies },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics
	{
		struct CoreInteractionProgressWidget_eventSetProficiencies_Parms
		{
			TArray<FStatusEffectViewData> proficiencyDatas;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_proficiencyDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_proficiencyDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_proficiencyDatas_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::NewProp_proficiencyDatas_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::NewProp_proficiencyDatas = { "proficiencyDatas", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInteractionProgressWidget_eventSetProficiencies_Parms, proficiencyDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::NewProp_proficiencyDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::NewProp_proficiencyDatas_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::NewProp_proficiencyDatas_Inner = { "proficiencyDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStatusEffectViewData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::NewProp_proficiencyDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::NewProp_proficiencyDatas_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionProgressWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionProgressWidget, nullptr, "SetProficiencies", nullptr, nullptr, sizeof(CoreInteractionProgressWidget_eventSetProficiencies_Parms), Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreInteractionProgressWidget_NoRegister()
	{
		return UCoreInteractionProgressWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreInteractionProgressWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proficiencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Proficiencies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proficiencies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreInteractionProgressWidget_SetProficiencies, "SetProficiencies" }, // 199953404
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreInteractionProgressWidget.h" },
		{ "ModuleRelativePath", "Public/CoreInteractionProgressWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::NewProp_Proficiencies_MetaData[] = {
		{ "Category", "CoreInteractionProgressWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInteractionProgressWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::NewProp_Proficiencies = { "Proficiencies", nullptr, (EPropertyFlags)0x002008800000000c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionProgressWidget, Proficiencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::NewProp_Proficiencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::NewProp_Proficiencies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::NewProp_Proficiencies_Inner = { "Proficiencies", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreStatusEffectIcon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::NewProp_Proficiencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::NewProp_Proficiencies_Inner,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractionProgressViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreInteractionProgressWidget, IInteractionProgressViewInterface), false },
			{ Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreInteractionProgressWidget, ITutorialHighlightViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreInteractionProgressWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::ClassParams = {
		&UCoreInteractionProgressWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreInteractionProgressWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreInteractionProgressWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreInteractionProgressWidget, 3287614976);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreInteractionProgressWidget>()
	{
		return UCoreInteractionProgressWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreInteractionProgressWidget(Z_Construct_UClass_UCoreInteractionProgressWidget, &UCoreInteractionProgressWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreInteractionProgressWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreInteractionProgressWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
