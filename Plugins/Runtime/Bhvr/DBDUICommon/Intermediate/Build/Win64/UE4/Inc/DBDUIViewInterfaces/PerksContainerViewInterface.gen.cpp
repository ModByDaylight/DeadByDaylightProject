// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PerksContainerViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerksContainerViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPerksContainerViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPerksContainerViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPerkViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IPerksContainerViewInterface::execGetPerkInterface)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IPerkViewInterface>*)Z_Param__Result=P_THIS->GetPerkInterface_Implementation(Z_Param_index);
		P_NATIVE_END;
	}
	TScriptInterface<IPerkViewInterface> IPerksContainerViewInterface::GetPerkInterface(int32 index)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPerkInterface instead.");
		PerksContainerViewInterface_eventGetPerkInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPerksContainerViewInterface::StaticRegisterNativesUPerksContainerViewInterface()
	{
		UClass* Class = UPerksContainerViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPerkInterface", &IPerksContainerViewInterface::execGetPerkInterface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerksContainerViewInterface_eventGetPerkInterface_Parms, ReturnValue), Z_Construct_UClass_UPerkViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerksContainerViewInterface_eventGetPerkInterface_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerksContainerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerksContainerViewInterface, nullptr, "GetPerkInterface", nullptr, nullptr, sizeof(PerksContainerViewInterface_eventGetPerkInterface_Parms), Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerksContainerViewInterface_NoRegister()
	{
		return UPerksContainerViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPerksContainerViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerksContainerViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerksContainerViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerksContainerViewInterface_GetPerkInterface, "GetPerkInterface" }, // 1700339413
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerksContainerViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PerksContainerViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerksContainerViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPerksContainerViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerksContainerViewInterface_Statics::ClassParams = {
		&UPerksContainerViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPerksContainerViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerksContainerViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerksContainerViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerksContainerViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerksContainerViewInterface, 3735969156);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPerksContainerViewInterface>()
	{
		return UPerksContainerViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerksContainerViewInterface(Z_Construct_UClass_UPerksContainerViewInterface, &UPerksContainerViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPerksContainerViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerksContainerViewInterface);
	static FName NAME_UPerksContainerViewInterface_GetPerkInterface = FName(TEXT("GetPerkInterface"));
	TScriptInterface<IPerkViewInterface> IPerksContainerViewInterface::Execute_GetPerkInterface(UObject* O, int32 index)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPerksContainerViewInterface::StaticClass()));
		PerksContainerViewInterface_eventGetPerkInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPerksContainerViewInterface_GetPerkInterface);
		if (Func)
		{
			Parms.index=index;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPerksContainerViewInterface*)(O->GetNativeInterfaceAddress(UPerksContainerViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPerkInterface_Implementation(index);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
