// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/OnboardingMenuViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingMenuViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOnboardingMenuViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOnboardingMenuViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGameManualViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UOnboardingTutorialViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EOnboardingMenuState();
// End Cross Module References
	DEFINE_FUNCTION(IOnboardingMenuViewInterface::execGetGameManualInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IGameManualViewInterface>*)Z_Param__Result=P_THIS->GetGameManualInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingMenuViewInterface::execGetOnboardingTutorialInterface)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IOnboardingTutorialViewInterface>*)Z_Param__Result=P_THIS->GetOnboardingTutorialInterface_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingMenuViewInterface::execSetFirstTimeUserExperience)
	{
		P_GET_UBOOL(Z_Param_ftue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFirstTimeUserExperience_Implementation(Z_Param_ftue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingMenuViewInterface::execSetOnboardingMenuState)
	{
		P_GET_ENUM(EOnboardingMenuState,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOnboardingMenuState_Implementation(EOnboardingMenuState(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IOnboardingMenuViewInterface::execSetUIEnabled)
	{
		P_GET_UBOOL(Z_Param_enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUIEnabled_Implementation(Z_Param_enabled);
		P_NATIVE_END;
	}
	TScriptInterface<IGameManualViewInterface> IOnboardingMenuViewInterface::GetGameManualInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGameManualInterface instead.");
		OnboardingMenuViewInterface_eventGetGameManualInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	TScriptInterface<IOnboardingTutorialViewInterface> IOnboardingMenuViewInterface::GetOnboardingTutorialInterface() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOnboardingTutorialInterface instead.");
		OnboardingMenuViewInterface_eventGetOnboardingTutorialInterface_Parms Parms;
		return Parms.ReturnValue;
	}
	void IOnboardingMenuViewInterface::SetFirstTimeUserExperience(bool ftue)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetFirstTimeUserExperience instead.");
	}
	void IOnboardingMenuViewInterface::SetOnboardingMenuState(EOnboardingMenuState state)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetOnboardingMenuState instead.");
	}
	void IOnboardingMenuViewInterface::SetUIEnabled(bool enabled)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetUIEnabled instead.");
	}
	void UOnboardingMenuViewInterface::StaticRegisterNativesUOnboardingMenuViewInterface()
	{
		UClass* Class = UOnboardingMenuViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameManualInterface", &IOnboardingMenuViewInterface::execGetGameManualInterface },
			{ "GetOnboardingTutorialInterface", &IOnboardingMenuViewInterface::execGetOnboardingTutorialInterface },
			{ "SetFirstTimeUserExperience", &IOnboardingMenuViewInterface::execSetFirstTimeUserExperience },
			{ "SetOnboardingMenuState", &IOnboardingMenuViewInterface::execSetOnboardingMenuState },
			{ "SetUIEnabled", &IOnboardingMenuViewInterface::execSetUIEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingMenuViewInterface_eventGetGameManualInterface_Parms, ReturnValue), Z_Construct_UClass_UGameManualViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuViewInterface, nullptr, "GetGameManualInterface", nullptr, nullptr, sizeof(OnboardingMenuViewInterface_eventGetGameManualInterface_Parms), Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics
	{
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingMenuViewInterface_eventGetOnboardingTutorialInterface_Parms, ReturnValue), Z_Construct_UClass_UOnboardingTutorialViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuViewInterface, nullptr, "GetOnboardingTutorialInterface", nullptr, nullptr, sizeof(OnboardingMenuViewInterface_eventGetOnboardingTutorialInterface_Parms), Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics
	{
		static void NewProp_ftue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ftue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::NewProp_ftue_SetBit(void* Obj)
	{
		((OnboardingMenuViewInterface_eventSetFirstTimeUserExperience_Parms*)Obj)->ftue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::NewProp_ftue = { "ftue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnboardingMenuViewInterface_eventSetFirstTimeUserExperience_Parms), &Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::NewProp_ftue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::NewProp_ftue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuViewInterface, nullptr, "SetFirstTimeUserExperience", nullptr, nullptr, sizeof(OnboardingMenuViewInterface_eventSetFirstTimeUserExperience_Parms), Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnboardingMenuViewInterface_eventSetOnboardingMenuState_Parms, state), Z_Construct_UEnum_DBDUIViewInterfaces_EOnboardingMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::NewProp_state_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuViewInterface, nullptr, "SetOnboardingMenuState", nullptr, nullptr, sizeof(OnboardingMenuViewInterface_eventSetOnboardingMenuState_Parms), Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics
	{
		static void NewProp_enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::NewProp_enabled_SetBit(void* Obj)
	{
		((OnboardingMenuViewInterface_eventSetUIEnabled_Parms*)Obj)->enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::NewProp_enabled = { "enabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnboardingMenuViewInterface_eventSetUIEnabled_Parms), &Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::NewProp_enabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::NewProp_enabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnboardingMenuViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnboardingMenuViewInterface, nullptr, "SetUIEnabled", nullptr, nullptr, sizeof(OnboardingMenuViewInterface_eventSetUIEnabled_Parms), Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnboardingMenuViewInterface_NoRegister()
	{
		return UOnboardingMenuViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOnboardingMenuViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnboardingMenuViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnboardingMenuViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnboardingMenuViewInterface_GetGameManualInterface, "GetGameManualInterface" }, // 3442680155
		{ &Z_Construct_UFunction_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface, "GetOnboardingTutorialInterface" }, // 4216951561
		{ &Z_Construct_UFunction_UOnboardingMenuViewInterface_SetFirstTimeUserExperience, "SetFirstTimeUserExperience" }, // 2124663997
		{ &Z_Construct_UFunction_UOnboardingMenuViewInterface_SetOnboardingMenuState, "SetOnboardingMenuState" }, // 1626876424
		{ &Z_Construct_UFunction_UOnboardingMenuViewInterface_SetUIEnabled, "SetUIEnabled" }, // 4129988640
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnboardingMenuViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OnboardingMenuViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnboardingMenuViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnboardingMenuViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnboardingMenuViewInterface_Statics::ClassParams = {
		&UOnboardingMenuViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnboardingMenuViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnboardingMenuViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnboardingMenuViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnboardingMenuViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnboardingMenuViewInterface, 930816471);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UOnboardingMenuViewInterface>()
	{
		return UOnboardingMenuViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnboardingMenuViewInterface(Z_Construct_UClass_UOnboardingMenuViewInterface, &UOnboardingMenuViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UOnboardingMenuViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnboardingMenuViewInterface);
	static FName NAME_UOnboardingMenuViewInterface_GetGameManualInterface = FName(TEXT("GetGameManualInterface"));
	TScriptInterface<IGameManualViewInterface> IOnboardingMenuViewInterface::Execute_GetGameManualInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingMenuViewInterface::StaticClass()));
		OnboardingMenuViewInterface_eventGetGameManualInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingMenuViewInterface_GetGameManualInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IOnboardingMenuViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetGameManualInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface = FName(TEXT("GetOnboardingTutorialInterface"));
	TScriptInterface<IOnboardingTutorialViewInterface> IOnboardingMenuViewInterface::Execute_GetOnboardingTutorialInterface(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingMenuViewInterface::StaticClass()));
		OnboardingMenuViewInterface_eventGetOnboardingTutorialInterface_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingMenuViewInterface_GetOnboardingTutorialInterface);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IOnboardingMenuViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingMenuViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetOnboardingTutorialInterface_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UOnboardingMenuViewInterface_SetFirstTimeUserExperience = FName(TEXT("SetFirstTimeUserExperience"));
	void IOnboardingMenuViewInterface::Execute_SetFirstTimeUserExperience(UObject* O, bool ftue)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingMenuViewInterface::StaticClass()));
		OnboardingMenuViewInterface_eventSetFirstTimeUserExperience_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingMenuViewInterface_SetFirstTimeUserExperience);
		if (Func)
		{
			Parms.ftue=ftue;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOnboardingMenuViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingMenuViewInterface::StaticClass())))
		{
			I->SetFirstTimeUserExperience_Implementation(ftue);
		}
	}
	static FName NAME_UOnboardingMenuViewInterface_SetOnboardingMenuState = FName(TEXT("SetOnboardingMenuState"));
	void IOnboardingMenuViewInterface::Execute_SetOnboardingMenuState(UObject* O, EOnboardingMenuState state)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingMenuViewInterface::StaticClass()));
		OnboardingMenuViewInterface_eventSetOnboardingMenuState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingMenuViewInterface_SetOnboardingMenuState);
		if (Func)
		{
			Parms.state=state;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOnboardingMenuViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingMenuViewInterface::StaticClass())))
		{
			I->SetOnboardingMenuState_Implementation(state);
		}
	}
	static FName NAME_UOnboardingMenuViewInterface_SetUIEnabled = FName(TEXT("SetUIEnabled"));
	void IOnboardingMenuViewInterface::Execute_SetUIEnabled(UObject* O, bool enabled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UOnboardingMenuViewInterface::StaticClass()));
		OnboardingMenuViewInterface_eventSetUIEnabled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UOnboardingMenuViewInterface_SetUIEnabled);
		if (Func)
		{
			Parms.enabled=enabled;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IOnboardingMenuViewInterface*)(O->GetNativeInterfaceAddress(UOnboardingMenuViewInterface::StaticClass())))
		{
			I->SetUIEnabled_Implementation(enabled);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
