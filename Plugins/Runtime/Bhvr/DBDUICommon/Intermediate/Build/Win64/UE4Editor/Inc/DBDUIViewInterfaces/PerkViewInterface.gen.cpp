// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PerkViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPerkViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPerkViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPerkViewData();
// End Cross Module References
	DEFINE_FUNCTION(IPerkViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPerkViewInterface::execSetData)
	{
		P_GET_STRUCT_REF(FPerkViewData,Z_Param_Out_perkViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_Out_perkViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPerkViewInterface::execUpdatePerkCooldown)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_cooldownValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePerkCooldown_Implementation(Z_Param_cooldownValue);
		P_NATIVE_END;
	}
	void IPerkViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IPerkViewInterface::SetData(FPerkViewData const& perkViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void IPerkViewInterface::UpdatePerkCooldown(float cooldownValue)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdatePerkCooldown instead.");
	}
	void UPerkViewInterface::StaticRegisterNativesUPerkViewInterface()
	{
		UClass* Class = UPerkViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IPerkViewInterface::execClearData },
			{ "SetData", &IPerkViewInterface::execSetData },
			{ "UpdatePerkCooldown", &IPerkViewInterface::execUpdatePerkCooldown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerkViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perkViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_perkViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::NewProp_perkViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::NewProp_perkViewData = { "perkViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkViewInterface_eventSetData_Parms, perkViewData), Z_Construct_UScriptStruct_FPerkViewData, METADATA_PARAMS(Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::NewProp_perkViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::NewProp_perkViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::NewProp_perkViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(PerkViewInterface_eventSetData_Parms), Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_cooldownValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::NewProp_cooldownValue = { "cooldownValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkViewInterface_eventUpdatePerkCooldown_Parms, cooldownValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::NewProp_cooldownValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkViewInterface, nullptr, "UpdatePerkCooldown", nullptr, nullptr, sizeof(PerkViewInterface_eventUpdatePerkCooldown_Parms), Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerkViewInterface_NoRegister()
	{
		return UPerkViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPerkViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerkViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkViewInterface_ClearData, "ClearData" }, // 227218194
		{ &Z_Construct_UFunction_UPerkViewInterface_SetData, "SetData" }, // 3402682982
		{ &Z_Construct_UFunction_UPerkViewInterface_UpdatePerkCooldown, "UpdatePerkCooldown" }, // 2349600499
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PerkViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPerkViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkViewInterface_Statics::ClassParams = {
		&UPerkViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPerkViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkViewInterface, 1498007055);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPerkViewInterface>()
	{
		return UPerkViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkViewInterface(Z_Construct_UClass_UPerkViewInterface, &UPerkViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPerkViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkViewInterface);
	static FName NAME_UPerkViewInterface_ClearData = FName(TEXT("ClearData"));
	void IPerkViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPerkViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPerkViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPerkViewInterface*)(O->GetNativeInterfaceAddress(UPerkViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UPerkViewInterface_SetData = FName(TEXT("SetData"));
	void IPerkViewInterface::Execute_SetData(UObject* O, FPerkViewData const& perkViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPerkViewInterface::StaticClass()));
		PerkViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPerkViewInterface_SetData);
		if (Func)
		{
			Parms.perkViewData=perkViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPerkViewInterface*)(O->GetNativeInterfaceAddress(UPerkViewInterface::StaticClass())))
		{
			I->SetData_Implementation(perkViewData);
		}
	}
	static FName NAME_UPerkViewInterface_UpdatePerkCooldown = FName(TEXT("UpdatePerkCooldown"));
	void IPerkViewInterface::Execute_UpdatePerkCooldown(UObject* O, float cooldownValue)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPerkViewInterface::StaticClass()));
		PerkViewInterface_eventUpdatePerkCooldown_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPerkViewInterface_UpdatePerkCooldown);
		if (Func)
		{
			Parms.cooldownValue=cooldownValue;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPerkViewInterface*)(O->GetNativeInterfaceAddress(UPerkViewInterface::StaticClass())))
		{
			I->UpdatePerkCooldown_Implementation(cooldownValue);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
