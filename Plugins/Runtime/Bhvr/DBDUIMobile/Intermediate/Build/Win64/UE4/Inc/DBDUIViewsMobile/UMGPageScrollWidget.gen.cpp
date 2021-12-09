// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGPageScrollWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPageScrollWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGPageScrollWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGPageScrollWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGScrollListPageButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPageScrollWidget::execHandlePageButtonClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_pageIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePageButtonClicked(Z_Param_pageIndex);
		P_NATIVE_END;
	}
	void UUMGPageScrollWidget::StaticRegisterNativesUUMGPageScrollWidget()
	{
		UClass* Class = UUMGPageScrollWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePageButtonClicked", &UUMGPageScrollWidget::execHandlePageButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics
	{
		struct UMGPageScrollWidget_eventHandlePageButtonClicked_Parms
		{
			int32 pageIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_pageIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::NewProp_pageIndex = { "pageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPageScrollWidget_eventHandlePageButtonClicked_Parms, pageIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::NewProp_pageIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPageScrollWidget, nullptr, "HandlePageButtonClicked", nullptr, nullptr, sizeof(UMGPageScrollWidget_eventHandlePageButtonClicked_Parms), Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPageScrollWidget_NoRegister()
	{
		return UUMGPageScrollWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPageScrollWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activeWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__activeWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activeWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__currentPageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__currentPageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__itemArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__itemArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__pageButtonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__pageButtonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonsPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonsPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContainerPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContainerPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPageChangeSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnPageChangeSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ButtonWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPageCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPageCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemGapDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemGapDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColumnCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RowCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ItemWidth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPageScrollWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPageScrollWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPageScrollWidget_HandlePageButtonClicked, "HandlePageButtonClicked" }, // 3540625031
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPageScrollWidget.h" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__activeWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__activeWidgets = { "_activeWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, _activeWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__activeWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__activeWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__activeWidgets_Inner = { "_activeWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMobileBaseUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__currentPageIndex_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__currentPageIndex = { "_currentPageIndex", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, _currentPageIndex), METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__currentPageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__currentPageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__itemArray_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__itemArray = { "_itemArray", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, _itemArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__itemArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__itemArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__itemArray_Inner = { "_itemArray", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__pageButtonWidgetClass_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__pageButtonWidgetClass = { "_pageButtonWidgetClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, _pageButtonWidgetClass), Z_Construct_UClass_UUMGScrollListPageButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__pageButtonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__pageButtonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonsPanel_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonsPanel = { "ButtonsPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, ButtonsPanel), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonsPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonsPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ContainerPanel_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ContainerPanel = { "ContainerPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, ContainerPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ContainerPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ContainerPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_OnPageChangeSound_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_OnPageChangeSound = { "OnPageChangeSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, OnPageChangeSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_OnPageChangeSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_OnPageChangeSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonWidth_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonWidth = { "ButtonWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, ButtonWidth), METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_TotalPageCount_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_TotalPageCount = { "TotalPageCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, TotalPageCount), METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_TotalPageCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_TotalPageCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemGapDistance_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemGapDistance = { "ItemGapDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, ItemGapDistance), METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemGapDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemGapDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ColumnCount_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ColumnCount = { "ColumnCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, ColumnCount), METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ColumnCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ColumnCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_RowCount_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_RowCount = { "RowCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, RowCount), METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_RowCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_RowCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemHeight_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemHeight = { "ItemHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, ItemHeight), METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemWidth_MetaData[] = {
		{ "Category", "UMGPageScrollWidget" },
		{ "ModuleRelativePath", "Public/UMGPageScrollWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemWidth = { "ItemWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPageScrollWidget, ItemWidth), METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemWidth_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPageScrollWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__activeWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__activeWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__currentPageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__itemArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__itemArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp__pageButtonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonsPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ContainerPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_OnPageChangeSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ButtonWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_TotalPageCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemGapDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ColumnCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_RowCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPageScrollWidget_Statics::NewProp_ItemWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPageScrollWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPageScrollWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPageScrollWidget_Statics::ClassParams = {
		&UUMGPageScrollWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPageScrollWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPageScrollWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPageScrollWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPageScrollWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPageScrollWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPageScrollWidget, 13788668);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGPageScrollWidget>()
	{
		return UUMGPageScrollWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPageScrollWidget(Z_Construct_UClass_UUMGPageScrollWidget, &UUMGPageScrollWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGPageScrollWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPageScrollWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
