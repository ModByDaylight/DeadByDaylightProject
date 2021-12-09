// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CustomizationTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizationTooltipWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCustomizationTooltipWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationTooltipViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCustomizationTooltipWidget::execSetStatusText)
	{
		P_GET_UBOOL(Z_Param_isEquipped);
		P_GET_UBOOL(Z_Param_isOwned);
		P_GET_UBOOL(Z_Param_isLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStatusText(Z_Param_isEquipped,Z_Param_isOwned,Z_Param_isLocked);
		P_NATIVE_END;
	}
	static FName NAME_UCustomizationTooltipWidget_SetTooltipData = FName(TEXT("SetTooltipData"));
	void UCustomizationTooltipWidget::SetTooltipData(FCustomizationTooltipViewData const& customizationViewData)
	{
		CustomizationTooltipWidget_eventSetTooltipData_Parms Parms;
		Parms.customizationViewData=customizationViewData;
		ProcessEvent(FindFunctionChecked(NAME_UCustomizationTooltipWidget_SetTooltipData),&Parms);
	}
	void UCustomizationTooltipWidget::StaticRegisterNativesUCustomizationTooltipWidget()
	{
		UClass* Class = UCustomizationTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetStatusText", &UCustomizationTooltipWidget::execSetStatusText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics
	{
		struct CustomizationTooltipWidget_eventSetStatusText_Parms
		{
			bool isEquipped;
			bool isOwned;
			bool isLocked;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLocked_MetaData[];
#endif
		static void NewProp_isLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isOwned_MetaData[];
#endif
		static void NewProp_isOwned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isOwned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isEquipped_MetaData[];
#endif
		static void NewProp_isEquipped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEquipped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isLocked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isLocked_SetBit(void* Obj)
	{
		((CustomizationTooltipWidget_eventSetStatusText_Parms*)Obj)->isLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isLocked = { "isLocked", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomizationTooltipWidget_eventSetStatusText_Parms), &Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isLocked_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isOwned_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isOwned_SetBit(void* Obj)
	{
		((CustomizationTooltipWidget_eventSetStatusText_Parms*)Obj)->isOwned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isOwned = { "isOwned", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomizationTooltipWidget_eventSetStatusText_Parms), &Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isOwned_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isOwned_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isOwned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isEquipped_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isEquipped_SetBit(void* Obj)
	{
		((CustomizationTooltipWidget_eventSetStatusText_Parms*)Obj)->isEquipped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isEquipped = { "isEquipped", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomizationTooltipWidget_eventSetStatusText_Parms), &Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isEquipped_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isEquipped_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isOwned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::NewProp_isEquipped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationTooltipWidget, nullptr, "SetStatusText", nullptr, nullptr, sizeof(CustomizationTooltipWidget_eventSetStatusText_Parms), Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_customizationViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_customizationViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::NewProp_customizationViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::NewProp_customizationViewData = { "customizationViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizationTooltipWidget_eventSetTooltipData_Parms, customizationViewData), Z_Construct_UScriptStruct_FCustomizationTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::NewProp_customizationViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::NewProp_customizationViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::NewProp_customizationViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomizationTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizationTooltipWidget, nullptr, "SetTooltipData", nullptr, nullptr, sizeof(CustomizationTooltipWidget_eventSetTooltipData_Parms), Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomizationTooltipWidget_NoRegister()
	{
		return UCustomizationTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizationTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToolTipStatusTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToolTipStatusTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizationTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizationTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizationTooltipWidget_SetStatusText, "SetStatusText" }, // 946565968
		{ &Z_Construct_UFunction_UCustomizationTooltipWidget_SetTooltipData, "SetTooltipData" }, // 516600225
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CustomizationTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizationTooltipWidget_Statics::NewProp_ToolTipStatusTB_MetaData[] = {
		{ "Category", "CustomizationTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizationTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizationTooltipWidget_Statics::NewProp_ToolTipStatusTB = { "ToolTipStatusTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizationTooltipWidget, ToolTipStatusTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizationTooltipWidget_Statics::NewProp_ToolTipStatusTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationTooltipWidget_Statics::NewProp_ToolTipStatusTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizationTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizationTooltipWidget_Statics::NewProp_ToolTipStatusTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizationTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizationTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizationTooltipWidget_Statics::ClassParams = {
		&UCustomizationTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizationTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizationTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizationTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizationTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomizationTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomizationTooltipWidget, 2595431056);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCustomizationTooltipWidget>()
	{
		return UCustomizationTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizationTooltipWidget(Z_Construct_UClass_UCustomizationTooltipWidget, &UCustomizationTooltipWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCustomizationTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizationTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
