// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BHVRAnalytics/Public/BHVRAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBHVRAnalytics() {}
// Cross Module References
	BHVRANALYTICS_API UClass* Z_Construct_UClass_UBHVRAnalytics_NoRegister();
	BHVRANALYTICS_API UClass* Z_Construct_UClass_UBHVRAnalytics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BHVRAnalytics();
// End Cross Module References
	void UBHVRAnalytics::StaticRegisterNativesUBHVRAnalytics()
	{
	}
	UClass* Z_Construct_UClass_UBHVRAnalytics_NoRegister()
	{
		return UBHVRAnalytics::StaticClass();
	}
	struct Z_Construct_UClass_UBHVRAnalytics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBHVRAnalytics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BHVRAnalytics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBHVRAnalytics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BHVRAnalytics.h" },
		{ "ModuleRelativePath", "Public/BHVRAnalytics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBHVRAnalytics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBHVRAnalytics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBHVRAnalytics_Statics::ClassParams = {
		&UBHVRAnalytics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBHVRAnalytics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBHVRAnalytics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBHVRAnalytics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBHVRAnalytics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBHVRAnalytics, 1316629519);
	template<> BHVRANALYTICS_API UClass* StaticClass<UBHVRAnalytics>()
	{
		return UBHVRAnalytics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBHVRAnalytics(Z_Construct_UClass_UBHVRAnalytics, &UBHVRAnalytics::StaticClass, TEXT("/Script/BHVRAnalytics"), TEXT("UBHVRAnalytics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBHVRAnalytics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
