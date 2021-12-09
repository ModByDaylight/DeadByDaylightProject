// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlinePresence/Public/OnlinePresenceExternalCommands.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePresenceExternalCommands() {}
// Cross Module References
	ONLINEPRESENCE_API UClass* Z_Construct_UClass_UOnlinePresenceExternalCommands_NoRegister();
	ONLINEPRESENCE_API UClass* Z_Construct_UClass_UOnlinePresenceExternalCommands();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlinePresence();
// End Cross Module References
	DEFINE_FUNCTION(UOnlinePresenceExternalCommands::execDBD_GenerateTestItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DBD_GenerateTestItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePresenceExternalCommands::execDBD_GrantPromoItems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DBD_GrantPromoItems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePresenceExternalCommands::execDBD_IsDlcInstalled)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_inString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DBD_IsDlcInstalled(Z_Param_inString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePresenceExternalCommands::execDBD_MirrorsGetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_MirrorsGetValue(Z_Param_stateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePresenceExternalCommands::execDBD_MirrorsSaveTestValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_stateName);
		P_GET_PROPERTY(FIntProperty,Z_Param_version);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_MirrorsSaveTestValue(Z_Param_stateName,Z_Param_version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePresenceExternalCommands::execDBD_MirrorsWalletGetCurrency)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_currencyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_MirrorsWalletGetCurrency(Z_Param_currencyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOnlinePresenceExternalCommands::execDBD_MirrorsWalletWithdraw)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_currencyName);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_MirrorsWalletWithdraw(Z_Param_currencyName,Z_Param_value);
		P_NATIVE_END;
	}
	void UOnlinePresenceExternalCommands::StaticRegisterNativesUOnlinePresenceExternalCommands()
	{
		UClass* Class = UOnlinePresenceExternalCommands::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_GenerateTestItems", &UOnlinePresenceExternalCommands::execDBD_GenerateTestItems },
			{ "DBD_GrantPromoItems", &UOnlinePresenceExternalCommands::execDBD_GrantPromoItems },
			{ "DBD_IsDlcInstalled", &UOnlinePresenceExternalCommands::execDBD_IsDlcInstalled },
			{ "DBD_MirrorsGetValue", &UOnlinePresenceExternalCommands::execDBD_MirrorsGetValue },
			{ "DBD_MirrorsSaveTestValue", &UOnlinePresenceExternalCommands::execDBD_MirrorsSaveTestValue },
			{ "DBD_MirrorsWalletGetCurrency", &UOnlinePresenceExternalCommands::execDBD_MirrorsWalletGetCurrency },
			{ "DBD_MirrorsWalletWithdraw", &UOnlinePresenceExternalCommands::execDBD_MirrorsWalletWithdraw },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics
	{
		struct OnlinePresenceExternalCommands_eventDBD_GenerateTestItems_Parms
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
	void Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePresenceExternalCommands_eventDBD_GenerateTestItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePresenceExternalCommands_eventDBD_GenerateTestItems_Parms), &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePresenceExternalCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceExternalCommands, nullptr, "DBD_GenerateTestItems", nullptr, nullptr, sizeof(OnlinePresenceExternalCommands_eventDBD_GenerateTestItems_Parms), Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics
	{
		struct OnlinePresenceExternalCommands_eventDBD_GrantPromoItems_Parms
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
	void Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePresenceExternalCommands_eventDBD_GrantPromoItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePresenceExternalCommands_eventDBD_GrantPromoItems_Parms), &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePresenceExternalCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceExternalCommands, nullptr, "DBD_GrantPromoItems", nullptr, nullptr, sizeof(OnlinePresenceExternalCommands_eventDBD_GrantPromoItems_Parms), Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics
	{
		struct OnlinePresenceExternalCommands_eventDBD_IsDlcInstalled_Parms
		{
			FString inString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OnlinePresenceExternalCommands_eventDBD_IsDlcInstalled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OnlinePresenceExternalCommands_eventDBD_IsDlcInstalled_Parms), &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::NewProp_inString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::NewProp_inString = { "inString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePresenceExternalCommands_eventDBD_IsDlcInstalled_Parms, inString), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::NewProp_inString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::NewProp_inString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::NewProp_inString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePresenceExternalCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceExternalCommands, nullptr, "DBD_IsDlcInstalled", nullptr, nullptr, sizeof(OnlinePresenceExternalCommands_eventDBD_IsDlcInstalled_Parms), Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics
	{
		struct OnlinePresenceExternalCommands_eventDBD_MirrorsGetValue_Parms
		{
			FString stateName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::NewProp_stateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::NewProp_stateName = { "stateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePresenceExternalCommands_eventDBD_MirrorsGetValue_Parms, stateName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::NewProp_stateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::NewProp_stateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::NewProp_stateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePresenceExternalCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceExternalCommands, nullptr, "DBD_MirrorsGetValue", nullptr, nullptr, sizeof(OnlinePresenceExternalCommands_eventDBD_MirrorsGetValue_Parms), Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics
	{
		struct OnlinePresenceExternalCommands_eventDBD_MirrorsSaveTestValue_Parms
		{
			FString stateName;
			int32 version;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stateName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_stateName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePresenceExternalCommands_eventDBD_MirrorsSaveTestValue_Parms, version), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::NewProp_stateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::NewProp_stateName = { "stateName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePresenceExternalCommands_eventDBD_MirrorsSaveTestValue_Parms, stateName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::NewProp_stateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::NewProp_stateName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::NewProp_version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::NewProp_stateName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePresenceExternalCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceExternalCommands, nullptr, "DBD_MirrorsSaveTestValue", nullptr, nullptr, sizeof(OnlinePresenceExternalCommands_eventDBD_MirrorsSaveTestValue_Parms), Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics
	{
		struct OnlinePresenceExternalCommands_eventDBD_MirrorsWalletGetCurrency_Parms
		{
			FString currencyName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currencyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::NewProp_currencyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::NewProp_currencyName = { "currencyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePresenceExternalCommands_eventDBD_MirrorsWalletGetCurrency_Parms, currencyName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::NewProp_currencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::NewProp_currencyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::NewProp_currencyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePresenceExternalCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceExternalCommands, nullptr, "DBD_MirrorsWalletGetCurrency", nullptr, nullptr, sizeof(OnlinePresenceExternalCommands_eventDBD_MirrorsWalletGetCurrency_Parms), Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics
	{
		struct OnlinePresenceExternalCommands_eventDBD_MirrorsWalletWithdraw_Parms
		{
			FString currencyName;
			int32 value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currencyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePresenceExternalCommands_eventDBD_MirrorsWalletWithdraw_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::NewProp_currencyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::NewProp_currencyName = { "currencyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OnlinePresenceExternalCommands_eventDBD_MirrorsWalletWithdraw_Parms, currencyName), METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::NewProp_currencyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::NewProp_currencyName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::NewProp_currencyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlinePresenceExternalCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOnlinePresenceExternalCommands, nullptr, "DBD_MirrorsWalletWithdraw", nullptr, nullptr, sizeof(OnlinePresenceExternalCommands_eventDBD_MirrorsWalletWithdraw_Parms), Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOnlinePresenceExternalCommands_NoRegister()
	{
		return UOnlinePresenceExternalCommands::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePresenceExternalCommands_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePresenceExternalCommands_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlinePresence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOnlinePresenceExternalCommands_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GenerateTestItems, "DBD_GenerateTestItems" }, // 4211560538
		{ &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_GrantPromoItems, "DBD_GrantPromoItems" }, // 185540839
		{ &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_IsDlcInstalled, "DBD_IsDlcInstalled" }, // 2452008281
		{ &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsGetValue, "DBD_MirrorsGetValue" }, // 2683798327
		{ &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsSaveTestValue, "DBD_MirrorsSaveTestValue" }, // 1268014548
		{ &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletGetCurrency, "DBD_MirrorsWalletGetCurrency" }, // 4289132494
		{ &Z_Construct_UFunction_UOnlinePresenceExternalCommands_DBD_MirrorsWalletWithdraw, "DBD_MirrorsWalletWithdraw" }, // 3881473889
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePresenceExternalCommands_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlinePresenceExternalCommands.h" },
		{ "ModuleRelativePath", "Public/OnlinePresenceExternalCommands.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePresenceExternalCommands_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePresenceExternalCommands>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePresenceExternalCommands_Statics::ClassParams = {
		&UOnlinePresenceExternalCommands::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePresenceExternalCommands_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePresenceExternalCommands_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePresenceExternalCommands()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePresenceExternalCommands_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePresenceExternalCommands, 1806678253);
	template<> ONLINEPRESENCE_API UClass* StaticClass<UOnlinePresenceExternalCommands>()
	{
		return UOnlinePresenceExternalCommands::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePresenceExternalCommands(Z_Construct_UClass_UOnlinePresenceExternalCommands, &UOnlinePresenceExternalCommands::StaticClass, TEXT("/Script/OnlinePresence"), TEXT("UOnlinePresenceExternalCommands"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePresenceExternalCommands);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
