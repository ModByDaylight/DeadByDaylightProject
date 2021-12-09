// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/FocusHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusHandler() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UFocusHandler_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UFocusHandler();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UFocusHandler::StaticRegisterNativesUFocusHandler()
	{
	}
	UClass* Z_Construct_UClass_UFocusHandler_NoRegister()
	{
		return UFocusHandler::StaticClass();
	}
	struct Z_Construct_UClass_UFocusHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFocusHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFocusHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FocusHandler.h" },
		{ "ModuleRelativePath", "Public/FocusHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFocusHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFocusHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFocusHandler_Statics::ClassParams = {
		&UFocusHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFocusHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFocusHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFocusHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFocusHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFocusHandler, 217820715);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UFocusHandler>()
	{
		return UFocusHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFocusHandler(Z_Construct_UClass_UFocusHandler, &UFocusHandler::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UFocusHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFocusHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
