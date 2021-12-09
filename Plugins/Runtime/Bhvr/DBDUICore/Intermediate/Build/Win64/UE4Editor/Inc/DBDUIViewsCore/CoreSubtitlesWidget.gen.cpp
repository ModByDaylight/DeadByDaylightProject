// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CoreSubtitlesWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreSubtitlesWidget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSubtitlesWidget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreSubtitlesWidget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCoreBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ESubtitlesPosition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	DBDUIVIEWSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesEntry();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UDBDTextBlock_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_USubtitlesViewInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoreSubtitlesWidget::execOnEntryTimedOut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEntryTimedOut();
		P_NATIVE_END;
	}
	static FName NAME_UCoreSubtitlesWidget_SetSubtitlesPosition = FName(TEXT("SetSubtitlesPosition"));
	void UCoreSubtitlesWidget::SetSubtitlesPosition(ESubtitlesPosition position)
	{
		CoreSubtitlesWidget_eventSetSubtitlesPosition_Parms Parms;
		Parms.position=position;
		ProcessEvent(FindFunctionChecked(NAME_UCoreSubtitlesWidget_SetSubtitlesPosition),&Parms);
	}
	void UCoreSubtitlesWidget::StaticRegisterNativesUCoreSubtitlesWidget()
	{
		UClass* Class = UCoreSubtitlesWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEntryTimedOut", &UCoreSubtitlesWidget::execOnEntryTimedOut },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreSubtitlesWidget_OnEntryTimedOut_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSubtitlesWidget_OnEntryTimedOut_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSubtitlesWidget_OnEntryTimedOut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSubtitlesWidget, nullptr, "OnEntryTimedOut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSubtitlesWidget_OnEntryTimedOut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSubtitlesWidget_OnEntryTimedOut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSubtitlesWidget_OnEntryTimedOut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSubtitlesWidget_OnEntryTimedOut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_position;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_position_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreSubtitlesWidget_eventSetSubtitlesPosition_Parms, position), Z_Construct_UEnum_DBDSharedTypes_ESubtitlesPosition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::NewProp_position_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::NewProp_position_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreSubtitlesWidget, nullptr, "SetSubtitlesPosition", nullptr, nullptr, sizeof(CoreSubtitlesWidget_eventSetSubtitlesPosition_Parms), Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreSubtitlesWidget_NoRegister()
	{
		return UCoreSubtitlesWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoreSubtitlesWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timerHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__timerHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__entryQueue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__entryQueue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__entryQueue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepSingleCharacter_MetaData[];
#endif
		static void NewProp_KeepSingleCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_KeepSingleCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationPerLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DurationPerLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfCharacterPerLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfCharacterPerLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesTB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubtitlesTB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreSubtitlesWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCoreBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreSubtitlesWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreSubtitlesWidget_OnEntryTimedOut, "OnEntryTimedOut" }, // 1949499827
		{ &Z_Construct_UFunction_UCoreSubtitlesWidget_SetSubtitlesPosition, "SetSubtitlesPosition" }, // 2038995585
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSubtitlesWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CoreSubtitlesWidget.h" },
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__timerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__timerHandle = { "_timerHandle", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSubtitlesWidget, _timerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__timerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__timerHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__entryQueue_MetaData[] = {
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__entryQueue = { "_entryQueue", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSubtitlesWidget, _entryQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__entryQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__entryQueue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__entryQueue_Inner = { "_entryQueue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubtitlesEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_KeepSingleCharacter_MetaData[] = {
		{ "Category", "CoreSubtitlesWidget" },
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
	void Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_KeepSingleCharacter_SetBit(void* Obj)
	{
		((UCoreSubtitlesWidget*)Obj)->KeepSingleCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_KeepSingleCharacter = { "KeepSingleCharacter", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCoreSubtitlesWidget), &Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_KeepSingleCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_KeepSingleCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_KeepSingleCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_DurationPerLine_MetaData[] = {
		{ "Category", "CoreSubtitlesWidget" },
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_DurationPerLine = { "DurationPerLine", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSubtitlesWidget, DurationPerLine), METADATA_PARAMS(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_DurationPerLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_DurationPerLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_NumberOfCharacterPerLine_MetaData[] = {
		{ "Category", "CoreSubtitlesWidget" },
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_NumberOfCharacterPerLine = { "NumberOfCharacterPerLine", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSubtitlesWidget, NumberOfCharacterPerLine), METADATA_PARAMS(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_NumberOfCharacterPerLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_NumberOfCharacterPerLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB_MetaData[] = {
		{ "Category", "CoreSubtitlesWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoreSubtitlesWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB = { "SubtitlesTB", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoreSubtitlesWidget, SubtitlesTB), Z_Construct_UClass_UDBDTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreSubtitlesWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__timerHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__entryQueue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp__entryQueue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_KeepSingleCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_DurationPerLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_NumberOfCharacterPerLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreSubtitlesWidget_Statics::NewProp_SubtitlesTB,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USubtitlesViewInterface_NoRegister, (int32)VTABLE_OFFSET(UCoreSubtitlesWidget, ISubtitlesViewInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreSubtitlesWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreSubtitlesWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreSubtitlesWidget_Statics::ClassParams = {
		&UCoreSubtitlesWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoreSubtitlesWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreSubtitlesWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreSubtitlesWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreSubtitlesWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreSubtitlesWidget, 1415106714);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCoreSubtitlesWidget>()
	{
		return UCoreSubtitlesWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreSubtitlesWidget(Z_Construct_UClass_UCoreSubtitlesWidget, &UCoreSubtitlesWidget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCoreSubtitlesWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreSubtitlesWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
