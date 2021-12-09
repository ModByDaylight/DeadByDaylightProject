// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/FriendsMenuUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendsMenuUtilities() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UFriendsMenuUtilities_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UFriendsMenuUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
	void UFriendsMenuUtilities::StaticRegisterNativesUFriendsMenuUtilities()
	{
	}
	UClass* Z_Construct_UClass_UFriendsMenuUtilities_NoRegister()
	{
		return UFriendsMenuUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UFriendsMenuUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriendsMenuUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendsMenuUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FriendsMenuUtilities.h" },
		{ "ModuleRelativePath", "Public/FriendsMenuUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriendsMenuUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriendsMenuUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFriendsMenuUtilities_Statics::ClassParams = {
		&UFriendsMenuUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFriendsMenuUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendsMenuUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriendsMenuUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFriendsMenuUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFriendsMenuUtilities, 907976536);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UFriendsMenuUtilities>()
	{
		return UFriendsMenuUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFriendsMenuUtilities(Z_Construct_UClass_UFriendsMenuUtilities, &UFriendsMenuUtilities::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UFriendsMenuUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriendsMenuUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
