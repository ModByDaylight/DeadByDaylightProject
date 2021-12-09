// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGFriendElementWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGFriendElementWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendElementWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendElementWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListElement();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGFriendElementWidget::execHandleFavoriteButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleFavoriteButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGFriendElementWidget::execHandleSelectionButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSelectionButton();
		P_NATIVE_END;
	}
	void UUMGFriendElementWidget::StaticRegisterNativesUUMGFriendElementWidget()
	{
		UClass* Class = UUMGFriendElementWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleFavoriteButtonClicked", &UUMGFriendElementWidget::execHandleFavoriteButtonClicked },
			{ "HandleSelectionButton", &UUMGFriendElementWidget::execHandleSelectionButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGFriendElementWidget_HandleFavoriteButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFriendElementWidget_HandleFavoriteButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGFriendElementWidget_HandleFavoriteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGFriendElementWidget, nullptr, "HandleFavoriteButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGFriendElementWidget_HandleFavoriteButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFriendElementWidget_HandleFavoriteButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGFriendElementWidget_HandleFavoriteButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGFriendElementWidget_HandleFavoriteButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGFriendElementWidget_HandleSelectionButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFriendElementWidget_HandleSelectionButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGFriendElementWidget_HandleSelectionButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGFriendElementWidget, nullptr, "HandleSelectionButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGFriendElementWidget_HandleSelectionButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFriendElementWidget_HandleSelectionButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGFriendElementWidget_HandleSelectionButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGFriendElementWidget_HandleSelectionButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGFriendElementWidget_NoRegister()
	{
		return UUMGFriendElementWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGFriendElementWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MutedBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MutedBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavoriteBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FavoriteBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnFavoriteBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnFavoriteBrush;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedPicture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedPicture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectionImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavoriteButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FavoriteButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavoriteSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FavoriteSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGFriendElementWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseFriendListElement,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGFriendElementWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGFriendElementWidget_HandleFavoriteButtonClicked, "HandleFavoriteButtonClicked" }, // 3104158889
		{ &Z_Construct_UFunction_UUMGFriendElementWidget_HandleSelectionButton, "HandleSelectionButton" }, // 2150291968
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendElementWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGFriendElementWidget.h" },
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_MutedBrush_MetaData[] = {
		{ "Category", "UMGFriendElementWidget" },
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_MutedBrush = { "MutedBrush", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendElementWidget, MutedBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_MutedBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_MutedBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteBrush_MetaData[] = {
		{ "Category", "UMGFriendElementWidget" },
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteBrush = { "FavoriteBrush", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendElementWidget, FavoriteBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_UnFavoriteBrush_MetaData[] = {
		{ "Category", "UMGFriendElementWidget" },
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_UnFavoriteBrush = { "UnFavoriteBrush", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendElementWidget, UnFavoriteBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_UnFavoriteBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_UnFavoriteBrush_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FriendIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FriendIcon = { "FriendIcon", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendElementWidget, FriendIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FriendIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FriendIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectedPicture_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectedPicture = { "SelectedPicture", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendElementWidget, SelectedPicture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectedPicture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectedPicture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectionImage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectionImage = { "SelectionImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendElementWidget, SelectionImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectionImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectionImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteButton = { "FavoriteButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendElementWidget, FavoriteButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteSlot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteSlot = { "FavoriteSlot", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendElementWidget, FavoriteSlot), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGFriendElementWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_MutedBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_UnFavoriteBrush,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FriendIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectedPicture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_SelectionImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendElementWidget_Statics::NewProp_FavoriteSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGFriendElementWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGFriendElementWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGFriendElementWidget_Statics::ClassParams = {
		&UUMGFriendElementWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGFriendElementWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGFriendElementWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendElementWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGFriendElementWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGFriendElementWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGFriendElementWidget, 1954155198);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGFriendElementWidget>()
	{
		return UUMGFriendElementWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGFriendElementWidget(Z_Construct_UClass_UUMGFriendElementWidget, &UUMGFriendElementWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGFriendElementWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGFriendElementWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
