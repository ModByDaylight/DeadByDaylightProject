// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/OfferingViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOfferingViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOfferingViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingViewData();
// End Cross Module References
	DEFINE_FUNCTION(IOfferingViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOfferingViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FOfferingViewData,Z_Param_Out_offeringViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_offeringViewData);
		P_NATIVE_END;
	}
	void IOfferingViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IOfferingViewInterface::SetData(FOfferingViewData const& offeringViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UOfferingViewInterface::StaticRegisterNativesUOfferingViewInterface()
	{
		UClass* Class = UOfferingViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IOfferingViewInterface::execClearData },
			{ "SetData", &IOfferingViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOfferingViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOfferingViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOfferingViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOfferingViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOfferingViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOfferingViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offeringViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_offeringViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::NewProp_offeringViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::NewProp_offeringViewData = { "offeringViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingViewInterface_eventSetData_Parms, offeringViewData), Z_Construct_UScriptStruct_FOfferingViewData, METADATA_PARAMS(Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::NewProp_offeringViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::NewProp_offeringViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::NewProp_offeringViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOfferingViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(OfferingViewInterface_eventSetData_Parms), Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOfferingViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOfferingViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOfferingViewInterface_NoRegister()
	{
		return UOfferingViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOfferingViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOfferingViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOfferingViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOfferingViewInterface_ClearData, "ClearData" }, // 1012982646
		{ &Z_Construct_UFunction_UOfferingViewInterface_SetData, "SetData" }, // 102391379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOfferingViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OfferingViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOfferingViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOfferingViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOfferingViewInterface_Statics::ClassParams = {
		&UOfferingViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOfferingViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOfferingViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOfferingViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOfferingViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOfferingViewInterface, 1643660056);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UOfferingViewInterface>()
	{
		return UOfferingViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOfferingViewInterface(Z_Construct_UClass_UOfferingViewInterface, &UOfferingViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UOfferingViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOfferingViewInterface);
	static FName NAME_UOfferingViewInterface_ClearData = FName(TEXT("ClearData"));
	void IOfferingViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOfferingViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UOfferingViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IOfferingViewInterface*)(O->GetNativeInterfaceAddress(UOfferingViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UOfferingViewInterface_SetData = FName(TEXT("SetData"));
	void IOfferingViewInterface::Execute_SetData(UObject* O, FOfferingViewData const& offeringViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOfferingViewInterface::StaticClass()));
		OfferingViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOfferingViewInterface_SetData);
		if (Func)
		{
			Parms.offeringViewData=offeringViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOfferingViewInterface*)(O->GetNativeInterfaceAddress(UOfferingViewInterface::StaticClass())))
		{
			I->SetData_Implementation(offeringViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif