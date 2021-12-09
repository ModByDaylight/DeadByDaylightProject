// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDSpectator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHudPresenter::execOnPawnPossessed)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnPossessed(Z_Param_pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHudPresenter::execOnPawnUnpossessed)
	{
		P_GET_OBJECT(APawn,Z_Param_pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnUnpossessed(Z_Param_pawn);
		P_NATIVE_END;
	}
	void UHudPresenter::StaticRegisterNativesUHudPresenter()
	{
		UClass* Class = UHudPresenter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnPossessed", &UHudPresenter::execOnPawnPossessed },
			{ "OnPawnUnpossessed", &UHudPresenter::execOnPawnUnpossessed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics
	{
		struct HudPresenter_eventOnPawnPossessed_Parms
		{
			APawn* pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudPresenter_eventOnPawnPossessed_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPresenter, nullptr, "OnPawnPossessed", nullptr, nullptr, sizeof(HudPresenter_eventOnPawnPossessed_Parms), Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPresenter_OnPawnPossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPresenter_OnPawnPossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics
	{
		struct HudPresenter_eventOnPawnUnpossessed_Parms
		{
			APawn* pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::NewProp_pawn = { "pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HudPresenter_eventOnPawnUnpossessed_Parms, pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::NewProp_pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHudPresenter, nullptr, "OnPawnUnpossessed", nullptr, nullptr, sizeof(HudPresenter_eventOnPawnUnpossessed_Parms), Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHudPresenter_NoRegister()
	{
		return UHudPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spectatorPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spectatorPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pendingCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pendingCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__presentedCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__presentedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHudPresenter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHudPresenter_OnPawnPossessed, "OnPawnPossessed" }, // 1047084411
		{ &Z_Construct_UFunction_UHudPresenter_OnPawnUnpossessed, "OnPawnUnpossessed" }, // 1688066474
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HudPresenter.h" },
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn = { "_spectatorPawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPresenter, _spectatorPawn), Z_Construct_UClass_ADBDSpectator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter = { "_pendingCharacter", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPresenter, _pendingCharacter), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter = { "_presentedCharacter", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudPresenter, _presentedCharacter), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp__spectatorPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp__pendingCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudPresenter_Statics::NewProp__presentedCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudPresenter_Statics::ClassParams = {
		&UHudPresenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHudPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UHudPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudPresenter, 3486553019);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudPresenter>()
	{
		return UHudPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudPresenter(Z_Construct_UClass_UHudPresenter, &UHudPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
