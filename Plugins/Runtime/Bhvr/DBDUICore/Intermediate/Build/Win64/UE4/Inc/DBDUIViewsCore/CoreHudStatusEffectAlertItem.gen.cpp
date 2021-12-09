// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreHudStatusEffectAlertItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreHudStatusEffectAlertItem() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudStatusEffectAlertItem_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreHudStatusEffectAlertItem();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectAlertViewData();
// End Cross Module References
	static FName NAME_UCoreHudStatusEffectAlertItem_SetData = FName(TEXT("SetData"));
	void UCoreHudStatusEffectAlertItem::SetData(FStatusEffectAlertViewData const& data)
	{
		CoreHudStatusEffectAlertItem_eventSetData_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UCoreHudStatusEffectAlertItem_SetData),&Parms);
	}
	void UCoreHudStatusEffectAlertItem::StaticRegisterNativesUCoreHudStatusEffectAlertItem()
	{
	}
	struct Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreHudStatusEffectAlertItem_eventSetData_Parms, data), Z_Construct_UScriptStruct_FStatusEffectAlertViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreHudStatusEffectAlertItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreHudStatusEffectAlertItem, nullptr, "SetData", nullptr, nullptr, sizeof(CoreHudStatusEffectAlertItem_eventSetData_Parms), Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreHudStatusEffectAlertItem_NoRegister()
	{
		return UCoreHudStatusEffectAlertItem::StaticClass();
	}
	struct Z_Construct_UClass_UCoreHudStatusEffectAlertItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreHudStatusEffectAlertItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreHudStatusEffectAlertItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreHudStatusEffectAlertItem_SetData, "SetData" }, // 409751295
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreHudStatusEffectAlertItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreHudStatusEffectAlertItem.h" },
		{ "ModuleRelativePath", "Public/CoreHudStatusEffectAlertItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreHudStatusEffectAlertItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreHudStatusEffectAlertItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreHudStatusEffectAlertItem_Statics::ClassParams = {
		&UCoreHudStatusEffectAlertItem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreHudStatusEffectAlertItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreHudStatusEffectAlertItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreHudStatusEffectAlertItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreHudStatusEffectAlertItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreHudStatusEffectAlertItem, 1002998848);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreHudStatusEffectAlertItem>()
	{
		return UCoreHudStatusEffectAlertItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreHudStatusEffectAlertItem(Z_Construct_UClass_UCoreHudStatusEffectAlertItem, &UCoreHudStatusEffectAlertItem::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreHudStatusEffectAlertItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreHudStatusEffectAlertItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
