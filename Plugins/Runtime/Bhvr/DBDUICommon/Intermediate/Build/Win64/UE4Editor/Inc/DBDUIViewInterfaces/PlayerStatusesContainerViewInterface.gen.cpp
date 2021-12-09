// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PlayerStatusesContainerViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStatusesContainerViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerStatusesContainerViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerStatusesContainerViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IPlayerStatusesContainerViewInterface::execGetPlayerStatusInterface)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IPlayerStatusViewInterface>*)Z_Param__Result=P_THIS->GetPlayerStatusInterface_Implementation(Z_Param_index);
		P_NATIVE_END;
	}
	TScriptInterface<IPlayerStatusViewInterface> IPlayerStatusesContainerViewInterface::GetPlayerStatusInterface(int32 index)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetPlayerStatusInterface instead.");
		PlayerStatusesContainerViewInterface_eventGetPlayerStatusInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void UPlayerStatusesContainerViewInterface::StaticRegisterNativesUPlayerStatusesContainerViewInterface()
	{
		UClass* Class = UPlayerStatusesContainerViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerStatusInterface", &IPlayerStatusesContainerViewInterface::execGetPlayerStatusInterface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatusesContainerViewInterface_eventGetPlayerStatusInterface_Parms, ReturnValue), Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerStatusesContainerViewInterface_eventGetPlayerStatusInterface_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerStatusesContainerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerStatusesContainerViewInterface, nullptr, "GetPlayerStatusInterface", nullptr, nullptr, sizeof(PlayerStatusesContainerViewInterface_eventGetPlayerStatusInterface_Parms), Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerStatusesContainerViewInterface_NoRegister()
	{
		return UPlayerStatusesContainerViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface, "GetPlayerStatusInterface" }, // 691363307
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerStatusesContainerViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPlayerStatusesContainerViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics::ClassParams = {
		&UPlayerStatusesContainerViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerStatusesContainerViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerStatusesContainerViewInterface, 992735727);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPlayerStatusesContainerViewInterface>()
	{
		return UPlayerStatusesContainerViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerStatusesContainerViewInterface(Z_Construct_UClass_UPlayerStatusesContainerViewInterface, &UPlayerStatusesContainerViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPlayerStatusesContainerViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerStatusesContainerViewInterface);
	static FName NAME_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface = FName(TEXT("GetPlayerStatusInterface"));
	TScriptInterface<IPlayerStatusViewInterface> IPlayerStatusesContainerViewInterface::Execute_GetPlayerStatusInterface(UObject* O, int32 index)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPlayerStatusesContainerViewInterface::StaticClass()));
		PlayerStatusesContainerViewInterface_eventGetPlayerStatusInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPlayerStatusesContainerViewInterface_GetPlayerStatusInterface);
		if (Func)
		{
			Parms.index=index;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPlayerStatusesContainerViewInterface*)(O->GetNativeInterfaceAddress(UPlayerStatusesContainerViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetPlayerStatusInterface_Implementation(index);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
