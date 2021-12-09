// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EquippedPowerViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquippedPowerViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEquippedPowerViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEquippedPowerViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPowerBundleViewData();
// End Cross Module References
	DEFINE_FUNCTION(IEquippedPowerViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEquippedPowerViewInterface::execSetActiveState)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveState_Implementation(Z_Param_isActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEquippedPowerViewInterface::execSetCarryingMode)
	{
		P_GET_UBOOL(Z_Param_isCarrying);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCarryingMode_Implementation(Z_Param_isCarrying);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEquippedPowerViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FPowerBundleViewData,Z_Param_Out_powerBundleData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_powerBundleData);
		P_NATIVE_END;
	}
	void IEquippedPowerViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IEquippedPowerViewInterface::SetActiveState(bool isActive)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActiveState instead.");
	}
	void IEquippedPowerViewInterface::SetCarryingMode(bool isCarrying)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCarryingMode instead.");
	}
	void IEquippedPowerViewInterface::SetData(FPowerBundleViewData const& powerBundleData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UEquippedPowerViewInterface::StaticRegisterNativesUEquippedPowerViewInterface()
	{
		UClass* Class = UEquippedPowerViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IEquippedPowerViewInterface::execClearData },
			{ "SetActiveState", &IEquippedPowerViewInterface::execSetActiveState },
			{ "SetCarryingMode", &IEquippedPowerViewInterface::execSetCarryingMode },
			{ "SetData", &IEquippedPowerViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquippedPowerViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedPowerViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedPowerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedPowerViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedPowerViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedPowerViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedPowerViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedPowerViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedPowerViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics
	{
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((EquippedPowerViewInterface_eventSetActiveState_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EquippedPowerViewInterface_eventSetActiveState_Parms), &Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedPowerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedPowerViewInterface, nullptr, "SetActiveState", nullptr, nullptr, sizeof(EquippedPowerViewInterface_eventSetActiveState_Parms), Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCarrying_MetaData[];
#endif
		static void NewProp_isCarrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCarrying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::NewProp_isCarrying_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::NewProp_isCarrying_SetBit(void* Obj)
	{
		((EquippedPowerViewInterface_eventSetCarryingMode_Parms*)Obj)->isCarrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::NewProp_isCarrying = { "isCarrying", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EquippedPowerViewInterface_eventSetCarryingMode_Parms), &Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::NewProp_isCarrying_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::NewProp_isCarrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::NewProp_isCarrying_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::NewProp_isCarrying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedPowerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedPowerViewInterface, nullptr, "SetCarryingMode", nullptr, nullptr, sizeof(EquippedPowerViewInterface_eventSetCarryingMode_Parms), Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_powerBundleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_powerBundleData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::NewProp_powerBundleData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::NewProp_powerBundleData = { "powerBundleData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquippedPowerViewInterface_eventSetData_Parms, powerBundleData), Z_Construct_UScriptStruct_FPowerBundleViewData, METADATA_PARAMS(Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::NewProp_powerBundleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::NewProp_powerBundleData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::NewProp_powerBundleData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquippedPowerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquippedPowerViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(EquippedPowerViewInterface_eventSetData_Parms), Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquippedPowerViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquippedPowerViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEquippedPowerViewInterface_NoRegister()
	{
		return UEquippedPowerViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEquippedPowerViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquippedPowerViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquippedPowerViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquippedPowerViewInterface_ClearData, "ClearData" }, // 3170631268
		{ &Z_Construct_UFunction_UEquippedPowerViewInterface_SetActiveState, "SetActiveState" }, // 4276107512
		{ &Z_Construct_UFunction_UEquippedPowerViewInterface_SetCarryingMode, "SetCarryingMode" }, // 2447046419
		{ &Z_Construct_UFunction_UEquippedPowerViewInterface_SetData, "SetData" }, // 1977401620
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquippedPowerViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EquippedPowerViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquippedPowerViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquippedPowerViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquippedPowerViewInterface_Statics::ClassParams = {
		&UEquippedPowerViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEquippedPowerViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquippedPowerViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquippedPowerViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquippedPowerViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquippedPowerViewInterface, 358412718);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UEquippedPowerViewInterface>()
	{
		return UEquippedPowerViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquippedPowerViewInterface(Z_Construct_UClass_UEquippedPowerViewInterface, &UEquippedPowerViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UEquippedPowerViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquippedPowerViewInterface);
	static FName NAME_UEquippedPowerViewInterface_ClearData = FName(TEXT("ClearData"));
	void IEquippedPowerViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedPowerViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEquippedPowerViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEquippedPowerViewInterface*)(O->GetNativeInterfaceAddress(UEquippedPowerViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UEquippedPowerViewInterface_SetActiveState = FName(TEXT("SetActiveState"));
	void IEquippedPowerViewInterface::Execute_SetActiveState(UObject* O, bool isActive)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedPowerViewInterface::StaticClass()));
		EquippedPowerViewInterface_eventSetActiveState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquippedPowerViewInterface_SetActiveState);
		if (Func)
		{
			Parms.isActive=isActive;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEquippedPowerViewInterface*)(O->GetNativeInterfaceAddress(UEquippedPowerViewInterface::StaticClass())))
		{
			I->SetActiveState_Implementation(isActive);
		}
	}
	static FName NAME_UEquippedPowerViewInterface_SetCarryingMode = FName(TEXT("SetCarryingMode"));
	void IEquippedPowerViewInterface::Execute_SetCarryingMode(UObject* O, bool isCarrying)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedPowerViewInterface::StaticClass()));
		EquippedPowerViewInterface_eventSetCarryingMode_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquippedPowerViewInterface_SetCarryingMode);
		if (Func)
		{
			Parms.isCarrying=isCarrying;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEquippedPowerViewInterface*)(O->GetNativeInterfaceAddress(UEquippedPowerViewInterface::StaticClass())))
		{
			I->SetCarryingMode_Implementation(isCarrying);
		}
	}
	static FName NAME_UEquippedPowerViewInterface_SetData = FName(TEXT("SetData"));
	void IEquippedPowerViewInterface::Execute_SetData(UObject* O, FPowerBundleViewData const& powerBundleData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquippedPowerViewInterface::StaticClass()));
		EquippedPowerViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquippedPowerViewInterface_SetData);
		if (Func)
		{
			Parms.powerBundleData=powerBundleData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEquippedPowerViewInterface*)(O->GetNativeInterfaceAddress(UEquippedPowerViewInterface::StaticClass())))
		{
			I->SetData_Implementation(powerBundleData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
