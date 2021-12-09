// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudObjectiveViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudObjectiveViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudObjectiveViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudObjectiveViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FHudObjectiveViewData();
// End Cross Module References
	DEFINE_FUNCTION(IHudObjectiveViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudObjectiveViewInterface::execSetCurrentHudObjectiveHighlight)
	{
		P_GET_UBOOL(Z_Param_highlight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentHudObjectiveHighlight_Implementation(Z_Param_highlight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudObjectiveViewInterface::execSetHudObjectiveData)
	{
		P_GET_STRUCT_REF(FHudObjectiveViewData,Z_Param_Out_hudObjectiveViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHudObjectiveData_Implementation(Z_Param_Out_hudObjectiveViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudObjectiveViewInterface::execSetHudObjectivePosition)
	{
		P_GET_UBOOL(Z_Param_isHookCountDisplayed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHudObjectivePosition_Implementation(Z_Param_isHookCountDisplayed);
		P_NATIVE_END;
	}
	void IHudObjectiveViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IHudObjectiveViewInterface::SetCurrentHudObjectiveHighlight(bool highlight)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCurrentHudObjectiveHighlight instead.");
	}
	void IHudObjectiveViewInterface::SetHudObjectiveData(FHudObjectiveViewData const& hudObjectiveViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHudObjectiveData instead.");
	}
	void IHudObjectiveViewInterface::SetHudObjectivePosition(bool isHookCountDisplayed)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHudObjectivePosition instead.");
	}
	void UHudObjectiveViewInterface::StaticRegisterNativesUHudObjectiveViewInterface()
	{
		UClass* Class = UHudObjectiveViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IHudObjectiveViewInterface::execClearData },
			{ "SetCurrentHudObjectiveHighlight", &IHudObjectiveViewInterface::execSetCurrentHudObjectiveHighlight },
			{ "SetHudObjectiveData", &IHudObjectiveViewInterface::execSetHudObjectiveData },
			{ "SetHudObjectivePosition", &IHudObjectiveViewInterface::execSetHudObjectivePosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudObjectiveViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectiveViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectiveViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectiveViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectiveViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectiveViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectiveViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectiveViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectiveViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics
	{
		static void NewProp_highlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_highlight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::NewProp_highlight_SetBit(void* Obj)
	{
		((HudObjectiveViewInterface_eventSetCurrentHudObjectiveHighlight_Parms*)Obj)->highlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::NewProp_highlight = { "highlight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudObjectiveViewInterface_eventSetCurrentHudObjectiveHighlight_Parms), &Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::NewProp_highlight_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::NewProp_highlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectiveViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectiveViewInterface, nullptr, "SetCurrentHudObjectiveHighlight", nullptr, nullptr, sizeof(HudObjectiveViewInterface_eventSetCurrentHudObjectiveHighlight_Parms), Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudObjectiveViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hudObjectiveViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData = { "hudObjectiveViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudObjectiveViewInterface_eventSetHudObjectiveData_Parms, hudObjectiveViewData), Z_Construct_UScriptStruct_FHudObjectiveViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectiveViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectiveViewInterface, nullptr, "SetHudObjectiveData", nullptr, nullptr, sizeof(HudObjectiveViewInterface_eventSetHudObjectiveData_Parms), Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics
	{
		static void NewProp_isHookCountDisplayed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isHookCountDisplayed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::NewProp_isHookCountDisplayed_SetBit(void* Obj)
	{
		((HudObjectiveViewInterface_eventSetHudObjectivePosition_Parms*)Obj)->isHookCountDisplayed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::NewProp_isHookCountDisplayed = { "isHookCountDisplayed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudObjectiveViewInterface_eventSetHudObjectivePosition_Parms), &Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::NewProp_isHookCountDisplayed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::NewProp_isHookCountDisplayed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectiveViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectiveViewInterface, nullptr, "SetHudObjectivePosition", nullptr, nullptr, sizeof(HudObjectiveViewInterface_eventSetHudObjectivePosition_Parms), Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudObjectiveViewInterface_NoRegister()
	{
		return UHudObjectiveViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHudObjectiveViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudObjectiveViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudObjectiveViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudObjectiveViewInterface_ClearData, "ClearData" }, // 2052401041
		{ &Z_Construct_UFunction_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight, "SetCurrentHudObjectiveHighlight" }, // 1123157125
		{ &Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectiveData, "SetHudObjectiveData" }, // 4102872693
		{ &Z_Construct_UFunction_UHudObjectiveViewInterface_SetHudObjectivePosition, "SetHudObjectivePosition" }, // 3291251674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudObjectiveViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudObjectiveViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudObjectiveViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHudObjectiveViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudObjectiveViewInterface_Statics::ClassParams = {
		&UHudObjectiveViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHudObjectiveViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudObjectiveViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudObjectiveViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudObjectiveViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudObjectiveViewInterface, 138877831);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UHudObjectiveViewInterface>()
	{
		return UHudObjectiveViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudObjectiveViewInterface(Z_Construct_UClass_UHudObjectiveViewInterface, &UHudObjectiveViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UHudObjectiveViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudObjectiveViewInterface);
	static FName NAME_UHudObjectiveViewInterface_ClearData = FName(TEXT("ClearData"));
	void IHudObjectiveViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectiveViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHudObjectiveViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHudObjectiveViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectiveViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight = FName(TEXT("SetCurrentHudObjectiveHighlight"));
	void IHudObjectiveViewInterface::Execute_SetCurrentHudObjectiveHighlight(UObject* O, bool highlight)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectiveViewInterface::StaticClass()));
		HudObjectiveViewInterface_eventSetCurrentHudObjectiveHighlight_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudObjectiveViewInterface_SetCurrentHudObjectiveHighlight);
		if (Func)
		{
			Parms.highlight=highlight;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudObjectiveViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectiveViewInterface::StaticClass())))
		{
			I->SetCurrentHudObjectiveHighlight_Implementation(highlight);
		}
	}
	static FName NAME_UHudObjectiveViewInterface_SetHudObjectiveData = FName(TEXT("SetHudObjectiveData"));
	void IHudObjectiveViewInterface::Execute_SetHudObjectiveData(UObject* O, FHudObjectiveViewData const& hudObjectiveViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectiveViewInterface::StaticClass()));
		HudObjectiveViewInterface_eventSetHudObjectiveData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudObjectiveViewInterface_SetHudObjectiveData);
		if (Func)
		{
			Parms.hudObjectiveViewData=hudObjectiveViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudObjectiveViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectiveViewInterface::StaticClass())))
		{
			I->SetHudObjectiveData_Implementation(hudObjectiveViewData);
		}
	}
	static FName NAME_UHudObjectiveViewInterface_SetHudObjectivePosition = FName(TEXT("SetHudObjectivePosition"));
	void IHudObjectiveViewInterface::Execute_SetHudObjectivePosition(UObject* O, bool isHookCountDisplayed)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectiveViewInterface::StaticClass()));
		HudObjectiveViewInterface_eventSetHudObjectivePosition_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudObjectiveViewInterface_SetHudObjectivePosition);
		if (Func)
		{
			Parms.isHookCountDisplayed=isHookCountDisplayed;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudObjectiveViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectiveViewInterface::StaticClass())))
		{
			I->SetHudObjectivePosition_Implementation(isHookCountDisplayed);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
