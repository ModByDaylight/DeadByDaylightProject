// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TutorialObjectivesViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialObjectivesViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialObjectivesViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialObjectivesViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialObjectivesViewData();
// End Cross Module References
	DEFINE_FUNCTION(ITutorialObjectivesViewInterface::execAddTutorialObjective)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_id);
		P_GET_STRUCT_REF(FTutorialObjectivesViewData,Z_Param_Out_interactionPromptViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTutorialObjective_Implementation(Z_Param_Out_id,Z_Param_Out_interactionPromptViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITutorialObjectivesViewInterface::execCompleteTutorialObjective)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_id);
		P_GET_UBOOL(Z_Param_removeAfterCompletion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteTutorialObjective_Implementation(Z_Param_Out_id,Z_Param_removeAfterCompletion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITutorialObjectivesViewInterface::execRemoveAllTutorialObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllTutorialObjectives_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITutorialObjectivesViewInterface::execRemoveTutorialObjective)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTutorialObjective_Implementation(Z_Param_Out_id);
		P_NATIVE_END;
	}
	void ITutorialObjectivesViewInterface::AddTutorialObjective(FName const& id, FTutorialObjectivesViewData const& interactionPromptViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddTutorialObjective instead.");
	}
	void ITutorialObjectivesViewInterface::CompleteTutorialObjective(FName const& id, bool removeAfterCompletion)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CompleteTutorialObjective instead.");
	}
	void ITutorialObjectivesViewInterface::RemoveAllTutorialObjectives()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveAllTutorialObjectives instead.");
	}
	void ITutorialObjectivesViewInterface::RemoveTutorialObjective(FName const& id)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveTutorialObjective instead.");
	}
	void UTutorialObjectivesViewInterface::StaticRegisterNativesUTutorialObjectivesViewInterface()
	{
		UClass* Class = UTutorialObjectivesViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTutorialObjective", &ITutorialObjectivesViewInterface::execAddTutorialObjective },
			{ "CompleteTutorialObjective", &ITutorialObjectivesViewInterface::execCompleteTutorialObjective },
			{ "RemoveAllTutorialObjectives", &ITutorialObjectivesViewInterface::execRemoveAllTutorialObjectives },
			{ "RemoveTutorialObjective", &ITutorialObjectivesViewInterface::execRemoveTutorialObjective },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactionPromptViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_interactionPromptViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_interactionPromptViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_interactionPromptViewData = { "interactionPromptViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialObjectivesViewInterface_eventAddTutorialObjective_Parms, interactionPromptViewData), Z_Construct_UScriptStruct_FTutorialObjectivesViewData, METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_interactionPromptViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_interactionPromptViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialObjectivesViewInterface_eventAddTutorialObjective_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_interactionPromptViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialObjectivesViewInterface, nullptr, "AddTutorialObjective", nullptr, nullptr, sizeof(TutorialObjectivesViewInterface_eventAddTutorialObjective_Parms), Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics
	{
		static void NewProp_removeAfterCompletion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_removeAfterCompletion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::NewProp_removeAfterCompletion_SetBit(void* Obj)
	{
		((TutorialObjectivesViewInterface_eventCompleteTutorialObjective_Parms*)Obj)->removeAfterCompletion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::NewProp_removeAfterCompletion = { "removeAfterCompletion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialObjectivesViewInterface_eventCompleteTutorialObjective_Parms), &Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::NewProp_removeAfterCompletion_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialObjectivesViewInterface_eventCompleteTutorialObjective_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::NewProp_removeAfterCompletion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialObjectivesViewInterface, nullptr, "CompleteTutorialObjective", nullptr, nullptr, sizeof(TutorialObjectivesViewInterface_eventCompleteTutorialObjective_Parms), Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialObjectivesViewInterface, nullptr, "RemoveAllTutorialObjectives", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialObjectivesViewInterface_eventRemoveTutorialObjective_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialObjectivesViewInterface, nullptr, "RemoveTutorialObjective", nullptr, nullptr, sizeof(TutorialObjectivesViewInterface_eventRemoveTutorialObjective_Parms), Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialObjectivesViewInterface_NoRegister()
	{
		return UTutorialObjectivesViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialObjectivesViewInterface_AddTutorialObjective, "AddTutorialObjective" }, // 1356209556
		{ &Z_Construct_UFunction_UTutorialObjectivesViewInterface_CompleteTutorialObjective, "CompleteTutorialObjective" }, // 650324803
		{ &Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives, "RemoveAllTutorialObjectives" }, // 4218197848
		{ &Z_Construct_UFunction_UTutorialObjectivesViewInterface_RemoveTutorialObjective, "RemoveTutorialObjective" }, // 1940064832
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TutorialObjectivesViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITutorialObjectivesViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics::ClassParams = {
		&UTutorialObjectivesViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialObjectivesViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialObjectivesViewInterface, 3979736992);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UTutorialObjectivesViewInterface>()
	{
		return UTutorialObjectivesViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialObjectivesViewInterface(Z_Construct_UClass_UTutorialObjectivesViewInterface, &UTutorialObjectivesViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UTutorialObjectivesViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialObjectivesViewInterface);
	static FName NAME_UTutorialObjectivesViewInterface_AddTutorialObjective = FName(TEXT("AddTutorialObjective"));
	void ITutorialObjectivesViewInterface::Execute_AddTutorialObjective(UObject* O, FName const& id, FTutorialObjectivesViewData const& interactionPromptViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialObjectivesViewInterface::StaticClass()));
		TutorialObjectivesViewInterface_eventAddTutorialObjective_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTutorialObjectivesViewInterface_AddTutorialObjective);
		if (Func)
		{
			Parms.id=id;
			Parms.interactionPromptViewData=interactionPromptViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITutorialObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UTutorialObjectivesViewInterface::StaticClass())))
		{
			I->AddTutorialObjective_Implementation(id,interactionPromptViewData);
		}
	}
	static FName NAME_UTutorialObjectivesViewInterface_CompleteTutorialObjective = FName(TEXT("CompleteTutorialObjective"));
	void ITutorialObjectivesViewInterface::Execute_CompleteTutorialObjective(UObject* O, FName const& id, bool removeAfterCompletion)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialObjectivesViewInterface::StaticClass()));
		TutorialObjectivesViewInterface_eventCompleteTutorialObjective_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTutorialObjectivesViewInterface_CompleteTutorialObjective);
		if (Func)
		{
			Parms.id=id;
			Parms.removeAfterCompletion=removeAfterCompletion;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITutorialObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UTutorialObjectivesViewInterface::StaticClass())))
		{
			I->CompleteTutorialObjective_Implementation(id,removeAfterCompletion);
		}
	}
	static FName NAME_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives = FName(TEXT("RemoveAllTutorialObjectives"));
	void ITutorialObjectivesViewInterface::Execute_RemoveAllTutorialObjectives(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialObjectivesViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTutorialObjectivesViewInterface_RemoveAllTutorialObjectives);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITutorialObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UTutorialObjectivesViewInterface::StaticClass())))
		{
			I->RemoveAllTutorialObjectives_Implementation();
		}
	}
	static FName NAME_UTutorialObjectivesViewInterface_RemoveTutorialObjective = FName(TEXT("RemoveTutorialObjective"));
	void ITutorialObjectivesViewInterface::Execute_RemoveTutorialObjective(UObject* O, FName const& id)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialObjectivesViewInterface::StaticClass()));
		TutorialObjectivesViewInterface_eventRemoveTutorialObjective_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTutorialObjectivesViewInterface_RemoveTutorialObjective);
		if (Func)
		{
			Parms.id=id;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITutorialObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UTutorialObjectivesViewInterface::StaticClass())))
		{
			I->RemoveTutorialObjective_Implementation(id);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
