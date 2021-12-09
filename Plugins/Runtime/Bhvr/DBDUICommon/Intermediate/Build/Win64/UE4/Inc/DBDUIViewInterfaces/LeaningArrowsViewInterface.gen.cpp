// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/LeaningArrowsViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaningArrowsViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULeaningArrowsViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_ULeaningArrowsViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ELeanState();
// End Cross Module References
	DEFINE_FUNCTION(ILeaningArrowsViewInterface::execSetData)
	{
		P_GET_ENUM_REF(ELeanState,Z_Param_Out_leanState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation((ELeanState&)(Z_Param_Out_leanState));
		P_NATIVE_END;
	}
	void ILeaningArrowsViewInterface::SetData(ELeanState const& leanState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void ULeaningArrowsViewInterface::StaticRegisterNativesULeaningArrowsViewInterface()
	{
		UClass* Class = ULeaningArrowsViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &ILeaningArrowsViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leanState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_leanState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_leanState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::NewProp_leanState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::NewProp_leanState = { "leanState", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeaningArrowsViewInterface_eventSetData_Parms, leanState), Z_Construct_UEnum_DBDSharedTypes_ELeanState, METADATA_PARAMS(Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::NewProp_leanState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::NewProp_leanState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::NewProp_leanState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::NewProp_leanState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::NewProp_leanState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeaningArrowsViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaningArrowsViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(LeaningArrowsViewInterface_eventSetData_Parms), Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeaningArrowsViewInterface_NoRegister()
	{
		return ULeaningArrowsViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULeaningArrowsViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeaningArrowsViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeaningArrowsViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeaningArrowsViewInterface_SetData, "SetData" }, // 2874785888
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaningArrowsViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LeaningArrowsViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeaningArrowsViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILeaningArrowsViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeaningArrowsViewInterface_Statics::ClassParams = {
		&ULeaningArrowsViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULeaningArrowsViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaningArrowsViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeaningArrowsViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeaningArrowsViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeaningArrowsViewInterface, 1629796749);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<ULeaningArrowsViewInterface>()
	{
		return ULeaningArrowsViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeaningArrowsViewInterface(Z_Construct_UClass_ULeaningArrowsViewInterface, &ULeaningArrowsViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ULeaningArrowsViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaningArrowsViewInterface);
	static FName NAME_ULeaningArrowsViewInterface_SetData = FName(TEXT("SetData"));
	void ILeaningArrowsViewInterface::Execute_SetData(UObject* O, ELeanState const& leanState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(ULeaningArrowsViewInterface::StaticClass()));
		LeaningArrowsViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_ULeaningArrowsViewInterface_SetData);
		if (Func)
		{
			Parms.leanState=leanState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ILeaningArrowsViewInterface*)(O->GetNativeInterfaceAddress(ULeaningArrowsViewInterface::StaticClass())))
		{
			I->SetData_Implementation(leanState);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
