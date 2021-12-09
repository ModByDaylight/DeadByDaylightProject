// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/SkillCheckPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillCheckPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USkillCheckPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USkillCheckPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USkillCheckPresenter::execOnShowSkillCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowSkillCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheckPresenter::execOnShowSkillCheckFail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowSkillCheckFail();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheckPresenter::execOnShowSkillCheckSuccess)
	{
		P_GET_UBOOL(Z_Param_isBonus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowSkillCheckSuccess(Z_Param_isBonus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkillCheckPresenter::execOnUpdateSkillCheckVisual)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateSkillCheckVisual(Z_Param_isActive);
		P_NATIVE_END;
	}
	void USkillCheckPresenter::StaticRegisterNativesUSkillCheckPresenter()
	{
		UClass* Class = USkillCheckPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnShowSkillCheck", &USkillCheckPresenter::execOnShowSkillCheck },
			{ "OnShowSkillCheckFail", &USkillCheckPresenter::execOnShowSkillCheckFail },
			{ "OnShowSkillCheckSuccess", &USkillCheckPresenter::execOnShowSkillCheckSuccess },
			{ "OnUpdateSkillCheckVisual", &USkillCheckPresenter::execOnUpdateSkillCheckVisual },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckPresenter, nullptr, "OnShowSkillCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckFail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckFail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckFail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckPresenter, nullptr, "OnShowSkillCheckFail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckFail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckFail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckFail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckFail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics
	{
		struct SkillCheckPresenter_eventOnShowSkillCheckSuccess_Parms
		{
			bool isBonus;
		};
		static void NewProp_isBonus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBonus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::NewProp_isBonus_SetBit(void* Obj)
	{
		((SkillCheckPresenter_eventOnShowSkillCheckSuccess_Parms*)Obj)->isBonus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::NewProp_isBonus = { "isBonus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheckPresenter_eventOnShowSkillCheckSuccess_Parms), &Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::NewProp_isBonus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::NewProp_isBonus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckPresenter, nullptr, "OnShowSkillCheckSuccess", nullptr, nullptr, sizeof(SkillCheckPresenter_eventOnShowSkillCheckSuccess_Parms), Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics
	{
		struct SkillCheckPresenter_eventOnUpdateSkillCheckVisual_Parms
		{
			bool isActive;
		};
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((SkillCheckPresenter_eventOnUpdateSkillCheckVisual_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkillCheckPresenter_eventOnUpdateSkillCheckVisual_Parms), &Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SkillCheckPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkillCheckPresenter, nullptr, "OnUpdateSkillCheckVisual", nullptr, nullptr, sizeof(SkillCheckPresenter_eventOnUpdateSkillCheckVisual_Parms), Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkillCheckPresenter_NoRegister()
	{
		return USkillCheckPresenter::StaticClass();
	}
	struct Z_Construct_UClass_USkillCheckPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SkillCheckWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkillCheckPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkillCheckPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheck, "OnShowSkillCheck" }, // 328388578
		{ &Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckFail, "OnShowSkillCheckFail" }, // 2611127117
		{ &Z_Construct_UFunction_USkillCheckPresenter_OnShowSkillCheckSuccess, "OnShowSkillCheckSuccess" }, // 2597494694
		{ &Z_Construct_UFunction_USkillCheckPresenter_OnUpdateSkillCheckVisual, "OnUpdateSkillCheckVisual" }, // 1937629165
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillCheckPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SkillCheckPresenter.h" },
		{ "ModuleRelativePath", "Public/SkillCheckPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass_MetaData[] = {
		{ "Category", "SkillCheckPresenter" },
		{ "ModuleRelativePath", "Public/SkillCheckPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass = { "SkillCheckWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkillCheckPresenter, SkillCheckWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkillCheckPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkillCheckPresenter_Statics::NewProp_SkillCheckWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkillCheckPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkillCheckPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkillCheckPresenter_Statics::ClassParams = {
		&USkillCheckPresenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkillCheckPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheckPresenter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkillCheckPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkillCheckPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkillCheckPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkillCheckPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkillCheckPresenter, 4086331226);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<USkillCheckPresenter>()
	{
		return USkillCheckPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkillCheckPresenter(Z_Construct_UClass_USkillCheckPresenter, &USkillCheckPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("USkillCheckPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkillCheckPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
