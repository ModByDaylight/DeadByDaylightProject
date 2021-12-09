// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TutorialHighlightViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialHighlightViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTutorialHighlightViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudComponent();
// End Cross Module References
	DEFINE_FUNCTION(ITutorialHighlightViewInterface::execSetTutorialHighlight)
	{
		P_GET_UBOOL(Z_Param_show);
		P_GET_ENUM_REF(EHudComponent,Z_Param_Out_componentId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTutorialHighlight_Implementation(Z_Param_show,(EHudComponent&)(Z_Param_Out_componentId));
		P_NATIVE_END;
	}
	void ITutorialHighlightViewInterface::SetTutorialHighlight(bool show, EHudComponent const& componentId)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTutorialHighlight instead.");
	}
	void UTutorialHighlightViewInterface::StaticRegisterNativesUTutorialHighlightViewInterface()
	{
		UClass* Class = UTutorialHighlightViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTutorialHighlight", &ITutorialHighlightViewInterface::execSetTutorialHighlight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_componentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_componentId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_componentId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_show_MetaData[];
#endif
		static void NewProp_show_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_show;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_componentId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_componentId = { "componentId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialHighlightViewInterface_eventSetTutorialHighlight_Parms, componentId), Z_Construct_UEnum_DBDSharedTypes_EHudComponent, METADATA_PARAMS(Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_componentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_componentId_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_componentId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_show_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_show_SetBit(void* Obj)
	{
		((TutorialHighlightViewInterface_eventSetTutorialHighlight_Parms*)Obj)->show = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_show = { "show", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TutorialHighlightViewInterface_eventSetTutorialHighlight_Parms), &Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_show_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_show_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_show_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_componentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_componentId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::NewProp_show,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialHighlightViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialHighlightViewInterface, nullptr, "SetTutorialHighlight", nullptr, nullptr, sizeof(TutorialHighlightViewInterface_eventSetTutorialHighlight_Parms), Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialHighlightViewInterface_NoRegister()
	{
		return UTutorialHighlightViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialHighlightViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialHighlightViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialHighlightViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialHighlightViewInterface_SetTutorialHighlight, "SetTutorialHighlight" }, // 2350008194
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialHighlightViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TutorialHighlightViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialHighlightViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITutorialHighlightViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialHighlightViewInterface_Statics::ClassParams = {
		&UTutorialHighlightViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTutorialHighlightViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialHighlightViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialHighlightViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialHighlightViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialHighlightViewInterface, 874564828);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UTutorialHighlightViewInterface>()
	{
		return UTutorialHighlightViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialHighlightViewInterface(Z_Construct_UClass_UTutorialHighlightViewInterface, &UTutorialHighlightViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UTutorialHighlightViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialHighlightViewInterface);
	static FName NAME_UTutorialHighlightViewInterface_SetTutorialHighlight = FName(TEXT("SetTutorialHighlight"));
	void ITutorialHighlightViewInterface::Execute_SetTutorialHighlight(UObject* O, bool show, EHudComponent const& componentId)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialHighlightViewInterface::StaticClass()));
		TutorialHighlightViewInterface_eventSetTutorialHighlight_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTutorialHighlightViewInterface_SetTutorialHighlight);
		if (Func)
		{
			Parms.show=show;
			Parms.componentId=componentId;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITutorialHighlightViewInterface*)(O->GetNativeInterfaceAddress(UTutorialHighlightViewInterface::StaticClass())))
		{
			I->SetTutorialHighlight_Implementation(show,componentId);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
