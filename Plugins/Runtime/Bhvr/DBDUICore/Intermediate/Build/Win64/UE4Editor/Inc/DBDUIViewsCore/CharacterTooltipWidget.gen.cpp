// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CharacterTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterTooltipWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCharacterTooltipWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCharacterTooltipWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterTooltipViewData();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterTooltipWidget::execSetDifficulty)
	{
		P_GET_ENUM(ECharacterDifficulty,Z_Param_difficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDifficulty(ECharacterDifficulty(Z_Param_difficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterTooltipWidget::execSetLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_level);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevel(Z_Param_level);
		P_NATIVE_END;
	}
	static FName NAME_UCharacterTooltipWidget_SetTooltipData = FName(TEXT("SetTooltipData"));
	void UCharacterTooltipWidget::SetTooltipData(FCharacterTooltipViewData const& characterViewData)
	{
		CharacterTooltipWidget_eventSetTooltipData_Parms Parms;
		Parms.characterViewData=characterViewData;
		ProcessEvent(FindFunctionChecked(NAME_UCharacterTooltipWidget_SetTooltipData),&Parms);
	}
	void UCharacterTooltipWidget::StaticRegisterNativesUCharacterTooltipWidget()
	{
		UClass* Class = UCharacterTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDifficulty", &UCharacterTooltipWidget::execSetDifficulty },
			{ "SetLevel", &UCharacterTooltipWidget::execSetLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics
	{
		struct CharacterTooltipWidget_eventSetDifficulty_Parms
		{
			ECharacterDifficulty difficulty;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_difficulty;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_difficulty_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::NewProp_difficulty = { "difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterTooltipWidget_eventSetDifficulty_Parms, difficulty), Z_Construct_UEnum_DBDSharedTypes_ECharacterDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::NewProp_difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::NewProp_difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::NewProp_difficulty_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterTooltipWidget, nullptr, "SetDifficulty", nullptr, nullptr, sizeof(CharacterTooltipWidget_eventSetDifficulty_Parms), Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics
	{
		struct CharacterTooltipWidget_eventSetLevel_Parms
		{
			int32 level;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterTooltipWidget_eventSetLevel_Parms, level), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::NewProp_level,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterTooltipWidget, nullptr, "SetLevel", nullptr, nullptr, sizeof(CharacterTooltipWidget_eventSetLevel_Parms), Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterViewData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterViewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::NewProp_characterViewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::NewProp_characterViewData = { "characterViewData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CharacterTooltipWidget_eventSetTooltipData_Parms, characterViewData), Z_Construct_UScriptStruct_FCharacterTooltipViewData, METADATA_PARAMS(Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::NewProp_characterViewData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::NewProp_characterViewData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::NewProp_characterViewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterTooltipWidget, nullptr, "SetTooltipData", nullptr, nullptr, sizeof(CharacterTooltipWidget_eventSetTooltipData_Parms), Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterTooltipWidget_NoRegister()
	{
		return UCharacterTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyRTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DifficultyRTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarketTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MarketTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelTB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstructionTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstructionTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterTooltipWidget_SetDifficulty, "SetDifficulty" }, // 2359734239
		{ &Z_Construct_UFunction_UCharacterTooltipWidget_SetLevel, "SetLevel" }, // 433017508
		{ &Z_Construct_UFunction_UCharacterTooltipWidget_SetTooltipData, "SetTooltipData" }, // 3283075713
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/CharacterTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_DifficultyRTB_MetaData[] = {
		{ "Category", "CharacterTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_DifficultyRTB = { "DifficultyRTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterTooltipWidget, DifficultyRTB), Z_Construct_UClass_UDBDRichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_DifficultyRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_DifficultyRTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_MarketTB_MetaData[] = {
		{ "Category", "CharacterTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_MarketTB = { "MarketTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterTooltipWidget, MarketTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_MarketTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_MarketTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_LevelTB_MetaData[] = {
		{ "Category", "CharacterTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_LevelTB = { "LevelTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterTooltipWidget, LevelTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_LevelTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_LevelTB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_InstructionTB_MetaData[] = {
		{ "Category", "CharacterTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_InstructionTB = { "InstructionTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterTooltipWidget, InstructionTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_InstructionTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_InstructionTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_DifficultyRTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_MarketTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_LevelTB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterTooltipWidget_Statics::NewProp_InstructionTB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterTooltipWidget_Statics::ClassParams = {
		&UCharacterTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTooltipWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterTooltipWidget, 3106263694);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCharacterTooltipWidget>()
	{
		return UCharacterTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterTooltipWidget(Z_Construct_UClass_UCharacterTooltipWidget, &UCharacterTooltipWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCharacterTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
