// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/UIConsoleCommands.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIConsoleCommands() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIConsoleCommands_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIConsoleCommands();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	DEFINE_FUNCTION(UUIConsoleCommands::execDBD_SetApplicationScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_applicationScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetApplicationScale(Z_Param_applicationScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIConsoleCommands::execDBD_SetHudScaleFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scaleFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetHudScaleFactor(Z_Param_scaleFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIConsoleCommands::execDBD_SetHudVisible)
	{
		P_GET_UBOOL(Z_Param_isVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetHudVisible(Z_Param_isVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIConsoleCommands::execDBD_SetMenuScaleFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scaleFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_SetMenuScaleFactor(Z_Param_scaleFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIConsoleCommands::execDBD_ToggleDPICurve)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ToggleDPICurve();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIConsoleCommands::execDBD_ToggleTestWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DBD_ToggleTestWidget();
		P_NATIVE_END;
	}
	void UUIConsoleCommands::StaticRegisterNativesUUIConsoleCommands()
	{
		UClass* Class = UUIConsoleCommands::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DBD_SetApplicationScale", &UUIConsoleCommands::execDBD_SetApplicationScale },
			{ "DBD_SetHudScaleFactor", &UUIConsoleCommands::execDBD_SetHudScaleFactor },
			{ "DBD_SetHudVisible", &UUIConsoleCommands::execDBD_SetHudVisible },
			{ "DBD_SetMenuScaleFactor", &UUIConsoleCommands::execDBD_SetMenuScaleFactor },
			{ "DBD_ToggleDPICurve", &UUIConsoleCommands::execDBD_ToggleDPICurve },
			{ "DBD_ToggleTestWidget", &UUIConsoleCommands::execDBD_ToggleTestWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics
	{
		struct UIConsoleCommands_eventDBD_SetApplicationScale_Parms
		{
			float applicationScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_applicationScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::NewProp_applicationScale = { "applicationScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIConsoleCommands_eventDBD_SetApplicationScale_Parms, applicationScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::NewProp_applicationScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIConsoleCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIConsoleCommands, nullptr, "DBD_SetApplicationScale", nullptr, nullptr, sizeof(UIConsoleCommands_eventDBD_SetApplicationScale_Parms), Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics
	{
		struct UIConsoleCommands_eventDBD_SetHudScaleFactor_Parms
		{
			float scaleFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scaleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::NewProp_scaleFactor = { "scaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIConsoleCommands_eventDBD_SetHudScaleFactor_Parms, scaleFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::NewProp_scaleFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIConsoleCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIConsoleCommands, nullptr, "DBD_SetHudScaleFactor", nullptr, nullptr, sizeof(UIConsoleCommands_eventDBD_SetHudScaleFactor_Parms), Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics
	{
		struct UIConsoleCommands_eventDBD_SetHudVisible_Parms
		{
			bool isVisible;
		};
		static void NewProp_isVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::NewProp_isVisible_SetBit(void* Obj)
	{
		((UIConsoleCommands_eventDBD_SetHudVisible_Parms*)Obj)->isVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::NewProp_isVisible = { "isVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UIConsoleCommands_eventDBD_SetHudVisible_Parms), &Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::NewProp_isVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::NewProp_isVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIConsoleCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIConsoleCommands, nullptr, "DBD_SetHudVisible", nullptr, nullptr, sizeof(UIConsoleCommands_eventDBD_SetHudVisible_Parms), Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics
	{
		struct UIConsoleCommands_eventDBD_SetMenuScaleFactor_Parms
		{
			float scaleFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scaleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::NewProp_scaleFactor = { "scaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIConsoleCommands_eventDBD_SetMenuScaleFactor_Parms, scaleFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::NewProp_scaleFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIConsoleCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIConsoleCommands, nullptr, "DBD_SetMenuScaleFactor", nullptr, nullptr, sizeof(UIConsoleCommands_eventDBD_SetMenuScaleFactor_Parms), Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleDPICurve_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleDPICurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIConsoleCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleDPICurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIConsoleCommands, nullptr, "DBD_ToggleDPICurve", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleDPICurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleDPICurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleDPICurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleDPICurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleTestWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleTestWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIConsoleCommands.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleTestWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIConsoleCommands, nullptr, "DBD_ToggleTestWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleTestWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleTestWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleTestWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleTestWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIConsoleCommands_NoRegister()
	{
		return UUIConsoleCommands::StaticClass();
	}
	struct Z_Construct_UClass_UUIConsoleCommands_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIConsoleCommands_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIConsoleCommands_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIConsoleCommands_DBD_SetApplicationScale, "DBD_SetApplicationScale" }, // 2420612986
		{ &Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudScaleFactor, "DBD_SetHudScaleFactor" }, // 129949465
		{ &Z_Construct_UFunction_UUIConsoleCommands_DBD_SetHudVisible, "DBD_SetHudVisible" }, // 908656110
		{ &Z_Construct_UFunction_UUIConsoleCommands_DBD_SetMenuScaleFactor, "DBD_SetMenuScaleFactor" }, // 1712667966
		{ &Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleDPICurve, "DBD_ToggleDPICurve" }, // 2992745814
		{ &Z_Construct_UFunction_UUIConsoleCommands_DBD_ToggleTestWidget, "DBD_ToggleTestWidget" }, // 3383954955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIConsoleCommands_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UIConsoleCommands.h" },
		{ "ModuleRelativePath", "Public/UIConsoleCommands.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIConsoleCommands_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIConsoleCommands>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIConsoleCommands_Statics::ClassParams = {
		&UUIConsoleCommands::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIConsoleCommands_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIConsoleCommands_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIConsoleCommands()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIConsoleCommands_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIConsoleCommands, 1599188683);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UUIConsoleCommands>()
	{
		return UUIConsoleCommands::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIConsoleCommands(Z_Construct_UClass_UUIConsoleCommands, &UUIConsoleCommands::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UUIConsoleCommands"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIConsoleCommands);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
