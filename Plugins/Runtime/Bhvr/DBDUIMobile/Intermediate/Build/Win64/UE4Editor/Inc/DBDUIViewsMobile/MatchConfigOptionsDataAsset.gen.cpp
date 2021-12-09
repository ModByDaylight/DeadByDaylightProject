// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/MatchConfigOptionsDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchConfigOptionsDataAsset() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMatchConfigOptionsDataAsset_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMatchConfigOptionsDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions();
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FMatchOptionAssetData();
// End Cross Module References
	void UMatchConfigOptionsDataAsset::StaticRegisterNativesUMatchConfigOptionsDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UMatchConfigOptionsDataAsset_NoRegister()
	{
		return UMatchConfigOptionsDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OptionsData;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OptionsData_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OptionsData_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OptionsData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MatchConfigOptionsDataAsset.h" },
		{ "ModuleRelativePath", "Public/MatchConfigOptionsDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData_MetaData[] = {
		{ "Category", "MatchConfigOptionsDataAsset" },
		{ "ModuleRelativePath", "Public/MatchConfigOptionsDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData = { "OptionsData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchConfigOptionsDataAsset, OptionsData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData_Key_KeyProp = { "OptionsData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDUIViewsMobile_ECustomMatchOptions, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData_ValueProp = { "OptionsData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMatchOptionAssetData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::NewProp_OptionsData_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchConfigOptionsDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::ClassParams = {
		&UMatchConfigOptionsDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchConfigOptionsDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatchConfigOptionsDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatchConfigOptionsDataAsset, 3536470385);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UMatchConfigOptionsDataAsset>()
	{
		return UMatchConfigOptionsDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatchConfigOptionsDataAsset(Z_Construct_UClass_UMatchConfigOptionsDataAsset, &UMatchConfigOptionsDataAsset::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UMatchConfigOptionsDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchConfigOptionsDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
