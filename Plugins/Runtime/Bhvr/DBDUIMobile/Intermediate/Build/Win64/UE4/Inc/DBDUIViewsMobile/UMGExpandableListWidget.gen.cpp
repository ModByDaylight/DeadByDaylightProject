// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGExpandableListWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGExpandableListWidget() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGExpandableListWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGExpandableListWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UExpandableArea_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGExpandableListWidget::execToggleExpansion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleExpansion();
		P_NATIVE_END;
	}
	void UUMGExpandableListWidget::StaticRegisterNativesUUMGExpandableListWidget()
	{
		UClass* Class = UUMGExpandableListWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ToggleExpansion", &UUMGExpandableListWidget::execToggleExpansion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGExpandableListWidget_ToggleExpansion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGExpandableListWidget_ToggleExpansion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGExpandableListWidget_ToggleExpansion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGExpandableListWidget, nullptr, "ToggleExpansion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGExpandableListWidget_ToggleExpansion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGExpandableListWidget_ToggleExpansion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGExpandableListWidget_ToggleExpansion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGExpandableListWidget_ToggleExpansion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGExpandableListWidget_NoRegister()
	{
		return UUMGExpandableListWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGExpandableListWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__childWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__childWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__childWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeaderTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpandableArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpandableArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorieName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CategorieName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpansionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExpansionButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsExtendedAtStart_MetaData[];
#endif
		static void NewProp_IsExtendedAtStart_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExtendedAtStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldHideExpandableListIfEmpty_MetaData[];
#endif
		static void NewProp_ShouldHideExpandableListIfEmpty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldHideExpandableListIfEmpty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGExpandableListWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGExpandableListWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGExpandableListWidget_ToggleExpansion, "ToggleExpansion" }, // 140588483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGExpandableListWidget.h" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp__childWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp__childWidgets = { "_childWidgets", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGExpandableListWidget, _childWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp__childWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp__childWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp__childWidgets_Inner = { "_childWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_HeaderTitle_MetaData[] = {
		{ "Category", "UMGExpandableListWidget" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_HeaderTitle = { "HeaderTitle", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGExpandableListWidget, HeaderTitle), METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_HeaderTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_HeaderTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpandableArea_MetaData[] = {
		{ "Category", "UMGExpandableListWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpandableArea = { "ExpandableArea", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGExpandableListWidget, ExpandableArea), Z_Construct_UClass_UExpandableArea_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpandableArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpandableArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemCount_MetaData[] = {
		{ "Category", "UMGExpandableListWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGExpandableListWidget, ItemCount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_CategorieName_MetaData[] = {
		{ "Category", "UMGExpandableListWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_CategorieName = { "CategorieName", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGExpandableListWidget, CategorieName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_CategorieName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_CategorieName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemContainer_MetaData[] = {
		{ "Category", "UMGExpandableListWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemContainer = { "ItemContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGExpandableListWidget, ItemContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpansionButton_MetaData[] = {
		{ "Category", "UMGExpandableListWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpansionButton = { "ExpansionButton", nullptr, (EPropertyFlags)0x002008000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGExpandableListWidget, ExpansionButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpansionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpansionButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_IsExtendedAtStart_MetaData[] = {
		{ "Category", "UMGExpandableListWidget" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_IsExtendedAtStart_SetBit(void* Obj)
	{
		((UUMGExpandableListWidget*)Obj)->IsExtendedAtStart = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_IsExtendedAtStart = { "IsExtendedAtStart", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGExpandableListWidget), &Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_IsExtendedAtStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_IsExtendedAtStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_IsExtendedAtStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ShouldHideExpandableListIfEmpty_MetaData[] = {
		{ "Category", "UMGExpandableListWidget" },
		{ "ModuleRelativePath", "Public/UMGExpandableListWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ShouldHideExpandableListIfEmpty_SetBit(void* Obj)
	{
		((UUMGExpandableListWidget*)Obj)->ShouldHideExpandableListIfEmpty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ShouldHideExpandableListIfEmpty = { "ShouldHideExpandableListIfEmpty", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGExpandableListWidget), &Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ShouldHideExpandableListIfEmpty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ShouldHideExpandableListIfEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ShouldHideExpandableListIfEmpty_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGExpandableListWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp__childWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp__childWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_HeaderTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpandableArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_CategorieName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ItemContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ExpansionButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_IsExtendedAtStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGExpandableListWidget_Statics::NewProp_ShouldHideExpandableListIfEmpty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGExpandableListWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGExpandableListWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGExpandableListWidget_Statics::ClassParams = {
		&UUMGExpandableListWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGExpandableListWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGExpandableListWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGExpandableListWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGExpandableListWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGExpandableListWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGExpandableListWidget, 3180829729);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGExpandableListWidget>()
	{
		return UUMGExpandableListWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGExpandableListWidget(Z_Construct_UClass_UUMGExpandableListWidget, &UUMGExpandableListWidget::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGExpandableListWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGExpandableListWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
