// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDButton() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDButton_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDButton();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	void UDBDButton::StaticRegisterNativesUDBDButton()
	{
	}
	UClass* Z_Construct_UClass_UDBDButton_NoRegister()
	{
		return UDBDButton::StaticClass();
	}
	struct Z_Construct_UClass_UDBDButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDButton.h" },
		{ "ModuleRelativePath", "Public/DBDButton.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDButton_Statics::ClassParams = {
		&UDBDButton::StaticClass,
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
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDButton, 2361491846);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDButton>()
	{
		return UDBDButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDButton(Z_Construct_UClass_UDBDButton, &UDBDButton::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
