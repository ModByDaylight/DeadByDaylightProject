// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreInteractionPromptActionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreInteractionPromptActionWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInteractionPromptActionWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInteractionPromptActionWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreInteractionPromptActionWidget::execHasFourthPrompt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFourthPrompt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInteractionPromptActionWidget::execHasSecondPrompt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSecondPrompt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInteractionPromptActionWidget::execHasThirdPrompt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasThirdPrompt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInteractionPromptActionWidget::execPlayIdleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayIdleAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInteractionPromptActionWidget::execSetInputKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_NewInputKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputKey(Z_Param_Out_NewInputKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInteractionPromptActionWidget::execSetInputKey2)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_NewInputKey2);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputKey2(Z_Param_Out_NewInputKey2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInteractionPromptActionWidget::execSetInputKey3)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_NewInputKey3);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputKey3(Z_Param_Out_NewInputKey3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInteractionPromptActionWidget::execSetInputKey4)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_NewInputKey4);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputKey4(Z_Param_Out_NewInputKey4);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreInteractionPromptActionWidget::execStopIdleAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopIdleAnimation();
		P_NATIVE_END;
	}
	void UCoreInteractionPromptActionWidget::StaticRegisterNativesUCoreInteractionPromptActionWidget()
	{
		UClass* Class = UCoreInteractionPromptActionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasFourthPrompt", &UCoreInteractionPromptActionWidget::execHasFourthPrompt },
			{ "HasSecondPrompt", &UCoreInteractionPromptActionWidget::execHasSecondPrompt },
			{ "HasThirdPrompt", &UCoreInteractionPromptActionWidget::execHasThirdPrompt },
			{ "PlayIdleAnimation", &UCoreInteractionPromptActionWidget::execPlayIdleAnimation },
			{ "SetInputKey", &UCoreInteractionPromptActionWidget::execSetInputKey },
			{ "SetInputKey2", &UCoreInteractionPromptActionWidget::execSetInputKey2 },
			{ "SetInputKey3", &UCoreInteractionPromptActionWidget::execSetInputKey3 },
			{ "SetInputKey4", &UCoreInteractionPromptActionWidget::execSetInputKey4 },
			{ "StopIdleAnimation", &UCoreInteractionPromptActionWidget::execStopIdleAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics
	{
		struct CoreInteractionPromptActionWidget_eventHasFourthPrompt_Parms
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
	void Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreInteractionPromptActionWidget_eventHasFourthPrompt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreInteractionPromptActionWidget_eventHasFourthPrompt_Parms), &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptActionWidget, nullptr, "HasFourthPrompt", nullptr, nullptr, sizeof(CoreInteractionPromptActionWidget_eventHasFourthPrompt_Parms), Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics
	{
		struct CoreInteractionPromptActionWidget_eventHasSecondPrompt_Parms
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
	void Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreInteractionPromptActionWidget_eventHasSecondPrompt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreInteractionPromptActionWidget_eventHasSecondPrompt_Parms), &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptActionWidget, nullptr, "HasSecondPrompt", nullptr, nullptr, sizeof(CoreInteractionPromptActionWidget_eventHasSecondPrompt_Parms), Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics
	{
		struct CoreInteractionPromptActionWidget_eventHasThirdPrompt_Parms
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
	void Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreInteractionPromptActionWidget_eventHasThirdPrompt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreInteractionPromptActionWidget_eventHasThirdPrompt_Parms), &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptActionWidget, nullptr, "HasThirdPrompt", nullptr, nullptr, sizeof(CoreInteractionPromptActionWidget_eventHasThirdPrompt_Parms), Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptActionWidget_PlayIdleAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_PlayIdleAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_PlayIdleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptActionWidget, nullptr, "PlayIdleAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_PlayIdleAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_PlayIdleAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptActionWidget_PlayIdleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptActionWidget_PlayIdleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics
	{
		struct CoreInteractionPromptActionWidget_eventSetInputKey_Parms
		{
			FKey NewInputKey;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInputKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::NewProp_NewInputKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::NewProp_NewInputKey = { "NewInputKey", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInteractionPromptActionWidget_eventSetInputKey_Parms, NewInputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::NewProp_NewInputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::NewProp_NewInputKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::NewProp_NewInputKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptActionWidget, nullptr, "SetInputKey", nullptr, nullptr, sizeof(CoreInteractionPromptActionWidget_eventSetInputKey_Parms), Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics
	{
		struct CoreInteractionPromptActionWidget_eventSetInputKey2_Parms
		{
			FKey NewInputKey2;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInputKey2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInputKey2;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::NewProp_NewInputKey2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::NewProp_NewInputKey2 = { "NewInputKey2", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInteractionPromptActionWidget_eventSetInputKey2_Parms, NewInputKey2), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::NewProp_NewInputKey2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::NewProp_NewInputKey2_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::NewProp_NewInputKey2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptActionWidget, nullptr, "SetInputKey2", nullptr, nullptr, sizeof(CoreInteractionPromptActionWidget_eventSetInputKey2_Parms), Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics
	{
		struct CoreInteractionPromptActionWidget_eventSetInputKey3_Parms
		{
			FKey NewInputKey3;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInputKey3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInputKey3;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::NewProp_NewInputKey3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::NewProp_NewInputKey3 = { "NewInputKey3", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInteractionPromptActionWidget_eventSetInputKey3_Parms, NewInputKey3), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::NewProp_NewInputKey3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::NewProp_NewInputKey3_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::NewProp_NewInputKey3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptActionWidget, nullptr, "SetInputKey3", nullptr, nullptr, sizeof(CoreInteractionPromptActionWidget_eventSetInputKey3_Parms), Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics
	{
		struct CoreInteractionPromptActionWidget_eventSetInputKey4_Parms
		{
			FKey NewInputKey4;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewInputKey4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewInputKey4;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::NewProp_NewInputKey4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::NewProp_NewInputKey4 = { "NewInputKey4", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreInteractionPromptActionWidget_eventSetInputKey4_Parms, NewInputKey4), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::NewProp_NewInputKey4_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::NewProp_NewInputKey4_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::NewProp_NewInputKey4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptActionWidget, nullptr, "SetInputKey4", nullptr, nullptr, sizeof(CoreInteractionPromptActionWidget_eventSetInputKey4_Parms), Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreInteractionPromptActionWidget_StopIdleAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreInteractionPromptActionWidget_StopIdleAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreInteractionPromptActionWidget_StopIdleAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreInteractionPromptActionWidget, nullptr, "StopIdleAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_StopIdleAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreInteractionPromptActionWidget_StopIdleAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreInteractionPromptActionWidget_StopIdleAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreInteractionPromptActionWidget_StopIdleAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreInteractionPromptActionWidget_NoRegister()
	{
		return UCoreInteractionPromptActionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnimationName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IdleAnimationName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPrompt4_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPrompt4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPrompt3_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPrompt3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPrompt2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPrompt2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputPrompt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasFourthPrompt, "HasFourthPrompt" }, // 2987025523
		{ &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasSecondPrompt, "HasSecondPrompt" }, // 1676882921
		{ &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_HasThirdPrompt, "HasThirdPrompt" }, // 2097740634
		{ &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_PlayIdleAnimation, "PlayIdleAnimation" }, // 250073077
		{ &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey, "SetInputKey" }, // 2695080088
		{ &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey2, "SetInputKey2" }, // 1960144465
		{ &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey3, "SetInputKey3" }, // 1588931778
		{ &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_SetInputKey4, "SetInputKey4" }, // 2808934621
		{ &Z_Construct_UFunction_UCoreInteractionPromptActionWidget_StopIdleAnimation, "StopIdleAnimation" }, // 1581964508
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreInteractionPromptActionWidget.h" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey4_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInteractionPromptActionWidget" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey4 = { "InputKey4", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputKey4), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey3_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInteractionPromptActionWidget" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey3 = { "InputKey3", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputKey3), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey2_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInteractionPromptActionWidget" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey2 = { "InputKey2", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputKey2), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CoreInteractionPromptActionWidget" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_IdleAnimationName_MetaData[] = {
		{ "Category", "CoreInteractionPromptActionWidget" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_IdleAnimationName = { "IdleAnimationName", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptActionWidget, IdleAnimationName), METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_IdleAnimationName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_IdleAnimationName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt4_MetaData[] = {
		{ "Category", "CoreInteractionPromptActionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt4 = { "InputPrompt4", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputPrompt4), Z_Construct_UClass_UCoreInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt3_MetaData[] = {
		{ "Category", "CoreInteractionPromptActionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt3 = { "InputPrompt3", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputPrompt3), Z_Construct_UClass_UCoreInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt2_MetaData[] = {
		{ "Category", "CoreInteractionPromptActionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt2 = { "InputPrompt2", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputPrompt2), Z_Construct_UClass_UCoreInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt_MetaData[] = {
		{ "Category", "CoreInteractionPromptActionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreInteractionPromptActionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt = { "InputPrompt", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputPrompt), Z_Construct_UClass_UCoreInputPromptWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_IdleAnimationName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::NewProp_InputPrompt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreInteractionPromptActionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::ClassParams = {
		&UCoreInteractionPromptActionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreInteractionPromptActionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreInteractionPromptActionWidget, 1476258768);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreInteractionPromptActionWidget>()
	{
		return UCoreInteractionPromptActionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreInteractionPromptActionWidget(Z_Construct_UClass_UCoreInteractionPromptActionWidget, &UCoreInteractionPromptActionWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreInteractionPromptActionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreInteractionPromptActionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
