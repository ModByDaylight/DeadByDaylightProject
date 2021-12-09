// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreTutorialObjectiveItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreTutorialObjectiveItem() {}
// Cross Module References
	DBDUIVIEWSCORE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTutorialObjectiveItem_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreTutorialObjectiveItem();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialObjectivesViewData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics
	{
		struct _Script_DBDUIViewsCore_eventCoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::NewProp_item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DBDUIViewsCore_eventCoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate_Parms, item), Z_Construct_UClass_UCoreTutorialObjectiveItem_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::NewProp_item_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::NewProp_item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::NewProp_item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTutorialObjectiveItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore, nullptr, "CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_DBDUIViewsCore_eventCoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate_Parms), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FName NAME_UCoreTutorialObjectiveItem_InitObjective = FName(TEXT("InitObjective"));
	void UCoreTutorialObjectiveItem::InitObjective(FTutorialObjectivesViewData const& interactionsViewData)
	{
		CoreTutorialObjectiveItem_eventInitObjective_Parms Parms;
		Parms.interactionsViewData=interactionsViewData;
		ProcessEvent(FindFunctionChecked(NAME_UCoreTutorialObjectiveItem_InitObjective),&Parms);
	}
	static FName NAME_UCoreTutorialObjectiveItem_SetObjectiveCompleted = FName(TEXT("SetObjectiveCompleted"));
	void UCoreTutorialObjectiveItem::SetObjectiveCompleted(bool removeAfterCompletion)
	{
		CoreTutorialObjectiveItem_eventSetObjectiveCompleted_Parms Parms;
		Parms.removeAfterCompletion=removeAfterCompletion ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCoreTutorialObjectiveItem_SetObjectiveCompleted),&Parms);
	}
	void UCoreTutorialObjectiveItem::StaticRegisterNativesUCoreTutorialObjectiveItem()
	{
	}
	struct Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionsViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionsViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::NewProp_interactionsViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::NewProp_interactionsViewData = { "interactionsViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreTutorialObjectiveItem_eventInitObjective_Parms, interactionsViewData), Z_Construct_UScriptStruct_FTutorialObjectivesViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::NewProp_interactionsViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::NewProp_interactionsViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::NewProp_interactionsViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTutorialObjectiveItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTutorialObjectiveItem, nullptr, "InitObjective", nullptr, nullptr, sizeof(CoreTutorialObjectiveItem_eventInitObjective_Parms), Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics
	{
		static void NewProp_removeAfterCompletion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_removeAfterCompletion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::NewProp_removeAfterCompletion_SetBit(void* Obj)
	{
		((CoreTutorialObjectiveItem_eventSetObjectiveCompleted_Parms*)Obj)->removeAfterCompletion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::NewProp_removeAfterCompletion = { "removeAfterCompletion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreTutorialObjectiveItem_eventSetObjectiveCompleted_Parms), &Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::NewProp_removeAfterCompletion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::NewProp_removeAfterCompletion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreTutorialObjectiveItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreTutorialObjectiveItem, nullptr, "SetObjectiveCompleted", nullptr, nullptr, sizeof(CoreTutorialObjectiveItem_eventSetObjectiveCompleted_Parms), Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreTutorialObjectiveItem_NoRegister()
	{
		return UCoreTutorialObjectiveItem::StaticClass();
	}
	struct Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialObjectiveCompletedDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TutorialObjectiveCompletedDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreTutorialObjectiveItem_InitObjective, "InitObjective" }, // 1559145032
		{ &Z_Construct_UFunction_UCoreTutorialObjectiveItem_SetObjectiveCompleted, "SetObjectiveCompleted" }, // 1477836187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreTutorialObjectiveItem.h" },
		{ "ModuleRelativePath", "Public/CoreTutorialObjectiveItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::NewProp_TutorialObjectiveCompletedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreTutorialObjectiveItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::NewProp_TutorialObjectiveCompletedDelegate = { "TutorialObjectiveCompletedDelegate", nullptr, (EPropertyFlags)0x0010100000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreTutorialObjectiveItem, TutorialObjectiveCompletedDelegate), Z_Construct_UDelegateFunction_DBDUIViewsCore_CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::NewProp_TutorialObjectiveCompletedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::NewProp_TutorialObjectiveCompletedDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::NewProp_TutorialObjectiveCompletedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreTutorialObjectiveItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::ClassParams = {
		&UCoreTutorialObjectiveItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreTutorialObjectiveItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreTutorialObjectiveItem, 1814496655);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreTutorialObjectiveItem>()
	{
		return UCoreTutorialObjectiveItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreTutorialObjectiveItem(Z_Construct_UClass_UCoreTutorialObjectiveItem, &UCoreTutorialObjectiveItem::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreTutorialObjectiveItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreTutorialObjectiveItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
