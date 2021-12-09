// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/FriendStatusUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendStatusUIData() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FFriendStatusUIData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EAtlantaFriendUIStatus();
// End Cross Module References
class UScriptStruct* FFriendStatusUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSMOBILE_API uint32 Get_Z_Construct_UScriptStruct_FFriendStatusUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendStatusUIData, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("FriendStatusUIData"), sizeof(FFriendStatusUIData), Get_Z_Construct_UScriptStruct_FFriendStatusUIData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSMOBILE_API UScriptStruct* StaticStruct<FFriendStatusUIData>()
{
	return FFriendStatusUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFriendStatusUIData(FFriendStatusUIData::StaticStruct, TEXT("/Script/DBDUIViewsMobile"), TEXT("FriendStatusUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFFriendStatusUIData
{
	FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFFriendStatusUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FriendStatusUIData")),new UScriptStruct::TCppStructOps<FFriendStatusUIData>);
	}
} ScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFFriendStatusUIData;
	struct Z_Construct_UScriptStruct_FFriendStatusUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_StatusText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StatusIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FriendStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FriendStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FriendStatusUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendStatusUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusText_MetaData[] = {
		{ "Category", "FriendStatusUIData" },
		{ "ModuleRelativePath", "Public/FriendStatusUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusText = { "StatusText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendStatusUIData, StatusText), METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusIcon_MetaData[] = {
		{ "Category", "FriendStatusUIData" },
		{ "ModuleRelativePath", "Public/FriendStatusUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusIcon = { "StatusIcon", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendStatusUIData, StatusIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_FriendStatus_MetaData[] = {
		{ "Category", "FriendStatusUIData" },
		{ "ModuleRelativePath", "Public/FriendStatusUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_FriendStatus = { "FriendStatus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFriendStatusUIData, FriendStatus), Z_Construct_UEnum_DBDUIViewsMobile_EAtlantaFriendUIStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_FriendStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_FriendStatus_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_FriendStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_StatusIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_FriendStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::NewProp_FriendStatus_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"FriendStatusUIData",
		sizeof(FFriendStatusUIData),
		alignof(FFriendStatusUIData),
		Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendStatusUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFriendStatusUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FriendStatusUIData"), sizeof(FFriendStatusUIData), Get_Z_Construct_UScriptStruct_FFriendStatusUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFriendStatusUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFriendStatusUIData_Hash() { return 43681862U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
