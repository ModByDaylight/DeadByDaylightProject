// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PresenterGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresenterGroup() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_APresenterGroup_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_APresenterGroup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_URootContainer_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPawnObserver_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UFocusHandler_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UContextObserver_NoRegister();
// End Cross Module References
	void APresenterGroup::StaticRegisterNativesAPresenterGroup()
	{
	}
	UClass* Z_Construct_UClass_APresenterGroup_NoRegister()
	{
		return APresenterGroup::StaticClass();
	}
	struct Z_Construct_UClass_APresenterGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnObserver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnObserver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FocusHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextObserver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextObserver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APresenterGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APresenterGroup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PresenterGroup.h" },
		{ "ModuleRelativePath", "Public/PresenterGroup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APresenterGroup_Statics::NewProp_RootContainer_MetaData[] = {
		{ "Category", "PresenterGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PresenterGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APresenterGroup_Statics::NewProp_RootContainer = { "RootContainer", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APresenterGroup, RootContainer), Z_Construct_UClass_URootContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APresenterGroup_Statics::NewProp_RootContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APresenterGroup_Statics::NewProp_RootContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APresenterGroup_Statics::NewProp_PawnObserver_MetaData[] = {
		{ "Category", "PresenterGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PresenterGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APresenterGroup_Statics::NewProp_PawnObserver = { "PawnObserver", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APresenterGroup, PawnObserver), Z_Construct_UClass_UPawnObserver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APresenterGroup_Statics::NewProp_PawnObserver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APresenterGroup_Statics::NewProp_PawnObserver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APresenterGroup_Statics::NewProp_FocusHandler_MetaData[] = {
		{ "Category", "PresenterGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PresenterGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APresenterGroup_Statics::NewProp_FocusHandler = { "FocusHandler", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APresenterGroup, FocusHandler), Z_Construct_UClass_UFocusHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APresenterGroup_Statics::NewProp_FocusHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APresenterGroup_Statics::NewProp_FocusHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APresenterGroup_Statics::NewProp_ContextObserver_MetaData[] = {
		{ "Category", "PresenterGroup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PresenterGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APresenterGroup_Statics::NewProp_ContextObserver = { "ContextObserver", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APresenterGroup, ContextObserver), Z_Construct_UClass_UContextObserver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APresenterGroup_Statics::NewProp_ContextObserver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APresenterGroup_Statics::NewProp_ContextObserver_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APresenterGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APresenterGroup_Statics::NewProp_RootContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APresenterGroup_Statics::NewProp_PawnObserver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APresenterGroup_Statics::NewProp_FocusHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APresenterGroup_Statics::NewProp_ContextObserver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APresenterGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APresenterGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APresenterGroup_Statics::ClassParams = {
		&APresenterGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APresenterGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APresenterGroup_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_APresenterGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APresenterGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APresenterGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APresenterGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APresenterGroup, 3593449080);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<APresenterGroup>()
	{
		return APresenterGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APresenterGroup(Z_Construct_UClass_APresenterGroup, &APresenterGroup::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("APresenterGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APresenterGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
