// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/AddonViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddonViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UAddonViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UAddonViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAddonViewData();
// End Cross Module References
	DEFINE_FUNCTION(IAddonViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAddonViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FAddonViewData,Z_Param_Out_baseLoadoutPartViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_baseLoadoutPartViewData);
		P_NATIVE_END;
	}
	void IAddonViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IAddonViewInterface::SetData(FAddonViewData const& baseLoadoutPartViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UAddonViewInterface::StaticRegisterNativesUAddonViewInterface()
	{
		UClass* Class = UAddonViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IAddonViewInterface::execClearData },
			{ "SetData", &IAddonViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAddonViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddonViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AddonViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAddonViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAddonViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAddonViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddonViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAddonViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAddonViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAddonViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_baseLoadoutPartViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_baseLoadoutPartViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::NewProp_baseLoadoutPartViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::NewProp_baseLoadoutPartViewData = { "baseLoadoutPartViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AddonViewInterface_eventSetData_Parms, baseLoadoutPartViewData), Z_Construct_UScriptStruct_FAddonViewData, METADATA_PARAMS(Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::NewProp_baseLoadoutPartViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::NewProp_baseLoadoutPartViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::NewProp_baseLoadoutPartViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AddonViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAddonViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(AddonViewInterface_eventSetData_Parms), Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAddonViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAddonViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAddonViewInterface_NoRegister()
	{
		return UAddonViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAddonViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddonViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAddonViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAddonViewInterface_ClearData, "ClearData" }, // 3218360392
		{ &Z_Construct_UFunction_UAddonViewInterface_SetData, "SetData" }, // 2977443371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddonViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AddonViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddonViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAddonViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddonViewInterface_Statics::ClassParams = {
		&UAddonViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAddonViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddonViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddonViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddonViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddonViewInterface, 540159115);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UAddonViewInterface>()
	{
		return UAddonViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddonViewInterface(Z_Construct_UClass_UAddonViewInterface, &UAddonViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UAddonViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddonViewInterface);
	static FName NAME_UAddonViewInterface_ClearData = FName(TEXT("ClearData"));
	void IAddonViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAddonViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UAddonViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IAddonViewInterface*)(O->GetNativeInterfaceAddress(UAddonViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UAddonViewInterface_SetData = FName(TEXT("SetData"));
	void IAddonViewInterface::Execute_SetData(UObject* O, FAddonViewData const& baseLoadoutPartViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAddonViewInterface::StaticClass()));
		AddonViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAddonViewInterface_SetData);
		if (Func)
		{
			Parms.baseLoadoutPartViewData=baseLoadoutPartViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IAddonViewInterface*)(O->GetNativeInterfaceAddress(UAddonViewInterface::StaticClass())))
		{
			I->SetData_Implementation(baseLoadoutPartViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
