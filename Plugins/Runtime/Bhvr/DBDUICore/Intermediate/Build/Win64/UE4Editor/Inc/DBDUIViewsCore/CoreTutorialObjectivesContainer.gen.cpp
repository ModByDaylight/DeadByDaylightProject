// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTutorialObjectivesContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTutorialObjectivesContainer() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTutorialObjectivesContainer_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTutorialObjectivesContainer();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTutorialObjectiveItem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialObjectivesViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreTutorialObjectivesContainer::execOnTutorialObjectiveCompleted)
	{
		P_GET_OBJECT(UCoreTutorialObjectiveItem,Z_Param_item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTutorialObjectiveCompleted(Z_Param_item);
		P_NATIVE_END;
	}
	void UCoreTutorialObjectivesContainer::StaticRegisterNativesUCoreTutorialObjectivesContainer()
	{
		UClass* Class = UCoreTutorialObjectivesContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTutorialObjectiveCompleted", &UCoreTutorialObjectivesContainer::execOnTutorialObjectiveCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics
	{
		struct CoreTutorialObjectivesContainer_eventOnTutorialObjectiveCompleted_Parms
		{
			UCoreTutorialObjectiveItem* item;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::NewProp_item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTutorialObjectivesContainer_eventOnTutorialObjectiveCompleted_Parms, item), Z_Construct_UClass_UCoreTutorialObjectiveItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTutorialObjectivesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTutorialObjectivesContainer, nullptr, "OnTutorialObjectiveCompleted", nullptr, nullptr, sizeof(CoreTutorialObjectivesContainer_eventOnTutorialObjectiveCompleted_Parms), Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreTutorialObjectivesContainer_NoRegister()
	{
		return UCoreTutorialObjectivesContainer::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectiveItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__objectiveItems;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__objectiveItems_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectiveItems_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectivePool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__objectivePool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectivePool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectiveContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectiveContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BasePooledInstanceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BasePooledInstanceAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreTutorialObjectiveItemClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreTutorialObjectiveItemClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreTutorialObjectivesContainer_OnTutorialObjectiveCompleted, "OnTutorialObjectiveCompleted" }, // 3577490396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreTutorialObjectivesContainer.h" },
		{ "ModuleRelativePath", "Public/CoreTutorialObjectivesContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectiveItems_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTutorialObjectivesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectiveItems = { "_objectiveItems", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTutorialObjectivesContainer, _objectiveItems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectiveItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectiveItems_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectiveItems_Key_KeyProp = { "_objectiveItems_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectiveItems_ValueProp = { "_objectiveItems", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreTutorialObjectiveItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectivePool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTutorialObjectivesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectivePool = { "_objectivePool", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTutorialObjectivesContainer, _objectivePool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectivePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectivePool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectivePool_Inner = { "_objectivePool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreTutorialObjectiveItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_ObjectiveContainer_MetaData[] = {
		{ "Category", "CoreTutorialObjectivesContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreTutorialObjectivesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_ObjectiveContainer = { "ObjectiveContainer", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTutorialObjectivesContainer, ObjectiveContainer), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_ObjectiveContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_ObjectiveContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_BasePooledInstanceAmount_MetaData[] = {
		{ "Category", "CoreTutorialObjectivesContainer" },
		{ "ModuleRelativePath", "Public/CoreTutorialObjectivesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_BasePooledInstanceAmount = { "BasePooledInstanceAmount", nullptr, (EPropertyFlags)0x0020080002000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTutorialObjectivesContainer, BasePooledInstanceAmount), METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_BasePooledInstanceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_BasePooledInstanceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_CoreTutorialObjectiveItemClass_MetaData[] = {
		{ "Category", "CoreTutorialObjectivesContainer" },
		{ "ModuleRelativePath", "Public/CoreTutorialObjectivesContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_CoreTutorialObjectiveItemClass = { "CoreTutorialObjectiveItemClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTutorialObjectivesContainer, CoreTutorialObjectiveItemClass), Z_Construct_UClass_UCoreTutorialObjectiveItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_CoreTutorialObjectiveItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_CoreTutorialObjectiveItemClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectiveItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectiveItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectiveItems_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectivePool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp__objectivePool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_ObjectiveContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_BasePooledInstanceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::NewProp_CoreTutorialObjectiveItemClass,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTutorialObjectivesViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreTutorialObjectivesContainer, ITutorialObjectivesViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTutorialObjectivesContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::ClassParams = {
		&UCoreTutorialObjectivesContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTutorialObjectivesContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTutorialObjectivesContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTutorialObjectivesContainer, 598492755);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTutorialObjectivesContainer>()
	{
		return UCoreTutorialObjectivesContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTutorialObjectivesContainer(Z_Construct_UClass_UCoreTutorialObjectivesContainer, &UCoreTutorialObjectivesContainer::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTutorialObjectivesContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTutorialObjectivesContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
