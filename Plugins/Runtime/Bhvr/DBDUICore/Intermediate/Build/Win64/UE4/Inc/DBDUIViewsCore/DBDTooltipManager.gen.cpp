// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDTooltipManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTooltipManager() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTooltipManager_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTooltipManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterTooltipViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizationTooltipViewData();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDTooltipManager::execHideTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideTooltip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowCharacterTooltip)
	{
		P_GET_STRUCT_REF(FCharacterTooltipViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT(FGeometry,Z_Param_triggerGeometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCharacterTooltip(Z_Param_Out_tooltipViewData,Z_Param_triggerGeometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowCurrencyTooltip)
	{
		P_GET_STRUCT_REF(FCurrencyProgressionTooltipViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT(FGeometry,Z_Param_triggerGeometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCurrencyTooltip(Z_Param_Out_tooltipViewData,Z_Param_triggerGeometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTooltipManager::execShowCustomizationTooltip)
	{
		P_GET_STRUCT_REF(FCustomizationTooltipViewData,Z_Param_Out_tooltipViewData);
		P_GET_STRUCT(FGeometry,Z_Param_triggerGeometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowCustomizationTooltip(Z_Param_Out_tooltipViewData,Z_Param_triggerGeometry);
		P_NATIVE_END;
	}
	void UDBDTooltipManager::StaticRegisterNativesUDBDTooltipManager()
	{
		UClass* Class = UDBDTooltipManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideTooltip", &UDBDTooltipManager::execHideTooltip },
			{ "ShowCharacterTooltip", &UDBDTooltipManager::execShowCharacterTooltip },
			{ "ShowCurrencyTooltip", &UDBDTooltipManager::execShowCurrencyTooltip },
			{ "ShowCustomizationTooltip", &UDBDTooltipManager::execShowCustomizationTooltip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "HideTooltip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_HideTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_HideTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics
	{
		struct DBDTooltipManager_eventShowCharacterTooltip_Parms
		{
			FCharacterTooltipViewData tooltipViewData;
			FGeometry triggerGeometry;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCharacterTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCharacterTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FCharacterTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::NewProp_tooltipViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowCharacterTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowCharacterTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics
	{
		struct DBDTooltipManager_eventShowCurrencyTooltip_Parms
		{
			FCurrencyProgressionTooltipViewData tooltipViewData;
			FGeometry triggerGeometry;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCurrencyTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCurrencyTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FCurrencyProgressionTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::NewProp_tooltipViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowCurrencyTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowCurrencyTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics
	{
		struct DBDTooltipManager_eventShowCustomizationTooltip_Parms
		{
			FCustomizationTooltipViewData tooltipViewData;
			FGeometry triggerGeometry;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_triggerGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry = { "triggerGeometry", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCustomizationTooltip_Parms, triggerGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData = { "tooltipViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDTooltipManager_eventShowCustomizationTooltip_Parms, tooltipViewData), Z_Construct_UScriptStruct_FCustomizationTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_triggerGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::NewProp_tooltipViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTooltipManager, nullptr, "ShowCustomizationTooltip", nullptr, nullptr, sizeof(DBDTooltipManager_eventShowCustomizationTooltip_Parms), Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDTooltipManager_NoRegister()
	{
		return UDBDTooltipManager::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTooltipManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentTooltip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__currentTooltip;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDTooltipManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDTooltipManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDTooltipManager_HideTooltip, "HideTooltip" }, // 2280324036
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowCharacterTooltip, "ShowCharacterTooltip" }, // 818118697
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowCurrencyTooltip, "ShowCurrencyTooltip" }, // 3121547929
		{ &Z_Construct_UFunction_UDBDTooltipManager_ShowCustomizationTooltip, "ShowCustomizationTooltip" }, // 57300540
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTooltipManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDTooltipManager.h" },
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDTooltipManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip = { "_currentTooltip", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTooltipManager, _currentTooltip), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDTooltipManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTooltipManager_Statics::NewProp__currentTooltip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTooltipManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTooltipManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTooltipManager_Statics::ClassParams = {
		&UDBDTooltipManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDTooltipManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTooltipManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDTooltipManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTooltipManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTooltipManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTooltipManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTooltipManager, 1464225836);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDTooltipManager>()
	{
		return UDBDTooltipManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTooltipManager(Z_Construct_UClass_UDBDTooltipManager, &UDBDTooltipManager::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDTooltipManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTooltipManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
