// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreGameManualCategoryButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreGameManualCategoryButton() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGameManualCategoryButton_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreGameManualCategoryButton();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreGameManualCategoryButton::execSetText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NewTitle);
		P_GET_PROPERTY(FTextProperty,Z_Param_NewDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_NewTitle,Z_Param_NewDescription);
		P_NATIVE_END;
	}
	void UCoreGameManualCategoryButton::StaticRegisterNativesUCoreGameManualCategoryButton()
	{
		UClass* Class = UCoreGameManualCategoryButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetText", &UCoreGameManualCategoryButton::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics
	{
		struct CoreGameManualCategoryButton_eventSetText_Parms
		{
			FText NewTitle;
			FText NewDescription;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewTitle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewDescription = { "NewDescription", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGameManualCategoryButton_eventSetText_Parms, NewDescription), METADATA_PARAMS(Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewTitle = { "NewTitle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreGameManualCategoryButton_eventSetText_Parms, NewTitle), METADATA_PARAMS(Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewTitle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::NewProp_NewTitle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreGameManualCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreGameManualCategoryButton, nullptr, "SetText", nullptr, nullptr, sizeof(CoreGameManualCategoryButton_eventSetText_Parms), Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreGameManualCategoryButton_NoRegister()
	{
		return UCoreGameManualCategoryButton::StaticClass();
	}
	struct Z_Construct_UClass_UCoreGameManualCategoryButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreGameManualCategoryButton_SetText, "SetText" }, // 4202732848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreGameManualCategoryButton.h" },
		{ "ModuleRelativePath", "Public/CoreGameManualCategoryButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_BackgroundTexture_MetaData[] = {
		{ "Category", "CoreGameManualCategoryButton" },
		{ "ModuleRelativePath", "Public/CoreGameManualCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_BackgroundTexture = { "BackgroundTexture", nullptr, (EPropertyFlags)0x0010000002000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGameManualCategoryButton, BackgroundTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_BackgroundTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_BackgroundTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_IconTexture_MetaData[] = {
		{ "Category", "CoreGameManualCategoryButton" },
		{ "ModuleRelativePath", "Public/CoreGameManualCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_IconTexture = { "IconTexture", nullptr, (EPropertyFlags)0x0010000002000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGameManualCategoryButton, IconTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_IconTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_IconTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "CoreGameManualCategoryButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGameManualCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGameManualCategoryButton, Background), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Background_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "CoreGameManualCategoryButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGameManualCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGameManualCategoryButton, Icon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "CoreGameManualCategoryButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGameManualCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGameManualCategoryButton, Description), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "CoreGameManualCategoryButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreGameManualCategoryButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreGameManualCategoryButton, Title), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_BackgroundTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_IconTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Background,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::NewProp_Title,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreGameManualCategoryButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::ClassParams = {
		&UCoreGameManualCategoryButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreGameManualCategoryButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreGameManualCategoryButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreGameManualCategoryButton, 2861688945);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreGameManualCategoryButton>()
	{
		return UCoreGameManualCategoryButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreGameManualCategoryButton(Z_Construct_UClass_UCoreGameManualCategoryButton, &UCoreGameManualCategoryButton::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreGameManualCategoryButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreGameManualCategoryButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
