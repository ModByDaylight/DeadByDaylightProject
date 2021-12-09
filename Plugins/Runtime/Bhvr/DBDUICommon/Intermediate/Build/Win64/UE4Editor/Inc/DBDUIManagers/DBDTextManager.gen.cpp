// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIManagers/Public/DBDTextManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTextManager() {}
// Cross Module References
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UDBDTextManager_NoRegister();
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UDBDTextManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDUIManagers();
// End Cross Module References
	DEFINE_FUNCTION(UDBDTextManager::execGetLargeTextEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLargeTextEnabled();
		P_NATIVE_END;
	}
	void UDBDTextManager::StaticRegisterNativesUDBDTextManager()
	{
		UClass* Class = UDBDTextManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLargeTextEnabled", &UDBDTextManager::execGetLargeTextEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics
	{
		struct DBDTextManager_eventGetLargeTextEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDTextManager_eventGetLargeTextEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTextManager_eventGetLargeTextEnabled_Parms), &Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextManager, nullptr, "GetLargeTextEnabled", nullptr, nullptr, sizeof(DBDTextManager_eventGetLargeTextEnabled_Parms), Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDTextManager_NoRegister()
	{
		return UDBDTextManager::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTextManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDTextManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIManagers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDTextManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDTextManager_GetLargeTextEnabled, "GetLargeTextEnabled" }, // 926735379
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDTextManager.h" },
		{ "ModuleRelativePath", "Public/DBDTextManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTextManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTextManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTextManager_Statics::ClassParams = {
		&UDBDTextManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDTextManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTextManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTextManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTextManager, 4183696574);
	template<> DBDUIMANAGERS_API UClass* StaticClass<UDBDTextManager>()
	{
		return UDBDTextManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTextManager(Z_Construct_UClass_UDBDTextManager, &UDBDTextManager::StaticClass, TEXT("/Script/DBDUIManagers"), TEXT("UDBDTextManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTextManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
