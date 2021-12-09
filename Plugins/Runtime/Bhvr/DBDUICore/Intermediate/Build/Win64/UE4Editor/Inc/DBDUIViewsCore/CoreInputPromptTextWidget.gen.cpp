// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreInputPromptTextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreInputPromptTextWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptTextWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptTextWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreInputPromptTextWidget::execSetInputKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_NewInputKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputKey(Z_Param_Out_NewInputKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInputPromptTextWidget::execSetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Out_NewText);
		P_NATIVE_END;
	}
	void UCoreInputPromptTextWidget::StaticRegisterNativesUCoreInputPromptTextWidget()
	{
		UClass* Class = UCoreInputPromptTextWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInputKey", &UCoreInputPromptTextWidget::execSetInputKey },
			{ "SetText", &UCoreInputPromptTextWidget::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics
	{
		struct CoreInputPromptTextWidget_eventSetInputKey_Parms
		{
			FKey NewInputKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInputKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::NewProp_NewInputKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::NewProp_NewInputKey = { "NewInputKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputPromptTextWidget_eventSetInputKey_Parms, NewInputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::NewProp_NewInputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::NewProp_NewInputKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::NewProp_NewInputKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptTextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptTextWidget, nullptr, "SetInputKey", nullptr, nullptr, sizeof(CoreInputPromptTextWidget_eventSetInputKey_Parms), Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics
	{
		struct CoreInputPromptTextWidget_eventSetText_Parms
		{
			FText NewText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInputPromptTextWidget_eventSetText_Parms, NewText), METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::NewProp_NewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::NewProp_NewText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::NewProp_NewText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInputPromptTextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInputPromptTextWidget, nullptr, "SetText", nullptr, nullptr, sizeof(CoreInputPromptTextWidget_eventSetText_Parms), Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreInputPromptTextWidget_NoRegister()
	{
		return UCoreInputPromptTextWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreInputPromptTextWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextField_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPrompt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreInputPromptTextWidget_SetInputKey, "SetInputKey" }, // 3382639984
		{ &Z_Construct_UFunction_UCoreInputPromptTextWidget_SetText, "SetText" }, // 2709509776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreInputPromptTextWidget.h" },
		{ "ModuleRelativePath", "Public/CoreInputPromptTextWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_Text_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInputPromptTextWidget" },
		{ "ModuleRelativePath", "Public/CoreInputPromptTextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputPromptTextWidget, Text), METADATA_PARAMS(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInputPromptTextWidget" },
		{ "ModuleRelativePath", "Public/CoreInputPromptTextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputPromptTextWidget, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_TextField_MetaData[] = {
		{ "Category", "CoreInputPromptTextWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInputPromptTextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_TextField = { "TextField", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputPromptTextWidget, TextField), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_TextField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_TextField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputPrompt_MetaData[] = {
		{ "Category", "CoreInputPromptTextWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInputPromptTextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputPrompt = { "InputPrompt", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInputPromptTextWidget, InputPrompt), Z_Construct_UClass_UCoreInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputPrompt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_TextField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::NewProp_InputPrompt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreInputPromptTextWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::ClassParams = {
		&UCoreInputPromptTextWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreInputPromptTextWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreInputPromptTextWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreInputPromptTextWidget, 944779933);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreInputPromptTextWidget>()
	{
		return UCoreInputPromptTextWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreInputPromptTextWidget(Z_Construct_UClass_UCoreInputPromptTextWidget, &UCoreInputPromptTextWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreInputPromptTextWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreInputPromptTextWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
