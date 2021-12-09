// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/StartSequenceViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartSequenceViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStartSequenceViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UStartSequenceViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStartSequenceViewData();
// End Cross Module References
	DEFINE_FUNCTION(IStartSequenceViewInterface::execGetIsStartSequenceVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsStartSequenceVisible_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStartSequenceViewInterface::execHideStartSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideStartSequence_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IStartSequenceViewInterface::execShowStartSequence)
	{
		P_GET_STRUCT_REF(FStartSequenceViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowStartSequence_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	bool IStartSequenceViewInterface::GetIsStartSequenceVisible() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIsStartSequenceVisible instead.");
		StartSequenceViewInterface_eventGetIsStartSequenceVisible_Parms Parms;
		return Parms.ReturnValue;
	}
	void IStartSequenceViewInterface::HideStartSequence()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideStartSequence instead.");
	}
	void IStartSequenceViewInterface::ShowStartSequence(FStartSequenceViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowStartSequence instead.");
	}
	void UStartSequenceViewInterface::StaticRegisterNativesUStartSequenceViewInterface()
	{
		UClass* Class = UStartSequenceViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsStartSequenceVisible", &IStartSequenceViewInterface::execGetIsStartSequenceVisible },
			{ "HideStartSequence", &IStartSequenceViewInterface::execHideStartSequence },
			{ "ShowStartSequence", &IStartSequenceViewInterface::execShowStartSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StartSequenceViewInterface_eventGetIsStartSequenceVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StartSequenceViewInterface_eventGetIsStartSequenceVisible_Parms), &Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartSequenceViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartSequenceViewInterface, nullptr, "GetIsStartSequenceVisible", nullptr, nullptr, sizeof(StartSequenceViewInterface_eventGetIsStartSequenceVisible_Parms), Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartSequenceViewInterface_HideStartSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartSequenceViewInterface_HideStartSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartSequenceViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartSequenceViewInterface_HideStartSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartSequenceViewInterface, nullptr, "HideStartSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartSequenceViewInterface_HideStartSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSequenceViewInterface_HideStartSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartSequenceViewInterface_HideStartSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartSequenceViewInterface_HideStartSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StartSequenceViewInterface_eventShowStartSequence_Parms, data), Z_Construct_UScriptStruct_FStartSequenceViewData, METADATA_PARAMS(Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StartSequenceViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartSequenceViewInterface, nullptr, "ShowStartSequence", nullptr, nullptr, sizeof(StartSequenceViewInterface_eventShowStartSequence_Parms), Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStartSequenceViewInterface_NoRegister()
	{
		return UStartSequenceViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UStartSequenceViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartSequenceViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStartSequenceViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStartSequenceViewInterface_GetIsStartSequenceVisible, "GetIsStartSequenceVisible" }, // 1306417381
		{ &Z_Construct_UFunction_UStartSequenceViewInterface_HideStartSequence, "HideStartSequence" }, // 703005748
		{ &Z_Construct_UFunction_UStartSequenceViewInterface_ShowStartSequence, "ShowStartSequence" }, // 2929902604
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartSequenceViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StartSequenceViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartSequenceViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStartSequenceViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStartSequenceViewInterface_Statics::ClassParams = {
		&UStartSequenceViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStartSequenceViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartSequenceViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartSequenceViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStartSequenceViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStartSequenceViewInterface, 2493485566);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UStartSequenceViewInterface>()
	{
		return UStartSequenceViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStartSequenceViewInterface(Z_Construct_UClass_UStartSequenceViewInterface, &UStartSequenceViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UStartSequenceViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartSequenceViewInterface);
	static FName NAME_UStartSequenceViewInterface_GetIsStartSequenceVisible = FName(TEXT("GetIsStartSequenceVisible"));
	bool IStartSequenceViewInterface::Execute_GetIsStartSequenceVisible(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStartSequenceViewInterface::StaticClass()));
		StartSequenceViewInterface_eventGetIsStartSequenceVisible_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStartSequenceViewInterface_GetIsStartSequenceVisible);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IStartSequenceViewInterface*)(O->GetNativeInterfaceAddress(UStartSequenceViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetIsStartSequenceVisible_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UStartSequenceViewInterface_HideStartSequence = FName(TEXT("HideStartSequence"));
	void IStartSequenceViewInterface::Execute_HideStartSequence(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStartSequenceViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UStartSequenceViewInterface_HideStartSequence);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IStartSequenceViewInterface*)(O->GetNativeInterfaceAddress(UStartSequenceViewInterface::StaticClass())))
		{
			I->HideStartSequence_Implementation();
		}
	}
	static FName NAME_UStartSequenceViewInterface_ShowStartSequence = FName(TEXT("ShowStartSequence"));
	void IStartSequenceViewInterface::Execute_ShowStartSequence(UObject* O, FStartSequenceViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UStartSequenceViewInterface::StaticClass()));
		StartSequenceViewInterface_eventShowStartSequence_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UStartSequenceViewInterface_ShowStartSequence);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IStartSequenceViewInterface*)(O->GetNativeInterfaceAddress(UStartSequenceViewInterface::StaticClass())))
		{
			I->ShowStartSequence_Implementation(data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
