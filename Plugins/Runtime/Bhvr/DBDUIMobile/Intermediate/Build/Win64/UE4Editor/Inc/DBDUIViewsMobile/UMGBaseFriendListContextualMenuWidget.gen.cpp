// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGBaseFriendListContextualMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBaseFriendListContextualMenuWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendButtonWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBaseFriendListContextualMenuWidget::execHandleActionTriggered)
	{
		P_GET_ENUM(EActionOnFriendType,Z_Param_actionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleActionTriggered(EActionOnFriendType(Z_Param_actionType));
		P_NATIVE_END;
	}
	void UUMGBaseFriendListContextualMenuWidget::StaticRegisterNativesUUMGBaseFriendListContextualMenuWidget()
	{
		UClass* Class = UUMGBaseFriendListContextualMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleActionTriggered", &UUMGBaseFriendListContextualMenuWidget::execHandleActionTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics
	{
		struct UMGBaseFriendListContextualMenuWidget_eventHandleActionTriggered_Parms
		{
			EActionOnFriendType actionType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_actionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_actionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::NewProp_actionType = { "actionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBaseFriendListContextualMenuWidget_eventHandleActionTriggered_Parms, actionType), Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::NewProp_actionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::NewProp_actionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::NewProp_actionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBaseFriendListContextualMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget, nullptr, "HandleActionTriggered", nullptr, nullptr, sizeof(UMGBaseFriendListContextualMenuWidget_eventHandleActionTriggered_Parms), Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_NoRegister()
	{
		return UUMGBaseFriendListContextualMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransitionOutAnimationSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransitionOutAnimationSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovePlayerFromPartyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemovePlayerFromPartyButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveFriendButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemoveFriendButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnmuteButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnmuteButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuteButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuteButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InviteToPartyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InviteToPartyButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBaseFriendListContextualMenuWidget_HandleActionTriggered, "HandleActionTriggered" }, // 2971888958
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBaseFriendListContextualMenuWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListContextualMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_TransitionOutAnimationSound_MetaData[] = {
		{ "Category", "UMGBaseFriendListContextualMenuWidget" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListContextualMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_TransitionOutAnimationSound = { "TransitionOutAnimationSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListContextualMenuWidget, TransitionOutAnimationSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_TransitionOutAnimationSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_TransitionOutAnimationSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemovePlayerFromPartyButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListContextualMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemovePlayerFromPartyButton = { "RemovePlayerFromPartyButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListContextualMenuWidget, RemovePlayerFromPartyButton), Z_Construct_UClass_UUMGFriendButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemovePlayerFromPartyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemovePlayerFromPartyButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemoveFriendButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListContextualMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemoveFriendButton = { "RemoveFriendButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListContextualMenuWidget, RemoveFriendButton), Z_Construct_UClass_UUMGFriendButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemoveFriendButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemoveFriendButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_UnmuteButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListContextualMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_UnmuteButton = { "UnmuteButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListContextualMenuWidget, UnmuteButton), Z_Construct_UClass_UUMGFriendButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_UnmuteButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_UnmuteButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_MuteButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListContextualMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_MuteButton = { "MuteButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListContextualMenuWidget, MuteButton), Z_Construct_UClass_UUMGFriendButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_MuteButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_MuteButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_InviteToPartyButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListContextualMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_InviteToPartyButton = { "InviteToPartyButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListContextualMenuWidget, InviteToPartyButton), Z_Construct_UClass_UUMGFriendButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_InviteToPartyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_InviteToPartyButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_TransitionOutAnimationSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemovePlayerFromPartyButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_RemoveFriendButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_UnmuteButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_MuteButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::NewProp_InviteToPartyButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBaseFriendListContextualMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::ClassParams = {
		&UUMGBaseFriendListContextualMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBaseFriendListContextualMenuWidget, 1663252045);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGBaseFriendListContextualMenuWidget>()
	{
		return UUMGBaseFriendListContextualMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBaseFriendListContextualMenuWidget(Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget, &UUMGBaseFriendListContextualMenuWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGBaseFriendListContextualMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBaseFriendListContextualMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
