// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/MatchConfigTabsDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchConfigTabsDataAsset() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMatchConfigTabsDataAsset_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMatchConfigTabsDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchTab();
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FMatchConfigTabData();
// End Cross Module References
	void UMatchConfigTabsDataAsset::StaticRegisterNativesUMatchConfigTabsDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UMatchConfigTabsDataAsset_NoRegister()
	{
		return UMatchConfigTabsDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Data_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MatchConfigTabsDataAsset.h" },
		{ "ModuleRelativePath", "Public/MatchConfigTabsDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "MatchConfigTabsDataAsset" },
		{ "ModuleRelativePath", "Public/MatchConfigTabsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchConfigTabsDataAsset, Data), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data_Key_KeyProp = { "Data_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchTab, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data_ValueProp = { "Data", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMatchConfigTabData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::NewProp_Data_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchConfigTabsDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::ClassParams = {
		&UMatchConfigTabsDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchConfigTabsDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatchConfigTabsDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatchConfigTabsDataAsset, 2023484113);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UMatchConfigTabsDataAsset>()
	{
		return UMatchConfigTabsDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatchConfigTabsDataAsset(Z_Construct_UClass_UMatchConfigTabsDataAsset, &UMatchConfigTabsDataAsset::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UMatchConfigTabsDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchConfigTabsDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
