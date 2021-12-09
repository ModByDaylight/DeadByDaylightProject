// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/InteractionProgressViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionProgressViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionProgressViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectViewData();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EBarColor();
// End Cross Module References
class UScriptStruct* FInteractionProgressViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FInteractionProgressViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionProgressViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("InteractionProgressViewData"), sizeof(FInteractionProgressViewData), Get_Z_Construct_UScriptStruct_FInteractionProgressViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FInteractionProgressViewData>()
{
	return FInteractionProgressViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionProgressViewData(FInteractionProgressViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("InteractionProgressViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFInteractionProgressViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFInteractionProgressViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionProgressViewData")),new UScriptStruct::TCppStructOps<FInteractionProgressViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFInteractionProgressViewData;
	struct Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proficiencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Proficiencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Proficiencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowIconCharge_MetaData[];
#endif
		static void NewProp_ShowIconCharge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowIconCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowIcon_MetaData[];
#endif
		static void NewProp_ShowIcon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeBarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChargeBarColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChargeBarColor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BarColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BarColor_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecondaryMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionProgressViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Proficiencies_MetaData[] = {
		{ "Category", "InteractionProgressViewData" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Proficiencies = { "Proficiencies", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProgressViewData, Proficiencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Proficiencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Proficiencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Proficiencies_Inner = { "Proficiencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStatusEffectViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "InteractionProgressViewData" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0014000000002005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProgressViewData, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIconCharge_MetaData[] = {
		{ "Category", "InteractionProgressViewData" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIconCharge_SetBit(void* Obj)
	{
		((FInteractionProgressViewData*)Obj)->ShowIconCharge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIconCharge = { "ShowIconCharge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInteractionProgressViewData), &Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIconCharge_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIconCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIconCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIcon_MetaData[] = {
		{ "Category", "InteractionProgressViewData" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIcon_SetBit(void* Obj)
	{
		((FInteractionProgressViewData*)Obj)->ShowIcon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIcon = { "ShowIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInteractionProgressViewData), &Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIcon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ChargeBarColor_MetaData[] = {
		{ "Category", "InteractionProgressViewData" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ChargeBarColor = { "ChargeBarColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProgressViewData, ChargeBarColor), Z_Construct_UEnum_DBDSharedTypes_EBarColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ChargeBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ChargeBarColor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ChargeBarColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_BarColor_MetaData[] = {
		{ "Category", "InteractionProgressViewData" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_BarColor = { "BarColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProgressViewData, BarColor), Z_Construct_UEnum_DBDSharedTypes_EBarColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_BarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_BarColor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_BarColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_SecondaryMessage_MetaData[] = {
		{ "Category", "InteractionProgressViewData" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_SecondaryMessage = { "SecondaryMessage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProgressViewData, SecondaryMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_SecondaryMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_SecondaryMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "InteractionProgressViewData" },
		{ "ModuleRelativePath", "Public/InteractionProgressViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProgressViewData, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Proficiencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Proficiencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ItemIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIconCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ShowIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ChargeBarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_ChargeBarColor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_BarColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_BarColor_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_SecondaryMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"InteractionProgressViewData",
		sizeof(FInteractionProgressViewData),
		alignof(FInteractionProgressViewData),
		Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionProgressViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionProgressViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionProgressViewData"), sizeof(FInteractionProgressViewData), Get_Z_Construct_UScriptStruct_FInteractionProgressViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionProgressViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionProgressViewData_Hash() { return 3617304102U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
