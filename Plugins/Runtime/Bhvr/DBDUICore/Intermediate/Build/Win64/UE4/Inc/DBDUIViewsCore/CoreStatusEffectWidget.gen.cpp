// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStatusEffectWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStatusEffectWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStatusEffectWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStatusEffectWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStatusEffectIcon_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStatusEffectViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStatusEffectWidget::execGetStatusEffectMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FName,UCoreStatusEffectIcon*>*)Z_Param__Result=P_THIS->GetStatusEffectMap();
		P_NATIVE_END;
	}
	void UCoreStatusEffectWidget::StaticRegisterNativesUCoreStatusEffectWidget()
	{
		UClass* Class = UCoreStatusEffectWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStatusEffectMap", &UCoreStatusEffectWidget::execGetStatusEffectMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics
	{
		struct CoreStatusEffectWidget_eventGetStatusEffectMap_Parms
		{
			TMap<FName,UCoreStatusEffectIcon*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStatusEffectWidget_eventGetStatusEffectMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreStatusEffectIcon_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStatusEffectWidget, nullptr, "GetStatusEffectMap", nullptr, nullptr, sizeof(CoreStatusEffectWidget_eventGetStatusEffectMap_Parms), Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStatusEffectWidget_NoRegister()
	{
		return UCoreStatusEffectWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStatusEffectWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__statusEffectMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusEffectMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusEffectMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__statusEffectOrder;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__statusEffectOrder_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusEffectPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__statusEffectPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__statusEffectPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusEffectContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusEffectContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreStatusEffectIconClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreStatusEffectIconClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvenColumnOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EvenColumnOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsByColumn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemsByColumn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrepooledItemAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrepooledItemAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InactiveThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStatusEffectWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStatusEffectWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStatusEffectWidget_GetStatusEffectMap, "GetStatusEffectMap" }, // 1295426675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreStatusEffectWidget.h" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectMap_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreStatusEffectWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectMap = { "_statusEffectMap", nullptr, (EPropertyFlags)0x004000800000201c, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStatusEffectWidget, _statusEffectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectMap_Key_KeyProp = { "_statusEffectMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectMap_ValueProp = { "_statusEffectMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreStatusEffectIcon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectOrder_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectOrder = { "_statusEffectOrder", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStatusEffectWidget, _statusEffectOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectOrder_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectOrder_Inner = { "_statusEffectOrder", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectPool = { "_statusEffectPool", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStatusEffectWidget, _statusEffectPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectPool_Inner = { "_statusEffectPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreStatusEffectIcon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_StatusEffectContainer_MetaData[] = {
		{ "Category", "CoreStatusEffectWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_StatusEffectContainer = { "StatusEffectContainer", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStatusEffectWidget, StatusEffectContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_StatusEffectContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_StatusEffectContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_CoreStatusEffectIconClass_MetaData[] = {
		{ "Category", "CoreStatusEffectWidget" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_CoreStatusEffectIconClass = { "CoreStatusEffectIconClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStatusEffectWidget, CoreStatusEffectIconClass), Z_Construct_UClass_UCoreStatusEffectIcon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_CoreStatusEffectIconClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_CoreStatusEffectIconClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_EvenColumnOffset_MetaData[] = {
		{ "Category", "CoreStatusEffectWidget" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_EvenColumnOffset = { "EvenColumnOffset", nullptr, (EPropertyFlags)0x0020080002010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStatusEffectWidget, EvenColumnOffset), METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_EvenColumnOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_EvenColumnOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_ItemsByColumn_MetaData[] = {
		{ "Category", "CoreStatusEffectWidget" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_ItemsByColumn = { "ItemsByColumn", nullptr, (EPropertyFlags)0x0020080002010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStatusEffectWidget, ItemsByColumn), METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_ItemsByColumn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_ItemsByColumn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_PrepooledItemAmount_MetaData[] = {
		{ "Category", "CoreStatusEffectWidget" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_PrepooledItemAmount = { "PrepooledItemAmount", nullptr, (EPropertyFlags)0x0020080002010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStatusEffectWidget, PrepooledItemAmount), METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_PrepooledItemAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_PrepooledItemAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_InactiveThreshold_MetaData[] = {
		{ "Category", "CoreStatusEffectWidget" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_InactiveThreshold = { "InactiveThreshold", nullptr, (EPropertyFlags)0x0020080002010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreStatusEffectWidget, InactiveThreshold), METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_InactiveThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_InactiveThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreStatusEffectWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectOrder_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp__statusEffectPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_StatusEffectContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_CoreStatusEffectIconClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_EvenColumnOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_ItemsByColumn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_PrepooledItemAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreStatusEffectWidget_Statics::NewProp_InactiveThreshold,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UStatusEffectViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreStatusEffectWidget, IStatusEffectViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStatusEffectWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStatusEffectWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStatusEffectWidget_Statics::ClassParams = {
		&UCoreStatusEffectWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreStatusEffectWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStatusEffectWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStatusEffectWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStatusEffectWidget, 1235154477);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStatusEffectWidget>()
	{
		return UCoreStatusEffectWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStatusEffectWidget(Z_Construct_UClass_UCoreStatusEffectWidget, &UCoreStatusEffectWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStatusEffectWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStatusEffectWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
