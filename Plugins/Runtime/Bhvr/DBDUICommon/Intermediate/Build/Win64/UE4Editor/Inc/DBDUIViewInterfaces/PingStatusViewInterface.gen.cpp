// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PingStatusViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePingStatusViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPingStatusViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPingStatusViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPingQuality();
// End Cross Module References
	DEFINE_FUNCTION(IPingStatusViewInterface::execSetData)
	{
		P_GET_ENUM_REF(EPingQuality,Z_Param_Out_pingQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData_Implementation((EPingQuality&)(Z_Param_Out_pingQuality));
		P_NATIVE_END;
	}
	void IPingStatusViewInterface::SetData(EPingQuality const& pingQuality)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetData instead.");
	}
	void UPingStatusViewInterface::StaticRegisterNativesUPingStatusViewInterface()
	{
		UClass* Class = UPingStatusViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &IPingStatusViewInterface::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pingQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pingQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pingQuality_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::NewProp_pingQuality_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::NewProp_pingQuality = { "pingQuality", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PingStatusViewInterface_eventSetData_Parms, pingQuality), Z_Construct_UEnum_DBDSharedTypes_EPingQuality, METADATA_PARAMS(Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::NewProp_pingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::NewProp_pingQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::NewProp_pingQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::NewProp_pingQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::NewProp_pingQuality_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PingStatusViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPingStatusViewInterface, nullptr, "SetData", nullptr, nullptr, sizeof(PingStatusViewInterface_eventSetData_Parms), Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPingStatusViewInterface_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPingStatusViewInterface_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPingStatusViewInterface_NoRegister()
	{
		return UPingStatusViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPingStatusViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPingStatusViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPingStatusViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPingStatusViewInterface_SetData, "SetData" }, // 2525112261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPingStatusViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PingStatusViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPingStatusViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPingStatusViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPingStatusViewInterface_Statics::ClassParams = {
		&UPingStatusViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPingStatusViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPingStatusViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPingStatusViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPingStatusViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPingStatusViewInterface, 4009315056);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UPingStatusViewInterface>()
	{
		return UPingStatusViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPingStatusViewInterface(Z_Construct_UClass_UPingStatusViewInterface, &UPingStatusViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UPingStatusViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPingStatusViewInterface);
	static FName NAME_UPingStatusViewInterface_SetData = FName(TEXT("SetData"));
	void IPingStatusViewInterface::Execute_SetData(UObject* O, EPingQuality const& pingQuality)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPingStatusViewInterface::StaticClass()));
		PingStatusViewInterface_eventSetData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPingStatusViewInterface_SetData);
		if (Func)
		{
			Parms.pingQuality=pingQuality;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPingStatusViewInterface*)(O->GetNativeInterfaceAddress(UPingStatusViewInterface::StaticClass())))
		{
			I->SetData_Implementation(pingQuality);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
