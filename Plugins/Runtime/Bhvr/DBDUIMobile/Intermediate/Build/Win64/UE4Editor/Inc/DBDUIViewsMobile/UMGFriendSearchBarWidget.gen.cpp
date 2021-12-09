// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGFriendSearchBarWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGFriendSearchBarWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendSearchBarWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendSearchBarWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGFriendSearchBarWidget::execHandleSearchButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSearchButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGFriendSearchBarWidget::execHandleTextInputChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_textInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTextInputChanged(Z_Param_Out_textInput);
		P_NATIVE_END;
	}
	void UUMGFriendSearchBarWidget::StaticRegisterNativesUUMGFriendSearchBarWidget()
	{
		UClass* Class = UUMGFriendSearchBarWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleSearchButtonClicked", &UUMGFriendSearchBarWidget::execHandleSearchButtonClicked },
			{ "HandleTextInputChanged", &UUMGFriendSearchBarWidget::execHandleTextInputChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGFriendSearchBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGFriendSearchBarWidget, nullptr, "HandleSearchButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleSearchButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleSearchButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics
	{
		struct UMGFriendSearchBarWidget_eventHandleTextInputChanged_Parms
		{
			FText textInput;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_textInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::NewProp_textInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::NewProp_textInput = { "textInput", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGFriendSearchBarWidget_eventHandleTextInputChanged_Parms, textInput), METADATA_PARAMS(Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::NewProp_textInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::NewProp_textInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::NewProp_textInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGFriendSearchBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGFriendSearchBarWidget, nullptr, "HandleTextInputChanged", nullptr, nullptr, sizeof(UMGFriendSearchBarWidget_eventHandleTextInputChanged_Parms), Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGFriendSearchBarWidget_NoRegister()
	{
		return UUMGFriendSearchBarWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputTextField_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputTextField;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleSearchButtonClicked, "HandleSearchButtonClicked" }, // 89581720
		{ &Z_Construct_UFunction_UUMGFriendSearchBarWidget_HandleTextInputChanged, "HandleTextInputChanged" }, // 3690762592
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGFriendSearchBarWidget.h" },
		{ "ModuleRelativePath", "Public/UMGFriendSearchBarWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_SearchButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendSearchBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_SearchButton = { "SearchButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendSearchBarWidget, SearchButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_SearchButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_SearchButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_InputTextField_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendSearchBarWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_InputTextField = { "InputTextField", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendSearchBarWidget, InputTextField), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_InputTextField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_InputTextField_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_SearchButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::NewProp_InputTextField,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGFriendSearchBarWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::ClassParams = {
		&UUMGFriendSearchBarWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGFriendSearchBarWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGFriendSearchBarWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGFriendSearchBarWidget, 3337860648);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGFriendSearchBarWidget>()
	{
		return UUMGFriendSearchBarWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGFriendSearchBarWidget(Z_Construct_UClass_UUMGFriendSearchBarWidget, &UUMGFriendSearchBarWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGFriendSearchBarWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGFriendSearchBarWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
