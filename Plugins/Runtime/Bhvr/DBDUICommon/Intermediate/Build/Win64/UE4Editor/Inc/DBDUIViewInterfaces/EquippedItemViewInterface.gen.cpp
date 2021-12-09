// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EquippedItemViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquippedItemViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEquippedItemViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEquippedItemViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FItemBundleViewData();
// End Cross Module References
	DEFINE_FUNCTION(IEquippedItemViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEquippedItemViewInterface::execSetActiveState)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveState_Implementation(Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEquippedItemViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FItemBundleViewData,Z_Param_Out_itemBundleData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_itemBundleData);
		P_NATIVE_END;
	}
	void IEquippedItemViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IEquippedItemViewInterface::SetActiveState(bool isActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActiveState instead.");
	}
	void IEquippedItemViewInterface::SetData(FItemBundleViewData const& itemBundleData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UEquippedItemViewInterface::StaticRegisterNativesUEquippedItemViewInterface()
	{
		UClass* Class = UEquippedItemViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IEquippedItemViewInterface::execClearData },
			{ "SetActiveState", &IEquippedItemViewInterface::execSetActiveState },
			{ "SetData", &IEquippedItemViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedItemViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedItemViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedItemViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics
	{
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((EquippedItemViewInterface_eventSetActiveState_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EquippedItemViewInterface_eventSetActiveState_Parms), &Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedItemViewInterface, nullptr, "SetActiveState", nullptr, nullptr, sizeof(EquippedItemViewInterface_eventSetActiveState_Parms), Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData = { "itemBundleData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquippedItemViewInterface_eventSetData_Parms, itemBundleData), Z_Construct_UScriptStruct_FItemBundleViewData, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::NewProp_itemBundleData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedItemViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedItemViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(EquippedItemViewInterface_eventSetData_Parms), Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedItemViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedItemViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEquippedItemViewInterface_NoRegister()
	{
		return UEquippedItemViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEquippedItemViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquippedItemViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquippedItemViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquippedItemViewInterface_ClearData, "ClearData" }, // 206292844
		{ &Z_Construct_UFunction_UEquippedItemViewInterface_SetActiveState, "SetActiveState" }, // 1200639061
		{ &Z_Construct_UFunction_UEquippedItemViewInterface_SetData, "SetData" }, // 3475938347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquippedItemViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EquippedItemViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquippedItemViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquippedItemViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquippedItemViewInterface_Statics::ClassParams = {
		&UEquippedItemViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEquippedItemViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquippedItemViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquippedItemViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquippedItemViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquippedItemViewInterface, 1359737272);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UEquippedItemViewInterface>()
	{
		return UEquippedItemViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquippedItemViewInterface(Z_Construct_UClass_UEquippedItemViewInterface, &UEquippedItemViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UEquippedItemViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquippedItemViewInterface);
	static FName NAME_UEquippedItemViewInterface_ClearData = FName(TEXT("ClearData"));
	void IEquippedItemViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedItemViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEquippedItemViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEquippedItemViewInterface*)(O->GetNativeInterfaceAddress(UEquippedItemViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UEquippedItemViewInterface_SetActiveState = FName(TEXT("SetActiveState"));
	void IEquippedItemViewInterface::Execute_SetActiveState(UObject* O, bool isActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedItemViewInterface::StaticClass()));
		EquippedItemViewInterface_eventSetActiveState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquippedItemViewInterface_SetActiveState);
		if (Func)
		{
			Parms.isActive=isActive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEquippedItemViewInterface*)(O->GetNativeInterfaceAddress(UEquippedItemViewInterface::StaticClass())))
		{
			I->SetActiveState_Implementation(isActive);
		}
	}
	static FName NAME_UEquippedItemViewInterface_SetData = FName(TEXT("SetData"));
	void IEquippedItemViewInterface::Execute_SetData(UObject* O, FItemBundleViewData const& itemBundleData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedItemViewInterface::StaticClass()));
		EquippedItemViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquippedItemViewInterface_SetData);
		if (Func)
		{
			Parms.itemBundleData=itemBundleData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEquippedItemViewInterface*)(O->GetNativeInterfaceAddress(UEquippedItemViewInterface::StaticClass())))
		{
			I->SetData_Implementation(itemBundleData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
