// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGBaseFriendListElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBaseFriendListElement() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListElement();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFriendUIData();
	UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBaseFriendListElement::execTriggerActionOnThisFriend)
	{
		P_GET_ENUM(EActionOnFriendType,Z_Param_actionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerActionOnThisFriend(EActionOnFriendType(Z_Param_actionType));
		P_NATIVE_END;
	}
	void UUMGBaseFriendListElement::StaticRegisterNativesUUMGBaseFriendListElement()
	{
		UClass* Class = UUMGBaseFriendListElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerActionOnThisFriend", &UUMGBaseFriendListElement::execTriggerActionOnThisFriend },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics
	{
		struct UMGBaseFriendListElement_eventTriggerActionOnThisFriend_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::NewProp_actionType = { "actionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBaseFriendListElement_eventTriggerActionOnThisFriend_Parms, actionType), Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::NewProp_actionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::NewProp_actionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::NewProp_actionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBaseFriendListElement, nullptr, "TriggerActionOnThisFriend", nullptr, nullptr, sizeof(UMGBaseFriendListElement_eventTriggerActionOnThisFriend_Parms), Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister()
	{
		return UUMGBaseFriendListElement::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBaseFriendListElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendUIStatusDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendUIStatusDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedFriendData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cachedFriendData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextualMenuPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContextualMenuPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSelectionBaseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemSelectionBaseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionHighlight_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectionHighlight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusPicture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusPicture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBaseFriendListElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBaseFriendListElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBaseFriendListElement_TriggerActionOnThisFriend, "TriggerActionOnThisFriend" }, // 386685883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBaseFriendListElement.h" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendUIStatusDataTable_MetaData[] = {
		{ "Category", "UMGBaseFriendListElement" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendUIStatusDataTable = { "FriendUIStatusDataTable", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListElement, FriendUIStatusDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendUIStatusDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendUIStatusDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp__cachedFriendData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp__cachedFriendData = { "_cachedFriendData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListElement, _cachedFriendData), Z_Construct_UScriptStruct_FAtlantaFriendUIData, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp__cachedFriendData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp__cachedFriendData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ContextualMenuPosition_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ContextualMenuPosition = { "ContextualMenuPosition", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListElement, ContextualMenuPosition), Z_Construct_UClass_UNamedSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ContextualMenuPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ContextualMenuPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ItemSelectionBaseButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ItemSelectionBaseButton = { "ItemSelectionBaseButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListElement, ItemSelectionBaseButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ItemSelectionBaseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ItemSelectionBaseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_SelectionHighlight_MetaData[] = {
		{ "Category", "UMGBaseFriendListElement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_SelectionHighlight = { "SelectionHighlight", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListElement, SelectionHighlight), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_SelectionHighlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_SelectionHighlight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendStatus_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendStatus = { "FriendStatus", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListElement, FriendStatus), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendName = { "FriendName", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListElement, FriendName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_StatusPicture_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseFriendListElement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_StatusPicture = { "StatusPicture", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseFriendListElement, StatusPicture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_StatusPicture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_StatusPicture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBaseFriendListElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendUIStatusDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp__cachedFriendData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ContextualMenuPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_ItemSelectionBaseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_SelectionHighlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_FriendName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseFriendListElement_Statics::NewProp_StatusPicture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBaseFriendListElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBaseFriendListElement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBaseFriendListElement_Statics::ClassParams = {
		&UUMGBaseFriendListElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBaseFriendListElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseFriendListElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBaseFriendListElement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBaseFriendListElement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBaseFriendListElement, 960326024);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGBaseFriendListElement>()
	{
		return UUMGBaseFriendListElement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBaseFriendListElement(Z_Construct_UClass_UUMGBaseFriendListElement, &UUMGBaseFriendListElement::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGBaseFriendListElement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBaseFriendListElement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
