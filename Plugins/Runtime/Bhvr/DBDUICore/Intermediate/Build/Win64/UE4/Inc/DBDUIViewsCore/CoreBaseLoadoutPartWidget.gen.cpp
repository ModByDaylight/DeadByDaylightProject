// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreBaseLoadoutPartWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreBaseLoadoutPartWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseLoadoutPartWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseLoadoutPartWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemRarity();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreBaseLoadoutPartWidget::execSetLoadoutPartIcon)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_icon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPartIcon(Z_Param_icon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBaseLoadoutPartWidget::execSetLoadoutPartRarity)
	{
		P_GET_ENUM(EItemRarity,Z_Param_rarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutPartRarity(EItemRarity(Z_Param_rarity));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoreBaseLoadoutPartWidget::execSetLoadoutStackCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_stackCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadoutStackCount(Z_Param_stackCount);
		P_NATIVE_END;
	}
	void UCoreBaseLoadoutPartWidget::StaticRegisterNativesUCoreBaseLoadoutPartWidget()
	{
		UClass* Class = UCoreBaseLoadoutPartWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLoadoutPartIcon", &UCoreBaseLoadoutPartWidget::execSetLoadoutPartIcon },
			{ "SetLoadoutPartRarity", &UCoreBaseLoadoutPartWidget::execSetLoadoutPartRarity },
			{ "SetLoadoutStackCount", &UCoreBaseLoadoutPartWidget::execSetLoadoutStackCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics
	{
		struct CoreBaseLoadoutPartWidget_eventSetLoadoutPartIcon_Parms
		{
			TSoftObjectPtr<UTexture2D> icon;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_icon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::NewProp_icon = { "icon", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseLoadoutPartWidget_eventSetLoadoutPartIcon_Parms, icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::NewProp_icon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseLoadoutPartWidget, nullptr, "SetLoadoutPartIcon", nullptr, nullptr, sizeof(CoreBaseLoadoutPartWidget_eventSetLoadoutPartIcon_Parms), Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics
	{
		struct CoreBaseLoadoutPartWidget_eventSetLoadoutPartRarity_Parms
		{
			EItemRarity rarity;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_rarity;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_rarity_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::NewProp_rarity = { "rarity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseLoadoutPartWidget_eventSetLoadoutPartRarity_Parms, rarity), Z_Construct_UEnum_DBDSharedTypes_EItemRarity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::NewProp_rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::NewProp_rarity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::NewProp_rarity_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseLoadoutPartWidget, nullptr, "SetLoadoutPartRarity", nullptr, nullptr, sizeof(CoreBaseLoadoutPartWidget_eventSetLoadoutPartRarity_Parms), Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics
	{
		struct CoreBaseLoadoutPartWidget_eventSetLoadoutStackCount_Parms
		{
			int32 stackCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_stackCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::NewProp_stackCount = { "stackCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreBaseLoadoutPartWidget_eventSetLoadoutStackCount_Parms, stackCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::NewProp_stackCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreBaseLoadoutPartWidget, nullptr, "SetLoadoutStackCount", nullptr, nullptr, sizeof(CoreBaseLoadoutPartWidget_eventSetLoadoutStackCount_Parms), Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreBaseLoadoutPartWidget_NoRegister()
	{
		return UCoreBaseLoadoutPartWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextStackCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextStackCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageRarity_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageRarity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartIcon, "SetLoadoutPartIcon" }, // 1502474864
		{ &Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutPartRarity, "SetLoadoutPartRarity" }, // 2032382992
		{ &Z_Construct_UFunction_UCoreBaseLoadoutPartWidget_SetLoadoutStackCount, "SetLoadoutStackCount" }, // 2815079435
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreBaseLoadoutPartWidget.h" },
		{ "ModuleRelativePath", "Public/CoreBaseLoadoutPartWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_TextStackCount_MetaData[] = {
		{ "Category", "CoreBaseLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBaseLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_TextStackCount = { "TextStackCount", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseLoadoutPartWidget, TextStackCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_TextStackCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_TextStackCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageIcon_MetaData[] = {
		{ "Category", "CoreBaseLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBaseLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageIcon = { "ImageIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseLoadoutPartWidget, ImageIcon), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageRarity_MetaData[] = {
		{ "Category", "CoreBaseLoadoutPartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreBaseLoadoutPartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageRarity = { "ImageRarity", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreBaseLoadoutPartWidget, ImageRarity), Z_Construct_UClass_UDBDImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageRarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageRarity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_TextStackCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::NewProp_ImageRarity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreBaseLoadoutPartWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::ClassParams = {
		&UCoreBaseLoadoutPartWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreBaseLoadoutPartWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreBaseLoadoutPartWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreBaseLoadoutPartWidget, 3702020036);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreBaseLoadoutPartWidget>()
	{
		return UCoreBaseLoadoutPartWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreBaseLoadoutPartWidget(Z_Construct_UClass_UCoreBaseLoadoutPartWidget, &UCoreBaseLoadoutPartWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreBaseLoadoutPartWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreBaseLoadoutPartWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
