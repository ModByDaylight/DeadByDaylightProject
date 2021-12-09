// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/InteractionPromptsContainerViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionPromptsContainerViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UInteractionPromptsContainerViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UInteractionPromptsContainerViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionPromptViewData();
// End Cross Module References
	DEFINE_FUNCTION(IInteractionPromptsContainerViewInterface::execAddPrompt)
	{
		P_GET_STRUCT_REF(FInteractionPromptViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPrompt_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractionPromptsContainerViewInterface::execRemoveAllPrompts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllPrompts_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractionPromptsContainerViewInterface::execRemovePrompt)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePrompt_Implementation(Z_Param_id);
		P_NATIVE_END;
	}
	void IInteractionPromptsContainerViewInterface::AddPrompt(FInteractionPromptViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddPrompt instead.");
	}
	void IInteractionPromptsContainerViewInterface::RemoveAllPrompts()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveAllPrompts instead.");
	}
	void IInteractionPromptsContainerViewInterface::RemovePrompt(FName id)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemovePrompt instead.");
	}
	void UInteractionPromptsContainerViewInterface::StaticRegisterNativesUInteractionPromptsContainerViewInterface()
	{
		UClass* Class = UInteractionPromptsContainerViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPrompt", &IInteractionPromptsContainerViewInterface::execAddPrompt },
			{ "RemoveAllPrompts", &IInteractionPromptsContainerViewInterface::execRemoveAllPrompts },
			{ "RemovePrompt", &IInteractionPromptsContainerViewInterface::execRemovePrompt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionPromptsContainerViewInterface_eventAddPrompt_Parms, data), Z_Construct_UScriptStruct_FInteractionPromptViewData, METADATA_PARAMS(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionPromptsContainerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionPromptsContainerViewInterface, nullptr, "AddPrompt", nullptr, nullptr, sizeof(InteractionPromptsContainerViewInterface_eventAddPrompt_Parms), Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionPromptsContainerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionPromptsContainerViewInterface, nullptr, "RemoveAllPrompts", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemoveAllPrompts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemoveAllPrompts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionPromptsContainerViewInterface_eventRemovePrompt_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionPromptsContainerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionPromptsContainerViewInterface, nullptr, "RemovePrompt", nullptr, nullptr, sizeof(InteractionPromptsContainerViewInterface_eventRemovePrompt_Parms), Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionPromptsContainerViewInterface_NoRegister()
	{
		return UInteractionPromptsContainerViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_AddPrompt, "AddPrompt" }, // 4114011891
		{ &Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemoveAllPrompts, "RemoveAllPrompts" }, // 3594469545
		{ &Z_Construct_UFunction_UInteractionPromptsContainerViewInterface_RemovePrompt, "RemovePrompt" }, // 3728368000
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionPromptsContainerViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionPromptsContainerViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics::ClassParams = {
		&UInteractionPromptsContainerViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionPromptsContainerViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionPromptsContainerViewInterface, 13555936);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UInteractionPromptsContainerViewInterface>()
	{
		return UInteractionPromptsContainerViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionPromptsContainerViewInterface(Z_Construct_UClass_UInteractionPromptsContainerViewInterface, &UInteractionPromptsContainerViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UInteractionPromptsContainerViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionPromptsContainerViewInterface);
	static FName NAME_UInteractionPromptsContainerViewInterface_AddPrompt = FName(TEXT("AddPrompt"));
	void IInteractionPromptsContainerViewInterface::Execute_AddPrompt(UObject* O, FInteractionPromptViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionPromptsContainerViewInterface::StaticClass()));
		InteractionPromptsContainerViewInterface_eventAddPrompt_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionPromptsContainerViewInterface_AddPrompt);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionPromptsContainerViewInterface*)(O->GetNativeInterfaceAddress(UInteractionPromptsContainerViewInterface::StaticClass())))
		{
			I->AddPrompt_Implementation(data);
		}
	}
	static FName NAME_UInteractionPromptsContainerViewInterface_RemoveAllPrompts = FName(TEXT("RemoveAllPrompts"));
	void IInteractionPromptsContainerViewInterface::Execute_RemoveAllPrompts(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionPromptsContainerViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractionPromptsContainerViewInterface_RemoveAllPrompts);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractionPromptsContainerViewInterface*)(O->GetNativeInterfaceAddress(UInteractionPromptsContainerViewInterface::StaticClass())))
		{
			I->RemoveAllPrompts_Implementation();
		}
	}
	static FName NAME_UInteractionPromptsContainerViewInterface_RemovePrompt = FName(TEXT("RemovePrompt"));
	void IInteractionPromptsContainerViewInterface::Execute_RemovePrompt(UObject* O, FName id)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractionPromptsContainerViewInterface::StaticClass()));
		InteractionPromptsContainerViewInterface_eventRemovePrompt_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractionPromptsContainerViewInterface_RemovePrompt);
		if (Func)
		{
			Parms.id=id;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractionPromptsContainerViewInterface*)(O->GetNativeInterfaceAddress(UInteractionPromptsContainerViewInterface::StaticClass())))
		{
			I->RemovePrompt_Implementation(id);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
