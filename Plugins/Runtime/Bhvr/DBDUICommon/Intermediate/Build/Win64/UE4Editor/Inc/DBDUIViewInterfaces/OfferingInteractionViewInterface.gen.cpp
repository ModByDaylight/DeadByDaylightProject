// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/OfferingInteractionViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingInteractionViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOfferingInteractionViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOfferingInteractionViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingViewData();
// End Cross Module References
	DEFINE_FUNCTION(IOfferingInteractionViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOfferingInteractionViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FOfferingViewData,Z_Param_Out_OfferingData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_OfferingData);
		P_NATIVE_END;
	}
	void IOfferingInteractionViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IOfferingInteractionViewInterface::SetData(FOfferingViewData const& OfferingData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UOfferingInteractionViewInterface::StaticRegisterNativesUOfferingInteractionViewInterface()
	{
		UClass* Class = UOfferingInteractionViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IOfferingInteractionViewInterface::execClearData },
			{ "SetData", &IOfferingInteractionViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOfferingInteractionViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingInteractionViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingInteractionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOfferingInteractionViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOfferingInteractionViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOfferingInteractionViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingInteractionViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOfferingInteractionViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOfferingInteractionViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OfferingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::NewProp_OfferingData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::NewProp_OfferingData = { "OfferingData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OfferingInteractionViewInterface_eventSetData_Parms, OfferingData), Z_Construct_UScriptStruct_FOfferingViewData, METADATA_PARAMS(Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::NewProp_OfferingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::NewProp_OfferingData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::NewProp_OfferingData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingInteractionViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOfferingInteractionViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(OfferingInteractionViewInterface_eventSetData_Parms), Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOfferingInteractionViewInterface_NoRegister()
	{
		return UOfferingInteractionViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOfferingInteractionViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOfferingInteractionViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOfferingInteractionViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOfferingInteractionViewInterface_ClearData, "ClearData" }, // 89205770
		{ &Z_Construct_UFunction_UOfferingInteractionViewInterface_SetData, "SetData" }, // 779557808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOfferingInteractionViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OfferingInteractionViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOfferingInteractionViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOfferingInteractionViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOfferingInteractionViewInterface_Statics::ClassParams = {
		&UOfferingInteractionViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOfferingInteractionViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOfferingInteractionViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOfferingInteractionViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOfferingInteractionViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOfferingInteractionViewInterface, 2486154428);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UOfferingInteractionViewInterface>()
	{
		return UOfferingInteractionViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOfferingInteractionViewInterface(Z_Construct_UClass_UOfferingInteractionViewInterface, &UOfferingInteractionViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UOfferingInteractionViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOfferingInteractionViewInterface);
	static FName NAME_UOfferingInteractionViewInterface_ClearData = FName(TEXT("ClearData"));
	void IOfferingInteractionViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOfferingInteractionViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UOfferingInteractionViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IOfferingInteractionViewInterface*)(O->GetNativeInterfaceAddress(UOfferingInteractionViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UOfferingInteractionViewInterface_SetData = FName(TEXT("SetData"));
	void IOfferingInteractionViewInterface::Execute_SetData(UObject* O, FOfferingViewData const& OfferingData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOfferingInteractionViewInterface::StaticClass()));
		OfferingInteractionViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOfferingInteractionViewInterface_SetData);
		if (Func)
		{
			Parms.OfferingData=OfferingData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOfferingInteractionViewInterface*)(O->GetNativeInterfaceAddress(UOfferingInteractionViewInterface::StaticClass())))
		{
			I->SetData_Implementation(OfferingData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
