// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGScrollListPageButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGScrollListPageButton() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGScrollListPageButton_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGScrollListPageButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics
	{
		struct _Script_DBDUIViewsMobile_eventUMGScrollListPageButtonOnClicked_Parms
		{
			int32 pageIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pageIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::NewProp_pageIndex = { "pageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDUIViewsMobile_eventUMGScrollListPageButtonOnClicked_Parms, pageIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::NewProp_pageIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGScrollListPageButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsMobile, nullptr, "UMGScrollListPageButtonOnClicked__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDUIViewsMobile_eventUMGScrollListPageButtonOnClicked_Parms), Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMGScrollListPageButton::execHandleActionButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleActionButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGScrollListPageButton::execSetIsSelected)
	{
		P_GET_UBOOL(Z_Param_selected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSelected(Z_Param_selected);
		P_NATIVE_END;
	}
	void UUMGScrollListPageButton::StaticRegisterNativesUUMGScrollListPageButton()
	{
		UClass* Class = UUMGScrollListPageButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleActionButtonClick", &UUMGScrollListPageButton::execHandleActionButtonClick },
			{ "SetIsSelected", &UUMGScrollListPageButton::execSetIsSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGScrollListPageButton_HandleActionButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGScrollListPageButton_HandleActionButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGScrollListPageButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGScrollListPageButton_HandleActionButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGScrollListPageButton, nullptr, "HandleActionButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGScrollListPageButton_HandleActionButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGScrollListPageButton_HandleActionButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGScrollListPageButton_HandleActionButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGScrollListPageButton_HandleActionButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics
	{
		struct UMGScrollListPageButton_eventSetIsSelected_Parms
		{
			bool selected;
		};
		static void NewProp_selected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_selected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::NewProp_selected_SetBit(void* Obj)
	{
		((UMGScrollListPageButton_eventSetIsSelected_Parms*)Obj)->selected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::NewProp_selected = { "selected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGScrollListPageButton_eventSetIsSelected_Parms), &Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::NewProp_selected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::NewProp_selected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGScrollListPageButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGScrollListPageButton, nullptr, "SetIsSelected", nullptr, nullptr, sizeof(UMGScrollListPageButton_eventSetIsSelected_Parms), Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGScrollListPageButton_NoRegister()
	{
		return UUMGScrollListPageButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGScrollListPageButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGScrollListPageButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGScrollListPageButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGScrollListPageButton_HandleActionButtonClick, "HandleActionButtonClick" }, // 2570698675
		{ &Z_Construct_UFunction_UUMGScrollListPageButton_SetIsSelected, "SetIsSelected" }, // 753808857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGScrollListPageButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGScrollListPageButton.h" },
		{ "ModuleRelativePath", "Public/UMGScrollListPageButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_SelectedImage_MetaData[] = {
		{ "Category", "UMGScrollListPageButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGScrollListPageButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_SelectedImage = { "SelectedImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGScrollListPageButton, SelectedImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_SelectedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_SelectedImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_ActionButton_MetaData[] = {
		{ "Category", "UMGScrollListPageButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGScrollListPageButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_ActionButton = { "ActionButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGScrollListPageButton, ActionButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_ActionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_ActionButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_PageIndex_MetaData[] = {
		{ "Category", "UMGScrollListPageButton" },
		{ "ModuleRelativePath", "Public/UMGScrollListPageButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGScrollListPageButton, PageIndex), METADATA_PARAMS(Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_PageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_PageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_OnClicked_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGScrollListPageButton.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGScrollListPageButton, OnClicked), Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_OnClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_OnClicked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGScrollListPageButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_SelectedImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_ActionButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_PageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGScrollListPageButton_Statics::NewProp_OnClicked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGScrollListPageButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGScrollListPageButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGScrollListPageButton_Statics::ClassParams = {
		&UUMGScrollListPageButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGScrollListPageButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGScrollListPageButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGScrollListPageButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGScrollListPageButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGScrollListPageButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGScrollListPageButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGScrollListPageButton, 1098525142);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGScrollListPageButton>()
	{
		return UUMGScrollListPageButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGScrollListPageButton(Z_Construct_UClass_UUMGScrollListPageButton, &UUMGScrollListPageButton::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGScrollListPageButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGScrollListPageButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
