// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommandletPlugin/Public/JournalsValidationCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJournalsValidationCommandlet() {}
// Cross Module References
	COMMANDLETPLUGIN_API UClass* Z_Construct_UClass_UJournalsValidationCommandlet_NoRegister();
	COMMANDLETPLUGIN_API UClass* Z_Construct_UClass_UJournalsValidationCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_CommandletPlugin();
// End Cross Module References
	void UJournalsValidationCommandlet::StaticRegisterNativesUJournalsValidationCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UJournalsValidationCommandlet_NoRegister()
	{
		return UJournalsValidationCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UJournalsValidationCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJournalsValidationCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_CommandletPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJournalsValidationCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JournalsValidationCommandlet.h" },
		{ "ModuleRelativePath", "Public/JournalsValidationCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJournalsValidationCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJournalsValidationCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJournalsValidationCommandlet_Statics::ClassParams = {
		&UJournalsValidationCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UJournalsValidationCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJournalsValidationCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJournalsValidationCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJournalsValidationCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJournalsValidationCommandlet, 2510592381);
	template<> COMMANDLETPLUGIN_API UClass* StaticClass<UJournalsValidationCommandlet>()
	{
		return UJournalsValidationCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJournalsValidationCommandlet(Z_Construct_UClass_UJournalsValidationCommandlet, &UJournalsValidationCommandlet::StaticClass, TEXT("/Script/CommandletPlugin"), TEXT("UJournalsValidationCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJournalsValidationCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
