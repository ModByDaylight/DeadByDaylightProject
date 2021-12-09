// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SentryIo/Public/SentryIoSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSentryIoSubsystem() {}
// Cross Module References
	SENTRYIO_API UClass* Z_Construct_UClass_USentryIoSubsystem_NoRegister();
	SENTRYIO_API UClass* Z_Construct_UClass_USentryIoSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_SentryIo();
// End Cross Module References
	void USentryIoSubsystem::StaticRegisterNativesUSentryIoSubsystem()
	{
	}
	UClass* Z_Construct_UClass_USentryIoSubsystem_NoRegister()
	{
		return USentryIoSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USentryIoSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USentryIoSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SentryIo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USentryIoSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SentryIoSubsystem.h" },
		{ "ModuleRelativePath", "Public/SentryIoSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USentryIoSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USentryIoSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USentryIoSubsystem_Statics::ClassParams = {
		&USentryIoSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USentryIoSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USentryIoSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USentryIoSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USentryIoSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USentryIoSubsystem, 1241728857);
	template<> SENTRYIO_API UClass* StaticClass<USentryIoSubsystem>()
	{
		return USentryIoSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USentryIoSubsystem(Z_Construct_UClass_USentryIoSubsystem, &USentryIoSubsystem::StaticClass, TEXT("/Script/SentryIo"), TEXT("USentryIoSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USentryIoSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
