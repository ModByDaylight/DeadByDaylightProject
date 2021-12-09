// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/TestPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UTestPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UTestPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UTestPresenter::StaticRegisterNativesUTestPresenter()
	{
	}
	UClass* Z_Construct_UClass_UTestPresenter_NoRegister()
	{
		return UTestPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UTestPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TestWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TestPresenter.h" },
		{ "ModuleRelativePath", "Public/TestPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestPresenter_Statics::NewProp_TestWidgetClass_MetaData[] = {
		{ "Category", "TestPresenter" },
		{ "ModuleRelativePath", "Public/TestPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTestPresenter_Statics::NewProp_TestWidgetClass = { "TestWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTestPresenter, TestWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTestPresenter_Statics::NewProp_TestWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTestPresenter_Statics::NewProp_TestWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestPresenter_Statics::NewProp_TestWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestPresenter_Statics::ClassParams = {
		&UTestPresenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTestPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTestPresenter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTestPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestPresenter, 2496382456);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UTestPresenter>()
	{
		return UTestPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestPresenter(Z_Construct_UClass_UTestPresenter, &UTestPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UTestPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
