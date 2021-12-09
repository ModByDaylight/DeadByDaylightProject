// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIPresenters/Public/RootContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootContainer() {}
// Cross Module References
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_URootContainer_NoRegister();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_URootContainer();
	DBDUIPRESENTERS_API UClass* Z_Construct_UClass_UUIComponent();
	UPackage* Z_Construct_UPackage__Script_DBDUIPresenters();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void URootContainer::StaticRegisterNativesURootContainer()
	{
	}
	UClass* Z_Construct_UClass_URootContainer_NoRegister()
	{
		return URootContainer::StaticClass();
	}
	struct Z_Construct_UClass_URootContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rootWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__rootWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnfocusedOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnfocusedOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RootWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIPresenters,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RootContainer.h" },
		{ "ModuleRelativePath", "Public/RootContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget = { "_rootWidget", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootContainer, _rootWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity_MetaData[] = {
		{ "Category", "RootContainer" },
		{ "ModuleRelativePath", "Public/RootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity = { "UnfocusedOpacity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootContainer, UnfocusedOpacity), METADATA_PARAMS(Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootContainer_Statics::NewProp_RootWidgetClass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "RootContainer" },
		{ "ModuleRelativePath", "Public/RootContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URootContainer_Statics::NewProp_RootWidgetClass = { "RootWidgetClass", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URootContainer, RootWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URootContainer_Statics::NewProp_RootWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::NewProp_RootWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp__rootWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp_UnfocusedOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootContainer_Statics::NewProp_RootWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URootContainer_Statics::ClassParams = {
		&URootContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URootContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URootContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URootContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URootContainer, 225039043);
	template<> DBDUIPRESENTERS_API UClass* StaticClass<URootContainer>()
	{
		return URootContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URootContainer(Z_Construct_UClass_URootContainer, &URootContainer::StaticClass, TEXT("/Script/DBDUIPresenters"), TEXT("URootContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
