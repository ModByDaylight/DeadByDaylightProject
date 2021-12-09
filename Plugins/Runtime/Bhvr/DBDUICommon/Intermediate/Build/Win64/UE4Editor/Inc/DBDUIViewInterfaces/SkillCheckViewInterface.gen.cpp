// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/SkillCheckViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillCheckViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USkillCheckViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USkillCheckViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FSkillCheckViewData();
// End Cross Module References
	DEFINE_FUNCTION(ISkillCheckViewInterface::execApplyScaleFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyScaleFactor_Implementation(Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkillCheckViewInterface::execHideSkillCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideSkillCheck_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkillCheckViewInterface::execShowSkillCheck)
	{
		P_GET_STRUCT_REF(FSkillCheckViewData,Z_Param_Out_skillCheckData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSkillCheck_Implementation(Z_Param_Out_skillCheckData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkillCheckViewInterface::execShowSkillCheckFail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSkillCheckFail_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkillCheckViewInterface::execShowSkillCheckSuccess)
	{
		P_GET_UBOOL(Z_Param_isBonus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSkillCheckSuccess_Implementation(Z_Param_isBonus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkillCheckViewInterface::execUpdatePositionOffset)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_x);
		P_GET_PROPERTY(FIntProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePositionOffset_Implementation(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ISkillCheckViewInterface::execUpdateProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProgress_Implementation(Z_Param_value);
		P_NATIVE_END;
	}
	void ISkillCheckViewInterface::ApplyScaleFactor(float scale)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ApplyScaleFactor instead.");
	}
	void ISkillCheckViewInterface::HideSkillCheck()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideSkillCheck instead.");
	}
	void ISkillCheckViewInterface::ShowSkillCheck(FSkillCheckViewData const& skillCheckData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowSkillCheck instead.");
	}
	void ISkillCheckViewInterface::ShowSkillCheckFail()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowSkillCheckFail instead.");
	}
	void ISkillCheckViewInterface::ShowSkillCheckSuccess(bool isBonus)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowSkillCheckSuccess instead.");
	}
	void ISkillCheckViewInterface::UpdatePositionOffset(int32 x, int32 y)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdatePositionOffset instead.");
	}
	void ISkillCheckViewInterface::UpdateProgress(float value)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateProgress instead.");
	}
	void USkillCheckViewInterface::StaticRegisterNativesUSkillCheckViewInterface()
	{
		UClass* Class = USkillCheckViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyScaleFactor", &ISkillCheckViewInterface::execApplyScaleFactor },
			{ "HideSkillCheck", &ISkillCheckViewInterface::execHideSkillCheck },
			{ "ShowSkillCheck", &ISkillCheckViewInterface::execShowSkillCheck },
			{ "ShowSkillCheckFail", &ISkillCheckViewInterface::execShowSkillCheckFail },
			{ "ShowSkillCheckSuccess", &ISkillCheckViewInterface::execShowSkillCheckSuccess },
			{ "UpdatePositionOffset", &ISkillCheckViewInterface::execUpdatePositionOffset },
			{ "UpdateProgress", &ISkillCheckViewInterface::execUpdateProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheckViewInterface_eventApplyScaleFactor_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckViewInterface, nullptr, "ApplyScaleFactor", nullptr, nullptr, sizeof(SkillCheckViewInterface_eventApplyScaleFactor_Parms), Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckViewInterface_HideSkillCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckViewInterface_HideSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckViewInterface_HideSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckViewInterface, nullptr, "HideSkillCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckViewInterface_HideSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_HideSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckViewInterface_HideSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckViewInterface_HideSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skillCheckData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_skillCheckData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::NewProp_skillCheckData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::NewProp_skillCheckData = { "skillCheckData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheckViewInterface_eventShowSkillCheck_Parms, skillCheckData), Z_Construct_UScriptStruct_FSkillCheckViewData, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::NewProp_skillCheckData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::NewProp_skillCheckData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::NewProp_skillCheckData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckViewInterface, nullptr, "ShowSkillCheck", nullptr, nullptr, sizeof(SkillCheckViewInterface_eventShowSkillCheck_Parms), Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckFail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckFail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckViewInterface, nullptr, "ShowSkillCheckFail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckFail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics
	{
		static void NewProp_isBonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBonus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::NewProp_isBonus_SetBit(void* Obj)
	{
		((SkillCheckViewInterface_eventShowSkillCheckSuccess_Parms*)Obj)->isBonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::NewProp_isBonus = { "isBonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheckViewInterface_eventShowSkillCheckSuccess_Parms), &Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::NewProp_isBonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::NewProp_isBonus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckViewInterface, nullptr, "ShowSkillCheckSuccess", nullptr, nullptr, sizeof(SkillCheckViewInterface_eventShowSkillCheckSuccess_Parms), Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_y;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_x;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheckViewInterface_eventUpdatePositionOffset_Parms, y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheckViewInterface_eventUpdatePositionOffset_Parms, x), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::NewProp_y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::NewProp_x,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckViewInterface, nullptr, "UpdatePositionOffset", nullptr, nullptr, sizeof(SkillCheckViewInterface_eventUpdatePositionOffset_Parms), Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkillCheckViewInterface_eventUpdateProgress_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckViewInterface, nullptr, "UpdateProgress", nullptr, nullptr, sizeof(SkillCheckViewInterface_eventUpdateProgress_Parms), Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkillCheckViewInterface_NoRegister()
	{
		return USkillCheckViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_USkillCheckViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillCheckViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkillCheckViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillCheckViewInterface_ApplyScaleFactor, "ApplyScaleFactor" }, // 716107846
		{ &Z_Construct_UFunction_USkillCheckViewInterface_HideSkillCheck, "HideSkillCheck" }, // 704743654
		{ &Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheck, "ShowSkillCheck" }, // 455612451
		{ &Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckFail, "ShowSkillCheckFail" }, // 3906847366
		{ &Z_Construct_UFunction_USkillCheckViewInterface_ShowSkillCheckSuccess, "ShowSkillCheckSuccess" }, // 2346421764
		{ &Z_Construct_UFunction_USkillCheckViewInterface_UpdatePositionOffset, "UpdatePositionOffset" }, // 151070588
		{ &Z_Construct_UFunction_USkillCheckViewInterface_UpdateProgress, "UpdateProgress" }, // 1789269290
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillCheckViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SkillCheckViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillCheckViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISkillCheckViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkillCheckViewInterface_Statics::ClassParams = {
		&USkillCheckViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkillCheckViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheckViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillCheckViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkillCheckViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkillCheckViewInterface, 2837009490);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<USkillCheckViewInterface>()
	{
		return USkillCheckViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkillCheckViewInterface(Z_Construct_UClass_USkillCheckViewInterface, &USkillCheckViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("USkillCheckViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillCheckViewInterface);
	static FName NAME_USkillCheckViewInterface_ApplyScaleFactor = FName(TEXT("ApplyScaleFactor"));
	void ISkillCheckViewInterface::Execute_ApplyScaleFactor(UObject* O, float scale)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkillCheckViewInterface::StaticClass()));
		SkillCheckViewInterface_eventApplyScaleFactor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkillCheckViewInterface_ApplyScaleFactor);
		if (Func)
		{
			Parms.scale=scale;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkillCheckViewInterface*)(O->GetNativeInterfaceAddress(USkillCheckViewInterface::StaticClass())))
		{
			I->ApplyScaleFactor_Implementation(scale);
		}
	}
	static FName NAME_USkillCheckViewInterface_HideSkillCheck = FName(TEXT("HideSkillCheck"));
	void ISkillCheckViewInterface::Execute_HideSkillCheck(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkillCheckViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USkillCheckViewInterface_HideSkillCheck);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISkillCheckViewInterface*)(O->GetNativeInterfaceAddress(USkillCheckViewInterface::StaticClass())))
		{
			I->HideSkillCheck_Implementation();
		}
	}
	static FName NAME_USkillCheckViewInterface_ShowSkillCheck = FName(TEXT("ShowSkillCheck"));
	void ISkillCheckViewInterface::Execute_ShowSkillCheck(UObject* O, FSkillCheckViewData const& skillCheckData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkillCheckViewInterface::StaticClass()));
		SkillCheckViewInterface_eventShowSkillCheck_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkillCheckViewInterface_ShowSkillCheck);
		if (Func)
		{
			Parms.skillCheckData=skillCheckData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkillCheckViewInterface*)(O->GetNativeInterfaceAddress(USkillCheckViewInterface::StaticClass())))
		{
			I->ShowSkillCheck_Implementation(skillCheckData);
		}
	}
	static FName NAME_USkillCheckViewInterface_ShowSkillCheckFail = FName(TEXT("ShowSkillCheckFail"));
	void ISkillCheckViewInterface::Execute_ShowSkillCheckFail(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkillCheckViewInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_USkillCheckViewInterface_ShowSkillCheckFail);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ISkillCheckViewInterface*)(O->GetNativeInterfaceAddress(USkillCheckViewInterface::StaticClass())))
		{
			I->ShowSkillCheckFail_Implementation();
		}
	}
	static FName NAME_USkillCheckViewInterface_ShowSkillCheckSuccess = FName(TEXT("ShowSkillCheckSuccess"));
	void ISkillCheckViewInterface::Execute_ShowSkillCheckSuccess(UObject* O, bool isBonus)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkillCheckViewInterface::StaticClass()));
		SkillCheckViewInterface_eventShowSkillCheckSuccess_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkillCheckViewInterface_ShowSkillCheckSuccess);
		if (Func)
		{
			Parms.isBonus=isBonus;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkillCheckViewInterface*)(O->GetNativeInterfaceAddress(USkillCheckViewInterface::StaticClass())))
		{
			I->ShowSkillCheckSuccess_Implementation(isBonus);
		}
	}
	static FName NAME_USkillCheckViewInterface_UpdatePositionOffset = FName(TEXT("UpdatePositionOffset"));
	void ISkillCheckViewInterface::Execute_UpdatePositionOffset(UObject* O, int32 x, int32 y)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkillCheckViewInterface::StaticClass()));
		SkillCheckViewInterface_eventUpdatePositionOffset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkillCheckViewInterface_UpdatePositionOffset);
		if (Func)
		{
			Parms.x=x;
			Parms.y=y;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkillCheckViewInterface*)(O->GetNativeInterfaceAddress(USkillCheckViewInterface::StaticClass())))
		{
			I->UpdatePositionOffset_Implementation(x,y);
		}
	}
	static FName NAME_USkillCheckViewInterface_UpdateProgress = FName(TEXT("UpdateProgress"));
	void ISkillCheckViewInterface::Execute_UpdateProgress(UObject* O, float value)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USkillCheckViewInterface::StaticClass()));
		SkillCheckViewInterface_eventUpdateProgress_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USkillCheckViewInterface_UpdateProgress);
		if (Func)
		{
			Parms.value=value;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISkillCheckViewInterface*)(O->GetNativeInterfaceAddress(USkillCheckViewInterface::StaticClass())))
		{
			I->UpdateProgress_Implementation(value);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
