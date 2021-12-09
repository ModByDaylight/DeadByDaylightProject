// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTabContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTabContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonSelector();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTabWidgetData();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTabWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	DEFINE_FUNCTION(UCoreTabContainerWidget::execInit)
	{
		P_GET_TARRAY_REF(FTabWidgetData,Z_Param_Out_tabsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_Out_tabsData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreTabContainerWidget::execRemoveTabs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTabs();
		P_NATIVE_END;
	}
	void UCoreTabContainerWidget::StaticRegisterNativesUCoreTabContainerWidget()
	{
		UClass* Class = UCoreTabContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Init", &UCoreTabContainerWidget::execInit },
			{ "RemoveTabs", &UCoreTabContainerWidget::execRemoveTabs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics
	{
		struct CoreTabContainerWidget_eventInit_Parms
		{
			TArray<FTabWidgetData> tabsData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tabsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_tabsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tabsData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData = { "tabsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTabContainerWidget_eventInit_Parms, tabsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_Inner = { "tabsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTabWidgetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::NewProp_tabsData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "Init", nullptr, nullptr, sizeof(CoreTabContainerWidget_eventInit_Parms), Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTabContainerWidget, nullptr, "RemoveTabs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreTabContainerWidget_NoRegister()
	{
		return UCoreTabContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTabContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanLoop_MetaData[];
#endif
		static void NewProp_CanLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseControllerTabSwitching_MetaData[];
#endif
		static void NewProp_UseControllerTabSwitching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseControllerTabSwitching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreTabClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreTabClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TabPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignHorizontally_MetaData[];
#endif
		static void NewProp_AlignHorizontally_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignHorizontally;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTabContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreTabContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_Init, "Init" }, // 669420342
		{ &Z_Construct_UFunction_UCoreTabContainerWidget_RemoveTabs, "RemoveTabs" }, // 3420276384
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreTabContainerWidget.h" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_SetBit(void* Obj)
	{
		((UCoreTabContainerWidget*)Obj)->CanLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop = { "CanLoop", nullptr, (EPropertyFlags)0x0020080002000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreTabContainerWidget), &Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_SetBit(void* Obj)
	{
		((UCoreTabContainerWidget*)Obj)->UseControllerTabSwitching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching = { "UseControllerTabSwitching", nullptr, (EPropertyFlags)0x0020080002000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreTabContainerWidget), &Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer = { "TabContainer", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContainerWidget, TabContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass = { "CoreTabClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContainerWidget, CoreTabClass), Z_Construct_UClass_UCoreTabWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding = { "TabPadding", nullptr, (EPropertyFlags)0x0020080002000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTabContainerWidget, TabPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_MetaData[] = {
		{ "Category", "CoreTabContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreTabContainerWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_SetBit(void* Obj)
	{
		((UCoreTabContainerWidget*)Obj)->AlignHorizontally = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally = { "AlignHorizontally", nullptr, (EPropertyFlags)0x0020080002000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreTabContainerWidget), &Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreTabContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CanLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_UseControllerTabSwitching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_CoreTabClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_TabPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTabContainerWidget_Statics::NewProp_AlignHorizontally,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTabContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTabContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTabContainerWidget_Statics::ClassParams = {
		&UCoreTabContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreTabContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTabContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTabContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTabContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTabContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTabContainerWidget, 1189319135);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTabContainerWidget>()
	{
		return UCoreTabContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTabContainerWidget(Z_Construct_UClass_UCoreTabContainerWidget, &UCoreTabContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTabContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTabContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
