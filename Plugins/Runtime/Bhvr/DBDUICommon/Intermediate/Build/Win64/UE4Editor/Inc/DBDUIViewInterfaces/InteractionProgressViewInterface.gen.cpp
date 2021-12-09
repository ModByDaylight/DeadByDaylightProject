// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/InteractionProgressViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionProgressViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UInteractionProgressViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UInteractionProgressViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionProgressViewData();
// End Cross Module References
	DEFINE_FUNCTION(IInteractionProgressViewInterface::execHideInputProgressPrompt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideInputProgressPrompt_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractionProgressViewInterface::execSetInputProgressPrompt)
	{
		P_GET_STRUCT_REF(FInteractionProgressViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputProgressPrompt_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractionProgressViewInterface::execUpdateInputProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_progress);
		P_GET_PROPERTY(FFloatProperty,Z_Param_itemCharge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInputProgress_Implementation(Z_Param_progress,Z_Param_itemCharge);
		P_NATIVE_END;
	}
	void IInteractionProgressViewInterface::HideInputProgressPrompt()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideInputProgressPrompt instead.");
	}
	void IInteractionProgressViewInterface::SetInputProgressPrompt(FInteractionProgressViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetInputProgressPrompt instead.");
	}
	void IInteractionProgressViewInterface::UpdateInputProgress(const float progress, const float itemCharge)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateInputProgress instead.");
	}
	void UInteractionProgressViewInterface::StaticRegisterNativesUInteractionProgressViewInterface()
	{
		UClass* Class = UInteractionProgressViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideInputProgressPrompt", &IInteractionProgressViewInterface::execHideInputProgressPrompt },
			{ "SetInputProgressPrompt", &IInteractionProgressViewInterface::execSetInputProgressPrompt },
			{ "UpdateInputProgress", &IInteractionProgressViewInterface::execUpdateInputProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionProgressViewInterface_HideInputProgressPrompt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProgressViewInterface_HideInputProgressPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionProgressViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionProgressViewInterface_HideInputProgressPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionProgressViewInterface, nullptr, "HideInputProgressPrompt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProgressViewInterface_HideInputProgressPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProgressViewInterface_HideInputProgressPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionProgressViewInterface_HideInputProgressPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionProgressViewInterface_HideInputProgressPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProgressViewInterface_eventSetInputProgressPrompt_Parms, data), Z_Construct_UScriptStruct_FInteractionProgressViewData, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionProgressViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionProgressViewInterface, nullptr, "SetInputProgressPrompt", nullptr, nullptr, sizeof(InteractionProgressViewInterface_eventSetInputProgressPrompt_Parms), Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_itemCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_itemCharge_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_itemCharge = { "itemCharge", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProgressViewInterface_eventUpdateInputProgress_Parms, itemCharge), METADATA_PARAMS(Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_itemCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_itemCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionProgressViewInterface_eventUpdateInputProgress_Parms, progress), METADATA_PARAMS(Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_itemCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::NewProp_progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionProgressViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionProgressViewInterface, nullptr, "UpdateInputProgress", nullptr, nullptr, sizeof(InteractionProgressViewInterface_eventUpdateInputProgress_Parms), Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionProgressViewInterface_NoRegister()
	{
		return UInteractionProgressViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionProgressViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionProgressViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionProgressViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionProgressViewInterface_HideInputProgressPrompt, "HideInputProgressPrompt" }, // 2976150538
		{ &Z_Construct_UFunction_UInteractionProgressViewInterface_SetInputProgressPrompt, "SetInputProgressPrompt" }, // 4243121601
		{ &Z_Construct_UFunction_UInteractionProgressViewInterface_UpdateInputProgress, "UpdateInputProgress" }, // 3313531078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionProgressViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionProgressViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionProgressViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionProgressViewInterface_Statics::ClassParams = {
		&UInteractionProgressViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractionProgressViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionProgressViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionProgressViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionProgressViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionProgressViewInterface, 3345852864);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UInteractionProgressViewInterface>()
	{
		return UInteractionProgressViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionProgressViewInterface(Z_Construct_UClass_UInteractionProgressViewInterface, &UInteractionProgressViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UInteractionProgressViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionProgressViewInterface);
	static FName NAME_UInteractionProgressViewInterface_HideInputProgressPrompt = FName(TEXT("HideInputProgressPrompt"));
	void IInteractionProgressViewInterface::Execute_HideInputProgressPrompt(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionProgressViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractionProgressViewInterface_HideInputProgressPrompt);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractionProgressViewInterface*)(O->GetNativeInterfaceAddress(UInteractionProgressViewInterface::StaticClass())))
		{
			I->HideInputProgressPrompt_Implementation();
		}
	}
	static FName NAME_UInteractionProgressViewInterface_SetInputProgressPrompt = FName(TEXT("SetInputProgressPrompt"));
	void IInteractionProgressViewInterface::Execute_SetInputProgressPrompt(UObject* O, FInteractionProgressViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionProgressViewInterface::StaticClass()));
		InteractionProgressViewInterface_eventSetInputProgressPrompt_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionProgressViewInterface_SetInputProgressPrompt);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionProgressViewInterface*)(O->GetNativeInterfaceAddress(UInteractionProgressViewInterface::StaticClass())))
		{
			I->SetInputProgressPrompt_Implementation(data);
		}
	}
	static FName NAME_UInteractionProgressViewInterface_UpdateInputProgress = FName(TEXT("UpdateInputProgress"));
	void IInteractionProgressViewInterface::Execute_UpdateInputProgress(UObject* O, const float progress, const float itemCharge)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionProgressViewInterface::StaticClass()));
		InteractionProgressViewInterface_eventUpdateInputProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionProgressViewInterface_UpdateInputProgress);
		if (Func)
		{
			Parms.progress=progress;
			Parms.itemCharge=itemCharge;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionProgressViewInterface*)(O->GetNativeInterfaceAddress(UInteractionProgressViewInterface::StaticClass())))
		{
			I->UpdateInputProgress_Implementation(progress,itemCharge);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
