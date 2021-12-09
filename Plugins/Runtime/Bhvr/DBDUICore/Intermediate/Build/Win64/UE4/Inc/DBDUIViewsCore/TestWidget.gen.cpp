// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/TestWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTestWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UTestWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTestWidget::execSetShowWorkbench)
	{
		P_GET_UBOOL(Z_Param_NewShowWorkbench);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowWorkbench(Z_Param_NewShowWorkbench);
		P_NATIVE_END;
	}
	void UTestWidget::StaticRegisterNativesUTestWidget()
	{
		UClass* Class = UTestWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetShowWorkbench", &UTestWidget::execSetShowWorkbench },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics
	{
		struct TestWidget_eventSetShowWorkbench_Parms
		{
			bool NewShowWorkbench;
		};
		static void NewProp_NewShowWorkbench_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewShowWorkbench;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::NewProp_NewShowWorkbench_SetBit(void* Obj)
	{
		((TestWidget_eventSetShowWorkbench_Parms*)Obj)->NewShowWorkbench = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::NewProp_NewShowWorkbench = { "NewShowWorkbench", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TestWidget_eventSetShowWorkbench_Parms), &Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::NewProp_NewShowWorkbench_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::NewProp_NewShowWorkbench,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestWidget, nullptr, "SetShowWorkbench", nullptr, nullptr, sizeof(TestWidget_eventSetShowWorkbench_Parms), Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestWidget_SetShowWorkbench()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestWidget_SetShowWorkbench_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTestWidget_NoRegister()
	{
		return UTestWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTestWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowWorkbench_MetaData[];
#endif
		static void NewProp_ShowWorkbench_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowWorkbench;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Workbench_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Workbench;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestWidget_SetShowWorkbench, "SetShowWorkbench" }, // 417320005
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestWidget.h" },
		{ "ModuleRelativePath", "Public/TestWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestWidget_Statics::NewProp_ShowWorkbench_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TestWidget" },
		{ "ModuleRelativePath", "Public/TestWidget.h" },
	};
#endif
	void Z_Construct_UClass_UTestWidget_Statics::NewProp_ShowWorkbench_SetBit(void* Obj)
	{
		((UTestWidget*)Obj)->ShowWorkbench = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTestWidget_Statics::NewProp_ShowWorkbench = { "ShowWorkbench", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTestWidget), &Z_Construct_UClass_UTestWidget_Statics::NewProp_ShowWorkbench_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTestWidget_Statics::NewProp_ShowWorkbench_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestWidget_Statics::NewProp_ShowWorkbench_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestWidget_Statics::NewProp_Workbench_MetaData[] = {
		{ "Category", "TestWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTestWidget_Statics::NewProp_Workbench = { "Workbench", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestWidget, Workbench), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTestWidget_Statics::NewProp_Workbench_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestWidget_Statics::NewProp_Workbench_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestWidget_Statics::NewProp_ShowWorkbench,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestWidget_Statics::NewProp_Workbench,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestWidget_Statics::ClassParams = {
		&UTestWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTestWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestWidget, 2291505527);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UTestWidget>()
	{
		return UTestWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestWidget(Z_Construct_UClass_UTestWidget, &UTestWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UTestWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
