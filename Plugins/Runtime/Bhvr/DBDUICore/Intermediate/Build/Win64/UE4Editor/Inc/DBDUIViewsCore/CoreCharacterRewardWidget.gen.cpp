// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreCharacterRewardWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreCharacterRewardWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCharacterRewardWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreCharacterRewardWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreRewardWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterRewardViewData();
// End Cross Module References
	static FName NAME_UCoreCharacterRewardWidget_SetData = FName(TEXT("SetData"));
	void UCoreCharacterRewardWidget::SetData(FCharacterRewardViewData const& characterRewardViewData)
	{
		CoreCharacterRewardWidget_eventSetData_Parms Parms;
		Parms.characterRewardViewData=characterRewardViewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreCharacterRewardWidget_SetData),&Parms);
	}
	void UCoreCharacterRewardWidget::StaticRegisterNativesUCoreCharacterRewardWidget()
	{
	}
	struct Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterRewardViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterRewardViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::NewProp_characterRewardViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::NewProp_characterRewardViewData = { "characterRewardViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreCharacterRewardWidget_eventSetData_Parms, characterRewardViewData), Z_Construct_UScriptStruct_FCharacterRewardViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::NewProp_characterRewardViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::NewProp_characterRewardViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::NewProp_characterRewardViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreCharacterRewardWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreCharacterRewardWidget, nullptr, "SetData", nullptr, nullptr, sizeof(CoreCharacterRewardWidget_eventSetData_Parms), Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreCharacterRewardWidget_NoRegister()
	{
		return UCoreCharacterRewardWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreCharacterRewardWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreCharacterRewardWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreRewardWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreCharacterRewardWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreCharacterRewardWidget_SetData, "SetData" }, // 108431934
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreCharacterRewardWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreCharacterRewardWidget.h" },
		{ "ModuleRelativePath", "Public/CoreCharacterRewardWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreCharacterRewardWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreCharacterRewardWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreCharacterRewardWidget_Statics::ClassParams = {
		&UCoreCharacterRewardWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCoreCharacterRewardWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreCharacterRewardWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreCharacterRewardWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreCharacterRewardWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreCharacterRewardWidget, 24943331);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreCharacterRewardWidget>()
	{
		return UCoreCharacterRewardWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreCharacterRewardWidget(Z_Construct_UClass_UCoreCharacterRewardWidget, &UCoreCharacterRewardWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreCharacterRewardWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreCharacterRewardWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
