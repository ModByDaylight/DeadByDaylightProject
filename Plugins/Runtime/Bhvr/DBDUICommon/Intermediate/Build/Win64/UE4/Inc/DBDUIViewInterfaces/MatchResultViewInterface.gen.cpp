// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/MatchResultViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchResultViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMatchResultViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UMatchResultViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FMatchResultViewData();
// End Cross Module References
	DEFINE_FUNCTION(IMatchResultViewInterface::execPlayAnimationSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnimationSequence_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMatchResultViewInterface::execUpdateWidget)
	{
		P_GET_STRUCT_REF(FMatchResultViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateWidget_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	void IMatchResultViewInterface::PlayAnimationSequence()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayAnimationSequence instead.");
	}
	void IMatchResultViewInterface::UpdateWidget(FMatchResultViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateWidget instead.");
	}
	void UMatchResultViewInterface::StaticRegisterNativesUMatchResultViewInterface()
	{
		UClass* Class = UMatchResultViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayAnimationSequence", &IMatchResultViewInterface::execPlayAnimationSequence },
			{ "UpdateWidget", &IMatchResultViewInterface::execUpdateWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMatchResultViewInterface_PlayAnimationSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchResultViewInterface_PlayAnimationSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchResultViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchResultViewInterface_PlayAnimationSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchResultViewInterface, nullptr, "PlayAnimationSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchResultViewInterface_PlayAnimationSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchResultViewInterface_PlayAnimationSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchResultViewInterface_PlayAnimationSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchResultViewInterface_PlayAnimationSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchResultViewInterface_eventUpdateWidget_Parms, data), Z_Construct_UScriptStruct_FMatchResultViewData, METADATA_PARAMS(Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchResultViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchResultViewInterface, nullptr, "UpdateWidget", nullptr, nullptr, sizeof(MatchResultViewInterface_eventUpdateWidget_Parms), Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMatchResultViewInterface_NoRegister()
	{
		return UMatchResultViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMatchResultViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchResultViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatchResultViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchResultViewInterface_PlayAnimationSequence, "PlayAnimationSequence" }, // 3439102053
		{ &Z_Construct_UFunction_UMatchResultViewInterface_UpdateWidget, "UpdateWidget" }, // 1605075162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchResultViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MatchResultViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchResultViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMatchResultViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatchResultViewInterface_Statics::ClassParams = {
		&UMatchResultViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMatchResultViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchResultViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchResultViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatchResultViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatchResultViewInterface, 3327553134);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UMatchResultViewInterface>()
	{
		return UMatchResultViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatchResultViewInterface(Z_Construct_UClass_UMatchResultViewInterface, &UMatchResultViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UMatchResultViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchResultViewInterface);
	static FName NAME_UMatchResultViewInterface_PlayAnimationSequence = FName(TEXT("PlayAnimationSequence"));
	void IMatchResultViewInterface::Execute_PlayAnimationSequence(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMatchResultViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UMatchResultViewInterface_PlayAnimationSequence);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IMatchResultViewInterface*)(O->GetNativeInterfaceAddress(UMatchResultViewInterface::StaticClass())))
		{
			I->PlayAnimationSequence_Implementation();
		}
	}
	static FName NAME_UMatchResultViewInterface_UpdateWidget = FName(TEXT("UpdateWidget"));
	void IMatchResultViewInterface::Execute_UpdateWidget(UObject* O, FMatchResultViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMatchResultViewInterface::StaticClass()));
		MatchResultViewInterface_eventUpdateWidget_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMatchResultViewInterface_UpdateWidget);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMatchResultViewInterface*)(O->GetNativeInterfaceAddress(UMatchResultViewInterface::StaticClass())))
		{
			I->UpdateWidget_Implementation(data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
