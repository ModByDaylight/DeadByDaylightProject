// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EInputSwitcherDisplayRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEInputSwitcherDisplayRule() {}
// Cross Module References
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EInputSwitcherDisplayRule();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static UEnum* EInputSwitcherDisplayRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsCore_EInputSwitcherDisplayRule, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("EInputSwitcherDisplayRule"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<EInputSwitcherDisplayRule>()
	{
		return EInputSwitcherDisplayRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInputSwitcherDisplayRule(EInputSwitcherDisplayRule_StaticEnum, TEXT("/Script/DBDUIViewsCore"), TEXT("EInputSwitcherDisplayRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsCore_EInputSwitcherDisplayRule_Hash() { return 3099559644U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsCore_EInputSwitcherDisplayRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInputSwitcherDisplayRule"), 0, Get_Z_Construct_UEnum_DBDUIViewsCore_EInputSwitcherDisplayRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInputSwitcherDisplayRule::Undefined", (int64)EInputSwitcherDisplayRule::Undefined },
				{ "EInputSwitcherDisplayRule::OnlyGamepad", (int64)EInputSwitcherDisplayRule::OnlyGamepad },
				{ "EInputSwitcherDisplayRule::OnlyKeyboard", (int64)EInputSwitcherDisplayRule::OnlyKeyboard },
				{ "EInputSwitcherDisplayRule::Always", (int64)EInputSwitcherDisplayRule::Always },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Always.Name", "EInputSwitcherDisplayRule::Always" },
				{ "ModuleRelativePath", "Public/EInputSwitcherDisplayRule.h" },
				{ "OnlyGamepad.Name", "EInputSwitcherDisplayRule::OnlyGamepad" },
				{ "OnlyKeyboard.Name", "EInputSwitcherDisplayRule::OnlyKeyboard" },
				{ "Undefined.Name", "EInputSwitcherDisplayRule::Undefined" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
				nullptr,
				"EInputSwitcherDisplayRule",
				"EInputSwitcherDisplayRule",
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
