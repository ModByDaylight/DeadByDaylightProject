// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIManagers/Public/UIDataManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIDataManager() {}
// Cross Module References
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UUIDataManager_NoRegister();
	DBDUIMANAGERS_API UClass* Z_Construct_UClass_UUIDataManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DBDUIManagers();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EProgressionType();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionUIData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockStyle();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UUIDataManager::StaticRegisterNativesUUIDataManager()
	{
	}
	UClass* Z_Construct_UClass_UUIDataManager_NoRegister()
	{
		return UUIDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UUIDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionUIDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ProgressionUIDataMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionUIDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionUIDataMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProgressionUIDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyUIDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CurrencyUIDataMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyUIDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyUIDataMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrencyUIDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RichTextStyleMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RichTextStyleMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RichTextStyleMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RichTextStyleMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RarityMaterialMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RarityMaterialMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RarityMaterialMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RarityMaterialMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RarityMaterialMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIManagers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UIDataManager.h" },
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap = { "ProgressionUIDataMap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, ProgressionUIDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_Key_KeyProp = { "ProgressionUIDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EProgressionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_ValueProp = { "ProgressionUIDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCurrencyProgressionUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap = { "CurrencyUIDataMap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, CurrencyUIDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_Key_KeyProp = { "CurrencyUIDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_ValueProp = { "CurrencyUIDataMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCurrencyProgressionUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap = { "RichTextStyleMap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, RichTextStyleMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_Key_KeyProp = { "RichTextStyleMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_ValueProp = { "RichTextStyleMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTextBlockStyle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap = { "RarityMaterialMap", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIDataManager, RarityMaterialMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_Key_KeyProp = { "RarityMaterialMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_ValueProp = { "RarityMaterialMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIDataManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_ProgressionUIDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_CurrencyUIDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RichTextStyleMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIDataManager_Statics::NewProp_RarityMaterialMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIDataManager_Statics::ClassParams = {
		&UUIDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUIDataManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIDataManager, 4032421267);
	template<> DBDUIMANAGERS_API UClass* StaticClass<UUIDataManager>()
	{
		return UUIDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIDataManager(Z_Construct_UClass_UUIDataManager, &UUIDataManager::StaticClass, TEXT("/Script/DBDUIManagers"), TEXT("UUIDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
