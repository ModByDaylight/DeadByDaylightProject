// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreKeyListenerButtontWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreKeyListenerButtontWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerButtontWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreKeyListenerButtontWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDINPUT_API UEnum* Z_Construct_UEnum_DBDInput_EUIActionType();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreKeyListenerButtontWidget::execSetUIAction)
	{
		P_GET_ENUM(EUIActionType,Z_Param_actionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIAction(EUIActionType(Z_Param_actionType));
		P_NATIVE_END;
	}
	void UCoreKeyListenerButtontWidget::StaticRegisterNativesUCoreKeyListenerButtontWidget()
	{
		UClass* Class = UCoreKeyListenerButtontWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetUIAction", &UCoreKeyListenerButtontWidget::execSetUIAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics
	{
		struct CoreKeyListenerButtontWidget_eventSetUIAction_Parms
		{
			EUIActionType actionType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_actionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_actionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::NewProp_actionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::NewProp_actionType = { "actionType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreKeyListenerButtontWidget_eventSetUIAction_Parms, actionType), Z_Construct_UEnum_DBDInput_EUIActionType, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::NewProp_actionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::NewProp_actionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::NewProp_actionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::NewProp_actionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::NewProp_actionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreKeyListenerButtontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreKeyListenerButtontWidget, nullptr, "SetUIAction", nullptr, nullptr, sizeof(CoreKeyListenerButtontWidget_eventSetUIAction_Parms), Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreKeyListenerButtontWidget_NoRegister()
	{
		return UCoreKeyListenerButtontWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputNameTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputNameTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreKeyListenerButtontWidget_SetUIAction, "SetUIAction" }, // 3586311106
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreKeyListenerButtontWidget.h" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerButtontWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::NewProp_InputNameTB_MetaData[] = {
		{ "Category", "CoreKeyListenerButtontWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreKeyListenerButtontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::NewProp_InputNameTB = { "InputNameTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreKeyListenerButtontWidget, InputNameTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::NewProp_InputNameTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::NewProp_InputNameTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::NewProp_InputNameTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreKeyListenerButtontWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::ClassParams = {
		&UCoreKeyListenerButtontWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreKeyListenerButtontWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreKeyListenerButtontWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreKeyListenerButtontWidget, 2031570508);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreKeyListenerButtontWidget>()
	{
		return UCoreKeyListenerButtontWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreKeyListenerButtontWidget(Z_Construct_UClass_UCoreKeyListenerButtontWidget, &UCoreKeyListenerButtontWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreKeyListenerButtontWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreKeyListenerButtontWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
