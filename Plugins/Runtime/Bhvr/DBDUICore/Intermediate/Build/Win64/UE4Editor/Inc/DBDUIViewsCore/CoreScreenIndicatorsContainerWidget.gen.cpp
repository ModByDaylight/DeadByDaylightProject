// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreScreenIndicatorsContainerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreScreenIndicatorsContainerWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreScreenIndicatorWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreScreenIndicatorsContainerWidget::execFindScreenIndicatorKey)
	{
		P_GET_OBJECT(UCoreScreenIndicatorWidget,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->FindScreenIndicatorKey(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreScreenIndicatorsContainerWidget::execGetScreenIndicatorsMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UCoreScreenIndicatorWidget*>*)Z_Param__Result=P_THIS->GetScreenIndicatorsMap();
		P_NATIVE_END;
	}
	void UCoreScreenIndicatorsContainerWidget::StaticRegisterNativesUCoreScreenIndicatorsContainerWidget()
	{
		UClass* Class = UCoreScreenIndicatorsContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindScreenIndicatorKey", &UCoreScreenIndicatorsContainerWidget::execFindScreenIndicatorKey },
			{ "GetScreenIndicatorsMap", &UCoreScreenIndicatorsContainerWidget::execGetScreenIndicatorsMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics
	{
		struct CoreScreenIndicatorsContainerWidget_eventFindScreenIndicatorKey_Parms
		{
			UCoreScreenIndicatorWidget* value;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreScreenIndicatorsContainerWidget_eventFindScreenIndicatorKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::NewProp_value_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreScreenIndicatorsContainerWidget_eventFindScreenIndicatorKey_Parms, value), Z_Construct_UClass_UCoreScreenIndicatorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget, nullptr, "FindScreenIndicatorKey", nullptr, nullptr, sizeof(CoreScreenIndicatorsContainerWidget_eventFindScreenIndicatorKey_Parms), Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics
	{
		struct CoreScreenIndicatorsContainerWidget_eventGetScreenIndicatorsMap_Parms
		{
			TMap<FString,UCoreScreenIndicatorWidget*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreScreenIndicatorsContainerWidget_eventGetScreenIndicatorsMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreScreenIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget, nullptr, "GetScreenIndicatorsMap", nullptr, nullptr, sizeof(CoreScreenIndicatorsContainerWidget_eventGetScreenIndicatorsMap_Parms), Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_NoRegister()
	{
		return UCoreScreenIndicatorsContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screenIndicatorsPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__screenIndicatorsPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__screenIndicatorsPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screenIndicatorsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__screenIndicatorsMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__screenIndicatorsMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__screenIndicatorsMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenIndicatorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ScreenIndicatorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InactiveThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_FindScreenIndicatorKey, "FindScreenIndicatorKey" }, // 3178070071
		{ &Z_Construct_UFunction_UCoreScreenIndicatorsContainerWidget_GetScreenIndicatorsMap, "GetScreenIndicatorsMap" }, // 835788310
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreScreenIndicatorsContainerWidget.h" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorsContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsPool = { "_screenIndicatorsPool", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorsContainerWidget, _screenIndicatorsPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsPool_Inner = { "_screenIndicatorsPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreScreenIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsMap = { "_screenIndicatorsMap", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorsContainerWidget, _screenIndicatorsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsMap_Key_KeyProp = { "_screenIndicatorsMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsMap_ValueProp = { "_screenIndicatorsMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreScreenIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_ScreenIndicatorClass_MetaData[] = {
		{ "Category", "CoreScreenIndicatorsContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_ScreenIndicatorClass = { "ScreenIndicatorClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorsContainerWidget, ScreenIndicatorClass), Z_Construct_UClass_UCoreScreenIndicatorWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_ScreenIndicatorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_ScreenIndicatorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_Container_MetaData[] = {
		{ "Category", "CoreScreenIndicatorsContainerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorsContainerWidget, Container), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_Container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_InactiveThreshold_MetaData[] = {
		{ "Category", "CoreScreenIndicatorsContainerWidget" },
		{ "ModuleRelativePath", "Public/CoreScreenIndicatorsContainerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_InactiveThreshold = { "InactiveThreshold", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreScreenIndicatorsContainerWidget, InactiveThreshold), METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_InactiveThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_InactiveThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp__screenIndicatorsMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_ScreenIndicatorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::NewProp_InactiveThreshold,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreScreenIndicatorsContainerWidget, IScreenIndicatorsContainerViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreScreenIndicatorsContainerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::ClassParams = {
		&UCoreScreenIndicatorsContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreScreenIndicatorsContainerWidget, 3372432819);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreScreenIndicatorsContainerWidget>()
	{
		return UCoreScreenIndicatorsContainerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreScreenIndicatorsContainerWidget(Z_Construct_UClass_UCoreScreenIndicatorsContainerWidget, &UCoreScreenIndicatorsContainerWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreScreenIndicatorsContainerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreScreenIndicatorsContainerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
