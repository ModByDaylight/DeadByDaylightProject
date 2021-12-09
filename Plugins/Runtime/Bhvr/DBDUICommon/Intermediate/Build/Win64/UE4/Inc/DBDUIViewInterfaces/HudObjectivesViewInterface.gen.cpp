// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/HudObjectivesViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudObjectivesViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudObjectivesViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UHudObjectivesViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FHudObjectivesViewData();
// End Cross Module References
	DEFINE_FUNCTION(IHudObjectivesViewInterface::execClearData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudObjectivesViewInterface::execClearHookCountData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHookCountData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudObjectivesViewInterface::execInitWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudObjectivesViewInterface::execSetHookCountData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_currentHookCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxHookCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_initialMaxHookCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHookCountData_Implementation(Z_Param_currentHookCount,Z_Param_maxHookCount,Z_Param_initialMaxHookCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudObjectivesViewInterface::execSetHookCountVisibility)
	{
		P_GET_UBOOL(Z_Param_visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHookCountVisibility_Implementation(Z_Param_visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHudObjectivesViewInterface::execSetHudObjectiveData)
	{
		P_GET_STRUCT_REF(FHudObjectivesViewData,Z_Param_Out_hudObjectiveViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHudObjectiveData_Implementation(Z_Param_Out_hudObjectiveViewData);
		P_NATIVE_END;
	}
	void IHudObjectivesViewInterface::ClearData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearData instead.");
	}
	void IHudObjectivesViewInterface::ClearHookCountData()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearHookCountData instead.");
	}
	void IHudObjectivesViewInterface::InitWidget()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitWidget instead.");
	}
	void IHudObjectivesViewInterface::SetHookCountData(const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHookCountData instead.");
	}
	void IHudObjectivesViewInterface::SetHookCountVisibility(bool visible)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHookCountVisibility instead.");
	}
	void IHudObjectivesViewInterface::SetHudObjectiveData(FHudObjectivesViewData const& hudObjectiveViewData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetHudObjectiveData instead.");
	}
	void UHudObjectivesViewInterface::StaticRegisterNativesUHudObjectivesViewInterface()
	{
		UClass* Class = UHudObjectivesViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearData", &IHudObjectivesViewInterface::execClearData },
			{ "ClearHookCountData", &IHudObjectivesViewInterface::execClearHookCountData },
			{ "InitWidget", &IHudObjectivesViewInterface::execInitWidget },
			{ "SetHookCountData", &IHudObjectivesViewInterface::execSetHookCountData },
			{ "SetHookCountVisibility", &IHudObjectivesViewInterface::execSetHookCountVisibility },
			{ "SetHudObjectiveData", &IHudObjectivesViewInterface::execSetHudObjectiveData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudObjectivesViewInterface_ClearData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_ClearData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectivesViewInterface_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectivesViewInterface, nullptr, "ClearData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectivesViewInterface_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectivesViewInterface_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudObjectivesViewInterface_ClearHookCountData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_ClearHookCountData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectivesViewInterface_ClearHookCountData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectivesViewInterface, nullptr, "ClearHookCountData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_ClearHookCountData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_ClearHookCountData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectivesViewInterface_ClearHookCountData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectivesViewInterface_ClearHookCountData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudObjectivesViewInterface_InitWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_InitWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectivesViewInterface_InitWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectivesViewInterface, nullptr, "InitWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_InitWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_InitWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectivesViewInterface_InitWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectivesViewInterface_InitWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialMaxHookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_initialMaxHookCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxHookCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentHookCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentHookCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_initialMaxHookCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_initialMaxHookCount = { "initialMaxHookCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudObjectivesViewInterface_eventSetHookCountData_Parms, initialMaxHookCount), METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_initialMaxHookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_initialMaxHookCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_maxHookCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_maxHookCount = { "maxHookCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudObjectivesViewInterface_eventSetHookCountData_Parms, maxHookCount), METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_maxHookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_maxHookCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_currentHookCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_currentHookCount = { "currentHookCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudObjectivesViewInterface_eventSetHookCountData_Parms, currentHookCount), METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_currentHookCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_currentHookCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_initialMaxHookCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_maxHookCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::NewProp_currentHookCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectivesViewInterface, nullptr, "SetHookCountData", nullptr, nullptr, sizeof(HudObjectivesViewInterface_eventSetHookCountData_Parms), Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics
	{
		static void NewProp_visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::NewProp_visible_SetBit(void* Obj)
	{
		((HudObjectivesViewInterface_eventSetHookCountVisibility_Parms*)Obj)->visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::NewProp_visible = { "visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HudObjectivesViewInterface_eventSetHookCountVisibility_Parms), &Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::NewProp_visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::NewProp_visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectivesViewInterface, nullptr, "SetHookCountVisibility", nullptr, nullptr, sizeof(HudObjectivesViewInterface_eventSetHookCountVisibility_Parms), Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudObjectiveViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hudObjectiveViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData = { "hudObjectiveViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudObjectivesViewInterface_eventSetHudObjectiveData_Parms, hudObjectiveViewData), Z_Construct_UScriptStruct_FHudObjectivesViewData, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::NewProp_hudObjectiveViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudObjectivesViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudObjectivesViewInterface, nullptr, "SetHudObjectiveData", nullptr, nullptr, sizeof(HudObjectivesViewInterface_eventSetHudObjectiveData_Parms), Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudObjectivesViewInterface_NoRegister()
	{
		return UHudObjectivesViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHudObjectivesViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudObjectivesViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudObjectivesViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudObjectivesViewInterface_ClearData, "ClearData" }, // 775069353
		{ &Z_Construct_UFunction_UHudObjectivesViewInterface_ClearHookCountData, "ClearHookCountData" }, // 3378221984
		{ &Z_Construct_UFunction_UHudObjectivesViewInterface_InitWidget, "InitWidget" }, // 2043808686
		{ &Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountData, "SetHookCountData" }, // 3302887174
		{ &Z_Construct_UFunction_UHudObjectivesViewInterface_SetHookCountVisibility, "SetHookCountVisibility" }, // 4195951915
		{ &Z_Construct_UFunction_UHudObjectivesViewInterface_SetHudObjectiveData, "SetHudObjectiveData" }, // 832325910
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudObjectivesViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HudObjectivesViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudObjectivesViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHudObjectivesViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudObjectivesViewInterface_Statics::ClassParams = {
		&UHudObjectivesViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHudObjectivesViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudObjectivesViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudObjectivesViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudObjectivesViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudObjectivesViewInterface, 650759508);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UHudObjectivesViewInterface>()
	{
		return UHudObjectivesViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudObjectivesViewInterface(Z_Construct_UClass_UHudObjectivesViewInterface, &UHudObjectivesViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UHudObjectivesViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudObjectivesViewInterface);
	static FName NAME_UHudObjectivesViewInterface_ClearData = FName(TEXT("ClearData"));
	void IHudObjectivesViewInterface::Execute_ClearData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectivesViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHudObjectivesViewInterface_ClearData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHudObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectivesViewInterface::StaticClass())))
		{
			I->ClearData_Implementation();
		}
	}
	static FName NAME_UHudObjectivesViewInterface_ClearHookCountData = FName(TEXT("ClearHookCountData"));
	void IHudObjectivesViewInterface::Execute_ClearHookCountData(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectivesViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHudObjectivesViewInterface_ClearHookCountData);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHudObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectivesViewInterface::StaticClass())))
		{
			I->ClearHookCountData_Implementation();
		}
	}
	static FName NAME_UHudObjectivesViewInterface_InitWidget = FName(TEXT("InitWidget"));
	void IHudObjectivesViewInterface::Execute_InitWidget(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectivesViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHudObjectivesViewInterface_InitWidget);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHudObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectivesViewInterface::StaticClass())))
		{
			I->InitWidget_Implementation();
		}
	}
	static FName NAME_UHudObjectivesViewInterface_SetHookCountData = FName(TEXT("SetHookCountData"));
	void IHudObjectivesViewInterface::Execute_SetHookCountData(UObject* O, const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectivesViewInterface::StaticClass()));
		HudObjectivesViewInterface_eventSetHookCountData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudObjectivesViewInterface_SetHookCountData);
		if (Func)
		{
			Parms.currentHookCount=currentHookCount;
			Parms.maxHookCount=maxHookCount;
			Parms.initialMaxHookCount=initialMaxHookCount;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectivesViewInterface::StaticClass())))
		{
			I->SetHookCountData_Implementation(currentHookCount,maxHookCount,initialMaxHookCount);
		}
	}
	static FName NAME_UHudObjectivesViewInterface_SetHookCountVisibility = FName(TEXT("SetHookCountVisibility"));
	void IHudObjectivesViewInterface::Execute_SetHookCountVisibility(UObject* O, bool visible)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectivesViewInterface::StaticClass()));
		HudObjectivesViewInterface_eventSetHookCountVisibility_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudObjectivesViewInterface_SetHookCountVisibility);
		if (Func)
		{
			Parms.visible=visible;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectivesViewInterface::StaticClass())))
		{
			I->SetHookCountVisibility_Implementation(visible);
		}
	}
	static FName NAME_UHudObjectivesViewInterface_SetHudObjectiveData = FName(TEXT("SetHudObjectiveData"));
	void IHudObjectivesViewInterface::Execute_SetHudObjectiveData(UObject* O, FHudObjectivesViewData const& hudObjectiveViewData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHudObjectivesViewInterface::StaticClass()));
		HudObjectivesViewInterface_eventSetHudObjectiveData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHudObjectivesViewInterface_SetHudObjectiveData);
		if (Func)
		{
			Parms.hudObjectiveViewData=hudObjectiveViewData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHudObjectivesViewInterface*)(O->GetNativeInterfaceAddress(UHudObjectivesViewInterface::StaticClass())))
		{
			I->SetHudObjectiveData_Implementation(hudObjectiveViewData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
