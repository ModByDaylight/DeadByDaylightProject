// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreExternalEffectsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreExternalEffectsWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreExternalEffectsWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreExternalEffectsWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseHudWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	UMG_API UClass* Z_Construct_UClass_USpacer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UAddonViewInterface_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreAddonWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FAddonViewData();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UPerkViewInterface_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePerkWidget_NoRegister();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FPerkViewData();
	UMG_API UClass* Z_Construct_UClass_UGridPanel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UExternalEffectsViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreExternalEffectsWidget::execHideExternalAddon)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_addonId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideExternalAddon(Z_Param_Out_addonId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreExternalEffectsWidget::execHideExternalPerk)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_perkId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideExternalPerk(Z_Param_Out_perkId);
		P_NATIVE_END;
	}
	void UCoreExternalEffectsWidget::StaticRegisterNativesUCoreExternalEffectsWidget()
	{
		UClass* Class = UCoreExternalEffectsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideExternalAddon", &UCoreExternalEffectsWidget::execHideExternalAddon },
			{ "HideExternalPerk", &UCoreExternalEffectsWidget::execHideExternalPerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics
	{
		struct CoreExternalEffectsWidget_eventHideExternalAddon_Parms
		{
			FName addonId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_addonId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_addonId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::NewProp_addonId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::NewProp_addonId = { "addonId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreExternalEffectsWidget_eventHideExternalAddon_Parms, addonId), METADATA_PARAMS(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::NewProp_addonId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::NewProp_addonId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::NewProp_addonId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreExternalEffectsWidget, nullptr, "HideExternalAddon", nullptr, nullptr, sizeof(CoreExternalEffectsWidget_eventHideExternalAddon_Parms), Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics
	{
		struct CoreExternalEffectsWidget_eventHideExternalPerk_Parms
		{
			FName perkId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_perkId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_perkId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::NewProp_perkId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::NewProp_perkId = { "perkId", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreExternalEffectsWidget_eventHideExternalPerk_Parms, perkId), METADATA_PARAMS(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::NewProp_perkId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::NewProp_perkId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::NewProp_perkId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreExternalEffectsWidget, nullptr, "HideExternalPerk", nullptr, nullptr, sizeof(CoreExternalEffectsWidget_eventHideExternalPerk_Parms), Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreExternalEffectsWidget_NoRegister()
	{
		return UCoreExternalEffectsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreExternalEffectsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spacerPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__spacerPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spacerPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spacerWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__spacerWidgets;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__spacerWidgets_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spacerWidgets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timerHandleMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__timerHandleMap;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__timerHandleMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timerHandleMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonViewInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__addonViewInterfaces;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__addonViewInterfaces_Key_KeyProp;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__addonViewInterfaces_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__addonPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__addonPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__addonWidgets;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__addonWidgets_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__addonWidgets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__addonData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__addonData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkViewInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__perkViewInterfaces;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__perkViewInterfaces_Key_KeyProp;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp__perkViewInterfaces_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__perkPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perkPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__perkWidgets;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__perkWidgets_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__perkWidgets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__perkData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__perkData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AddonWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PerkWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingBetweenPerksAndAddons_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpacingBetweenPerksAndAddons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingAddons_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpacingAddons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingPerks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpacingPerks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpacingBetweenRows_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpacingBetweenRows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonScaleRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AddonScaleRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridSlotSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GridSlotSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseHudWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalAddon, "HideExternalAddon" }, // 4059168963
		{ &Z_Construct_UFunction_UCoreExternalEffectsWidget_HideExternalPerk, "HideExternalPerk" }, // 4261702589
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreExternalEffectsWidget.h" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerPool = { "_spacerPool", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _spacerPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerPool_Inner = { "_spacerPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USpacer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerWidgets = { "_spacerWidgets", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _spacerWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerWidgets_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerWidgets_Key_KeyProp = { "_spacerWidgets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerWidgets_ValueProp = { "_spacerWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_USpacer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__timerHandleMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__timerHandleMap = { "_timerHandleMap", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _timerHandleMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__timerHandleMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__timerHandleMap_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__timerHandleMap_Key_KeyProp = { "_timerHandleMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__timerHandleMap_ValueProp = { "_timerHandleMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonViewInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonViewInterfaces = { "_addonViewInterfaces", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _addonViewInterfaces), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonViewInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonViewInterfaces_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonViewInterfaces_Key_KeyProp = { "_addonViewInterfaces_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonViewInterfaces_ValueProp = { "_addonViewInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAddonViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonPool = { "_addonPool", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _addonPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonPool_Inner = { "_addonPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCoreAddonWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonWidgets = { "_addonWidgets", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _addonWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonWidgets_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonWidgets_Key_KeyProp = { "_addonWidgets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonWidgets_ValueProp = { "_addonWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCoreAddonWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonData = { "_addonData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _addonData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonData_Inner = { "_addonData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAddonViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkViewInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkViewInterfaces = { "_perkViewInterfaces", nullptr, (EPropertyFlags)0x0044000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _perkViewInterfaces), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkViewInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkViewInterfaces_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkViewInterfaces_Key_KeyProp = { "_perkViewInterfaces_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkViewInterfaces_ValueProp = { "_perkViewInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UPerkViewInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkPool_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkPool = { "_perkPool", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _perkPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkPool_Inner = { "_perkPool", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCorePerkWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkWidgets = { "_perkWidgets", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _perkWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkWidgets_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkWidgets_Key_KeyProp = { "_perkWidgets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkWidgets_ValueProp = { "_perkWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCorePerkWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkData = { "_perkData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, _perkData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkData_Inner = { "_perkData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPerkViewData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_Container_MetaData[] = {
		{ "Category", "CoreExternalEffectsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x002008000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, Container), Z_Construct_UClass_UGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_Container_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_Container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonWidgetClass_MetaData[] = {
		{ "Category", "CoreExternalEffectsWidget" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonWidgetClass = { "AddonWidgetClass", nullptr, (EPropertyFlags)0x0024080002010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, AddonWidgetClass), Z_Construct_UClass_UCoreAddonWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_PerkWidgetClass_MetaData[] = {
		{ "Category", "CoreExternalEffectsWidget" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_PerkWidgetClass = { "PerkWidgetClass", nullptr, (EPropertyFlags)0x0024080002010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, PerkWidgetClass), Z_Construct_UClass_UCorePerkWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_PerkWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_PerkWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenPerksAndAddons_MetaData[] = {
		{ "Category", "CoreExternalEffectsWidget" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenPerksAndAddons = { "SpacingBetweenPerksAndAddons", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, SpacingBetweenPerksAndAddons), METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenPerksAndAddons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenPerksAndAddons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingAddons_MetaData[] = {
		{ "Category", "CoreExternalEffectsWidget" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingAddons = { "SpacingAddons", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, SpacingAddons), METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingAddons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingAddons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingPerks_MetaData[] = {
		{ "Category", "CoreExternalEffectsWidget" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingPerks = { "SpacingPerks", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, SpacingPerks), METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingPerks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingPerks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenRows_MetaData[] = {
		{ "Category", "CoreExternalEffectsWidget" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenRows = { "SpacingBetweenRows", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, SpacingBetweenRows), METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenRows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonScaleRatio_MetaData[] = {
		{ "Category", "CoreExternalEffectsWidget" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonScaleRatio = { "AddonScaleRatio", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, AddonScaleRatio), METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonScaleRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonScaleRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_GridSlotSize_MetaData[] = {
		{ "Category", "CoreExternalEffectsWidget" },
		{ "ModuleRelativePath", "Public/CoreExternalEffectsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_GridSlotSize = { "GridSlotSize", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreExternalEffectsWidget, GridSlotSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_GridSlotSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_GridSlotSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__spacerWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__timerHandleMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__timerHandleMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__timerHandleMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonViewInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonViewInterfaces_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonViewInterfaces_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__addonData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkViewInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkViewInterfaces_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkViewInterfaces_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp__perkData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_PerkWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenPerksAndAddons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingAddons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingPerks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_SpacingBetweenRows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_AddonScaleRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::NewProp_GridSlotSize,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UExternalEffectsViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreExternalEffectsWidget, IExternalEffectsViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreExternalEffectsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::ClassParams = {
		&UCoreExternalEffectsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreExternalEffectsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreExternalEffectsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreExternalEffectsWidget, 402275105);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreExternalEffectsWidget>()
	{
		return UCoreExternalEffectsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreExternalEffectsWidget(Z_Construct_UClass_UCoreExternalEffectsWidget, &UCoreExternalEffectsWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreExternalEffectsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreExternalEffectsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
