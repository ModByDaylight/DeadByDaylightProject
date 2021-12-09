// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TutorialPopupViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialPopupViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialPopupViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialPopupViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FNotifTutorialPopupViewData();
// End Cross Module References
	DEFINE_FUNCTION(ITutorialPopupViewInterface::execHideTutorialPopup)
	{
		P_GET_UBOOL(Z_Param_playSoundEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideTutorialPopup_Implementation(Z_Param_playSoundEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITutorialPopupViewInterface::execShowNotifTutorialPopup)
	{
		P_GET_STRUCT_REF(FNotifTutorialPopupViewData,Z_Param_Out_notifTutoData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowNotifTutorialPopup_Implementation(Z_Param_Out_notifTutoData);
		P_NATIVE_END;
	}
	void ITutorialPopupViewInterface::HideTutorialPopup(bool playSoundEffect)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideTutorialPopup instead.");
	}
	void ITutorialPopupViewInterface::ShowNotifTutorialPopup(FNotifTutorialPopupViewData const& notifTutoData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowNotifTutorialPopup instead.");
	}
	void UTutorialPopupViewInterface::StaticRegisterNativesUTutorialPopupViewInterface()
	{
		UClass* Class = UTutorialPopupViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideTutorialPopup", &ITutorialPopupViewInterface::execHideTutorialPopup },
			{ "ShowNotifTutorialPopup", &ITutorialPopupViewInterface::execShowNotifTutorialPopup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics
	{
		static void NewProp_playSoundEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_playSoundEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::NewProp_playSoundEffect_SetBit(void* Obj)
	{
		((TutorialPopupViewInterface_eventHideTutorialPopup_Parms*)Obj)->playSoundEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::NewProp_playSoundEffect = { "playSoundEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialPopupViewInterface_eventHideTutorialPopup_Parms), &Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::NewProp_playSoundEffect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::NewProp_playSoundEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialPopupViewInterface, nullptr, "HideTutorialPopup", nullptr, nullptr, sizeof(TutorialPopupViewInterface_eventHideTutorialPopup_Parms), Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_notifTutoData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_notifTutoData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::NewProp_notifTutoData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::NewProp_notifTutoData = { "notifTutoData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialPopupViewInterface_eventShowNotifTutorialPopup_Parms, notifTutoData), Z_Construct_UScriptStruct_FNotifTutorialPopupViewData, METADATA_PARAMS(Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::NewProp_notifTutoData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::NewProp_notifTutoData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::NewProp_notifTutoData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialPopupViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialPopupViewInterface, nullptr, "ShowNotifTutorialPopup", nullptr, nullptr, sizeof(TutorialPopupViewInterface_eventShowNotifTutorialPopup_Parms), Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialPopupViewInterface_NoRegister()
	{
		return UTutorialPopupViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialPopupViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialPopupViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialPopupViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialPopupViewInterface_HideTutorialPopup, "HideTutorialPopup" }, // 2621272733
		{ &Z_Construct_UFunction_UTutorialPopupViewInterface_ShowNotifTutorialPopup, "ShowNotifTutorialPopup" }, // 2560132901
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialPopupViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TutorialPopupViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialPopupViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITutorialPopupViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialPopupViewInterface_Statics::ClassParams = {
		&UTutorialPopupViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTutorialPopupViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialPopupViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialPopupViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialPopupViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialPopupViewInterface, 3302038303);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UTutorialPopupViewInterface>()
	{
		return UTutorialPopupViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialPopupViewInterface(Z_Construct_UClass_UTutorialPopupViewInterface, &UTutorialPopupViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UTutorialPopupViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialPopupViewInterface);
	static FName NAME_UTutorialPopupViewInterface_HideTutorialPopup = FName(TEXT("HideTutorialPopup"));
	void ITutorialPopupViewInterface::Execute_HideTutorialPopup(UObject* O, bool playSoundEffect)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialPopupViewInterface::StaticClass()));
		TutorialPopupViewInterface_eventHideTutorialPopup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTutorialPopupViewInterface_HideTutorialPopup);
		if (Func)
		{
			Parms.playSoundEffect=playSoundEffect;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITutorialPopupViewInterface*)(O->GetNativeInterfaceAddress(UTutorialPopupViewInterface::StaticClass())))
		{
			I->HideTutorialPopup_Implementation(playSoundEffect);
		}
	}
	static FName NAME_UTutorialPopupViewInterface_ShowNotifTutorialPopup = FName(TEXT("ShowNotifTutorialPopup"));
	void ITutorialPopupViewInterface::Execute_ShowNotifTutorialPopup(UObject* O, FNotifTutorialPopupViewData const& notifTutoData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialPopupViewInterface::StaticClass()));
		TutorialPopupViewInterface_eventShowNotifTutorialPopup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTutorialPopupViewInterface_ShowNotifTutorialPopup);
		if (Func)
		{
			Parms.notifTutoData=notifTutoData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITutorialPopupViewInterface*)(O->GetNativeInterfaceAddress(UTutorialPopupViewInterface::StaticClass())))
		{
			I->ShowNotifTutorialPopup_Implementation(notifTutoData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
