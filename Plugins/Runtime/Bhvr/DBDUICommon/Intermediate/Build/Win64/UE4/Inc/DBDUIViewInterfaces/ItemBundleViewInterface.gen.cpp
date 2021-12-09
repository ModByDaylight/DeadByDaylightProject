// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ItemBundleViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBundleViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UItemBundleViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UItemBundleViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemBundleViewData();
// End Cross Module References
	DEFINE_FUNCTION(IItemBundleViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IItemBundleViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FItemBundleViewData,Z_Param_Out_itemBundleViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_itemBundleViewData);
		P_NATIVE_END;
	}
	void IItemBundleViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IItemBundleViewInterface::SetData(FItemBundleViewData const& itemBundleViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UItemBundleViewInterface::StaticRegisterNativesUItemBundleViewInterface()
	{
		UClass* Class = UItemBundleViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IItemBundleViewInterface::execClearData },
			{ "SetData", &IItemBundleViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemBundleViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBundleViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemBundleViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBundleViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBundleViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemBundleViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBundleViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemBundleViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemBundleViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemBundleViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemBundleViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::NewProp_itemBundleViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::NewProp_itemBundleViewData = { "itemBundleViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemBundleViewInterface_eventSetData_Parms, itemBundleViewData), Z_Construct_UScriptStruct_FItemBundleViewData, METADATA_PARAMS(Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::NewProp_itemBundleViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::NewProp_itemBundleViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::NewProp_itemBundleViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemBundleViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemBundleViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(ItemBundleViewInterface_eventSetData_Parms), Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemBundleViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemBundleViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemBundleViewInterface_NoRegister()
	{
		return UItemBundleViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UItemBundleViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemBundleViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemBundleViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemBundleViewInterface_ClearData, "ClearData" }, // 2846278080
		{ &Z_Construct_UFunction_UItemBundleViewInterface_SetData, "SetData" }, // 497052389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemBundleViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemBundleViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemBundleViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemBundleViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemBundleViewInterface_Statics::ClassParams = {
		&UItemBundleViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UItemBundleViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemBundleViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemBundleViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemBundleViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemBundleViewInterface, 1730672752);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UItemBundleViewInterface>()
	{
		return UItemBundleViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemBundleViewInterface(Z_Construct_UClass_UItemBundleViewInterface, &UItemBundleViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UItemBundleViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemBundleViewInterface);
	static FName NAME_UItemBundleViewInterface_ClearData = FName(TEXT("ClearData"));
	void IItemBundleViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemBundleViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UItemBundleViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IItemBundleViewInterface*)(O->GetNativeInterfaceAddress(UItemBundleViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UItemBundleViewInterface_SetData = FName(TEXT("SetData"));
	void IItemBundleViewInterface::Execute_SetData(UObject* O, FItemBundleViewData const& itemBundleViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemBundleViewInterface::StaticClass()));
		ItemBundleViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemBundleViewInterface_SetData);
		if (Func)
		{
			Parms.itemBundleViewData=itemBundleViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IItemBundleViewInterface*)(O->GetNativeInterfaceAddress(UItemBundleViewInterface::StaticClass())))
		{
			I->SetData_Implementation(itemBundleViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
