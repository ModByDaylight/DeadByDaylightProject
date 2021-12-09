// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/NotifTutorialPopupViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNotifTutorialPopupViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FNotifTutorialPopupViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FNotifTutorialPopupViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("NotifTutorialPopupViewData"), sizeof(FNotifTutorialPopupViewData), Get_Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FNotifTutorialPopupViewData>()
{
	return FNotifTutorialPopupViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNotifTutorialPopupViewData(FNotifTutorialPopupViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("NotifTutorialPopupViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFNotifTutorialPopupViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFNotifTutorialPopupViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NotifTutorialPopupViewData")),new UScriptStruct::TCppStructOps<FNotifTutorialPopupViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFNotifTutorialPopupViewData;
	struct Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Image;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NotifTutorialPopupViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNotifTutorialPopupViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Image_MetaData[] = {
		{ "Category", "NotifTutorialPopupViewData" },
		{ "ModuleRelativePath", "Public/NotifTutorialPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNotifTutorialPopupViewData, Image), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Image_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "NotifTutorialPopupViewData" },
		{ "ModuleRelativePath", "Public/NotifTutorialPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNotifTutorialPopupViewData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "NotifTutorialPopupViewData" },
		{ "ModuleRelativePath", "Public/NotifTutorialPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNotifTutorialPopupViewData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "NotifTutorialPopupViewData" },
		{ "ModuleRelativePath", "Public/NotifTutorialPopupViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNotifTutorialPopupViewData, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Image,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::NewProp_Title,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"NotifTutorialPopupViewData",
		sizeof(FNotifTutorialPopupViewData),
		alignof(FNotifTutorialPopupViewData),
		Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNotifTutorialPopupViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NotifTutorialPopupViewData"), sizeof(FNotifTutorialPopupViewData), Get_Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNotifTutorialPopupViewData_Hash() { return 2937994891U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
