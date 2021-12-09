// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlinePresence/Public/MirrorsConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorsConfig() {}
// Cross Module References
	ONLINEPRESENCE_API UClass* Z_Construct_UClass_UMirrorsConfig_NoRegister();
	ONLINEPRESENCE_API UClass* Z_Construct_UClass_UMirrorsConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlinePresence();
// End Cross Module References
	void UMirrorsConfig::StaticRegisterNativesUMirrorsConfig()
	{
	}
	UClass* Z_Construct_UClass_UMirrorsConfig_NoRegister()
	{
		return UMirrorsConfig::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorsConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorsConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlinePresence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorsConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MirrorsConfig.h" },
		{ "ModuleRelativePath", "Public/MirrorsConfig.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorsConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorsConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMirrorsConfig_Statics::ClassParams = {
		&UMirrorsConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMirrorsConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorsConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorsConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMirrorsConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMirrorsConfig, 3800070044);
	template<> ONLINEPRESENCE_API UClass* StaticClass<UMirrorsConfig>()
	{
		return UMirrorsConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMirrorsConfig(Z_Construct_UClass_UMirrorsConfig, &UMirrorsConfig::StaticClass, TEXT("/Script/OnlinePresence"), TEXT("UMirrorsConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorsConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
