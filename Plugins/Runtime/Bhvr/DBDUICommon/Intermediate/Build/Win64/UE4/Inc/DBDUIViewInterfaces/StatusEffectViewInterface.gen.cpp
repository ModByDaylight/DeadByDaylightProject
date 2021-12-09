// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StatusEffectViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusEffectViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStatusEffectViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStatusEffectViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectViewData();
// End Cross Module References
	DEFINE_FUNCTION(IStatusEffectViewInterface::execRemoveExistingStatusEffect)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_statusEffectId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveExistingStatusEffect_Implementation(Z_Param_Out_statusEffectId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStatusEffectViewInterface::execShowActiveStatusEffect)
	{
		P_GET_STRUCT_REF(FStatusEffectViewData,Z_Param_Out_statusEffectData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowActiveStatusEffect_Implementation(Z_Param_Out_statusEffectData);
		P_NATIVE_END;
	}
	void IStatusEffectViewInterface::RemoveExistingStatusEffect(FName const& statusEffectId)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveExistingStatusEffect instead.");
	}
	void IStatusEffectViewInterface::ShowActiveStatusEffect(FStatusEffectViewData const& statusEffectData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowActiveStatusEffect instead.");
	}
	void UStatusEffectViewInterface::StaticRegisterNativesUStatusEffectViewInterface()
	{
		UClass* Class = UStatusEffectViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveExistingStatusEffect", &IStatusEffectViewInterface::execRemoveExistingStatusEffect },
			{ "ShowActiveStatusEffect", &IStatusEffectViewInterface::execShowActiveStatusEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusEffectId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusEffectId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::NewProp_statusEffectId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::NewProp_statusEffectId = { "statusEffectId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffectViewInterface_eventRemoveExistingStatusEffect_Parms, statusEffectId), METADATA_PARAMS(Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::NewProp_statusEffectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::NewProp_statusEffectId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::NewProp_statusEffectId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffectViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectViewInterface, nullptr, "RemoveExistingStatusEffect", nullptr, nullptr, sizeof(StatusEffectViewInterface_eventRemoveExistingStatusEffect_Parms), Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusEffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_statusEffectData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::NewProp_statusEffectData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::NewProp_statusEffectData = { "statusEffectData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffectViewInterface_eventShowActiveStatusEffect_Parms, statusEffectData), Z_Construct_UScriptStruct_FStatusEffectViewData, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::NewProp_statusEffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::NewProp_statusEffectData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::NewProp_statusEffectData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffectViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectViewInterface, nullptr, "ShowActiveStatusEffect", nullptr, nullptr, sizeof(StatusEffectViewInterface_eventShowActiveStatusEffect_Parms), Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStatusEffectViewInterface_NoRegister()
	{
		return UStatusEffectViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStatusEffectViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatusEffectViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatusEffectViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatusEffectViewInterface_RemoveExistingStatusEffect, "RemoveExistingStatusEffect" }, // 1796721578
		{ &Z_Construct_UFunction_UStatusEffectViewInterface_ShowActiveStatusEffect, "ShowActiveStatusEffect" }, // 1850336243
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffectViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StatusEffectViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatusEffectViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStatusEffectViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatusEffectViewInterface_Statics::ClassParams = {
		&UStatusEffectViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStatusEffectViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatusEffectViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatusEffectViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatusEffectViewInterface, 978976119);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStatusEffectViewInterface>()
	{
		return UStatusEffectViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatusEffectViewInterface(Z_Construct_UClass_UStatusEffectViewInterface, &UStatusEffectViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStatusEffectViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusEffectViewInterface);
	static FName NAME_UStatusEffectViewInterface_RemoveExistingStatusEffect = FName(TEXT("RemoveExistingStatusEffect"));
	void IStatusEffectViewInterface::Execute_RemoveExistingStatusEffect(UObject* O, FName const& statusEffectId)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStatusEffectViewInterface::StaticClass()));
		StatusEffectViewInterface_eventRemoveExistingStatusEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStatusEffectViewInterface_RemoveExistingStatusEffect);
		if (Func)
		{
			Parms.statusEffectId=statusEffectId;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStatusEffectViewInterface*)(O->GetNativeInterfaceAddress(UStatusEffectViewInterface::StaticClass())))
		{
			I->RemoveExistingStatusEffect_Implementation(statusEffectId);
		}
	}
	static FName NAME_UStatusEffectViewInterface_ShowActiveStatusEffect = FName(TEXT("ShowActiveStatusEffect"));
	void IStatusEffectViewInterface::Execute_ShowActiveStatusEffect(UObject* O, FStatusEffectViewData const& statusEffectData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStatusEffectViewInterface::StaticClass()));
		StatusEffectViewInterface_eventShowActiveStatusEffect_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStatusEffectViewInterface_ShowActiveStatusEffect);
		if (Func)
		{
			Parms.statusEffectData=statusEffectData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStatusEffectViewInterface*)(O->GetNativeInterfaceAddress(UStatusEffectViewInterface::StaticClass())))
		{
			I->ShowActiveStatusEffect_Implementation(statusEffectData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
