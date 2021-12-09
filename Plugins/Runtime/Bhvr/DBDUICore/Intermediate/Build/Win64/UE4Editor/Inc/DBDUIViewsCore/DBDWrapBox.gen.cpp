// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDWrapBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDWrapBox() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDWrapBox_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDWrapBox();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDWrapBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(UDBDWrapBox::execAddChildToWrapBox)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDBDWrapBoxSlot**)Z_Param__Result=P_THIS->AddChildToWrapBox(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDWrapBox::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDWrapBox::execSetInnerSlotPadding)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInnerSlotPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UDBDWrapBox::StaticRegisterNativesUDBDWrapBox()
	{
		UClass* Class = UDBDWrapBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToWrapBox", &UDBDWrapBox::execAddChildToWrapBox },
			{ "SetHorizontalAlignment", &UDBDWrapBox::execSetHorizontalAlignment },
			{ "SetInnerSlotPadding", &UDBDWrapBox::execSetInnerSlotPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics
	{
		struct DBDWrapBox_eventAddChildToWrapBox_Parms
		{
			UWidget* Content;
			UDBDWrapBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDWrapBox_eventAddChildToWrapBox_Parms, ReturnValue), Z_Construct_UClass_UDBDWrapBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDWrapBox_eventAddChildToWrapBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDWrapBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDWrapBox, nullptr, "AddChildToWrapBox", nullptr, nullptr, sizeof(DBDWrapBox_eventAddChildToWrapBox_Parms), Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics
	{
		struct DBDWrapBox_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDWrapBox_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDWrapBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDWrapBox, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(DBDWrapBox_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics
	{
		struct DBDWrapBox_eventSetInnerSlotPadding_Parms
		{
			FVector2D InPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDWrapBox_eventSetInnerSlotPadding_Parms, InPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDWrapBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDWrapBox, nullptr, "SetInnerSlotPadding", nullptr, nullptr, sizeof(DBDWrapBox_eventSetInnerSlotPadding_Parms), Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDWrapBox_NoRegister()
	{
		return UDBDWrapBox::StaticClass();
	}
	struct Z_Construct_UClass_UDBDWrapBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExplicitWrapWidth_MetaData[];
#endif
		static void NewProp_bExplicitWrapWidth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExplicitWrapWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrapWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WrapWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerSlotPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InnerSlotPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDWrapBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDWrapBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDWrapBox_AddChildToWrapBox, "AddChildToWrapBox" }, // 2198451466
		{ &Z_Construct_UFunction_UDBDWrapBox_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 2324202913
		{ &Z_Construct_UFunction_UDBDWrapBox_SetInnerSlotPadding, "SetInnerSlotPadding" }, // 1110205307
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDWrapBox.h" },
		{ "ModuleRelativePath", "Public/DBDWrapBox.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "DBDWrapBox" },
		{ "ModuleRelativePath", "Public/DBDWrapBox.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDWrapBox, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_bExplicitWrapWidth_MetaData[] = {
		{ "Category", "DBDWrapBox" },
		{ "ModuleRelativePath", "Public/DBDWrapBox.h" },
	};
#endif
	void Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_bExplicitWrapWidth_SetBit(void* Obj)
	{
		((UDBDWrapBox*)Obj)->bExplicitWrapWidth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_bExplicitWrapWidth = { "bExplicitWrapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDWrapBox), &Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_bExplicitWrapWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_bExplicitWrapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_bExplicitWrapWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_WrapWidth_MetaData[] = {
		{ "Category", "DBDWrapBox" },
		{ "ModuleRelativePath", "Public/DBDWrapBox.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_WrapWidth = { "WrapWidth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDWrapBox, WrapWidth), METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_WrapWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_WrapWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_InnerSlotPadding_MetaData[] = {
		{ "Category", "DBDWrapBox" },
		{ "ModuleRelativePath", "Public/DBDWrapBox.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_InnerSlotPadding = { "InnerSlotPadding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDWrapBox, InnerSlotPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_InnerSlotPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_InnerSlotPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDWrapBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_bExplicitWrapWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_WrapWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDWrapBox_Statics::NewProp_InnerSlotPadding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDWrapBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDWrapBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDWrapBox_Statics::ClassParams = {
		&UDBDWrapBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDWrapBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDWrapBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDWrapBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDWrapBox, 3493217074);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDWrapBox>()
	{
		return UDBDWrapBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDWrapBox(Z_Construct_UClass_UDBDWrapBox, &UDBDWrapBox::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDWrapBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDWrapBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
