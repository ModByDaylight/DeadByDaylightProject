// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGAtlantaCustomMatchLobbyScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaCustomMatchLobbyScreen() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaCustomMatchLobbyScreen::execHandleEditConfigButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEditConfigButtonClicked();
		P_NATIVE_END;
	}
	void UUMGAtlantaCustomMatchLobbyScreen::StaticRegisterNativesUUMGAtlantaCustomMatchLobbyScreen()
	{
		UClass* Class = UUMGAtlantaCustomMatchLobbyScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleEditConfigButtonClicked", &UUMGAtlantaCustomMatchLobbyScreen::execHandleEditConfigButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaCustomMatchLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen, nullptr, "HandleEditConfigButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_NoRegister()
	{
		return UUMGAtlantaCustomMatchLobbyScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchRulesTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatchRulesTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomMatchTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomMatchTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RulesBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RulesBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaCustomMatchLobbyScreen_HandleEditConfigButtonClicked, "HandleEditConfigButtonClicked" }, // 773512771
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaCustomMatchLobbyScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCustomMatchLobbyScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_MatchRulesTitle_MetaData[] = {
		{ "Category", "UMGAtlantaCustomMatchLobbyScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCustomMatchLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_MatchRulesTitle = { "MatchRulesTitle", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaCustomMatchLobbyScreen, MatchRulesTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_MatchRulesTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_MatchRulesTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_CustomMatchTitle_MetaData[] = {
		{ "Category", "UMGAtlantaCustomMatchLobbyScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCustomMatchLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_CustomMatchTitle = { "CustomMatchTitle", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaCustomMatchLobbyScreen, CustomMatchTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_CustomMatchTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_CustomMatchTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_RulesBox_MetaData[] = {
		{ "Category", "UMGAtlantaCustomMatchLobbyScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCustomMatchLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_RulesBox = { "RulesBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaCustomMatchLobbyScreen, RulesBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_RulesBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_RulesBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_EditButton_MetaData[] = {
		{ "Category", "UMGAtlantaCustomMatchLobbyScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaCustomMatchLobbyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_EditButton = { "EditButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaCustomMatchLobbyScreen, EditButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_EditButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_EditButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_MatchRulesTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_CustomMatchTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_RulesBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::NewProp_EditButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaCustomMatchLobbyScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::ClassParams = {
		&UUMGAtlantaCustomMatchLobbyScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaCustomMatchLobbyScreen, 1902287145);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGAtlantaCustomMatchLobbyScreen>()
	{
		return UUMGAtlantaCustomMatchLobbyScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaCustomMatchLobbyScreen(Z_Construct_UClass_UUMGAtlantaCustomMatchLobbyScreen, &UUMGAtlantaCustomMatchLobbyScreen::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGAtlantaCustomMatchLobbyScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaCustomMatchLobbyScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
