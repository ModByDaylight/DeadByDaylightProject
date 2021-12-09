// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTabWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTabWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSelectableButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreTabWidget::execGetKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetKey();
		P_NATIVE_END;
	}
	void UCoreTabWidget::StaticRegisterNativesUCoreTabWidget()
	{
		UClass* Class = UCoreTabWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKey", &UCoreTabWidget::execGetKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics
	{
		struct CoreTabWidget_eventGetKey_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabWidget_eventGetKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabWidget, nullptr, "GetKey", nullptr, nullptr, sizeof(CoreTabWidget_eventGetKey_Parms), Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabWidget_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabWidget_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreTabWidget_NoRegister()
	{
		return UCoreTabWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTabWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabTextField_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabTextField;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTabWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreSelectableButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreTabWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreTabWidget_GetKey, "GetKey" }, // 539455929
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreTabWidget.h" },
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage_MetaData[] = {
		{ "Category", "CoreTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage = { "TabImage", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabWidget, TabImage), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField_MetaData[] = {
		{ "Category", "CoreTabWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTabWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField = { "TabTextField", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabWidget, TabTextField), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreTabWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabWidget_Statics::NewProp_TabTextField,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTabWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTabWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTabWidget_Statics::ClassParams = {
		&UCoreTabWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreTabWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTabWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTabWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTabWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTabWidget, 2085631097);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTabWidget>()
	{
		return UCoreTabWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTabWidget(Z_Construct_UClass_UCoreTabWidget, &UCoreTabWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTabWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTabWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
