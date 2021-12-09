// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/Presenter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresenter() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UPresenter();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	void UPresenter::StaticRegisterNativesUPresenter()
	{
	}
	UClass* Z_Construct_UClass_UPresenter_NoRegister()
	{
		return UPresenter::StaticClass();
	}
	struct Z_Construct_UClass_UPresenter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__widget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InitialVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InitialVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestPresentationAtBeginPlay_MetaData[];
#endif
		static void NewProp_RequestPresentationAtBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RequestPresentationAtBeginPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPresenter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Presenter.h" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp__widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp__widget = { "_widget", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, _widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp__widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp__widget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility = { "InitialVisibility", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPresenter, InitialVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_MetaData[] = {
		{ "Category", "Presenter" },
		{ "ModuleRelativePath", "Public/Presenter.h" },
	};
#endif
	void Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_SetBit(void* Obj)
	{
		((UPresenter*)Obj)->RequestPresentationAtBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay = { "RequestPresentationAtBeginPlay", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPresenter), &Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPresenter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp__widget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp_InitialVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPresenter_Statics::NewProp_RequestPresentationAtBeginPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPresenter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPresenter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPresenter_Statics::ClassParams = {
		&UPresenter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPresenter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UPresenter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPresenter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPresenter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPresenter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPresenter, 622337459);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<UPresenter>()
	{
		return UPresenter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPresenter(Z_Construct_UClass_UPresenter, &UPresenter::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("UPresenter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPresenter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
