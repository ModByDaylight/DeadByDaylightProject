// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudRootContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudRootContainer() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudRootContainer_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudRootContainer();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UHudRootContainer::StaticRegisterNativesUHudRootContainer()
	{
	}
	UClass* Z_Construct_UClass_UHudRootContainer_NoRegister()
	{
		return UHudRootContainer::StaticClass();
	}
	struct Z_Construct_UClass_UHudRootContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudRootContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudRootContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HudRootContainer.h" },
		{ "ModuleRelativePath", "Public/HudRootContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudRootContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudRootContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudRootContainer_Statics::ClassParams = {
		&UHudRootContainer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHudRootContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudRootContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudRootContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudRootContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudRootContainer, 784556211);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudRootContainer>()
	{
		return UHudRootContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudRootContainer(Z_Construct_UClass_UHudRootContainer, &UHudRootContainer::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudRootContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudRootContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
