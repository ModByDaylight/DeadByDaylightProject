// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/EKillerResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEKillerResult() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EKillerResult();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	static UEnum* EKillerResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewInterfaces_EKillerResult, Z_Construct_UPackage__Script_DBDUIViewInterfaces(), TEXT("EKillerResult"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWINTERFACES_API UEnum* StaticEnum<EKillerResult>()
	{
		return EKillerResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKillerResult(EKillerResult_StaticEnum, TEXT("/Script/DBDUIViewInterfaces"), TEXT("EKillerResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewInterfaces_EKillerResult_Hash() { return 3795278786U; }
	UEnum* Z_Construct_UEnum_DBDUIViewInterfaces_EKillerResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewInterfaces();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKillerResult"), 0, Get_Z_Construct_UEnum_DBDUIViewInterfaces_EKillerResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKillerResult::DisgracefulDefeat", (int64)EKillerResult::DisgracefulDefeat },
				{ "EKillerResult::EntityDispleased", (int64)EKillerResult::EntityDispleased },
				{ "EKillerResult::BrutalKiller", (int64)EKillerResult::BrutalKiller },
				{ "EKillerResult::RuthlessKiller", (int64)EKillerResult::RuthlessKiller },
				{ "EKillerResult::MercilessKiller", (int64)EKillerResult::MercilessKiller },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BrutalKiller.Name", "EKillerResult::BrutalKiller" },
				{ "DisgracefulDefeat.Name", "EKillerResult::DisgracefulDefeat" },
				{ "EntityDispleased.Name", "EKillerResult::EntityDispleased" },
				{ "MercilessKiller.Name", "EKillerResult::MercilessKiller" },
				{ "ModuleRelativePath", "Public/EKillerResult.h" },
				{ "RuthlessKiller.Name", "EKillerResult::RuthlessKiller" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
				nullptr,
				"EKillerResult",
				"EKillerResult",
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
