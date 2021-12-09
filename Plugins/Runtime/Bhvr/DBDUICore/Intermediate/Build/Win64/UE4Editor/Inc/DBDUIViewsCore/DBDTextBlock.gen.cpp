// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTextBlock() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock();
	UMG_API UClass* Z_Construct_UClass_UTextBlock();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockOverrideProperties();
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UDBDTextManager_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_USwitchDockStateManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDTextBlock::execGetIsUpperCase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUpperCase();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execOnLargeTextSettingsChanged)
	{
		P_GET_UBOOL(Z_Param_isLargeText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLargeTextSettingsChanged(Z_Param_isLargeText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execOnSwitchDockStateChanged)
	{
		P_GET_UBOOL(Z_Param_isDocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSwitchDockStateChanged(Z_Param_isDocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDTextBlock::execSetIsUpperCase)
	{
		P_GET_UBOOL(Z_Param_isUpperCase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUpperCase(Z_Param_isUpperCase);
		P_NATIVE_END;
	}
	void UDBDTextBlock::StaticRegisterNativesUDBDTextBlock()
	{
		UClass* Class = UDBDTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsUpperCase", &UDBDTextBlock::execGetIsUpperCase },
			{ "OnLargeTextSettingsChanged", &UDBDTextBlock::execOnLargeTextSettingsChanged },
			{ "OnSwitchDockStateChanged", &UDBDTextBlock::execOnSwitchDockStateChanged },
			{ "SetIsUpperCase", &UDBDTextBlock::execSetIsUpperCase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics
	{
		struct DBDTextBlock_eventGetIsUpperCase_Parms
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
	void Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDTextBlock_eventGetIsUpperCase_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTextBlock_eventGetIsUpperCase_Parms), &Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "GetIsUpperCase", nullptr, nullptr, sizeof(DBDTextBlock_eventGetIsUpperCase_Parms), Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics
	{
		struct DBDTextBlock_eventOnLargeTextSettingsChanged_Parms
		{
			bool isLargeText;
		};
		static void NewProp_isLargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLargeText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText_SetBit(void* Obj)
	{
		((DBDTextBlock_eventOnLargeTextSettingsChanged_Parms*)Obj)->isLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText = { "isLargeText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTextBlock_eventOnLargeTextSettingsChanged_Parms), &Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::NewProp_isLargeText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "OnLargeTextSettingsChanged", nullptr, nullptr, sizeof(DBDTextBlock_eventOnLargeTextSettingsChanged_Parms), Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics
	{
		struct DBDTextBlock_eventOnSwitchDockStateChanged_Parms
		{
			bool isDocked;
		};
		static void NewProp_isDocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDocked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked_SetBit(void* Obj)
	{
		((DBDTextBlock_eventOnSwitchDockStateChanged_Parms*)Obj)->isDocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked = { "isDocked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTextBlock_eventOnSwitchDockStateChanged_Parms), &Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::NewProp_isDocked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "OnSwitchDockStateChanged", nullptr, nullptr, sizeof(DBDTextBlock_eventOnSwitchDockStateChanged_Parms), Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics
	{
		struct DBDTextBlock_eventSetIsUpperCase_Parms
		{
			bool isUpperCase;
		};
		static void NewProp_isUpperCase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isUpperCase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase_SetBit(void* Obj)
	{
		((DBDTextBlock_eventSetIsUpperCase_Parms*)Obj)->isUpperCase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase = { "isUpperCase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDTextBlock_eventSetIsUpperCase_Parms), &Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::NewProp_isUpperCase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDTextBlock, nullptr, "SetIsUpperCase", nullptr, nullptr, sizeof(DBDTextBlock_eventSetIsUpperCase_Parms), Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister()
	{
		return UDBDTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__undockedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__undockedProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasUndocking_MetaData[];
#endif
		static void NewProp__hasUndocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasUndocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overrideUndockedPropertiesWithLargeText_MetaData[];
#endif
		static void NewProp__overrideUndockedPropertiesWithLargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__overrideUndockedPropertiesWithLargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__largeTextProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__largeTextProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasLargeText_MetaData[];
#endif
		static void NewProp__hasLargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasLargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isUpperCase_MetaData[];
#endif
		static void NewProp__isUpperCase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isUpperCase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__textManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__textManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__switchDockStateManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__switchDockStateManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugPreviewUndockedState_MetaData[];
#endif
		static void NewProp__debugPreviewUndockedState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__debugPreviewUndockedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugPreviewLargeTextState_MetaData[];
#endif
		static void NewProp__debugPreviewLargeTextState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__debugPreviewLargeTextState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDTextBlock_GetIsUpperCase, "GetIsUpperCase" }, // 2531716651
		{ &Z_Construct_UFunction_UDBDTextBlock_OnLargeTextSettingsChanged, "OnLargeTextSettingsChanged" }, // 1119729804
		{ &Z_Construct_UFunction_UDBDTextBlock_OnSwitchDockStateChanged, "OnSwitchDockStateChanged" }, // 2743598191
		{ &Z_Construct_UFunction_UDBDTextBlock_SetIsUpperCase, "SetIsUpperCase" }, // 1357258248
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDTextBlock.h" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties = { "_undockedProperties", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, _undockedProperties), Z_Construct_UScriptStruct_FTextBlockOverrideProperties, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_hasUndocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking = { "_hasUndocking", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_overrideUndockedPropertiesWithLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText = { "_overrideUndockedPropertiesWithLargeText", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties = { "_largeTextProperties", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, _largeTextProperties), Z_Construct_UScriptStruct_FTextBlockOverrideProperties, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_hasLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText = { "_hasLargeText", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_isUpperCase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase = { "_isUpperCase", nullptr, (EPropertyFlags)0x0020080000000805, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager = { "_textManager", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, _textManager), Z_Construct_UClass_UDBDTextManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager = { "_switchDockStateManager", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDTextBlock, _switchDockStateManager), Z_Construct_UClass_USwitchDockStateManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewUndockedState_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewUndockedState_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_debugPreviewUndockedState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewUndockedState = { "_debugPreviewUndockedState", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewUndockedState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewUndockedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewUndockedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewLargeTextState_MetaData[] = {
		{ "Category", "DBDTextBlock" },
		{ "ModuleRelativePath", "Public/DBDTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewLargeTextState_SetBit(void* Obj)
	{
		((UDBDTextBlock*)Obj)->_debugPreviewLargeTextState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewLargeTextState = { "_debugPreviewLargeTextState", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDTextBlock), &Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewLargeTextState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewLargeTextState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewLargeTextState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__undockedProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasUndocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__largeTextProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__hasLargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__isUpperCase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__textManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__switchDockStateManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewUndockedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDTextBlock_Statics::NewProp__debugPreviewLargeTextState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTextBlock_Statics::ClassParams = {
		&UDBDTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTextBlock, 1622919917);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDTextBlock>()
	{
		return UDBDTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTextBlock(Z_Construct_UClass_UDBDTextBlock, &UDBDTextBlock::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
