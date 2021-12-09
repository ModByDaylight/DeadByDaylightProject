// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EHudStatusEffectAlertViewType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEHudStatusEffectAlertViewType() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EHudStatusEffectAlertViewType();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EHudStatusEffectAlertViewType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EHudStatusEffectAlertViewType, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EHudStatusEffectAlertViewType"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EHudStatusEffectAlertViewType>()
	{
		return EHudStatusEffectAlertViewType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHudStatusEffectAlertViewType(EHudStatusEffectAlertViewType_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EHudStatusEffectAlertViewType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EHudStatusEffectAlertViewType_Hash() { return 54070586U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EHudStatusEffectAlertViewType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHudStatusEffectAlertViewType"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EHudStatusEffectAlertViewType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHudStatusEffectAlertViewType::Unhandled", (int64)EHudStatusEffectAlertViewType::Unhandled },
				{ "EHudStatusEffectAlertViewType::Perk", (int64)EHudStatusEffectAlertViewType::Perk },
				{ "EHudStatusEffectAlertViewType::Item", (int64)EHudStatusEffectAlertViewType::Item },
				{ "EHudStatusEffectAlertViewType::Addon", (int64)EHudStatusEffectAlertViewType::Addon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Addon.Name", "EHudStatusEffectAlertViewType::Addon" },
				{ "BlueprintType", "true" },
				{ "Item.Name", "EHudStatusEffectAlertViewType::Item" },
				{ "ModuleRelativePath", "Public/EHudStatusEffectAlertViewType.h" },
				{ "Perk.Name", "EHudStatusEffectAlertViewType::Perk" },
				{ "Unhandled.Name", "EHudStatusEffectAlertViewType::Unhandled" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EHudStatusEffectAlertViewType",
				"EHudStatusEffectAlertViewType",
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
