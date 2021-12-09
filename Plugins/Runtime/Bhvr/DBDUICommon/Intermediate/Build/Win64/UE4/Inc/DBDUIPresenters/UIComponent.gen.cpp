// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/UIComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIComponent() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
// End Cross Module References
	void UUIComponent::StaticRegisterNativesUUIComponent()
	{
	}
	UClass* Z_Construct_UClass_UUIComponent_NoRegister()
	{
		return UUIComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUIComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UIComponent.h" },
		{ "ModuleRelativePath", "Public/UIComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIComponent_Statics::ClassParams = {
		&UUIComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUIComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIComponent, 3744228239);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UUIComponent>()
	{
		return UUIComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIComponent(Z_Construct_UClass_UUIComponent, &UUIComponent::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UUIComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
