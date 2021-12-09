// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreStatusEffectIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreStatusEffectIcon() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStatusEffectIcon_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreStatusEffectIcon();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectViewData();
// End Cross Module References
	DEFINE_FUNCTION(UCoreStatusEffectIcon::execGetInactiveTicks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInactiveTicks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStatusEffectIcon::execGetStatusEffectData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FStatusEffectViewData*)Z_Param__Result=P_THIS->GetStatusEffectData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStatusEffectIcon::execSetInactiveTicks)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inactiveTicks);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInactiveTicks(Z_Param_inactiveTicks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreStatusEffectIcon::execSetStatusEffectData)
	{
		P_GET_STRUCT_REF(FStatusEffectViewData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStatusEffectData(Z_Param_Out_data);
		P_NATIVE_END;
	}
	static FName NAME_UCoreStatusEffectIcon_UpdatePercentageFill = FName(TEXT("UpdatePercentageFill"));
	void UCoreStatusEffectIcon::UpdatePercentageFill(float percentage)
	{
		CoreStatusEffectIcon_eventUpdatePercentageFill_Parms Parms;
		Parms.percentage=percentage;
		ProcessEvent(FindFunctionChecked(NAME_UCoreStatusEffectIcon_UpdatePercentageFill),&Parms);
	}
	static FName NAME_UCoreStatusEffectIcon_UpdateWidget = FName(TEXT("UpdateWidget"));
	void UCoreStatusEffectIcon::UpdateWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCoreStatusEffectIcon_UpdateWidget),NULL);
	}
	void UCoreStatusEffectIcon::StaticRegisterNativesUCoreStatusEffectIcon()
	{
		UClass* Class = UCoreStatusEffectIcon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInactiveTicks", &UCoreStatusEffectIcon::execGetInactiveTicks },
			{ "GetStatusEffectData", &UCoreStatusEffectIcon::execGetStatusEffectData },
			{ "SetInactiveTicks", &UCoreStatusEffectIcon::execSetInactiveTicks },
			{ "SetStatusEffectData", &UCoreStatusEffectIcon::execSetStatusEffectData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics
	{
		struct CoreStatusEffectIcon_eventGetInactiveTicks_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStatusEffectIcon_eventGetInactiveTicks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStatusEffectIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStatusEffectIcon, nullptr, "GetInactiveTicks", nullptr, nullptr, sizeof(CoreStatusEffectIcon_eventGetInactiveTicks_Parms), Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics
	{
		struct CoreStatusEffectIcon_eventGetStatusEffectData_Parms
		{
			FStatusEffectViewData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStatusEffectIcon_eventGetStatusEffectData_Parms, ReturnValue), Z_Construct_UScriptStruct_FStatusEffectViewData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStatusEffectIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStatusEffectIcon, nullptr, "GetStatusEffectData", nullptr, nullptr, sizeof(CoreStatusEffectIcon_eventGetStatusEffectData_Parms), Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics
	{
		struct CoreStatusEffectIcon_eventSetInactiveTicks_Parms
		{
			int32 inactiveTicks;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inactiveTicks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inactiveTicks;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::NewProp_inactiveTicks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::NewProp_inactiveTicks = { "inactiveTicks", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStatusEffectIcon_eventSetInactiveTicks_Parms, inactiveTicks), METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::NewProp_inactiveTicks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::NewProp_inactiveTicks_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::NewProp_inactiveTicks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStatusEffectIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStatusEffectIcon, nullptr, "SetInactiveTicks", nullptr, nullptr, sizeof(CoreStatusEffectIcon_eventSetInactiveTicks_Parms), Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics
	{
		struct CoreStatusEffectIcon_eventSetStatusEffectData_Parms
		{
			FStatusEffectViewData data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStatusEffectIcon_eventSetStatusEffectData_Parms, data), Z_Construct_UScriptStruct_FStatusEffectViewData, METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStatusEffectIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStatusEffectIcon, nullptr, "SetStatusEffectData", nullptr, nullptr, sizeof(CoreStatusEffectIcon_eventSetStatusEffectData_Parms), Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreStatusEffectIcon_eventUpdatePercentageFill_Parms, percentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::NewProp_percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStatusEffectIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStatusEffectIcon, nullptr, "UpdatePercentageFill", nullptr, nullptr, sizeof(CoreStatusEffectIcon_eventUpdatePercentageFill_Parms), Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreStatusEffectIcon_UpdateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreStatusEffectIcon_UpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreStatusEffectIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreStatusEffectIcon_UpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreStatusEffectIcon, nullptr, "UpdateWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreStatusEffectIcon_UpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreStatusEffectIcon_UpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreStatusEffectIcon_UpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreStatusEffectIcon_UpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreStatusEffectIcon_NoRegister()
	{
		return UCoreStatusEffectIcon::StaticClass();
	}
	struct Z_Construct_UClass_UCoreStatusEffectIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreStatusEffectIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreStatusEffectIcon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreStatusEffectIcon_GetInactiveTicks, "GetInactiveTicks" }, // 369900840
		{ &Z_Construct_UFunction_UCoreStatusEffectIcon_GetStatusEffectData, "GetStatusEffectData" }, // 3280338395
		{ &Z_Construct_UFunction_UCoreStatusEffectIcon_SetInactiveTicks, "SetInactiveTicks" }, // 4167810014
		{ &Z_Construct_UFunction_UCoreStatusEffectIcon_SetStatusEffectData, "SetStatusEffectData" }, // 12480895
		{ &Z_Construct_UFunction_UCoreStatusEffectIcon_UpdatePercentageFill, "UpdatePercentageFill" }, // 424642308
		{ &Z_Construct_UFunction_UCoreStatusEffectIcon_UpdateWidget, "UpdateWidget" }, // 1850730107
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreStatusEffectIcon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreStatusEffectIcon.h" },
		{ "ModuleRelativePath", "Public/CoreStatusEffectIcon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreStatusEffectIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreStatusEffectIcon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreStatusEffectIcon_Statics::ClassParams = {
		&UCoreStatusEffectIcon::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreStatusEffectIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreStatusEffectIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreStatusEffectIcon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreStatusEffectIcon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreStatusEffectIcon, 4226041054);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreStatusEffectIcon>()
	{
		return UCoreStatusEffectIcon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreStatusEffectIcon(Z_Construct_UClass_UCoreStatusEffectIcon, &UCoreStatusEffectIcon::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreStatusEffectIcon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreStatusEffectIcon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
