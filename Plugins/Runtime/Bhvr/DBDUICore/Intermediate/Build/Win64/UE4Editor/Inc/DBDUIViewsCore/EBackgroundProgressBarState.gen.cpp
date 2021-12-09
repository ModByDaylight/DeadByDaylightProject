// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/EBackgroundProgressBarState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBackgroundProgressBarState() {}
// Cross Module References
	DBDUIVIEWSCORE_API UEnum* Z_Construct_UEnum_DBDUIViewsCore_EBackgroundProgressBarState();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static UEnum* EBackgroundProgressBarState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DBDUIViewsCore_EBackgroundProgressBarState, Z_Construct_UPackage__Script_DBDUIViewsCore(), TEXT("EBackgroundProgressBarState"));
		}
		return Singleton;
	}
	template<> DBDUIVIEWSCORE_API UEnum* StaticEnum<EBackgroundProgressBarState>()
	{
		return EBackgroundProgressBarState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBackgroundProgressBarState(EBackgroundProgressBarState_StaticEnum, TEXT("/Script/DBDUIViewsCore"), TEXT("EBackgroundProgressBarState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DBDUIViewsCore_EBackgroundProgressBarState_Hash() { return 957945585U; }
	UEnum* Z_Construct_UEnum_DBDUIViewsCore_EBackgroundProgressBarState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DBDUIViewsCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBackgroundProgressBarState"), 0, Get_Z_Construct_UEnum_DBDUIViewsCore_EBackgroundProgressBarState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBackgroundProgressBarState::Empty", (int64)EBackgroundProgressBarState::Empty },
				{ "EBackgroundProgressBarState::Quarter", (int64)EBackgroundProgressBarState::Quarter },
				{ "EBackgroundProgressBarState::Half", (int64)EBackgroundProgressBarState::Half },
				{ "EBackgroundProgressBarState::ThreeQuarters", (int64)EBackgroundProgressBarState::ThreeQuarters },
				{ "EBackgroundProgressBarState::Full", (int64)EBackgroundProgressBarState::Full },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Empty.Name", "EBackgroundProgressBarState::Empty" },
				{ "Full.Name", "EBackgroundProgressBarState::Full" },
				{ "Half.Name", "EBackgroundProgressBarState::Half" },
				{ "ModuleRelativePath", "Public/EBackgroundProgressBarState.h" },
				{ "Quarter.Name", "EBackgroundProgressBarState::Quarter" },
				{ "ThreeQuarters.Name", "EBackgroundProgressBarState::ThreeQuarters" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
				nullptr,
				"EBackgroundProgressBarState",
				"EBackgroundProgressBarState",
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
