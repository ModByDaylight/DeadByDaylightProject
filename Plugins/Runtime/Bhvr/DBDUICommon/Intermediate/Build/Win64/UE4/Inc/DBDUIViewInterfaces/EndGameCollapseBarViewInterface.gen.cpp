// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EndGameCollapseBarViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndGameCollapseBarViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEndGameCollapseBarViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UEndGameCollapseBarViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(IEndGameCollapseBarViewInterface::execInitEndGameScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitEndGameScenario_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEndGameCollapseBarViewInterface::execSetEndGameScenarioProgressionMode)
	{
		P_GET_UBOOL(Z_Param_isSlowMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndGameScenarioProgressionMode_Implementation(Z_Param_isSlowMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEndGameCollapseBarViewInterface::execSetEndGameScenarioProgressionValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEndGameScenarioProgressionValue_Implementation(Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IEndGameCollapseBarViewInterface::execStartEndGameScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEndGameScenario_Implementation();
		P_NATIVE_END;
	}
	void IEndGameCollapseBarViewInterface::InitEndGameScenario()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitEndGameScenario instead.");
	}
	void IEndGameCollapseBarViewInterface::SetEndGameScenarioProgressionMode(bool isSlowMode)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetEndGameScenarioProgressionMode instead.");
	}
	void IEndGameCollapseBarViewInterface::SetEndGameScenarioProgressionValue(const float amount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetEndGameScenarioProgressionValue instead.");
	}
	void IEndGameCollapseBarViewInterface::StartEndGameScenario()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartEndGameScenario instead.");
	}
	void UEndGameCollapseBarViewInterface::StaticRegisterNativesUEndGameCollapseBarViewInterface()
	{
		UClass* Class = UEndGameCollapseBarViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitEndGameScenario", &IEndGameCollapseBarViewInterface::execInitEndGameScenario },
			{ "SetEndGameScenarioProgressionMode", &IEndGameCollapseBarViewInterface::execSetEndGameScenarioProgressionMode },
			{ "SetEndGameScenarioProgressionValue", &IEndGameCollapseBarViewInterface::execSetEndGameScenarioProgressionValue },
			{ "StartEndGameScenario", &IEndGameCollapseBarViewInterface::execStartEndGameScenario },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEndGameCollapseBarViewInterface_InitEndGameScenario_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameCollapseBarViewInterface_InitEndGameScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameCollapseBarViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameCollapseBarViewInterface_InitEndGameScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameCollapseBarViewInterface, nullptr, "InitEndGameScenario", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_InitEndGameScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_InitEndGameScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameCollapseBarViewInterface_InitEndGameScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameCollapseBarViewInterface_InitEndGameScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSlowMode_MetaData[];
#endif
		static void NewProp_isSlowMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSlowMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::NewProp_isSlowMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::NewProp_isSlowMode_SetBit(void* Obj)
	{
		((EndGameCollapseBarViewInterface_eventSetEndGameScenarioProgressionMode_Parms*)Obj)->isSlowMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::NewProp_isSlowMode = { "isSlowMode", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EndGameCollapseBarViewInterface_eventSetEndGameScenarioProgressionMode_Parms), &Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::NewProp_isSlowMode_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::NewProp_isSlowMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::NewProp_isSlowMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::NewProp_isSlowMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameCollapseBarViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameCollapseBarViewInterface, nullptr, "SetEndGameScenarioProgressionMode", nullptr, nullptr, sizeof(EndGameCollapseBarViewInterface_eventSetEndGameScenarioProgressionMode_Parms), Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::NewProp_amount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndGameCollapseBarViewInterface_eventSetEndGameScenarioProgressionValue_Parms, amount), METADATA_PARAMS(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::NewProp_amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::NewProp_amount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::NewProp_amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameCollapseBarViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameCollapseBarViewInterface, nullptr, "SetEndGameScenarioProgressionValue", nullptr, nullptr, sizeof(EndGameCollapseBarViewInterface_eventSetEndGameScenarioProgressionValue_Parms), Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEndGameCollapseBarViewInterface_StartEndGameScenario_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndGameCollapseBarViewInterface_StartEndGameScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EndGameCollapseBarViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndGameCollapseBarViewInterface_StartEndGameScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndGameCollapseBarViewInterface, nullptr, "StartEndGameScenario", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_StartEndGameScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndGameCollapseBarViewInterface_StartEndGameScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndGameCollapseBarViewInterface_StartEndGameScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndGameCollapseBarViewInterface_StartEndGameScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndGameCollapseBarViewInterface_NoRegister()
	{
		return UEndGameCollapseBarViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndGameCollapseBarViewInterface_InitEndGameScenario, "InitEndGameScenario" }, // 3195798663
		{ &Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode, "SetEndGameScenarioProgressionMode" }, // 1583778046
		{ &Z_Construct_UFunction_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue, "SetEndGameScenarioProgressionValue" }, // 854901288
		{ &Z_Construct_UFunction_UEndGameCollapseBarViewInterface_StartEndGameScenario, "StartEndGameScenario" }, // 1492560919
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EndGameCollapseBarViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEndGameCollapseBarViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics::ClassParams = {
		&UEndGameCollapseBarViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndGameCollapseBarViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndGameCollapseBarViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndGameCollapseBarViewInterface, 2551166936);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UEndGameCollapseBarViewInterface>()
	{
		return UEndGameCollapseBarViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndGameCollapseBarViewInterface(Z_Construct_UClass_UEndGameCollapseBarViewInterface, &UEndGameCollapseBarViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UEndGameCollapseBarViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndGameCollapseBarViewInterface);
	static FName NAME_UEndGameCollapseBarViewInterface_InitEndGameScenario = FName(TEXT("InitEndGameScenario"));
	void IEndGameCollapseBarViewInterface::Execute_InitEndGameScenario(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEndGameCollapseBarViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEndGameCollapseBarViewInterface_InitEndGameScenario);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEndGameCollapseBarViewInterface*)(O->GetNativeInterfaceAddress(UEndGameCollapseBarViewInterface::StaticClass())))
		{
			I->InitEndGameScenario_Implementation();
		}
	}
	static FName NAME_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode = FName(TEXT("SetEndGameScenarioProgressionMode"));
	void IEndGameCollapseBarViewInterface::Execute_SetEndGameScenarioProgressionMode(UObject* O, bool isSlowMode)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEndGameCollapseBarViewInterface::StaticClass()));
		EndGameCollapseBarViewInterface_eventSetEndGameScenarioProgressionMode_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionMode);
		if (Func)
		{
			Parms.isSlowMode=isSlowMode;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEndGameCollapseBarViewInterface*)(O->GetNativeInterfaceAddress(UEndGameCollapseBarViewInterface::StaticClass())))
		{
			I->SetEndGameScenarioProgressionMode_Implementation(isSlowMode);
		}
	}
	static FName NAME_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue = FName(TEXT("SetEndGameScenarioProgressionValue"));
	void IEndGameCollapseBarViewInterface::Execute_SetEndGameScenarioProgressionValue(UObject* O, const float amount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEndGameCollapseBarViewInterface::StaticClass()));
		EndGameCollapseBarViewInterface_eventSetEndGameScenarioProgressionValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEndGameCollapseBarViewInterface_SetEndGameScenarioProgressionValue);
		if (Func)
		{
			Parms.amount=amount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IEndGameCollapseBarViewInterface*)(O->GetNativeInterfaceAddress(UEndGameCollapseBarViewInterface::StaticClass())))
		{
			I->SetEndGameScenarioProgressionValue_Implementation(amount);
		}
	}
	static FName NAME_UEndGameCollapseBarViewInterface_StartEndGameScenario = FName(TEXT("StartEndGameScenario"));
	void IEndGameCollapseBarViewInterface::Execute_StartEndGameScenario(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEndGameCollapseBarViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UEndGameCollapseBarViewInterface_StartEndGameScenario);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IEndGameCollapseBarViewInterface*)(O->GetNativeInterfaceAddress(UEndGameCollapseBarViewInterface::StaticClass())))
		{
			I->StartEndGameScenario_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
