// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ScreenIndicatorViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenIndicatorViewData() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FScreenIndicatorViewData();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EHudScreenIndicatorType();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FScreenIndicatorViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDUIVIEWINTERFACES_API uint32 Get_Z_Construct_UScriptStruct_FScreenIndicatorViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScreenIndicatorViewData, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("ScreenIndicatorViewData"), sizeof(FScreenIndicatorViewData), Get_Z_Construct_UScriptStruct_FScreenIndicatorViewData_Hash());
	}
	return Singleton;
}
template<> DBDUIVIEWINTERFACES_API UScriptStruct* StaticStruct<FScreenIndicatorViewData>()
{
	return FScreenIndicatorViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScreenIndicatorViewData(FScreenIndicatorViewData::StaticStruct, TEXT("/Script/DBDUIViewInterfaces"), TEXT("ScreenIndicatorViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFScreenIndicatorViewData
{
	FScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFScreenIndicatorViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScreenIndicatorViewData")),new UScriptStruct::TCppStructOps<FScreenIndicatorViewData>);
	}
} ScriptStruct_DBDUIViewInterfaces_StaticRegisterNativesFScreenIndicatorViewData;
	struct Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndicatorType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IndicatorType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IndicatorType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndicatorIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IndicatorIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInFront_MetaData[];
#endif
		static void NewProp_IsInFront_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInFront;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScreenIndicatorViewData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorType_MetaData[] = {
		{ "Category", "ScreenIndicatorViewData" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorType = { "IndicatorType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenIndicatorViewData, IndicatorType), Z_Construct_UEnum_DBDSharedTypes_EHudScreenIndicatorType, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorIcon_MetaData[] = {
		{ "Category", "ScreenIndicatorViewData" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorIcon = { "IndicatorIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenIndicatorViewData, IndicatorIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "ScreenIndicatorViewData" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenIndicatorViewData, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_ScreenPosition_MetaData[] = {
		{ "Category", "ScreenIndicatorViewData" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenIndicatorViewData, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_ScreenPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_ScreenPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IsInFront_MetaData[] = {
		{ "Category", "ScreenIndicatorViewData" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorViewData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IsInFront_SetBit(void* Obj)
	{
		((FScreenIndicatorViewData*)Obj)->IsInFront = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IsInFront = { "IsInFront", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FScreenIndicatorViewData), &Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IsInFront_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IsInFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IsInFront_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "ScreenIndicatorViewData" },
		{ "ModuleRelativePath", "Public/ScreenIndicatorViewData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScreenIndicatorViewData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IndicatorIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_ScreenPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_IsInFront,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
		nullptr,
		&NewStructOps,
		"ScreenIndicatorViewData",
		sizeof(FScreenIndicatorViewData),
		alignof(FScreenIndicatorViewData),
		Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScreenIndicatorViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScreenIndicatorViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScreenIndicatorViewData"), sizeof(FScreenIndicatorViewData), Get_Z_Construct_UScriptStruct_FScreenIndicatorViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScreenIndicatorViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScreenIndicatorViewData_Hash() { return 1056197037U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
