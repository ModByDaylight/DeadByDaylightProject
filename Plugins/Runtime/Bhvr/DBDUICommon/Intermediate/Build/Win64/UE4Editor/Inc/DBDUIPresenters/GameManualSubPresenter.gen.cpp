// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/GameManualSubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManualSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGameManualSubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UGameManualSubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHelpType();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGameManualViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameManualSubPresenter::execOnCategoryCategoryEntered)
	{
		P_GET_ENUM(EHelpType,Z_Param_categoryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCategoryCategoryEntered(EHelpType(Z_Param_categoryType));
		P_NATIVE_END;
	}
	void UGameManualSubPresenter::StaticRegisterNativesUGameManualSubPresenter()
	{
		UClass* Class = UGameManualSubPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCategoryCategoryEntered", &UGameManualSubPresenter::execOnCategoryCategoryEntered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics
	{
		struct GameManualSubPresenter_eventOnCategoryCategoryEntered_Parms
		{
			EHelpType categoryType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_categoryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_categoryType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::NewProp_categoryType = { "categoryType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManualSubPresenter_eventOnCategoryCategoryEntered_Parms, categoryType), Z_Construct_UEnum_DBDSharedTypes_EHelpType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::NewProp_categoryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::NewProp_categoryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::NewProp_categoryType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManualSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManualSubPresenter, nullptr, "OnCategoryCategoryEntered", nullptr, nullptr, sizeof(GameManualSubPresenter_eventOnCategoryCategoryEntered_Parms), Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameManualSubPresenter_NoRegister()
	{
		return UGameManualSubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UGameManualSubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameManualWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__gameManualWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameManualSubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameManualSubPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameManualSubPresenter_OnCategoryCategoryEntered, "OnCategoryCategoryEntered" }, // 3118914598
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManualSubPresenter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameManualSubPresenter.h" },
		{ "ModuleRelativePath", "Public/GameManualSubPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManualSubPresenter_Statics::NewProp__gameManualWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameManualSubPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UGameManualSubPresenter_Statics::NewProp__gameManualWidget = { "_gameManualWidget", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameManualSubPresenter, _gameManualWidget), Z_Construct_UClass_UGameManualViewInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameManualSubPresenter_Statics::NewProp__gameManualWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameManualSubPresenter_Statics::NewProp__gameManualWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameManualSubPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameManualSubPresenter_Statics::NewProp__gameManualWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameManualSubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameManualSubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameManualSubPresenter_Statics::ClassParams = {
		&UGameManualSubPresenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameManualSubPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameManualSubPresenter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameManualSubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameManualSubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameManualSubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameManualSubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameManualSubPresenter, 1190162817);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UGameManualSubPresenter>()
	{
		return UGameManualSubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameManualSubPresenter(Z_Construct_UClass_UGameManualSubPresenter, &UGameManualSubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UGameManualSubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameManualSubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
