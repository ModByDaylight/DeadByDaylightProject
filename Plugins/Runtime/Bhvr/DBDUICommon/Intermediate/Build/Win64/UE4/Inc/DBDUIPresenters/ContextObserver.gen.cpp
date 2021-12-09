// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/ContextObserver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextObserver() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UContextObserver_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UContextObserver();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIPRESENTERS_API UEnum* Z_Construct_UEnum_DBDUIPresenters_EContextSection();
// End Cross Module References
	void UContextObserver::StaticRegisterNativesUContextObserver()
	{
	}
	UClass* Z_Construct_UClass_UContextObserver_NoRegister()
	{
		return UContextObserver::StaticClass();
	}
	struct Z_Construct_UClass_UContextObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedContextSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ObservedContextSection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObservedContextSection_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextObserver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContextObserver.h" },
		{ "ModuleRelativePath", "Public/ContextObserver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextObserver_Statics::NewProp_ObservedContextSection_MetaData[] = {
		{ "Category", "ContextObserver" },
		{ "ModuleRelativePath", "Public/ContextObserver.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UContextObserver_Statics::NewProp_ObservedContextSection = { "ObservedContextSection", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UContextObserver, ObservedContextSection), Z_Construct_UEnum_DBDUIPresenters_EContextSection, METADATA_PARAMS(Z_Construct_UClass_UContextObserver_Statics::NewProp_ObservedContextSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextObserver_Statics::NewProp_ObservedContextSection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UContextObserver_Statics::NewProp_ObservedContextSection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextObserver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextObserver_Statics::NewProp_ObservedContextSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextObserver_Statics::NewProp_ObservedContextSection_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextObserver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UContextObserver_Statics::ClassParams = {
		&UContextObserver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextObserver_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UContextObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextObserver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UContextObserver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UContextObserver, 522827835);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UContextObserver>()
	{
		return UContextObserver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UContextObserver(Z_Construct_UClass_UContextObserver, &UContextObserver::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UContextObserver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextObserver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
