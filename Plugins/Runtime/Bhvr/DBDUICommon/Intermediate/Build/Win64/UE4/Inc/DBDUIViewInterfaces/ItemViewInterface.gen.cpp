// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ItemViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UItemViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UItemViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemViewData();
// End Cross Module References
	DEFINE_FUNCTION(IItemViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IItemViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FItemViewData,Z_Param_Out_itemViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_itemViewData);
		P_NATIVE_END;
	}
	void IItemViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IItemViewInterface::SetData(FItemViewData const& itemViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UItemViewInterface::StaticRegisterNativesUItemViewInterface()
	{
		UClass* Class = UItemViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IItemViewInterface::execClearData },
			{ "SetData", &IItemViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UItemViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UItemViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemViewInterface_SetData_Statics::NewProp_itemViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemViewInterface_SetData_Statics::NewProp_itemViewData = { "itemViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ItemViewInterface_eventSetData_Parms, itemViewData), Z_Construct_UScriptStruct_FItemViewData, METADATA_PARAMS(Z_Construct_UFunction_UItemViewInterface_SetData_Statics::NewProp_itemViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemViewInterface_SetData_Statics::NewProp_itemViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemViewInterface_SetData_Statics::NewProp_itemViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItemViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(ItemViewInterface_eventSetData_Parms), Z_Construct_UFunction_UItemViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItemViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItemViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UItemViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UItemViewInterface_NoRegister()
	{
		return UItemViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UItemViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItemViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItemViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemViewInterface_ClearData, "ClearData" }, // 807045143
		{ &Z_Construct_UFunction_UItemViewInterface_SetData, "SetData" }, // 1022911189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItemViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItemViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IItemViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UItemViewInterface_Statics::ClassParams = {
		&UItemViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UItemViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItemViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItemViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UItemViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UItemViewInterface, 981545186);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UItemViewInterface>()
	{
		return UItemViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UItemViewInterface(Z_Construct_UClass_UItemViewInterface, &UItemViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UItemViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItemViewInterface);
	static FName NAME_UItemViewInterface_ClearData = FName(TEXT("ClearData"));
	void IItemViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UItemViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IItemViewInterface*)(O->GetNativeInterfaceAddress(UItemViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UItemViewInterface_SetData = FName(TEXT("SetData"));
	void IItemViewInterface::Execute_SetData(UObject* O, FItemViewData const& itemViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UItemViewInterface::StaticClass()));
		ItemViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UItemViewInterface_SetData);
		if (Func)
		{
			Parms.itemViewData=itemViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IItemViewInterface*)(O->GetNativeInterfaceAddress(UItemViewInterface::StaticClass())))
		{
			I->SetData_Implementation(itemViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
