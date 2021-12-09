// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ExternalEffectsViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalEffectsViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UExternalEffectsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UExternalEffectsViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAddonViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPerkViewData();
// End Cross Module References
	DEFINE_FUNCTION(IExternalEffectsViewInterface::execShowExternalAddon)
	{
		P_GET_STRUCT_REF(FAddonViewData,Z_Param_Out_addonViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowExternalAddon_Implementation(Z_Param_Out_addonViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IExternalEffectsViewInterface::execShowExternalPerk)
	{
		P_GET_STRUCT_REF(FPerkViewData,Z_Param_Out_perkViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowExternalPerk_Implementation(Z_Param_Out_perkViewData);
		P_NATIVE_END;
	}
	void IExternalEffectsViewInterface::ShowExternalAddon(FAddonViewData const& addonViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowExternalAddon instead.");
	}
	void IExternalEffectsViewInterface::ShowExternalPerk(FPerkViewData const& perkViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowExternalPerk instead.");
	}
	void UExternalEffectsViewInterface::StaticRegisterNativesUExternalEffectsViewInterface()
	{
		UClass* Class = UExternalEffectsViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowExternalAddon", &IExternalEffectsViewInterface::execShowExternalAddon },
			{ "ShowExternalPerk", &IExternalEffectsViewInterface::execShowExternalPerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addonViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_addonViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::NewProp_addonViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::NewProp_addonViewData = { "addonViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalEffectsViewInterface_eventShowExternalAddon_Parms, addonViewData), Z_Construct_UScriptStruct_FAddonViewData, METADATA_PARAMS(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::NewProp_addonViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::NewProp_addonViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::NewProp_addonViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExternalEffectsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExternalEffectsViewInterface, nullptr, "ShowExternalAddon", nullptr, nullptr, sizeof(ExternalEffectsViewInterface_eventShowExternalAddon_Parms), Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::NewProp_perkViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::NewProp_perkViewData = { "perkViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExternalEffectsViewInterface_eventShowExternalPerk_Parms, perkViewData), Z_Construct_UScriptStruct_FPerkViewData, METADATA_PARAMS(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::NewProp_perkViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::NewProp_perkViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::NewProp_perkViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExternalEffectsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExternalEffectsViewInterface, nullptr, "ShowExternalPerk", nullptr, nullptr, sizeof(ExternalEffectsViewInterface_eventShowExternalPerk_Parms), Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExternalEffectsViewInterface_NoRegister()
	{
		return UExternalEffectsViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UExternalEffectsViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExternalEffectsViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExternalEffectsViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalAddon, "ShowExternalAddon" }, // 4146670684
		{ &Z_Construct_UFunction_UExternalEffectsViewInterface_ShowExternalPerk, "ShowExternalPerk" }, // 3316858096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExternalEffectsViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExternalEffectsViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExternalEffectsViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IExternalEffectsViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExternalEffectsViewInterface_Statics::ClassParams = {
		&UExternalEffectsViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UExternalEffectsViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExternalEffectsViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExternalEffectsViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExternalEffectsViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExternalEffectsViewInterface, 40014664);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UExternalEffectsViewInterface>()
	{
		return UExternalEffectsViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExternalEffectsViewInterface(Z_Construct_UClass_UExternalEffectsViewInterface, &UExternalEffectsViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UExternalEffectsViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExternalEffectsViewInterface);
	static FName NAME_UExternalEffectsViewInterface_ShowExternalAddon = FName(TEXT("ShowExternalAddon"));
	void IExternalEffectsViewInterface::Execute_ShowExternalAddon(UObject* O, FAddonViewData const& addonViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UExternalEffectsViewInterface::StaticClass()));
		ExternalEffectsViewInterface_eventShowExternalAddon_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UExternalEffectsViewInterface_ShowExternalAddon);
		if (Func)
		{
			Parms.addonViewData=addonViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IExternalEffectsViewInterface*)(O->GetNativeInterfaceAddress(UExternalEffectsViewInterface::StaticClass())))
		{
			I->ShowExternalAddon_Implementation(addonViewData);
		}
	}
	static FName NAME_UExternalEffectsViewInterface_ShowExternalPerk = FName(TEXT("ShowExternalPerk"));
	void IExternalEffectsViewInterface::Execute_ShowExternalPerk(UObject* O, FPerkViewData const& perkViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UExternalEffectsViewInterface::StaticClass()));
		ExternalEffectsViewInterface_eventShowExternalPerk_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UExternalEffectsViewInterface_ShowExternalPerk);
		if (Func)
		{
			Parms.perkViewData=perkViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IExternalEffectsViewInterface*)(O->GetNativeInterfaceAddress(UExternalEffectsViewInterface::StaticClass())))
		{
			I->ShowExternalPerk_Implementation(perkViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
