// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITween/Public/EEasingType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEasingType() {}
// Cross Module References
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
	UPackage* Z_Construct_UPackage__Script_UITween();
// End Cross Module References
	static UEnum* EEasingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UITween_EEasingType, Z_Construct_UPackage__Script_UITween(), TEXT("EEasingType"));
		}
		return Singleton;
	}
	template<> UITWEEN_API UEnum* StaticEnum<EEasingType>()
	{
		return EEasingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEasingType(EEasingType_StaticEnum, TEXT("/Script/UITween"), TEXT("EEasingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UITween_EEasingType_Hash() { return 4064728839U; }
	UEnum* Z_Construct_UEnum_UITween_EEasingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UITween();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEasingType"), 0, Get_Z_Construct_UEnum_UITween_EEasingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEasingType::Linear", (int64)EEasingType::Linear },
				{ "EEasingType::SineIn", (int64)EEasingType::SineIn },
				{ "EEasingType::SineOut", (int64)EEasingType::SineOut },
				{ "EEasingType::SineInOut", (int64)EEasingType::SineInOut },
				{ "EEasingType::QuadIn", (int64)EEasingType::QuadIn },
				{ "EEasingType::QuadOut", (int64)EEasingType::QuadOut },
				{ "EEasingType::QuadInOut", (int64)EEasingType::QuadInOut },
				{ "EEasingType::CubicIn", (int64)EEasingType::CubicIn },
				{ "EEasingType::CubicOut", (int64)EEasingType::CubicOut },
				{ "EEasingType::CubicInOut", (int64)EEasingType::CubicInOut },
				{ "EEasingType::QuartIn", (int64)EEasingType::QuartIn },
				{ "EEasingType::QuartOut", (int64)EEasingType::QuartOut },
				{ "EEasingType::QuartInOut", (int64)EEasingType::QuartInOut },
				{ "EEasingType::QuintIn", (int64)EEasingType::QuintIn },
				{ "EEasingType::QuintOut", (int64)EEasingType::QuintOut },
				{ "EEasingType::QuintInOut", (int64)EEasingType::QuintInOut },
				{ "EEasingType::ExpoIn", (int64)EEasingType::ExpoIn },
				{ "EEasingType::ExpoOut", (int64)EEasingType::ExpoOut },
				{ "EEasingType::ExpoInOut", (int64)EEasingType::ExpoInOut },
				{ "EEasingType::CircIn", (int64)EEasingType::CircIn },
				{ "EEasingType::CircOut", (int64)EEasingType::CircOut },
				{ "EEasingType::CircInOut", (int64)EEasingType::CircInOut },
				{ "EEasingType::ElasticIn", (int64)EEasingType::ElasticIn },
				{ "EEasingType::ElasticOut", (int64)EEasingType::ElasticOut },
				{ "EEasingType::ElasticInOut", (int64)EEasingType::ElasticInOut },
				{ "EEasingType::BackIn", (int64)EEasingType::BackIn },
				{ "EEasingType::BackOut", (int64)EEasingType::BackOut },
				{ "EEasingType::BackInOut", (int64)EEasingType::BackInOut },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BackIn.Name", "EEasingType::BackIn" },
				{ "BackInOut.Name", "EEasingType::BackInOut" },
				{ "BackOut.Name", "EEasingType::BackOut" },
				{ "BlueprintType", "true" },
				{ "CircIn.Name", "EEasingType::CircIn" },
				{ "CircInOut.Name", "EEasingType::CircInOut" },
				{ "CircOut.Name", "EEasingType::CircOut" },
				{ "CubicIn.Name", "EEasingType::CubicIn" },
				{ "CubicInOut.Name", "EEasingType::CubicInOut" },
				{ "CubicOut.Name", "EEasingType::CubicOut" },
				{ "ElasticIn.Name", "EEasingType::ElasticIn" },
				{ "ElasticInOut.Name", "EEasingType::ElasticInOut" },
				{ "ElasticOut.Name", "EEasingType::ElasticOut" },
				{ "ExpoIn.Name", "EEasingType::ExpoIn" },
				{ "ExpoInOut.Name", "EEasingType::ExpoInOut" },
				{ "ExpoOut.Name", "EEasingType::ExpoOut" },
				{ "Linear.Name", "EEasingType::Linear" },
				{ "ModuleRelativePath", "Public/EEasingType.h" },
				{ "QuadIn.Name", "EEasingType::QuadIn" },
				{ "QuadInOut.Name", "EEasingType::QuadInOut" },
				{ "QuadOut.Name", "EEasingType::QuadOut" },
				{ "QuartIn.Name", "EEasingType::QuartIn" },
				{ "QuartInOut.Name", "EEasingType::QuartInOut" },
				{ "QuartOut.Name", "EEasingType::QuartOut" },
				{ "QuintIn.Name", "EEasingType::QuintIn" },
				{ "QuintInOut.Name", "EEasingType::QuintInOut" },
				{ "QuintOut.Name", "EEasingType::QuintOut" },
				{ "SineIn.Name", "EEasingType::SineIn" },
				{ "SineInOut.Name", "EEasingType::SineInOut" },
				{ "SineOut.Name", "EEasingType::SineOut" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UITween,
				nullptr,
				"EEasingType",
				"EEasingType",
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
