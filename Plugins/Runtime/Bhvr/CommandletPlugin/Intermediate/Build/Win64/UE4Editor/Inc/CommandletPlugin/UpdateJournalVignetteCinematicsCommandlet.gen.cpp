// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommandletPlugin/Public/UpdateJournalVignetteCinematicsCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUpdateJournalVignetteCinematicsCommandlet() {}
// Cross Module References
	COMMANDLETPLUGIN_API UClass* Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_NoRegister();
	COMMANDLETPLUGIN_API UClass* Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_CommandletPlugin();
// End Cross Module References
	void UUpdateJournalVignetteCinematicsCommandlet::StaticRegisterNativesUUpdateJournalVignetteCinematicsCommandlet()
	{
	}
	UClass* Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_NoRegister()
	{
		return UUpdateJournalVignetteCinematicsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_CommandletPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UpdateJournalVignetteCinematicsCommandlet.h" },
		{ "ModuleRelativePath", "Public/UpdateJournalVignetteCinematicsCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateJournalVignetteCinematicsCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_Statics::ClassParams = {
		&UUpdateJournalVignetteCinematicsCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUpdateJournalVignetteCinematicsCommandlet, 3749380824);
	template<> COMMANDLETPLUGIN_API UClass* StaticClass<UUpdateJournalVignetteCinematicsCommandlet>()
	{
		return UUpdateJournalVignetteCinematicsCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUpdateJournalVignetteCinematicsCommandlet(Z_Construct_UClass_UUpdateJournalVignetteCinematicsCommandlet, &UUpdateJournalVignetteCinematicsCommandlet::StaticClass, TEXT("/Script/CommandletPlugin"), TEXT("UUpdateJournalVignetteCinematicsCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateJournalVignetteCinematicsCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
