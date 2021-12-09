// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/GameManualViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameManualViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGameManualViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UGameManualViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EGameManualMenuState();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FHelpTopicData();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FHelpCategoryData();
// End Cross Module References
	DEFINE_FUNCTION(IGameManualViewInterface::execGetCurrentManualMenuState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameManualMenuState*)Z_Param__Result=P_THIS->GetCurrentManualMenuState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameManualViewInterface::execSetCategoryData)
	{
		P_GET_STRUCT(FHelpCategoryData,Z_Param_categoryData);
		P_GET_TARRAY_REF(FHelpTopicData,Z_Param_Out_topicsData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCategoryData_Implementation(Z_Param_categoryData,Z_Param_Out_topicsData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameManualViewInterface::execSetCurrentManualMenuState)
	{
		P_GET_ENUM(EGameManualMenuState,Z_Param_menuState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentManualMenuState_Implementation(EGameManualMenuState(Z_Param_menuState));
		P_NATIVE_END;
	}
	EGameManualMenuState IGameManualViewInterface::GetCurrentManualMenuState() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCurrentManualMenuState instead.");
		GameManualViewInterface_eventGetCurrentManualMenuState_Parms Parms;
		return Parms.ReturnValue;
	}
	void IGameManualViewInterface::SetCategoryData(const FHelpCategoryData categoryData, TArray<FHelpTopicData> const& topicsData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCategoryData instead.");
	}
	void IGameManualViewInterface::SetCurrentManualMenuState(const EGameManualMenuState menuState)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetCurrentManualMenuState instead.");
	}
	void UGameManualViewInterface::StaticRegisterNativesUGameManualViewInterface()
	{
		UClass* Class = UGameManualViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentManualMenuState", &IGameManualViewInterface::execGetCurrentManualMenuState },
			{ "SetCategoryData", &IGameManualViewInterface::execSetCategoryData },
			{ "SetCurrentManualMenuState", &IGameManualViewInterface::execSetCurrentManualMenuState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManualViewInterface_eventGetCurrentManualMenuState_Parms, ReturnValue), Z_Construct_UEnum_DBDUIViewInterfaces_EGameManualMenuState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManualViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManualViewInterface, nullptr, "GetCurrentManualMenuState", nullptr, nullptr, sizeof(GameManualViewInterface_eventGetCurrentManualMenuState_Parms), Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_topicsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_topicsData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_topicsData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_categoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_categoryData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_topicsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_topicsData = { "topicsData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManualViewInterface_eventSetCategoryData_Parms, topicsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_topicsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_topicsData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_topicsData_Inner = { "topicsData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHelpTopicData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_categoryData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_categoryData = { "categoryData", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManualViewInterface_eventSetCategoryData_Parms, categoryData), Z_Construct_UScriptStruct_FHelpCategoryData, METADATA_PARAMS(Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_categoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_categoryData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_topicsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_topicsData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::NewProp_categoryData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManualViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManualViewInterface, nullptr, "SetCategoryData", nullptr, nullptr, sizeof(GameManualViewInterface_eventSetCategoryData_Parms), Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_menuState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_menuState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_menuState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::NewProp_menuState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::NewProp_menuState = { "menuState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameManualViewInterface_eventSetCurrentManualMenuState_Parms, menuState), Z_Construct_UEnum_DBDUIViewInterfaces_EGameManualMenuState, METADATA_PARAMS(Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::NewProp_menuState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::NewProp_menuState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::NewProp_menuState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::NewProp_menuState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::NewProp_menuState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameManualViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameManualViewInterface, nullptr, "SetCurrentManualMenuState", nullptr, nullptr, sizeof(GameManualViewInterface_eventSetCurrentManualMenuState_Parms), Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameManualViewInterface_NoRegister()
	{
		return UGameManualViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameManualViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameManualViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameManualViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameManualViewInterface_GetCurrentManualMenuState, "GetCurrentManualMenuState" }, // 3482816042
		{ &Z_Construct_UFunction_UGameManualViewInterface_SetCategoryData, "SetCategoryData" }, // 2673758371
		{ &Z_Construct_UFunction_UGameManualViewInterface_SetCurrentManualMenuState, "SetCurrentManualMenuState" }, // 1858560145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameManualViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GameManualViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameManualViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameManualViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameManualViewInterface_Statics::ClassParams = {
		&UGameManualViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameManualViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameManualViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameManualViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameManualViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameManualViewInterface, 837813470);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UGameManualViewInterface>()
	{
		return UGameManualViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameManualViewInterface(Z_Construct_UClass_UGameManualViewInterface, &UGameManualViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UGameManualViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameManualViewInterface);
	static FName NAME_UGameManualViewInterface_GetCurrentManualMenuState = FName(TEXT("GetCurrentManualMenuState"));
	EGameManualMenuState IGameManualViewInterface::Execute_GetCurrentManualMenuState(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameManualViewInterface::StaticClass()));
		GameManualViewInterface_eventGetCurrentManualMenuState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameManualViewInterface_GetCurrentManualMenuState);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IGameManualViewInterface*)(O->GetNativeInterfaceAddress(UGameManualViewInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCurrentManualMenuState_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGameManualViewInterface_SetCategoryData = FName(TEXT("SetCategoryData"));
	void IGameManualViewInterface::Execute_SetCategoryData(UObject* O, const FHelpCategoryData categoryData, TArray<FHelpTopicData> const& topicsData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameManualViewInterface::StaticClass()));
		GameManualViewInterface_eventSetCategoryData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameManualViewInterface_SetCategoryData);
		if (Func)
		{
			Parms.categoryData=categoryData;
			Parms.topicsData=topicsData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameManualViewInterface*)(O->GetNativeInterfaceAddress(UGameManualViewInterface::StaticClass())))
		{
			I->SetCategoryData_Implementation(categoryData,topicsData);
		}
	}
	static FName NAME_UGameManualViewInterface_SetCurrentManualMenuState = FName(TEXT("SetCurrentManualMenuState"));
	void IGameManualViewInterface::Execute_SetCurrentManualMenuState(UObject* O, const EGameManualMenuState menuState)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGameManualViewInterface::StaticClass()));
		GameManualViewInterface_eventSetCurrentManualMenuState_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGameManualViewInterface_SetCurrentManualMenuState);
		if (Func)
		{
			Parms.menuState=menuState;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGameManualViewInterface*)(O->GetNativeInterfaceAddress(UGameManualViewInterface::StaticClass())))
		{
			I->SetCurrentManualMenuState_Implementation(menuState);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
