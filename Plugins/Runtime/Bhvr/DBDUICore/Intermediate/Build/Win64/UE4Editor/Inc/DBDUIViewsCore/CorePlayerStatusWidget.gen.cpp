// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerStatusWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerStatusWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerStateChangeType();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusViewData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EObsessionUIState();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerStatus();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESleepingUIState();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStatusAssets();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCorePlayerStatusWidget::execGetKillerStatusEffectWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCorePlayerStatusKillerEffectWidget**)Z_Param__Result=P_THIS->GetKillerStatusEffectWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerStatusWidget::execGetPlayerStateChangeType)
	{
		P_GET_STRUCT_REF(FPlayerStatusViewData,Z_Param_Out_newViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerStateChangeType*)Z_Param__Result=P_THIS->GetPlayerStateChangeType(Z_Param_Out_newViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerStatusWidget::execHasKillerStatusDataChanged)
	{
		P_GET_STRUCT_REF(FPlayerStatusViewData,Z_Param_Out_newViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasKillerStatusDataChanged(Z_Param_Out_newViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerStatusWidget::execHasObsessionStateChanged)
	{
		P_GET_ENUM(EObsessionUIState,Z_Param_newObsessionState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasObsessionStateChanged(EObsessionUIState(Z_Param_newObsessionState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerStatusWidget::execHasPlayerStateChanged)
	{
		P_GET_ENUM(EPlayerStatus,Z_Param_newPlayerState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPlayerStateChanged(EPlayerStatus(Z_Param_newPlayerState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerStatusWidget::execHasPlayerStatusDataChanged)
	{
		P_GET_STRUCT_REF(FPlayerStatusViewData,Z_Param_Out_newViewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPlayerStatusDataChanged(Z_Param_Out_newViewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerStatusWidget::execHasTimerProgressChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newTimerProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTimerProgressChanged(Z_Param_newTimerProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCorePlayerStatusWidget::execShouldPlaySleepAnimation)
	{
		P_GET_ENUM(ESleepingUIState,Z_Param_newSleepState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldPlaySleepAnimation(ESleepingUIState(Z_Param_newSleepState));
		P_NATIVE_END;
	}
	void UCorePlayerStatusWidget::StaticRegisterNativesUCorePlayerStatusWidget()
	{
		UClass* Class = UCorePlayerStatusWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKillerStatusEffectWidget", &UCorePlayerStatusWidget::execGetKillerStatusEffectWidget },
			{ "GetPlayerStateChangeType", &UCorePlayerStatusWidget::execGetPlayerStateChangeType },
			{ "HasKillerStatusDataChanged", &UCorePlayerStatusWidget::execHasKillerStatusDataChanged },
			{ "HasObsessionStateChanged", &UCorePlayerStatusWidget::execHasObsessionStateChanged },
			{ "HasPlayerStateChanged", &UCorePlayerStatusWidget::execHasPlayerStateChanged },
			{ "HasPlayerStatusDataChanged", &UCorePlayerStatusWidget::execHasPlayerStatusDataChanged },
			{ "HasTimerProgressChanged", &UCorePlayerStatusWidget::execHasTimerProgressChanged },
			{ "ShouldPlaySleepAnimation", &UCorePlayerStatusWidget::execShouldPlaySleepAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics
	{
		struct CorePlayerStatusWidget_eventGetKillerStatusEffectWidget_Parms
		{
			UCorePlayerStatusKillerEffectWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusWidget_eventGetKillerStatusEffectWidget_Parms, ReturnValue), Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusWidget, nullptr, "GetKillerStatusEffectWidget", nullptr, nullptr, sizeof(CorePlayerStatusWidget_eventGetKillerStatusEffectWidget_Parms), Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics
	{
		struct CorePlayerStatusWidget_eventGetPlayerStateChangeType_Parms
		{
			FPlayerStatusViewData newViewData;
			EPlayerStateChangeType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusWidget_eventGetPlayerStateChangeType_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_EPlayerStateChangeType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::NewProp_newViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::NewProp_newViewData = { "newViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusWidget_eventGetPlayerStateChangeType_Parms, newViewData), Z_Construct_UScriptStruct_FPlayerStatusViewData, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::NewProp_newViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::NewProp_newViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::NewProp_newViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusWidget, nullptr, "GetPlayerStateChangeType", nullptr, nullptr, sizeof(CorePlayerStatusWidget_eventGetPlayerStateChangeType_Parms), Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics
	{
		struct CorePlayerStatusWidget_eventHasKillerStatusDataChanged_Parms
		{
			FPlayerStatusViewData newViewData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CorePlayerStatusWidget_eventHasKillerStatusDataChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePlayerStatusWidget_eventHasKillerStatusDataChanged_Parms), &Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::NewProp_newViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::NewProp_newViewData = { "newViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusWidget_eventHasKillerStatusDataChanged_Parms, newViewData), Z_Construct_UScriptStruct_FPlayerStatusViewData, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::NewProp_newViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::NewProp_newViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::NewProp_newViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusWidget, nullptr, "HasKillerStatusDataChanged", nullptr, nullptr, sizeof(CorePlayerStatusWidget_eventHasKillerStatusDataChanged_Parms), Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics
	{
		struct CorePlayerStatusWidget_eventHasObsessionStateChanged_Parms
		{
			EObsessionUIState newObsessionState;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newObsessionState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newObsessionState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CorePlayerStatusWidget_eventHasObsessionStateChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePlayerStatusWidget_eventHasObsessionStateChanged_Parms), &Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::NewProp_newObsessionState = { "newObsessionState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusWidget_eventHasObsessionStateChanged_Parms, newObsessionState), Z_Construct_UEnum_DBDSharedTypes_EObsessionUIState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::NewProp_newObsessionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::NewProp_newObsessionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::NewProp_newObsessionState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusWidget, nullptr, "HasObsessionStateChanged", nullptr, nullptr, sizeof(CorePlayerStatusWidget_eventHasObsessionStateChanged_Parms), Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics
	{
		struct CorePlayerStatusWidget_eventHasPlayerStateChanged_Parms
		{
			EPlayerStatus newPlayerState;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newPlayerState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newPlayerState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CorePlayerStatusWidget_eventHasPlayerStateChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePlayerStatusWidget_eventHasPlayerStateChanged_Parms), &Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::NewProp_newPlayerState = { "newPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusWidget_eventHasPlayerStateChanged_Parms, newPlayerState), Z_Construct_UEnum_DBDSharedTypes_EPlayerStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::NewProp_newPlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::NewProp_newPlayerState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::NewProp_newPlayerState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusWidget, nullptr, "HasPlayerStateChanged", nullptr, nullptr, sizeof(CorePlayerStatusWidget_eventHasPlayerStateChanged_Parms), Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics
	{
		struct CorePlayerStatusWidget_eventHasPlayerStatusDataChanged_Parms
		{
			FPlayerStatusViewData newViewData;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CorePlayerStatusWidget_eventHasPlayerStatusDataChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePlayerStatusWidget_eventHasPlayerStatusDataChanged_Parms), &Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::NewProp_newViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::NewProp_newViewData = { "newViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusWidget_eventHasPlayerStatusDataChanged_Parms, newViewData), Z_Construct_UScriptStruct_FPlayerStatusViewData, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::NewProp_newViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::NewProp_newViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::NewProp_newViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusWidget, nullptr, "HasPlayerStatusDataChanged", nullptr, nullptr, sizeof(CorePlayerStatusWidget_eventHasPlayerStatusDataChanged_Parms), Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics
	{
		struct CorePlayerStatusWidget_eventHasTimerProgressChanged_Parms
		{
			float newTimerProgress;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newTimerProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CorePlayerStatusWidget_eventHasTimerProgressChanged_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePlayerStatusWidget_eventHasTimerProgressChanged_Parms), &Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::NewProp_newTimerProgress = { "newTimerProgress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusWidget_eventHasTimerProgressChanged_Parms, newTimerProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::NewProp_newTimerProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusWidget, nullptr, "HasTimerProgressChanged", nullptr, nullptr, sizeof(CorePlayerStatusWidget_eventHasTimerProgressChanged_Parms), Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics
	{
		struct CorePlayerStatusWidget_eventShouldPlaySleepAnimation_Parms
		{
			ESleepingUIState newSleepState;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newSleepState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newSleepState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CorePlayerStatusWidget_eventShouldPlaySleepAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CorePlayerStatusWidget_eventShouldPlaySleepAnimation_Parms), &Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::NewProp_newSleepState = { "newSleepState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CorePlayerStatusWidget_eventShouldPlaySleepAnimation_Parms, newSleepState), Z_Construct_UEnum_DBDSharedTypes_ESleepingUIState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::NewProp_newSleepState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::NewProp_newSleepState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::NewProp_newSleepState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusWidget, nullptr, "ShouldPlaySleepAnimation", nullptr, nullptr, sizeof(CorePlayerStatusWidget_eventShouldPlaySleepAnimation_Parms), Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePlayerStatusWidget_NoRegister()
	{
		return UCorePlayerStatusWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerStatusWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerStatusEffectWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerStatusEffectWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cachedViewData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerStatusEffectWidgetClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_KillerStatusEffectWidgetClasses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillerStatusEffectWidgetClasses_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_KillerStatusEffectWidgetClasses_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerStatusContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerStatusContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNameTextfield_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerNameTextfield;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObsessionSfx_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObsessionSfx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStatusAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PlayerStatusAssets;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayerStatusAssets_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayerStatusAssets_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStatusAssets_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerStatusWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePlayerStatusWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePlayerStatusWidget_GetKillerStatusEffectWidget, "GetKillerStatusEffectWidget" }, // 3735995909
		{ &Z_Construct_UFunction_UCorePlayerStatusWidget_GetPlayerStateChangeType, "GetPlayerStateChangeType" }, // 4100558420
		{ &Z_Construct_UFunction_UCorePlayerStatusWidget_HasKillerStatusDataChanged, "HasKillerStatusDataChanged" }, // 3713608876
		{ &Z_Construct_UFunction_UCorePlayerStatusWidget_HasObsessionStateChanged, "HasObsessionStateChanged" }, // 1865818033
		{ &Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStateChanged, "HasPlayerStateChanged" }, // 1846177223
		{ &Z_Construct_UFunction_UCorePlayerStatusWidget_HasPlayerStatusDataChanged, "HasPlayerStatusDataChanged" }, // 891205878
		{ &Z_Construct_UFunction_UCorePlayerStatusWidget_HasTimerProgressChanged, "HasTimerProgressChanged" }, // 1867916975
		{ &Z_Construct_UFunction_UCorePlayerStatusWidget_ShouldPlaySleepAnimation, "ShouldPlaySleepAnimation" }, // 2230917363
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorePlayerStatusWidget.h" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__killerStatusEffectWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CorePlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__killerStatusEffectWidget = { "_killerStatusEffectWidget", nullptr, (EPropertyFlags)0x004000000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerStatusWidget, _killerStatusEffectWidget), Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__killerStatusEffectWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__killerStatusEffectWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__cachedViewData_MetaData[] = {
		{ "Category", "CorePlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__cachedViewData = { "_cachedViewData", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerStatusWidget, _cachedViewData), Z_Construct_UScriptStruct_FPlayerStatusViewData, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__cachedViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__cachedViewData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusEffectWidgetClasses_MetaData[] = {
		{ "Category", "CorePlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusEffectWidgetClasses = { "KillerStatusEffectWidgetClasses", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerStatusWidget, KillerStatusEffectWidgetClasses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusEffectWidgetClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusEffectWidgetClasses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusEffectWidgetClasses_Key_KeyProp = { "KillerStatusEffectWidgetClasses_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusEffectWidgetClasses_ValueProp = { "KillerStatusEffectWidgetClasses", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusContainer_MetaData[] = {
		{ "Category", "CorePlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusContainer = { "KillerStatusContainer", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerStatusWidget, KillerStatusContainer), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerNameTextfield_MetaData[] = {
		{ "Category", "CorePlayerStatusWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerNameTextfield = { "PlayerNameTextfield", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerStatusWidget, PlayerNameTextfield), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerNameTextfield_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerNameTextfield_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_ObsessionSfx_MetaData[] = {
		{ "Category", "CorePlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_ObsessionSfx = { "ObsessionSfx", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerStatusWidget, ObsessionSfx), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_ObsessionSfx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_ObsessionSfx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets_MetaData[] = {
		{ "Category", "CorePlayerStatusWidget" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets = { "PlayerStatusAssets", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorePlayerStatusWidget, PlayerStatusAssets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets_Key_KeyProp = { "PlayerStatusAssets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EPlayerStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets_ValueProp = { "PlayerStatusAssets", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FPlayerStatusAssets, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorePlayerStatusWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__killerStatusEffectWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp__cachedViewData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusEffectWidgetClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusEffectWidgetClasses_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusEffectWidgetClasses_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_KillerStatusContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerNameTextfield,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_ObsessionSfx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorePlayerStatusWidget_Statics::NewProp_PlayerStatusAssets_ValueProp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerStatusViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCorePlayerStatusWidget, IPlayerStatusViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerStatusWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerStatusWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerStatusWidget_Statics::ClassParams = {
		&UCorePlayerStatusWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCorePlayerStatusWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerStatusWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerStatusWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerStatusWidget, 4243920833);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerStatusWidget>()
	{
		return UCorePlayerStatusWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerStatusWidget(Z_Construct_UClass_UCorePlayerStatusWidget, &UCorePlayerStatusWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerStatusWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerStatusWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
