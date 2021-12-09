// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HookCountViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHookCountViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHookCountViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHookCountViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(IHookCountViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHookCountViewInterface::execInitWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHookCountViewInterface::execSetData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_currentHookCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxHookCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_initialMaxHookCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation(Z_Param_currentHookCount,Z_Param_maxHookCount,Z_Param_initialMaxHookCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHookCountViewInterface::execSetHookCountVisibility)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHookCountVisibility_Implementation(Z_Param_visible);
		P_NATIVE_END;
	}
	void IHookCountViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IHookCountViewInterface::InitWidget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitWidget instead.");
	}
	void IHookCountViewInterface::SetData(const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void IHookCountViewInterface::SetHookCountVisibility(bool visible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHookCountVisibility instead.");
	}
	void UHookCountViewInterface::StaticRegisterNativesUHookCountViewInterface()
	{
		UClass* Class = UHookCountViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IHookCountViewInterface::execClearData },
			{ "InitWidget", &IHookCountViewInterface::execInitWidget },
			{ "SetData", &IHookCountViewInterface::execSetData },
			{ "SetHookCountVisibility", &IHookCountViewInterface::execSetHookCountVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHookCountViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookCountViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookCountViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHookCountViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHookCountViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHookCountViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookCountViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHookCountViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHookCountViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHookCountViewInterface_InitWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookCountViewInterface_InitWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookCountViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHookCountViewInterface_InitWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHookCountViewInterface, nullptr, "InitWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHookCountViewInterface_InitWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookCountViewInterface_InitWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHookCountViewInterface_InitWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHookCountViewInterface_InitWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialMaxHookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_initialMaxHookCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxHookCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentHookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentHookCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_initialMaxHookCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_initialMaxHookCount = { "initialMaxHookCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HookCountViewInterface_eventSetData_Parms, initialMaxHookCount), METADATA_PARAMS(Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_initialMaxHookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_initialMaxHookCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_maxHookCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_maxHookCount = { "maxHookCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HookCountViewInterface_eventSetData_Parms, maxHookCount), METADATA_PARAMS(Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_maxHookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_maxHookCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_currentHookCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_currentHookCount = { "currentHookCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HookCountViewInterface_eventSetData_Parms, currentHookCount), METADATA_PARAMS(Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_currentHookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_currentHookCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_initialMaxHookCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_maxHookCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::NewProp_currentHookCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookCountViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHookCountViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(HookCountViewInterface_eventSetData_Parms), Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHookCountViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHookCountViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((HookCountViewInterface_eventSetHookCountVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HookCountViewInterface_eventSetHookCountVisibility_Parms), &Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookCountViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHookCountViewInterface, nullptr, "SetHookCountVisibility", nullptr, nullptr, sizeof(HookCountViewInterface_eventSetHookCountVisibility_Parms), Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHookCountViewInterface_NoRegister()
	{
		return UHookCountViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHookCountViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHookCountViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHookCountViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHookCountViewInterface_ClearData, "ClearData" }, // 489213778
		{ &Z_Construct_UFunction_UHookCountViewInterface_InitWidget, "InitWidget" }, // 2265852874
		{ &Z_Construct_UFunction_UHookCountViewInterface_SetData, "SetData" }, // 575402859
		{ &Z_Construct_UFunction_UHookCountViewInterface_SetHookCountVisibility, "SetHookCountVisibility" }, // 2633544841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHookCountViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HookCountViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHookCountViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHookCountViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHookCountViewInterface_Statics::ClassParams = {
		&UHookCountViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHookCountViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHookCountViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHookCountViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHookCountViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHookCountViewInterface, 375893106);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UHookCountViewInterface>()
	{
		return UHookCountViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHookCountViewInterface(Z_Construct_UClass_UHookCountViewInterface, &UHookCountViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UHookCountViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHookCountViewInterface);
	static FName NAME_UHookCountViewInterface_ClearData = FName(TEXT("ClearData"));
	void IHookCountViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHookCountViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHookCountViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHookCountViewInterface*)(O->GetNativeInterfaceAddress(UHookCountViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UHookCountViewInterface_InitWidget = FName(TEXT("InitWidget"));
	void IHookCountViewInterface::Execute_InitWidget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHookCountViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHookCountViewInterface_InitWidget);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHookCountViewInterface*)(O->GetNativeInterfaceAddress(UHookCountViewInterface::StaticClass())))
		{
			I->InitWidget_Implementation();
		}
	}
	static FName NAME_UHookCountViewInterface_SetData = FName(TEXT("SetData"));
	void IHookCountViewInterface::Execute_SetData(UObject* O, const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHookCountViewInterface::StaticClass()));
		HookCountViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHookCountViewInterface_SetData);
		if (Func)
		{
			Parms.currentHookCount=currentHookCount;
			Parms.maxHookCount=maxHookCount;
			Parms.initialMaxHookCount=initialMaxHookCount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHookCountViewInterface*)(O->GetNativeInterfaceAddress(UHookCountViewInterface::StaticClass())))
		{
			I->SetData_Implementation(currentHookCount,maxHookCount,initialMaxHookCount);
		}
	}
	static FName NAME_UHookCountViewInterface_SetHookCountVisibility = FName(TEXT("SetHookCountVisibility"));
	void IHookCountViewInterface::Execute_SetHookCountVisibility(UObject* O, bool visible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHookCountViewInterface::StaticClass()));
		HookCountViewInterface_eventSetHookCountVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHookCountViewInterface_SetHookCountVisibility);
		if (Func)
		{
			Parms.visible=visible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHookCountViewInterface*)(O->GetNativeInterfaceAddress(UHookCountViewInterface::StaticClass())))
		{
			I->SetHookCountVisibility_Implementation(visible);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
