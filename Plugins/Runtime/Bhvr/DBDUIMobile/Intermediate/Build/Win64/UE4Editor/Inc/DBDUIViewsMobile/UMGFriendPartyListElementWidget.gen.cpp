// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGFriendPartyListElementWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGFriendPartyListElementWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendPartyListElementWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendPartyListElementWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendElementWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGFriendPartyListElementWidget::execHandleCancelInviteButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCancelInviteButtonClicked();
		P_NATIVE_END;
	}
	void UUMGFriendPartyListElementWidget::StaticRegisterNativesUUMGFriendPartyListElementWidget()
	{
		UClass* Class = UUMGFriendPartyListElementWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCancelInviteButtonClicked", &UUMGFriendPartyListElementWidget::execHandleCancelInviteButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGFriendPartyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGFriendPartyListElementWidget, nullptr, "HandleCancelInviteButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGFriendPartyListElementWidget_NoRegister()
	{
		return UUMGFriendPartyListElementWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconNotReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconNotReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyStatusImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyStatusImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CancelInviteButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CancelInviteButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonOrStatusSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonOrStatusSwitcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGFriendElementWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGFriendPartyListElementWidget_HandleCancelInviteButtonClicked, "HandleCancelInviteButtonClicked" }, // 1729871133
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGFriendPartyListElementWidget.h" },
		{ "ModuleRelativePath", "Public/UMGFriendPartyListElementWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconReady_MetaData[] = {
		{ "Category", "UMGFriendPartyListElementWidget" },
		{ "ModuleRelativePath", "Public/UMGFriendPartyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconReady = { "IconReady", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendPartyListElementWidget, IconReady), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconNotReady_MetaData[] = {
		{ "Category", "UMGFriendPartyListElementWidget" },
		{ "ModuleRelativePath", "Public/UMGFriendPartyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconNotReady = { "IconNotReady", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendPartyListElementWidget, IconNotReady), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconNotReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconNotReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_PartyStatusImage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendPartyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_PartyStatusImage = { "PartyStatusImage", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendPartyListElementWidget, PartyStatusImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_PartyStatusImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_PartyStatusImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_CancelInviteButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendPartyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_CancelInviteButton = { "CancelInviteButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendPartyListElementWidget, CancelInviteButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_CancelInviteButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_CancelInviteButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_ButtonOrStatusSwitcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFriendPartyListElementWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_ButtonOrStatusSwitcher = { "ButtonOrStatusSwitcher", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFriendPartyListElementWidget, ButtonOrStatusSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_ButtonOrStatusSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_ButtonOrStatusSwitcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_IconNotReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_PartyStatusImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_CancelInviteButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::NewProp_ButtonOrStatusSwitcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGFriendPartyListElementWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::ClassParams = {
		&UUMGFriendPartyListElementWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGFriendPartyListElementWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGFriendPartyListElementWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGFriendPartyListElementWidget, 1943677705);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGFriendPartyListElementWidget>()
	{
		return UUMGFriendPartyListElementWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGFriendPartyListElementWidget(Z_Construct_UClass_UUMGFriendPartyListElementWidget, &UUMGFriendPartyListElementWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGFriendPartyListElementWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGFriendPartyListElementWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
