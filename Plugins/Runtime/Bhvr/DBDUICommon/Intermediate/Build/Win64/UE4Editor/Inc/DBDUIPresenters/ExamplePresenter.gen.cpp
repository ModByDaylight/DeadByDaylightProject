// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ExamplePresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExamplePresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UExamplePresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UExamplePresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UExamplePresenter::execOnButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClick();
		P_NATIVE_END;
	}
	void UExamplePresenter::StaticRegisterNativesUExamplePresenter()
	{
		UClass* Class = UExamplePresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonClick", &UExamplePresenter::execOnButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExamplePresenter_OnButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExamplePresenter_OnButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExamplePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExamplePresenter_OnButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExamplePresenter, nullptr, "OnButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExamplePresenter_OnButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExamplePresenter_OnButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExamplePresenter_OnButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExamplePresenter_OnButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExamplePresenter_NoRegister()
	{
		return UExamplePresenter::StaticClass();
	}
	struct Z_Construct_UClass_UExamplePresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExampleWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExampleWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExamplePresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExamplePresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExamplePresenter_OnButtonClick, "OnButtonClick" }, // 1116380299
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExamplePresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ExamplePresenter.h" },
		{ "ModuleRelativePath", "Public/ExamplePresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExamplePresenter_Statics::NewProp_ExampleWidgetClass_MetaData[] = {
		{ "Category", "ExamplePresenter" },
		{ "ModuleRelativePath", "Public/ExamplePresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExamplePresenter_Statics::NewProp_ExampleWidgetClass = { "ExampleWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExamplePresenter, ExampleWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UExamplePresenter_Statics::NewProp_ExampleWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExamplePresenter_Statics::NewProp_ExampleWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExamplePresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExamplePresenter_Statics::NewProp_ExampleWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExamplePresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExamplePresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExamplePresenter_Statics::ClassParams = {
		&UExamplePresenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExamplePresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExamplePresenter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExamplePresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExamplePresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExamplePresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExamplePresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExamplePresenter, 3772967673);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UExamplePresenter>()
	{
		return UExamplePresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExamplePresenter(Z_Construct_UClass_UExamplePresenter, &UExamplePresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UExamplePresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExamplePresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
