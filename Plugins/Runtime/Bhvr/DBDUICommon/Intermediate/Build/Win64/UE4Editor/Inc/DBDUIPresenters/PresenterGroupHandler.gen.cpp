// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/PresenterGroupHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresenterGroupHandler() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterGroupHandler_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenterGroupHandler();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_APresenterGroup_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void UPresenterGroupHandler::StaticRegisterNativesUPresenterGroupHandler()
	{
	}
	UClass* Z_Construct_UClass_UPresenterGroupHandler_NoRegister()
	{
		return UPresenterGroupHandler::StaticClass();
	}
	struct Z_Construct_UClass_UPresenterGroupHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__presenterGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__presenterGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresenterGroupClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PresenterGroupClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresenterGroupHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterGroupHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PresenterGroupHandler.h" },
		{ "ModuleRelativePath", "Public/PresenterGroupHandler.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp__presenterGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/PresenterGroupHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp__presenterGroup = { "_presenterGroup", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenterGroupHandler, _presenterGroup), Z_Construct_UClass_APresenterGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp__presenterGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp__presenterGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp_PresenterGroupClass_MetaData[] = {
		{ "Category", "PresenterGroupHandler" },
		{ "ModuleRelativePath", "Public/PresenterGroupHandler.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp_PresenterGroupClass = { "PresenterGroupClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenterGroupHandler, PresenterGroupClass), Z_Construct_UClass_APresenterGroup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp_PresenterGroupClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp_PresenterGroupClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPresenterGroupHandler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp__presenterGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenterGroupHandler_Statics::NewProp_PresenterGroupClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresenterGroupHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresenterGroupHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresenterGroupHandler_Statics::ClassParams = {
		&UPresenterGroupHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPresenterGroupHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterGroupHandler_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPresenterGroupHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenterGroupHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresenterGroupHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresenterGroupHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresenterGroupHandler, 3847792011);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPresenterGroupHandler>()
	{
		return UPresenterGroupHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresenterGroupHandler(Z_Construct_UClass_UPresenterGroupHandler, &UPresenterGroupHandler::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPresenterGroupHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresenterGroupHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
