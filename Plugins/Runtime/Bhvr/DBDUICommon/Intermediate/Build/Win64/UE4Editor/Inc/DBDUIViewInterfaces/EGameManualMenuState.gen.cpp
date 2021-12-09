// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EGameManualMenuState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEGameManualMenuState() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EGameManualMenuState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EGameManualMenuState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EGameManualMenuState, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EGameManualMenuState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EGameManualMenuState>()
	{
		return EGameManualMenuState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGameManualMenuState(EGameManualMenuState_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EGameManualMenuState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EGameManualMenuState_Hash() { return 1835256823U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EGameManualMenuState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGameManualMenuState"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EGameManualMenuState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGameManualMenuState::Categories", (int64)EGameManualMenuState::Categories },
				{ "EGameManualMenuState::Topics", (int64)EGameManualMenuState::Topics },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Categories.Name", "EGameManualMenuState::Categories" },
				{ "ModuleRelativePath", "Public/EGameManualMenuState.h" },
				{ "Topics.Name", "EGameManualMenuState::Topics" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EGameManualMenuState",
				"EGameManualMenuState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
