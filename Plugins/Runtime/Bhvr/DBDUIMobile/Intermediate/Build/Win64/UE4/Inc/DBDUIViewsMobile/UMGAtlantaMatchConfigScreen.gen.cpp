// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGAtlantaMatchConfigScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaMatchConfigScreen() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGAtlantaMatchConfigScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMatchConfigTabsDataAsset_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGAtlantaMatchConfigPageScroll_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaMatchConfigScreen::execHandleBackButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBackButtonClicked();
		P_NATIVE_END;
	}
	void UUMGAtlantaMatchConfigScreen::StaticRegisterNativesUUMGAtlantaMatchConfigScreen()
	{
		UClass* Class = UUMGAtlantaMatchConfigScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBackButtonClicked", &UUMGAtlantaMatchConfigScreen::execHandleBackButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaMatchConfigScreen, nullptr, "HandleBackButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_NoRegister()
	{
		return UUMGAtlantaMatchConfigScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabsHorizontalPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TabsHorizontalPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabsVerticalPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TabsVerticalPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigTabSeparation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BigTabSeparation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallTabSeparation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SmallTabSeparation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabsDataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabsDataAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedTabTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedTabTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchConfigTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatchConfigTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotsTabsBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotsTabsBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TabsBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TabsBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchConfigPageScroll_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatchConfigPageScroll;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaMatchConfigScreen_HandleBackButtonClicked, "HandleBackButtonClicked" }, // 2448072263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaMatchConfigScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsHorizontalPadding_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsHorizontalPadding = { "TabsHorizontalPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, TabsHorizontalPadding), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsHorizontalPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsHorizontalPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsVerticalPadding_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsVerticalPadding = { "TabsVerticalPadding", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, TabsVerticalPadding), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsVerticalPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsVerticalPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BigTabSeparation_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BigTabSeparation = { "BigTabSeparation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, BigTabSeparation), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BigTabSeparation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BigTabSeparation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SmallTabSeparation_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SmallTabSeparation = { "SmallTabSeparation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, SmallTabSeparation), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SmallTabSeparation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SmallTabSeparation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsDataAsset_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsDataAsset = { "TabsDataAsset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, TabsDataAsset), Z_Construct_UClass_UMatchConfigTabsDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsDataAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SelectedTabTitle_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SelectedTabTitle = { "SelectedTabTitle", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, SelectedTabTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SelectedTabTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SelectedTabTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_InventoryTitle_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_InventoryTitle = { "InventoryTitle", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, InventoryTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_InventoryTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_InventoryTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigTitle_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigTitle = { "MatchConfigTitle", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, MatchConfigTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BackButton_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, BackButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BackButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BotsTabsBox_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BotsTabsBox = { "BotsTabsBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, BotsTabsBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BotsTabsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BotsTabsBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsBox_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsBox = { "TabsBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, TabsBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigPageScroll_MetaData[] = {
		{ "Category", "UMGAtlantaMatchConfigScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaMatchConfigScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigPageScroll = { "MatchConfigPageScroll", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaMatchConfigScreen, MatchConfigPageScroll), Z_Construct_UClass_UUMGAtlantaMatchConfigPageScroll_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigPageScroll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigPageScroll_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsHorizontalPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsVerticalPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BigTabSeparation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SmallTabSeparation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsDataAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_SelectedTabTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_InventoryTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BackButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_BotsTabsBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_TabsBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::NewProp_MatchConfigPageScroll,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaMatchConfigScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::ClassParams = {
		&UUMGAtlantaMatchConfigScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaMatchConfigScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaMatchConfigScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaMatchConfigScreen, 3175118447);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGAtlantaMatchConfigScreen>()
	{
		return UUMGAtlantaMatchConfigScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaMatchConfigScreen(Z_Construct_UClass_UUMGAtlantaMatchConfigScreen, &UUMGAtlantaMatchConfigScreen::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGAtlantaMatchConfigScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaMatchConfigScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
