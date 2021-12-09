// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TestBuildFlagViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBuildFlagViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTestBuildFlagViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTestBuildFlagViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ETestBuildType();
// End Cross Module References
	DEFINE_FUNCTION(ITestBuildFlagViewInterface::execUpdateWidget)
	{
		P_GET_ENUM(ETestBuildType,Z_Param_testBuildType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWidget_Implementation(ETestBuildType(Z_Param_testBuildType));
		P_NATIVE_END;
	}
	void ITestBuildFlagViewInterface::UpdateWidget(ETestBuildType testBuildType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateWidget instead.");
	}
	void UTestBuildFlagViewInterface::StaticRegisterNativesUTestBuildFlagViewInterface()
	{
		UClass* Class = UTestBuildFlagViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateWidget", &ITestBuildFlagViewInterface::execUpdateWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_testBuildType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_testBuildType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::NewProp_testBuildType = { "testBuildType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestBuildFlagViewInterface_eventUpdateWidget_Parms, testBuildType), Z_Construct_UEnum_DBDSharedTypes_ETestBuildType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::NewProp_testBuildType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::NewProp_testBuildType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::NewProp_testBuildType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestBuildFlagViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestBuildFlagViewInterface, nullptr, "UpdateWidget", nullptr, nullptr, sizeof(TestBuildFlagViewInterface_eventUpdateWidget_Parms), Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTestBuildFlagViewInterface_NoRegister()
	{
		return UTestBuildFlagViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTestBuildFlagViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestBuildFlagViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestBuildFlagViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestBuildFlagViewInterface_UpdateWidget, "UpdateWidget" }, // 583852352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestBuildFlagViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TestBuildFlagViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestBuildFlagViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITestBuildFlagViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestBuildFlagViewInterface_Statics::ClassParams = {
		&UTestBuildFlagViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTestBuildFlagViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestBuildFlagViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestBuildFlagViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestBuildFlagViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestBuildFlagViewInterface, 1254685679);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UTestBuildFlagViewInterface>()
	{
		return UTestBuildFlagViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestBuildFlagViewInterface(Z_Construct_UClass_UTestBuildFlagViewInterface, &UTestBuildFlagViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UTestBuildFlagViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestBuildFlagViewInterface);
	static FName NAME_UTestBuildFlagViewInterface_UpdateWidget = FName(TEXT("UpdateWidget"));
	void ITestBuildFlagViewInterface::Execute_UpdateWidget(UObject* O, ETestBuildType testBuildType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTestBuildFlagViewInterface::StaticClass()));
		TestBuildFlagViewInterface_eventUpdateWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTestBuildFlagViewInterface_UpdateWidget);
		if (Func)
		{
			Parms.testBuildType=testBuildType;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITestBuildFlagViewInterface*)(O->GetNativeInterfaceAddress(UTestBuildFlagViewInterface::StaticClass())))
		{
			I->UpdateWidget_Implementation(testBuildType);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
