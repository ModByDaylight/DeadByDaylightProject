// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/SpectateBarViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectateBarViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USpectateBarViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USpectateBarViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(ISpectateBarViewInterface::execSetArrowsVisibility)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArrowsVisibility_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISpectateBarViewInterface::execSetSpectateBarVisibility)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectateBarVisibility_Implementation(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISpectateBarViewInterface::execSetSpectatedName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatedName_Implementation(Z_Param_playerName);
		P_NATIVE_END;
	}
	void ISpectateBarViewInterface::SetArrowsVisibility(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetArrowsVisibility instead.");
	}
	void ISpectateBarViewInterface::SetSpectateBarVisibility(bool isVisible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSpectateBarVisibility instead.");
	}
	void ISpectateBarViewInterface::SetSpectatedName(const FString& playerName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSpectatedName instead.");
	}
	void USpectateBarViewInterface::StaticRegisterNativesUSpectateBarViewInterface()
	{
		UClass* Class = USpectateBarViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetArrowsVisibility", &ISpectateBarViewInterface::execSetArrowsVisibility },
			{ "SetSpectateBarVisibility", &ISpectateBarViewInterface::execSetSpectateBarVisibility },
			{ "SetSpectatedName", &ISpectateBarViewInterface::execSetSpectatedName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isVisible_MetaData[];
#endif
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::NewProp_isVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((SpectateBarViewInterface_eventSetArrowsVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpectateBarViewInterface_eventSetArrowsVisibility_Parms), &Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::NewProp_isVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::NewProp_isVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpectateBarViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectateBarViewInterface, nullptr, "SetArrowsVisibility", nullptr, nullptr, sizeof(SpectateBarViewInterface_eventSetArrowsVisibility_Parms), Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isVisible_MetaData[];
#endif
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::NewProp_isVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((SpectateBarViewInterface_eventSetSpectateBarVisibility_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SpectateBarViewInterface_eventSetSpectateBarVisibility_Parms), &Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::NewProp_isVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::NewProp_isVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpectateBarViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectateBarViewInterface, nullptr, "SetSpectateBarVisibility", nullptr, nullptr, sizeof(SpectateBarViewInterface_eventSetSpectateBarVisibility_Parms), Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::NewProp_playerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectateBarViewInterface_eventSetSpectatedName_Parms, playerName), METADATA_PARAMS(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::NewProp_playerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::NewProp_playerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::NewProp_playerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpectateBarViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpectateBarViewInterface, nullptr, "SetSpectatedName", nullptr, nullptr, sizeof(SpectateBarViewInterface_eventSetSpectatedName_Parms), Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpectateBarViewInterface_NoRegister()
	{
		return USpectateBarViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_USpectateBarViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectateBarViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpectateBarViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpectateBarViewInterface_SetArrowsVisibility, "SetArrowsVisibility" }, // 947585500
		{ &Z_Construct_UFunction_USpectateBarViewInterface_SetSpectateBarVisibility, "SetSpectateBarVisibility" }, // 4250700287
		{ &Z_Construct_UFunction_USpectateBarViewInterface_SetSpectatedName, "SetSpectatedName" }, // 2096579771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectateBarViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpectateBarViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectateBarViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISpectateBarViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpectateBarViewInterface_Statics::ClassParams = {
		&USpectateBarViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpectateBarViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpectateBarViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectateBarViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpectateBarViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpectateBarViewInterface, 1523951092);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<USpectateBarViewInterface>()
	{
		return USpectateBarViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpectateBarViewInterface(Z_Construct_UClass_USpectateBarViewInterface, &USpectateBarViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("USpectateBarViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectateBarViewInterface);
	static FName NAME_USpectateBarViewInterface_SetArrowsVisibility = FName(TEXT("SetArrowsVisibility"));
	void ISpectateBarViewInterface::Execute_SetArrowsVisibility(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USpectateBarViewInterface::StaticClass()));
		SpectateBarViewInterface_eventSetArrowsVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USpectateBarViewInterface_SetArrowsVisibility);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISpectateBarViewInterface*)(O->GetNativeInterfaceAddress(USpectateBarViewInterface::StaticClass())))
		{
			I->SetArrowsVisibility_Implementation(isVisible);
		}
	}
	static FName NAME_USpectateBarViewInterface_SetSpectateBarVisibility = FName(TEXT("SetSpectateBarVisibility"));
	void ISpectateBarViewInterface::Execute_SetSpectateBarVisibility(UObject* O, bool isVisible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USpectateBarViewInterface::StaticClass()));
		SpectateBarViewInterface_eventSetSpectateBarVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USpectateBarViewInterface_SetSpectateBarVisibility);
		if (Func)
		{
			Parms.isVisible=isVisible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISpectateBarViewInterface*)(O->GetNativeInterfaceAddress(USpectateBarViewInterface::StaticClass())))
		{
			I->SetSpectateBarVisibility_Implementation(isVisible);
		}
	}
	static FName NAME_USpectateBarViewInterface_SetSpectatedName = FName(TEXT("SetSpectatedName"));
	void ISpectateBarViewInterface::Execute_SetSpectatedName(UObject* O, const FString& playerName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USpectateBarViewInterface::StaticClass()));
		SpectateBarViewInterface_eventSetSpectatedName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USpectateBarViewInterface_SetSpectatedName);
		if (Func)
		{
			Parms.playerName=playerName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISpectateBarViewInterface*)(O->GetNativeInterfaceAddress(USpectateBarViewInterface::StaticClass())))
		{
			I->SetSpectatedName_Implementation(playerName);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
