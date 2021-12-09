// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudScoreAlertItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudScoreAlertItem() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudScoreAlertItem_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudScoreAlertItem();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FScoreAlertViewData();
// End Cross Module References
	static FName NAME_UCoreHudScoreAlertItem_SetData = FName(TEXT("SetData"));
	void UCoreHudScoreAlertItem::SetData(FScoreAlertViewData const& data)
	{
		CoreHudScoreAlertItem_eventSetData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudScoreAlertItem_SetData),&Parms);
	}
	void UCoreHudScoreAlertItem::StaticRegisterNativesUCoreHudScoreAlertItem()
	{
	}
	struct Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudScoreAlertItem_eventSetData_Parms, data), Z_Construct_UScriptStruct_FScoreAlertViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudScoreAlertItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudScoreAlertItem, nullptr, "SetData", nullptr, nullptr, sizeof(CoreHudScoreAlertItem_eventSetData_Parms), Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreHudScoreAlertItem_NoRegister()
	{
		return UCoreHudScoreAlertItem::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudScoreAlertItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudScoreAlertItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreHudScoreAlertItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreHudScoreAlertItem_SetData, "SetData" }, // 3116995090
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudScoreAlertItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreHudScoreAlertItem.h" },
		{ "ModuleRelativePath", "Public/CoreHudScoreAlertItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudScoreAlertItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudScoreAlertItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudScoreAlertItem_Statics::ClassParams = {
		&UCoreHudScoreAlertItem::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudScoreAlertItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudScoreAlertItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudScoreAlertItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudScoreAlertItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudScoreAlertItem, 185589816);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudScoreAlertItem>()
	{
		return UCoreHudScoreAlertItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudScoreAlertItem(Z_Construct_UClass_UCoreHudScoreAlertItem, &UCoreHudScoreAlertItem::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudScoreAlertItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudScoreAlertItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
