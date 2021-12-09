// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/AtlantaFriendUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaFriendUIData() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFriendUIData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
// End Cross Module References
class UScriptStruct* FAtlantaFriendUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWSMOBILE_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaFriendUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaFriendUIData, Z_Construct_UPackage__Script_DBDUIViewsMobile(), TEXT("AtlantaFriendUIData"), sizeof(FAtlantaFriendUIData), Get_Z_Construct_UScriptStruct_FAtlantaFriendUIData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWSMOBILE_API UScriptStruct* StaticStruct<FAtlantaFriendUIData>()
{
	return FAtlantaFriendUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaFriendUIData(FAtlantaFriendUIData::StaticStruct, TEXT("/Script/DBDUIViewsMobile"), TEXT("AtlantaFriendUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFAtlantaFriendUIData
{
	FScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFAtlantaFriendUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaFriendUIData")),new UScriptStruct::TCppStructOps<FAtlantaFriendUIData>);
	}
} ScriptStruct_DBDUIViewsMobile_StaticRegisterNativesFAtlantaFriendUIData;
	struct Z_Construct_UScriptStruct_FAtlantaFriendUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFriendUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaFriendUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaFriendUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaFriendUIData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaFriendUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
		nullptr,
		&NewStructOps,
		"AtlantaFriendUIData",
		sizeof(FAtlantaFriendUIData),
		alignof(FAtlantaFriendUIData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFriendUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFriendUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFriendUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaFriendUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsMobile();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaFriendUIData"), sizeof(FAtlantaFriendUIData), Get_Z_Construct_UScriptStruct_FAtlantaFriendUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaFriendUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaFriendUIData_Hash() { return 3838926200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
