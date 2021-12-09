// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIManagers/Public/UIScaleManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIScaleManager() {}
// Cross Module References
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UUIScaleManager_NoRegister();
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UUIScaleManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDUIManagers();
	DBDUIMANAGERS_API UEnum* Z_Construct_UEnum_DBDUIManagers_EDPIScaleCurveRatio();
	DBDUIMANAGERS_API UEnum* Z_Construct_UEnum_DBDUIManagers_EScaleType();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUIScaleManager::execGetDPIScaleCurveRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EDPIScaleCurveRatio*)Z_Param__Result=P_THIS->GetDPIScaleCurveRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIScaleManager::execGetHudScaleFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHudScaleFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIScaleManager::execGetMenuScaleFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMenuScaleFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIScaleManager::execGetScaleFactor)
	{
		P_GET_ENUM(EScaleType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetScaleFactor(EScaleType(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIScaleManager::execGetSkillCheckScaleFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSkillCheckScaleFactor();
		P_NATIVE_END;
	}
	void UUIScaleManager::StaticRegisterNativesUUIScaleManager()
	{
		UClass* Class = UUIScaleManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDPIScaleCurveRatio", &UUIScaleManager::execGetDPIScaleCurveRatio },
			{ "GetHudScaleFactor", &UUIScaleManager::execGetHudScaleFactor },
			{ "GetMenuScaleFactor", &UUIScaleManager::execGetMenuScaleFactor },
			{ "GetScaleFactor", &UUIScaleManager::execGetScaleFactor },
			{ "GetSkillCheckScaleFactor", &UUIScaleManager::execGetSkillCheckScaleFactor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics
	{
		struct UIScaleManager_eventGetDPIScaleCurveRatio_Parms
		{
			EDPIScaleCurveRatio ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIScaleManager_eventGetDPIScaleCurveRatio_Parms, ReturnValue), Z_Construct_UEnum_DBDUIManagers_EDPIScaleCurveRatio, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIScaleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIScaleManager, nullptr, "GetDPIScaleCurveRatio", nullptr, nullptr, sizeof(UIScaleManager_eventGetDPIScaleCurveRatio_Parms), Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics
	{
		struct UIScaleManager_eventGetHudScaleFactor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIScaleManager_eventGetHudScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIScaleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIScaleManager, nullptr, "GetHudScaleFactor", nullptr, nullptr, sizeof(UIScaleManager_eventGetHudScaleFactor_Parms), Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics
	{
		struct UIScaleManager_eventGetMenuScaleFactor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIScaleManager_eventGetMenuScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIScaleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIScaleManager, nullptr, "GetMenuScaleFactor", nullptr, nullptr, sizeof(UIScaleManager_eventGetMenuScaleFactor_Parms), Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics
	{
		struct UIScaleManager_eventGetScaleFactor_Parms
		{
			EScaleType type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIScaleManager_eventGetScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIScaleManager_eventGetScaleFactor_Parms, type), Z_Construct_UEnum_DBDUIManagers_EScaleType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIScaleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIScaleManager, nullptr, "GetScaleFactor", nullptr, nullptr, sizeof(UIScaleManager_eventGetScaleFactor_Parms), Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIScaleManager_GetScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIScaleManager_GetScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics
	{
		struct UIScaleManager_eventGetSkillCheckScaleFactor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIScaleManager_eventGetSkillCheckScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIScaleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIScaleManager, nullptr, "GetSkillCheckScaleFactor", nullptr, nullptr, sizeof(UIScaleManager_eventGetSkillCheckScaleFactor_Parms), Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIScaleManager_NoRegister()
	{
		return UUIScaleManager::StaticClass();
	}
	struct Z_Construct_UClass_UUIScaleManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dpiScaleCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dpiScaleCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dpiScaleCurveDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dpiScaleCurveDB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIScaleManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIManagers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIScaleManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIScaleManager_GetDPIScaleCurveRatio, "GetDPIScaleCurveRatio" }, // 588271274
		{ &Z_Construct_UFunction_UUIScaleManager_GetHudScaleFactor, "GetHudScaleFactor" }, // 1205434206
		{ &Z_Construct_UFunction_UUIScaleManager_GetMenuScaleFactor, "GetMenuScaleFactor" }, // 3993594008
		{ &Z_Construct_UFunction_UUIScaleManager_GetScaleFactor, "GetScaleFactor" }, // 1684948557
		{ &Z_Construct_UFunction_UUIScaleManager_GetSkillCheckScaleFactor, "GetSkillCheckScaleFactor" }, // 1085277530
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIScaleManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UIScaleManager.h" },
		{ "ModuleRelativePath", "Public/UIScaleManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIScaleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurve = { "_dpiScaleCurve", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIScaleManager, _dpiScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurveDB_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIScaleManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurveDB = { "_dpiScaleCurveDB", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIScaleManager, _dpiScaleCurveDB), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurveDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurveDB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIScaleManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIScaleManager_Statics::NewProp__dpiScaleCurveDB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIScaleManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIScaleManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIScaleManager_Statics::ClassParams = {
		&UUIScaleManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIScaleManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIScaleManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIScaleManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIScaleManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIScaleManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIScaleManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIScaleManager, 3406816701);
	template<> DBDUIMANAGERS_API UClass* StaticClass<UUIScaleManager>()
	{
		return UUIScaleManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIScaleManager(Z_Construct_UClass_UUIScaleManager, &UUIScaleManager::StaticClass, TEXT("/Script/DBDUIManagers"), TEXT("UUIScaleManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIScaleManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
