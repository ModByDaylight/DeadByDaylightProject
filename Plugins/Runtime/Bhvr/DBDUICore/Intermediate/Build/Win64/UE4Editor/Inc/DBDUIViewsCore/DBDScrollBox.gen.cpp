// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDScrollBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDScrollBox() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDScrollBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDScrollBox();
	UMG_API UClass* Z_Construct_UClass_UScrollBox();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EControlMode();
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EShowScrollDisplayPrompt();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreInputPromptTextWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDBDScrollBox::execHandleControllerInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_analogValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleControllerInput(Z_Param_analogValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDScrollBox::execIsMouseOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMouseOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDScrollBox::execOnControlModeChanged)
	{
		P_GET_ENUM(EControlMode,Z_Param_controlMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControlModeChanged(EControlMode(Z_Param_controlMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDScrollBox::execUpdateDisplayPrompt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDisplayPrompt();
		P_NATIVE_END;
	}
	void UDBDScrollBox::StaticRegisterNativesUDBDScrollBox()
	{
		UClass* Class = UDBDScrollBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleControllerInput", &UDBDScrollBox::execHandleControllerInput },
			{ "IsMouseOver", &UDBDScrollBox::execIsMouseOver },
			{ "OnControlModeChanged", &UDBDScrollBox::execOnControlModeChanged },
			{ "UpdateDisplayPrompt", &UDBDScrollBox::execUpdateDisplayPrompt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics
	{
		struct DBDScrollBox_eventHandleControllerInput_Parms
		{
			float analogValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_analogValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::NewProp_analogValue = { "analogValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDScrollBox_eventHandleControllerInput_Parms, analogValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::NewProp_analogValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDScrollBox, nullptr, "HandleControllerInput", nullptr, nullptr, sizeof(DBDScrollBox_eventHandleControllerInput_Parms), Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics
	{
		struct DBDScrollBox_eventIsMouseOver_Parms
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
	void Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDScrollBox_eventIsMouseOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDScrollBox_eventIsMouseOver_Parms), &Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDScrollBox, nullptr, "IsMouseOver", nullptr, nullptr, sizeof(DBDScrollBox_eventIsMouseOver_Parms), Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDScrollBox_IsMouseOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDScrollBox_IsMouseOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics
	{
		struct DBDScrollBox_eventOnControlModeChanged_Parms
		{
			EControlMode controlMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_controlMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_controlMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::NewProp_controlMode = { "controlMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDScrollBox_eventOnControlModeChanged_Parms, controlMode), Z_Construct_UEnum_DBDSharedTypes_EControlMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::NewProp_controlMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::NewProp_controlMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::NewProp_controlMode_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDScrollBox, nullptr, "OnControlModeChanged", nullptr, nullptr, sizeof(DBDScrollBox_eventOnControlModeChanged_Parms), Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDScrollBox_UpdateDisplayPrompt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDScrollBox_UpdateDisplayPrompt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDScrollBox_UpdateDisplayPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDScrollBox, nullptr, "UpdateDisplayPrompt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDScrollBox_UpdateDisplayPrompt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDScrollBox_UpdateDisplayPrompt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDScrollBox_UpdateDisplayPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDScrollBox_UpdateDisplayPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDScrollBox_NoRegister()
	{
		return UDBDScrollBox::StaticClass();
	}
	struct Z_Construct_UClass_UDBDScrollBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__showDisplayPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__showDisplayPrompt;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__showDisplayPrompt_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__displayPromptText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__displayPromptText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__displayPrompt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__displayPrompt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scrollSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__scrollSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__shouldScrollOnMouseOver_MetaData[];
#endif
		static void NewProp__shouldScrollOnMouseOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__shouldScrollOnMouseOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useControllerScroll_MetaData[];
#endif
		static void NewProp__useControllerScroll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useControllerScroll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDScrollBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScrollBox,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDScrollBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDScrollBox_HandleControllerInput, "HandleControllerInput" }, // 3035711167
		{ &Z_Construct_UFunction_UDBDScrollBox_IsMouseOver, "IsMouseOver" }, // 951480194
		{ &Z_Construct_UFunction_UDBDScrollBox_OnControlModeChanged, "OnControlModeChanged" }, // 257529255
		{ &Z_Construct_UFunction_UDBDScrollBox_UpdateDisplayPrompt, "UpdateDisplayPrompt" }, // 280740537
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDScrollBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDScrollBox.h" },
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__showDisplayPrompt_MetaData[] = {
		{ "Category", "DBDScrollBox" },
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__showDisplayPrompt = { "_showDisplayPrompt", nullptr, (EPropertyFlags)0x0020080002000815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDScrollBox, _showDisplayPrompt), Z_Construct_UEnum_DBDUIViewsCore_EShowScrollDisplayPrompt, METADATA_PARAMS(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__showDisplayPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__showDisplayPrompt_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__showDisplayPrompt_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPromptText_MetaData[] = {
		{ "Category", "DBDScrollBox" },
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPromptText = { "_displayPromptText", nullptr, (EPropertyFlags)0x0020080002000815, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDScrollBox, _displayPromptText), METADATA_PARAMS(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPromptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPromptText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPrompt_MetaData[] = {
		{ "Category", "DBDScrollBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPrompt = { "_displayPrompt", nullptr, (EPropertyFlags)0x002008000208080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDScrollBox, _displayPrompt), Z_Construct_UClass_UCoreInputPromptTextWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPrompt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPrompt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__scrollSpeed_MetaData[] = {
		{ "Category", "DBDScrollBox" },
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__scrollSpeed = { "_scrollSpeed", nullptr, (EPropertyFlags)0x0020080002000815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDScrollBox, _scrollSpeed), METADATA_PARAMS(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__scrollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__scrollSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__shouldScrollOnMouseOver_MetaData[] = {
		{ "Category", "DBDScrollBox" },
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	void Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__shouldScrollOnMouseOver_SetBit(void* Obj)
	{
		((UDBDScrollBox*)Obj)->_shouldScrollOnMouseOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__shouldScrollOnMouseOver = { "_shouldScrollOnMouseOver", nullptr, (EPropertyFlags)0x0020080002000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDScrollBox), &Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__shouldScrollOnMouseOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__shouldScrollOnMouseOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__shouldScrollOnMouseOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__useControllerScroll_MetaData[] = {
		{ "Category", "DBDScrollBox" },
		{ "ModuleRelativePath", "Public/DBDScrollBox.h" },
	};
#endif
	void Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__useControllerScroll_SetBit(void* Obj)
	{
		((UDBDScrollBox*)Obj)->_useControllerScroll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__useControllerScroll = { "_useControllerScroll", nullptr, (EPropertyFlags)0x0020080002000815, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDScrollBox), &Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__useControllerScroll_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__useControllerScroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__useControllerScroll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDScrollBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__showDisplayPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__showDisplayPrompt_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPromptText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__displayPrompt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__scrollSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__shouldScrollOnMouseOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDScrollBox_Statics::NewProp__useControllerScroll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDScrollBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDScrollBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDScrollBox_Statics::ClassParams = {
		&UDBDScrollBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDScrollBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDScrollBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDScrollBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDScrollBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDScrollBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDScrollBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDScrollBox, 2313335038);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDScrollBox>()
	{
		return UDBDScrollBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDScrollBox(Z_Construct_UClass_UDBDScrollBox, &UDBDScrollBox::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDScrollBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDScrollBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
