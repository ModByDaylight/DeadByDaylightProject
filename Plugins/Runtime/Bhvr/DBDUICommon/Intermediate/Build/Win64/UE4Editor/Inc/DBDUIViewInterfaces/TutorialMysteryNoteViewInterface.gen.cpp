// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TutorialMysteryNoteViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialMysteryNoteViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialMysteryNoteViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialMysteryNoteViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FNotifTutorialPopupViewData();
// End Cross Module References
	DEFINE_FUNCTION(ITutorialMysteryNoteViewInterface::execHideMysteryNote)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideMysteryNote_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITutorialMysteryNoteViewInterface::execShowMysteryNote)
	{
		P_GET_STRUCT_REF(FNotifTutorialPopupViewData,Z_Param_Out_notifData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMysteryNote_Implementation(Z_Param_Out_notifData);
		P_NATIVE_END;
	}
	void ITutorialMysteryNoteViewInterface::HideMysteryNote()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideMysteryNote instead.");
	}
	void ITutorialMysteryNoteViewInterface::ShowMysteryNote(FNotifTutorialPopupViewData const& notifData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowMysteryNote instead.");
	}
	void UTutorialMysteryNoteViewInterface::StaticRegisterNativesUTutorialMysteryNoteViewInterface()
	{
		UClass* Class = UTutorialMysteryNoteViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideMysteryNote", &ITutorialMysteryNoteViewInterface::execHideMysteryNote },
			{ "ShowMysteryNote", &ITutorialMysteryNoteViewInterface::execShowMysteryNote },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_HideMysteryNote_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_HideMysteryNote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialMysteryNoteViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_HideMysteryNote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialMysteryNoteViewInterface, nullptr, "HideMysteryNote", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_HideMysteryNote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_HideMysteryNote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_HideMysteryNote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_HideMysteryNote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notifData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_notifData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::NewProp_notifData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::NewProp_notifData = { "notifData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialMysteryNoteViewInterface_eventShowMysteryNote_Parms, notifData), Z_Construct_UScriptStruct_FNotifTutorialPopupViewData, METADATA_PARAMS(Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::NewProp_notifData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::NewProp_notifData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::NewProp_notifData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialMysteryNoteViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialMysteryNoteViewInterface, nullptr, "ShowMysteryNote", nullptr, nullptr, sizeof(TutorialMysteryNoteViewInterface_eventShowMysteryNote_Parms), Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialMysteryNoteViewInterface_NoRegister()
	{
		return UTutorialMysteryNoteViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_HideMysteryNote, "HideMysteryNote" }, // 3023314556
		{ &Z_Construct_UFunction_UTutorialMysteryNoteViewInterface_ShowMysteryNote, "ShowMysteryNote" }, // 1817284791
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TutorialMysteryNoteViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITutorialMysteryNoteViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics::ClassParams = {
		&UTutorialMysteryNoteViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialMysteryNoteViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialMysteryNoteViewInterface, 4023398962);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UTutorialMysteryNoteViewInterface>()
	{
		return UTutorialMysteryNoteViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialMysteryNoteViewInterface(Z_Construct_UClass_UTutorialMysteryNoteViewInterface, &UTutorialMysteryNoteViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UTutorialMysteryNoteViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialMysteryNoteViewInterface);
	static FName NAME_UTutorialMysteryNoteViewInterface_HideMysteryNote = FName(TEXT("HideMysteryNote"));
	void ITutorialMysteryNoteViewInterface::Execute_HideMysteryNote(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialMysteryNoteViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTutorialMysteryNoteViewInterface_HideMysteryNote);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITutorialMysteryNoteViewInterface*)(O->GetNativeInterfaceAddress(UTutorialMysteryNoteViewInterface::StaticClass())))
		{
			I->HideMysteryNote_Implementation();
		}
	}
	static FName NAME_UTutorialMysteryNoteViewInterface_ShowMysteryNote = FName(TEXT("ShowMysteryNote"));
	void ITutorialMysteryNoteViewInterface::Execute_ShowMysteryNote(UObject* O, FNotifTutorialPopupViewData const& notifData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialMysteryNoteViewInterface::StaticClass()));
		TutorialMysteryNoteViewInterface_eventShowMysteryNote_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTutorialMysteryNoteViewInterface_ShowMysteryNote);
		if (Func)
		{
			Parms.notifData=notifData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITutorialMysteryNoteViewInterface*)(O->GetNativeInterfaceAddress(UTutorialMysteryNoteViewInterface::StaticClass())))
		{
			I->ShowMysteryNote_Implementation(notifData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
