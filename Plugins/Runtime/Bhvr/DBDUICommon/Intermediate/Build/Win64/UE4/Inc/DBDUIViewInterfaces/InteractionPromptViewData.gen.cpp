// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/InteractionPromptViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionPromptViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionPromptViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EInteractionPromptType();
// End Cross Module References
class UScriptStruct* FInteractionPromptViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FInteractionPromptViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionPromptViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("InteractionPromptViewData"), sizeof(FInteractionPromptViewData), Get_Z_Construct_UScriptStruct_FInteractionPromptViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FInteractionPromptViewData>()
{
	return FInteractionPromptViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionPromptViewData(FInteractionPromptViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("InteractionPromptViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFInteractionPromptViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFInteractionPromptViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionPromptViewData")),new UScriptStruct::TCppStructOps<FInteractionPromptViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFInteractionPromptViewData;
	struct Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaceInCenter_MetaData[];
#endif
		static void NewProp_PlaceInCenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PlaceInCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey4_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey4;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey3_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputKey1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractionPromptViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionPromptViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_PlaceInCenter_MetaData[] = {
		{ "Category", "InteractionPromptViewData" },
		{ "ModuleRelativePath", "Public/InteractionPromptViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_PlaceInCenter_SetBit(void* Obj)
	{
		((FInteractionPromptViewData*)Obj)->PlaceInCenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_PlaceInCenter = { "PlaceInCenter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInteractionPromptViewData), &Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_PlaceInCenter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_PlaceInCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_PlaceInCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey4_MetaData[] = {
		{ "Category", "InteractionPromptViewData" },
		{ "ModuleRelativePath", "Public/InteractionPromptViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey4 = { "InputKey4", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPromptViewData, InputKey4), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey4_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey3_MetaData[] = {
		{ "Category", "InteractionPromptViewData" },
		{ "ModuleRelativePath", "Public/InteractionPromptViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey3 = { "InputKey3", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPromptViewData, InputKey3), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey2_MetaData[] = {
		{ "Category", "InteractionPromptViewData" },
		{ "ModuleRelativePath", "Public/InteractionPromptViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey2 = { "InputKey2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPromptViewData, InputKey2), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey1_MetaData[] = {
		{ "Category", "InteractionPromptViewData" },
		{ "ModuleRelativePath", "Public/InteractionPromptViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey1 = { "InputKey1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPromptViewData, InputKey1), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "InteractionPromptViewData" },
		{ "ModuleRelativePath", "Public/InteractionPromptViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPromptViewData, Type), Z_Construct_UEnum_DBDUIViewInterfaces_EInteractionPromptType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "InteractionPromptViewData" },
		{ "ModuleRelativePath", "Public/InteractionPromptViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPromptViewData, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "InteractionPromptViewData" },
		{ "ModuleRelativePath", "Public/InteractionPromptViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionPromptViewData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_PlaceInCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey4,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_InputKey1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"InteractionPromptViewData",
		sizeof(FInteractionPromptViewData),
		alignof(FInteractionPromptViewData),
		Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionPromptViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionPromptViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionPromptViewData"), sizeof(FInteractionPromptViewData), Get_Z_Construct_UScriptStruct_FInteractionPromptViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionPromptViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionPromptViewData_Hash() { return 51433538U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
