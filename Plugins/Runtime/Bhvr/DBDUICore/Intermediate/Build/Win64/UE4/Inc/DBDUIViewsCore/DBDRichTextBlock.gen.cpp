// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDRichTextBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDRichTextBlock() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDRichTextBlock();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTextBlockOverrideProperties();
// End Cross Module References
	DEFINE_FUNCTION(UDBDRichTextBlock::execSetHTMLText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHTMLText(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	void UDBDRichTextBlock::StaticRegisterNativesUDBDRichTextBlock()
	{
		UClass* Class = UDBDRichTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHTMLText", &UDBDRichTextBlock::execSetHTMLText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics
	{
		struct DBDRichTextBlock_eventSetHTMLText_Parms
		{
			FText InText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDRichTextBlock_eventSetHTMLText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDRichTextBlock, nullptr, "SetHTMLText", nullptr, nullptr, sizeof(DBDRichTextBlock_eventSetHTMLText_Parms), Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDRichTextBlock_NoRegister()
	{
		return UDBDRichTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UDBDRichTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__undockedProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__undockedProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasUndocking_MetaData[];
#endif
		static void NewProp__hasUndocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasUndocking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overrideUndockedPropertiesWithLargeText_MetaData[];
#endif
		static void NewProp__overrideUndockedPropertiesWithLargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__overrideUndockedPropertiesWithLargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__largeTextProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__largeTextProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasLargeText_MetaData[];
#endif
		static void NewProp__hasLargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasLargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugPreviewUndockedState_MetaData[];
#endif
		static void NewProp__debugPreviewUndockedState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__debugPreviewUndockedState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__debugPreviewLargeTextState_MetaData[];
#endif
		static void NewProp__debugPreviewLargeTextState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__debugPreviewLargeTextState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDRichTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDRichTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDRichTextBlock_SetHTMLText, "SetHTMLText" }, // 4185734693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDRichTextBlock.h" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties = { "_undockedProperties", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichTextBlock, _undockedProperties), Z_Construct_UScriptStruct_FTextBlockOverrideProperties, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_SetBit(void* Obj)
	{
		((UDBDRichTextBlock*)Obj)->_hasUndocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking = { "_hasUndocking", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichTextBlock), &Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_SetBit(void* Obj)
	{
		((UDBDRichTextBlock*)Obj)->_overrideUndockedPropertiesWithLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText = { "_overrideUndockedPropertiesWithLargeText", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichTextBlock), &Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties = { "_largeTextProperties", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDRichTextBlock, _largeTextProperties), Z_Construct_UScriptStruct_FTextBlockOverrideProperties, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_SetBit(void* Obj)
	{
		((UDBDRichTextBlock*)Obj)->_hasLargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText = { "_hasLargeText", nullptr, (EPropertyFlags)0x0020080000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichTextBlock), &Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewUndockedState_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewUndockedState_SetBit(void* Obj)
	{
		((UDBDRichTextBlock*)Obj)->_debugPreviewUndockedState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewUndockedState = { "_debugPreviewUndockedState", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichTextBlock), &Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewUndockedState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewUndockedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewUndockedState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewLargeTextState_MetaData[] = {
		{ "Category", "DBDRichTextBlock" },
		{ "ModuleRelativePath", "Public/DBDRichTextBlock.h" },
	};
#endif
	void Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewLargeTextState_SetBit(void* Obj)
	{
		((UDBDRichTextBlock*)Obj)->_debugPreviewLargeTextState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewLargeTextState = { "_debugPreviewLargeTextState", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDRichTextBlock), &Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewLargeTextState_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewLargeTextState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewLargeTextState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDRichTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__undockedProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasUndocking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__overrideUndockedPropertiesWithLargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__largeTextProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__hasLargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewUndockedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDRichTextBlock_Statics::NewProp__debugPreviewLargeTextState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDRichTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDRichTextBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDRichTextBlock_Statics::ClassParams = {
		&UDBDRichTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDRichTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDRichTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDRichTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDRichTextBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDRichTextBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDRichTextBlock, 354261309);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDRichTextBlock>()
	{
		return UDBDRichTextBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDRichTextBlock(Z_Construct_UClass_UDBDRichTextBlock, &UDBDRichTextBlock::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDRichTextBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDRichTextBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
