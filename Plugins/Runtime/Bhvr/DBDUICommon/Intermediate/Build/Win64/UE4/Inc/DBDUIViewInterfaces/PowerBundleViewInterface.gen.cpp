// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PowerBundleViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerBundleViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPowerBundleViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPowerBundleViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPowerBundleViewData();
// End Cross Module References
	DEFINE_FUNCTION(IPowerBundleViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPowerBundleViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FPowerBundleViewData,Z_Param_Out_powerBundleViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_powerBundleViewData);
		P_NATIVE_END;
	}
	void IPowerBundleViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IPowerBundleViewInterface::SetData(FPowerBundleViewData const& powerBundleViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UPowerBundleViewInterface::StaticRegisterNativesUPowerBundleViewInterface()
	{
		UClass* Class = UPowerBundleViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IPowerBundleViewInterface::execClearData },
			{ "SetData", &IPowerBundleViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPowerBundleViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerBundleViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerBundleViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerBundleViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerBundleViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerBundleViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerBundleViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerBundleViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerBundleViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_powerBundleViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_powerBundleViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::NewProp_powerBundleViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::NewProp_powerBundleViewData = { "powerBundleViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PowerBundleViewInterface_eventSetData_Parms, powerBundleViewData), Z_Construct_UScriptStruct_FPowerBundleViewData, METADATA_PARAMS(Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::NewProp_powerBundleViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::NewProp_powerBundleViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::NewProp_powerBundleViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerBundleViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPowerBundleViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(PowerBundleViewInterface_eventSetData_Parms), Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPowerBundleViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPowerBundleViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPowerBundleViewInterface_NoRegister()
	{
		return UPowerBundleViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPowerBundleViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerBundleViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPowerBundleViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPowerBundleViewInterface_ClearData, "ClearData" }, // 14426509
		{ &Z_Construct_UFunction_UPowerBundleViewInterface_SetData, "SetData" }, // 3212683175
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerBundleViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PowerBundleViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerBundleViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPowerBundleViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerBundleViewInterface_Statics::ClassParams = {
		&UPowerBundleViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPowerBundleViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerBundleViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerBundleViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerBundleViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerBundleViewInterface, 1087226808);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPowerBundleViewInterface>()
	{
		return UPowerBundleViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerBundleViewInterface(Z_Construct_UClass_UPowerBundleViewInterface, &UPowerBundleViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPowerBundleViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerBundleViewInterface);
	static FName NAME_UPowerBundleViewInterface_ClearData = FName(TEXT("ClearData"));
	void IPowerBundleViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPowerBundleViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPowerBundleViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPowerBundleViewInterface*)(O->GetNativeInterfaceAddress(UPowerBundleViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UPowerBundleViewInterface_SetData = FName(TEXT("SetData"));
	void IPowerBundleViewInterface::Execute_SetData(UObject* O, FPowerBundleViewData const& powerBundleViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPowerBundleViewInterface::StaticClass()));
		PowerBundleViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPowerBundleViewInterface_SetData);
		if (Func)
		{
			Parms.powerBundleViewData=powerBundleViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPowerBundleViewInterface*)(O->GetNativeInterfaceAddress(UPowerBundleViewInterface::StaticClass())))
		{
			I->SetData_Implementation(powerBundleViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
