// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ScreenIndicatorsContainerViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenIndicatorsContainerViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UScreenIndicatorsContainerViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FScreenIndicatorViewData();
// End Cross Module References
	DEFINE_FUNCTION(IScreenIndicatorsContainerViewInterface::execRemoveDirectionIndicator)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDirectionIndicator_Implementation(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IScreenIndicatorsContainerViewInterface::execShowDirectionIndicator)
	{
		P_GET_STRUCT_REF(FScreenIndicatorViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowDirectionIndicator_Implementation(Z_Param_Out_data);
		P_NATIVE_END;
	}
	void IScreenIndicatorsContainerViewInterface::RemoveDirectionIndicator(const FString& id)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveDirectionIndicator instead.");
	}
	void IScreenIndicatorsContainerViewInterface::ShowDirectionIndicator(FScreenIndicatorViewData const& data)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowDirectionIndicator instead.");
	}
	void UScreenIndicatorsContainerViewInterface::StaticRegisterNativesUScreenIndicatorsContainerViewInterface()
	{
		UClass* Class = UScreenIndicatorsContainerViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveDirectionIndicator", &IScreenIndicatorsContainerViewInterface::execRemoveDirectionIndicator },
			{ "ShowDirectionIndicator", &IScreenIndicatorsContainerViewInterface::execShowDirectionIndicator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::NewProp_id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenIndicatorsContainerViewInterface_eventRemoveDirectionIndicator_Parms, id), METADATA_PARAMS(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::NewProp_id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenIndicatorsContainerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenIndicatorsContainerViewInterface, nullptr, "RemoveDirectionIndicator", nullptr, nullptr, sizeof(ScreenIndicatorsContainerViewInterface_eventRemoveDirectionIndicator_Parms), Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ScreenIndicatorsContainerViewInterface_eventShowDirectionIndicator_Parms, data), Z_Construct_UScriptStruct_FScreenIndicatorViewData, METADATA_PARAMS(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScreenIndicatorsContainerViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScreenIndicatorsContainerViewInterface, nullptr, "ShowDirectionIndicator", nullptr, nullptr, sizeof(ScreenIndicatorsContainerViewInterface_eventShowDirectionIndicator_Parms), Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_NoRegister()
	{
		return UScreenIndicatorsContainerViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator, "RemoveDirectionIndicator" }, // 1288897455
		{ &Z_Construct_UFunction_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator, "ShowDirectionIndicator" }, // 393613908
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorsContainerViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IScreenIndicatorsContainerViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics::ClassParams = {
		&UScreenIndicatorsContainerViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenIndicatorsContainerViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenIndicatorsContainerViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenIndicatorsContainerViewInterface, 2835050346);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UScreenIndicatorsContainerViewInterface>()
	{
		return UScreenIndicatorsContainerViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenIndicatorsContainerViewInterface(Z_Construct_UClass_UScreenIndicatorsContainerViewInterface, &UScreenIndicatorsContainerViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UScreenIndicatorsContainerViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenIndicatorsContainerViewInterface);
	static FName NAME_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator = FName(TEXT("RemoveDirectionIndicator"));
	void IScreenIndicatorsContainerViewInterface::Execute_RemoveDirectionIndicator(UObject* O, const FString& id)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UScreenIndicatorsContainerViewInterface::StaticClass()));
		ScreenIndicatorsContainerViewInterface_eventRemoveDirectionIndicator_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UScreenIndicatorsContainerViewInterface_RemoveDirectionIndicator);
		if (Func)
		{
			Parms.id=id;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IScreenIndicatorsContainerViewInterface*)(O->GetNativeInterfaceAddress(UScreenIndicatorsContainerViewInterface::StaticClass())))
		{
			I->RemoveDirectionIndicator_Implementation(id);
		}
	}
	static FName NAME_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator = FName(TEXT("ShowDirectionIndicator"));
	void IScreenIndicatorsContainerViewInterface::Execute_ShowDirectionIndicator(UObject* O, FScreenIndicatorViewData const& data)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UScreenIndicatorsContainerViewInterface::StaticClass()));
		ScreenIndicatorsContainerViewInterface_eventShowDirectionIndicator_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UScreenIndicatorsContainerViewInterface_ShowDirectionIndicator);
		if (Func)
		{
			Parms.data=data;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IScreenIndicatorsContainerViewInterface*)(O->GetNativeInterfaceAddress(UScreenIndicatorsContainerViewInterface::StaticClass())))
		{
			I->ShowDirectionIndicator_Implementation(data);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
