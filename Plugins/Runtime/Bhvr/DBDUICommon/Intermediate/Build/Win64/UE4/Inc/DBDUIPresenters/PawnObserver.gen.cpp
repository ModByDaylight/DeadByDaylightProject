// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PawnObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnObserver() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPawnObserver_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPawnObserver();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPawnObserver::execOnLocallyObservedChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLocallyObservedChanged();
		P_NATIVE_END;
	}
	void UPawnObserver::StaticRegisterNativesUPawnObserver()
	{
		UClass* Class = UPawnObserver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLocallyObservedChanged", &UPawnObserver::execOnLocallyObservedChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PawnObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnObserver, nullptr, "OnLocallyObservedChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnObserver_NoRegister()
	{
		return UPawnObserver::StaticClass();
	}
	struct Z_Construct_UClass_UPawnObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnObserver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnObserver_OnLocallyObservedChanged, "OnLocallyObservedChanged" }, // 614578995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnObserver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PawnObserver.h" },
		{ "ModuleRelativePath", "Public/PawnObserver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnObserver_Statics::NewProp__pawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/PawnObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPawnObserver_Statics::NewProp__pawn = { "_pawn", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPawnObserver, _pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnObserver_Statics::NewProp__pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnObserver_Statics::NewProp__pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnObserver_Statics::NewProp__pawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnObserver_Statics::ClassParams = {
		&UPawnObserver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPawnObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPawnObserver_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnObserver, 1268154288);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPawnObserver>()
	{
		return UPawnObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnObserver(Z_Construct_UClass_UPawnObserver, &UPawnObserver::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPawnObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
