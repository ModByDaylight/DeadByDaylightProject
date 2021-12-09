// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformsProviders/Public/EProviderFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEProviderFlag() {}
// Cross Module References
	PLATFORMSPROVIDERS_API UEnum* Z_Construct_UEnum_PlatformsProviders_EProviderFlag();
	UPackage* Z_Construct_UPackage__Script_PlatformsProviders();
// End Cross Module References
	static UEnum* EProviderFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_PlatformsProviders_EProviderFlag, Z_Construct_UPackage__Script_PlatformsProviders(), TEXT("EProviderFlag"));
		}
		return Singleton;
	}
	template<> PLATFORMSPROVIDERS_API UEnum* StaticEnum<EProviderFlag>()
	{
		return EProviderFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProviderFlag(EProviderFlag_StaticEnum, TEXT("/Script/PlatformsProviders"), TEXT("EProviderFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_PlatformsProviders_EProviderFlag_Hash() { return 3401277389U; }
	UEnum* Z_Construct_UEnum_PlatformsProviders_EProviderFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_PlatformsProviders();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProviderFlag"), 0, Get_Z_Construct_UEnum_PlatformsProviders_EProviderFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProviderFlag::None", (int64)EProviderFlag::None },
				{ "EProviderFlag::Google", (int64)EProviderFlag::Google },
				{ "EProviderFlag::DMM", (int64)EProviderFlag::DMM },
				{ "EProviderFlag::Facebook", (int64)EProviderFlag::Facebook },
				{ "EProviderFlag::Nintendo", (int64)EProviderFlag::Nintendo },
				{ "EProviderFlag::PSN", (int64)EProviderFlag::PSN },
				{ "EProviderFlag::Steam", (int64)EProviderFlag::Steam },
				{ "EProviderFlag::WinGDK", (int64)EProviderFlag::WinGDK },
				{ "EProviderFlag::Xbox", (int64)EProviderFlag::Xbox },
				{ "EProviderFlag::Apple", (int64)EProviderFlag::Apple },
				{ "EProviderFlag::Kraken", (int64)EProviderFlag::Kraken },
				{ "EProviderFlag::Stadia", (int64)EProviderFlag::Stadia },
				{ "EProviderFlag::GAS3", (int64)EProviderFlag::GAS3 },
				{ "EProviderFlag::Epic", (int64)EProviderFlag::Epic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Apple.Name", "EProviderFlag::Apple" },
				{ "DMM.Name", "EProviderFlag::DMM" },
				{ "Epic.Name", "EProviderFlag::Epic" },
				{ "Facebook.Name", "EProviderFlag::Facebook" },
				{ "GAS3.Name", "EProviderFlag::GAS3" },
				{ "Google.Name", "EProviderFlag::Google" },
				{ "Kraken.Name", "EProviderFlag::Kraken" },
				{ "ModuleRelativePath", "Public/EProviderFlag.h" },
				{ "Nintendo.Name", "EProviderFlag::Nintendo" },
				{ "None.Name", "EProviderFlag::None" },
				{ "PSN.Name", "EProviderFlag::PSN" },
				{ "Stadia.Name", "EProviderFlag::Stadia" },
				{ "Steam.Name", "EProviderFlag::Steam" },
				{ "WinGDK.Name", "EProviderFlag::WinGDK" },
				{ "Xbox.Name", "EProviderFlag::Xbox" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_PlatformsProviders,
				nullptr,
				"EProviderFlag",
				"EProviderFlag",
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
