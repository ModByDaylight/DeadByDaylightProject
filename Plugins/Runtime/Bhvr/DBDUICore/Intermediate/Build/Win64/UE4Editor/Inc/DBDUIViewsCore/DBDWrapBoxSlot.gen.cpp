// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/DBDWrapBoxSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDWrapBoxSlot() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDWrapBoxSlot_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDWrapBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
// End Cross Module References
	DEFINE_FUNCTION(UDBDWrapBoxSlot::execSetFillEmptySpace)
	{
		P_GET_UBOOL(Z_Param_InbFillEmptySpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFillEmptySpace(Z_Param_InbFillEmptySpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDWrapBoxSlot::execSetFillSpanWhenLessThan)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFillSpanWhenLessThan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFillSpanWhenLessThan(Z_Param_InFillSpanWhenLessThan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDWrapBoxSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDWrapBoxSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDWrapBoxSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	void UDBDWrapBoxSlot::StaticRegisterNativesUDBDWrapBoxSlot()
	{
		UClass* Class = UDBDWrapBoxSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFillEmptySpace", &UDBDWrapBoxSlot::execSetFillEmptySpace },
			{ "SetFillSpanWhenLessThan", &UDBDWrapBoxSlot::execSetFillSpanWhenLessThan },
			{ "SetHorizontalAlignment", &UDBDWrapBoxSlot::execSetHorizontalAlignment },
			{ "SetPadding", &UDBDWrapBoxSlot::execSetPadding },
			{ "SetVerticalAlignment", &UDBDWrapBoxSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics
	{
		struct DBDWrapBoxSlot_eventSetFillEmptySpace_Parms
		{
			bool InbFillEmptySpace;
		};
		static void NewProp_InbFillEmptySpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbFillEmptySpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace_SetBit(void* Obj)
	{
		((DBDWrapBoxSlot_eventSetFillEmptySpace_Parms*)Obj)->InbFillEmptySpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace = { "InbFillEmptySpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDWrapBoxSlot_eventSetFillEmptySpace_Parms), &Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDWrapBoxSlot, nullptr, "SetFillEmptySpace", nullptr, nullptr, sizeof(DBDWrapBoxSlot_eventSetFillEmptySpace_Parms), Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics
	{
		struct DBDWrapBoxSlot_eventSetFillSpanWhenLessThan_Parms
		{
			float InFillSpanWhenLessThan;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFillSpanWhenLessThan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::NewProp_InFillSpanWhenLessThan = { "InFillSpanWhenLessThan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDWrapBoxSlot_eventSetFillSpanWhenLessThan_Parms, InFillSpanWhenLessThan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::NewProp_InFillSpanWhenLessThan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDWrapBoxSlot, nullptr, "SetFillSpanWhenLessThan", nullptr, nullptr, sizeof(DBDWrapBoxSlot_eventSetFillSpanWhenLessThan_Parms), Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics
	{
		struct DBDWrapBoxSlot_eventSetHorizontalAlignment_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDWrapBoxSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDWrapBoxSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(DBDWrapBoxSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics
	{
		struct DBDWrapBoxSlot_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDWrapBoxSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDWrapBoxSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(DBDWrapBoxSlot_eventSetPadding_Parms), Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics
	{
		struct DBDWrapBoxSlot_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDWrapBoxSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDWrapBoxSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(DBDWrapBoxSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDWrapBoxSlot_NoRegister()
	{
		return UDBDWrapBoxSlot::StaticClass();
	}
	struct Z_Construct_UClass_UDBDWrapBoxSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FillSpanWhenLessThan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FillSpanWhenLessThan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFillEmptySpace_MetaData[];
#endif
		static void NewProp_bFillEmptySpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFillEmptySpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDWrapBoxSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDWrapBoxSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillEmptySpace, "SetFillEmptySpace" }, // 1355049286
		{ &Z_Construct_UFunction_UDBDWrapBoxSlot_SetFillSpanWhenLessThan, "SetFillSpanWhenLessThan" }, // 950674528
		{ &Z_Construct_UFunction_UDBDWrapBoxSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 52599539
		{ &Z_Construct_UFunction_UDBDWrapBoxSlot_SetPadding, "SetPadding" }, // 3605436187
		{ &Z_Construct_UFunction_UDBDWrapBoxSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 3900623411
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBoxSlot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DBDWrapBoxSlot.h" },
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "DBDWrapBoxSlot" },
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDWrapBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_VerticalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "DBDWrapBoxSlot" },
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDWrapBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan_MetaData[] = {
		{ "Category", "DBDWrapBoxSlot" },
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan = { "FillSpanWhenLessThan", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDWrapBoxSlot, FillSpanWhenLessThan), METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_bFillEmptySpace_MetaData[] = {
		{ "Category", "DBDWrapBoxSlot" },
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	void Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_bFillEmptySpace_SetBit(void* Obj)
	{
		((UDBDWrapBoxSlot*)Obj)->bFillEmptySpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_bFillEmptySpace = { "bFillEmptySpace", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDWrapBoxSlot), &Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_bFillEmptySpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_bFillEmptySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_bFillEmptySpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "DBDWrapBoxSlot" },
		{ "ModuleRelativePath", "Public/DBDWrapBoxSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDWrapBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_Padding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDWrapBoxSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_VerticalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_HorizontalAlignment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_bFillEmptySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDWrapBoxSlot_Statics::NewProp_Padding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDWrapBoxSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDWrapBoxSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDWrapBoxSlot_Statics::ClassParams = {
		&UDBDWrapBoxSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDWrapBoxSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDWrapBoxSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDWrapBoxSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDWrapBoxSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDWrapBoxSlot, 1486841024);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UDBDWrapBoxSlot>()
	{
		return UDBDWrapBoxSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDWrapBoxSlot(Z_Construct_UClass_UDBDWrapBoxSlot, &UDBDWrapBoxSlot::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UDBDWrapBoxSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDWrapBoxSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
