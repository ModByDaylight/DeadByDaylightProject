// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/PriceViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePriceViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPriceViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
// End Cross Module References
class UScriptStruct* FPriceViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FPriceViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPriceViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("PriceViewData"), sizeof(FPriceViewData), Get_Z_Construct_UScriptStruct_FPriceViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FPriceViewData>()
{
	return FPriceViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPriceViewData(FPriceViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("PriceViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPriceViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPriceViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PriceViewData")),new UScriptStruct::TCppStructOps<FPriceViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFPriceViewData;
	struct Z_Construct_UScriptStruct_FPriceViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAffordable_MetaData[];
#endif
		static void NewProp_IsAffordable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAffordable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Discount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Discount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrencyType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PriceViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPriceViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPriceViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_IsAffordable_MetaData[] = {
		{ "Category", "PriceViewData" },
		{ "ModuleRelativePath", "Public/PriceViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_IsAffordable_SetBit(void* Obj)
	{
		((FPriceViewData*)Obj)->IsAffordable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_IsAffordable = { "IsAffordable", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPriceViewData), &Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_IsAffordable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_IsAffordable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_IsAffordable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Discount_MetaData[] = {
		{ "Category", "PriceViewData" },
		{ "ModuleRelativePath", "Public/PriceViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Discount = { "Discount", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPriceViewData, Discount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Discount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Discount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Price_MetaData[] = {
		{ "Category", "PriceViewData" },
		{ "ModuleRelativePath", "Public/PriceViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPriceViewData, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_CurrencyType_MetaData[] = {
		{ "Category", "PriceViewData" },
		{ "ModuleRelativePath", "Public/PriceViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_CurrencyType = { "CurrencyType", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPriceViewData, CurrencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_CurrencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_CurrencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_CurrencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPriceViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_IsAffordable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Discount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_CurrencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPriceViewData_Statics::NewProp_CurrencyType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPriceViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"PriceViewData",
		sizeof(FPriceViewData),
		alignof(FPriceViewData),
		Z_Construct_UScriptStruct_FPriceViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPriceViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPriceViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPriceViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPriceViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PriceViewData"), sizeof(FPriceViewData), Get_Z_Construct_UScriptStruct_FPriceViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPriceViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPriceViewData_Hash() { return 4273024379U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
