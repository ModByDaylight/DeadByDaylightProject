// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/SubPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_USubPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void USubPresenter::StaticRegisterNativesUSubPresenter()
	{
	}
	UClass* Z_Construct_UClass_USubPresenter_NoRegister()
	{
		return USubPresenter::StaticClass();
	}
	struct Z_Construct_UClass_USubPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubPresenter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubPresenter.h" },
		{ "ModuleRelativePath", "Public/SubPresenter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubPresenter_Statics::ClassParams = {
		&USubPresenter::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_USubPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubPresenter, 4126835288);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<USubPresenter>()
	{
		return USubPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubPresenter(Z_Construct_UClass_USubPresenter, &USubPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("USubPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
