// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudAlertViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudAlertViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudAlertViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudAlertViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FScoreAlertViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectAlertViewData();
// End Cross Module References
	DEFINE_FUNCTION(IHudAlertViewInterface::execFadeIn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeIn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudAlertViewInterface::execFadeOut)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeOut_Implementation(Z_Param_delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudAlertViewInterface::execSetScoreEventsVisibility)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScoreEventsVisibility_Implementation(Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudAlertViewInterface::execShowScoreAlert)
	{
		P_GET_STRUCT_REF(FScoreAlertViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowScoreAlert_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudAlertViewInterface::execShowStatusEffectAlert)
	{
		P_GET_STRUCT_REF(FStatusEffectAlertViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowStatusEffectAlert_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	void IHudAlertViewInterface::FadeIn()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FadeIn instead.");
	}
	void IHudAlertViewInterface::FadeOut(float delay)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FadeOut instead.");
	}
	void IHudAlertViewInterface::SetScoreEventsVisibility(bool visible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetScoreEventsVisibility instead.");
	}
	void IHudAlertViewInterface::ShowScoreAlert(FScoreAlertViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowScoreAlert instead.");
	}
	void IHudAlertViewInterface::ShowStatusEffectAlert(FStatusEffectAlertViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowStatusEffectAlert instead.");
	}
	void UHudAlertViewInterface::StaticRegisterNativesUHudAlertViewInterface()
	{
		UClass* Class = UHudAlertViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FadeIn", &IHudAlertViewInterface::execFadeIn },
			{ "FadeOut", &IHudAlertViewInterface::execFadeOut },
			{ "SetScoreEventsVisibility", &IHudAlertViewInterface::execSetScoreEventsVisibility },
			{ "ShowScoreAlert", &IHudAlertViewInterface::execShowScoreAlert },
			{ "ShowStatusEffectAlert", &IHudAlertViewInterface::execShowStatusEffectAlert },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudAlertViewInterface_FadeIn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudAlertViewInterface_FadeIn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudAlertViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudAlertViewInterface_FadeIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudAlertViewInterface, nullptr, "FadeIn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudAlertViewInterface_FadeIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_FadeIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudAlertViewInterface_FadeIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudAlertViewInterface_FadeIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudAlertViewInterface_eventFadeOut_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudAlertViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudAlertViewInterface, nullptr, "FadeOut", nullptr, nullptr, sizeof(HudAlertViewInterface_eventFadeOut_Parms), Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudAlertViewInterface_FadeOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudAlertViewInterface_FadeOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((HudAlertViewInterface_eventSetScoreEventsVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudAlertViewInterface_eventSetScoreEventsVisibility_Parms), &Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudAlertViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudAlertViewInterface, nullptr, "SetScoreEventsVisibility", nullptr, nullptr, sizeof(HudAlertViewInterface_eventSetScoreEventsVisibility_Parms), Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudAlertViewInterface_eventShowScoreAlert_Parms, data), Z_Construct_UScriptStruct_FScoreAlertViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudAlertViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudAlertViewInterface, nullptr, "ShowScoreAlert", nullptr, nullptr, sizeof(HudAlertViewInterface_eventShowScoreAlert_Parms), Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudAlertViewInterface_eventShowStatusEffectAlert_Parms, data), Z_Construct_UScriptStruct_FStatusEffectAlertViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudAlertViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudAlertViewInterface, nullptr, "ShowStatusEffectAlert", nullptr, nullptr, sizeof(HudAlertViewInterface_eventShowStatusEffectAlert_Parms), Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudAlertViewInterface_NoRegister()
	{
		return UHudAlertViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHudAlertViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudAlertViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudAlertViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudAlertViewInterface_FadeIn, "FadeIn" }, // 4285391356
		{ &Z_Construct_UFunction_UHudAlertViewInterface_FadeOut, "FadeOut" }, // 4004153396
		{ &Z_Construct_UFunction_UHudAlertViewInterface_SetScoreEventsVisibility, "SetScoreEventsVisibility" }, // 2039890096
		{ &Z_Construct_UFunction_UHudAlertViewInterface_ShowScoreAlert, "ShowScoreAlert" }, // 2303232901
		{ &Z_Construct_UFunction_UHudAlertViewInterface_ShowStatusEffectAlert, "ShowStatusEffectAlert" }, // 2403592379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudAlertViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudAlertViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudAlertViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHudAlertViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudAlertViewInterface_Statics::ClassParams = {
		&UHudAlertViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHudAlertViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudAlertViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudAlertViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudAlertViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudAlertViewInterface, 3827012051);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UHudAlertViewInterface>()
	{
		return UHudAlertViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudAlertViewInterface(Z_Construct_UClass_UHudAlertViewInterface, &UHudAlertViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UHudAlertViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudAlertViewInterface);
	static FName NAME_UHudAlertViewInterface_FadeIn = FName(TEXT("FadeIn"));
	void IHudAlertViewInterface::Execute_FadeIn(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudAlertViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHudAlertViewInterface_FadeIn);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHudAlertViewInterface*)(O->GetNativeInterfaceAddress(UHudAlertViewInterface::StaticClass())))
		{
			I->FadeIn_Implementation();
		}
	}
	static FName NAME_UHudAlertViewInterface_FadeOut = FName(TEXT("FadeOut"));
	void IHudAlertViewInterface::Execute_FadeOut(UObject* O, float delay)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudAlertViewInterface::StaticClass()));
		HudAlertViewInterface_eventFadeOut_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudAlertViewInterface_FadeOut);
		if (Func)
		{
			Parms.delay=delay;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudAlertViewInterface*)(O->GetNativeInterfaceAddress(UHudAlertViewInterface::StaticClass())))
		{
			I->FadeOut_Implementation(delay);
		}
	}
	static FName NAME_UHudAlertViewInterface_SetScoreEventsVisibility = FName(TEXT("SetScoreEventsVisibility"));
	void IHudAlertViewInterface::Execute_SetScoreEventsVisibility(UObject* O, bool visible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudAlertViewInterface::StaticClass()));
		HudAlertViewInterface_eventSetScoreEventsVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudAlertViewInterface_SetScoreEventsVisibility);
		if (Func)
		{
			Parms.visible=visible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudAlertViewInterface*)(O->GetNativeInterfaceAddress(UHudAlertViewInterface::StaticClass())))
		{
			I->SetScoreEventsVisibility_Implementation(visible);
		}
	}
	static FName NAME_UHudAlertViewInterface_ShowScoreAlert = FName(TEXT("ShowScoreAlert"));
	void IHudAlertViewInterface::Execute_ShowScoreAlert(UObject* O, FScoreAlertViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudAlertViewInterface::StaticClass()));
		HudAlertViewInterface_eventShowScoreAlert_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudAlertViewInterface_ShowScoreAlert);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudAlertViewInterface*)(O->GetNativeInterfaceAddress(UHudAlertViewInterface::StaticClass())))
		{
			I->ShowScoreAlert_Implementation(data);
		}
	}
	static FName NAME_UHudAlertViewInterface_ShowStatusEffectAlert = FName(TEXT("ShowStatusEffectAlert"));
	void IHudAlertViewInterface::Execute_ShowStatusEffectAlert(UObject* O, FStatusEffectAlertViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudAlertViewInterface::StaticClass()));
		HudAlertViewInterface_eventShowStatusEffectAlert_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudAlertViewInterface_ShowStatusEffectAlert);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudAlertViewInterface*)(O->GetNativeInterfaceAddress(UHudAlertViewInterface::StaticClass())))
		{
			I->ShowStatusEffectAlert_Implementation(data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
