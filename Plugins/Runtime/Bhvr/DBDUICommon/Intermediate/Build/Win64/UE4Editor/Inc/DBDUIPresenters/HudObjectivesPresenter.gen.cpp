// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/HudObjectivesPresenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudObjectivesPresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudObjectivesPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudObjectivesPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UHudPresenter();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void UHudObjectivesPresenter::StaticRegisterNativesUHudObjectivesPresenter()
	{
	}
	UClass* Z_Construct_UClass_UHudObjectivesPresenter_NoRegister()
	{
		return UHudObjectivesPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UHudObjectivesPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoreHudObjectivesWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CoreHudObjectivesWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudObjectivesPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudPresenter,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudObjectivesPresenter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HudObjectivesPresenter.h" },
		{ "ModuleRelativePath", "Public/HudObjectivesPresenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudObjectivesPresenter_Statics::NewProp_CoreHudObjectivesWidgetClass_MetaData[] = {
		{ "Category", "HudObjectivesPresenter" },
		{ "ModuleRelativePath", "Public/HudObjectivesPresenter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHudObjectivesPresenter_Statics::NewProp_CoreHudObjectivesWidgetClass = { "CoreHudObjectivesWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudObjectivesPresenter, CoreHudObjectivesWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UHudObjectivesPresenter_Statics::NewProp_CoreHudObjectivesWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudObjectivesPresenter_Statics::NewProp_CoreHudObjectivesWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudObjectivesPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudObjectivesPresenter_Statics::NewProp_CoreHudObjectivesWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudObjectivesPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudObjectivesPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudObjectivesPresenter_Statics::ClassParams = {
		&UHudObjectivesPresenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHudObjectivesPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudObjectivesPresenter_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHudObjectivesPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudObjectivesPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudObjectivesPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudObjectivesPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudObjectivesPresenter, 703703425);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UHudObjectivesPresenter>()
	{
		return UHudObjectivesPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudObjectivesPresenter(Z_Construct_UClass_UHudObjectivesPresenter, &UHudObjectivesPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UHudObjectivesPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudObjectivesPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
