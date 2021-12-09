// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ItemInteractionViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemInteractionViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UItemInteractionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UItemInteractionViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemBundleViewData();
// End Cross Module References
	DEFINE_FUNCTION(IItemInteractionViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IItemInteractionViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FItemBundleViewData,Z_Param_Out_itemBundleData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_itemBundleData);
		P_NATIVE_END;
	}
	void IItemInteractionViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IItemInteractionViewInterface::SetData(FItemBundleViewData const& itemBundleData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UItemInteractionViewInterface::StaticRegisterNativesUItemInteractionViewInterface()
	{
		UClass* Class = UItemInteractionViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IItemInteractionViewInterface::execClearData },
			{ "SetData", &IItemInteractionViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemInteractionViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemInteractionViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemInteractionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemInteractionViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemInteractionViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemInteractionViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInteractionViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemInteractionViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemInteractionViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemBundleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemBundleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::NewProp_itemBundleData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::NewProp_itemBundleData = { "itemBundleData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemInteractionViewInterface_eventSetData_Parms, itemBundleData), Z_Construct_UScriptStruct_FItemBundleViewData, METADATA_PARAMS(Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::NewProp_itemBundleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::NewProp_itemBundleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::NewProp_itemBundleData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemInteractionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemInteractionViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(ItemInteractionViewInterface_eventSetData_Parms), Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemInteractionViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemInteractionViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemInteractionViewInterface_NoRegister()
	{
		return UItemInteractionViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UItemInteractionViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemInteractionViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemInteractionViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemInteractionViewInterface_ClearData, "ClearData" }, // 4262726733
		{ &Z_Construct_UFunction_UItemInteractionViewInterface_SetData, "SetData" }, // 681742403
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemInteractionViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemInteractionViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemInteractionViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemInteractionViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemInteractionViewInterface_Statics::ClassParams = {
		&UItemInteractionViewInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UItemInteractionViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemInteractionViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemInteractionViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemInteractionViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemInteractionViewInterface, 3120698711);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UItemInteractionViewInterface>()
	{
		return UItemInteractionViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemInteractionViewInterface(Z_Construct_UClass_UItemInteractionViewInterface, &UItemInteractionViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UItemInteractionViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemInteractionViewInterface);
	static FName NAME_UItemInteractionViewInterface_ClearData = FName(TEXT("ClearData"));
	void IItemInteractionViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemInteractionViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UItemInteractionViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IItemInteractionViewInterface*)(O->GetNativeInterfaceAddress(UItemInteractionViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UItemInteractionViewInterface_SetData = FName(TEXT("SetData"));
	void IItemInteractionViewInterface::Execute_SetData(UObject* O, FItemBundleViewData const& itemBundleData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemInteractionViewInterface::StaticClass()));
		ItemInteractionViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemInteractionViewInterface_SetData);
		if (Func)
		{
			Parms.itemBundleData=itemBundleData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IItemInteractionViewInterface*)(O->GetNativeInterfaceAddress(UItemInteractionViewInterface::StaticClass())))
		{
			I->SetData_Implementation(itemBundleData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
