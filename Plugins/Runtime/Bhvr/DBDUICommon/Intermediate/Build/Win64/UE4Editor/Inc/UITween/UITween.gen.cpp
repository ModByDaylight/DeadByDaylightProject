// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UITween/Public/UITween.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUITween() {}
// Cross Module References
	UITWEEN_API UClass* Z_Construct_UClass_UUITween_NoRegister();
	UITWEEN_API UClass* Z_Construct_UClass_UUITween();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_UITween();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UITWEEN_API UClass* Z_Construct_UClass_UUITweenInstance_NoRegister();
	UITWEEN_API UEnum* Z_Construct_UEnum_UITween_EEasingType();
// End Cross Module References
	DEFINE_FUNCTION(UUITween::execClear)
	{
		P_GET_OBJECT(UWidget,Z_Param_targetWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUITween::Clear(Z_Param_targetWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUITween::execCreate)
	{
		P_GET_OBJECT(UWidget,Z_Param_targetWidget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_duration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delay);
		P_GET_ENUM(EEasingType,Z_Param_easing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUITweenInstance**)Z_Param__Result=UUITween::Create(Z_Param_targetWidget,Z_Param_duration,Z_Param_delay,EEasingType(Z_Param_easing));
		P_NATIVE_END;
	}
	void UUITween::StaticRegisterNativesUUITween()
	{
		UClass* Class = UUITween::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UUITween::execClear },
			{ "Create", &UUITween::execCreate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUITween_Clear_Statics
	{
		struct UITween_eventClear_Parms
		{
			UWidget* targetWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUITween_Clear_Statics::NewProp_targetWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUITween_Clear_Statics::NewProp_targetWidget = { "targetWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITween_eventClear_Parms, targetWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUITween_Clear_Statics::NewProp_targetWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUITween_Clear_Statics::NewProp_targetWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUITween_Clear_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUITween_Clear_Statics::NewProp_targetWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUITween_Clear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UITween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUITween_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUITween, nullptr, "Clear", nullptr, nullptr, sizeof(UITween_eventClear_Parms), Z_Construct_UFunction_UUITween_Clear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUITween_Clear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUITween_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUITween_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUITween_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUITween_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUITween_Create_Statics
	{
		struct UITween_eventCreate_Parms
		{
			UWidget* targetWidget;
			float duration;
			float delay;
			EEasingType easing;
			UUITweenInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_easing;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_easing_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_targetWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_targetWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUITween_Create_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITween_eventCreate_Parms, ReturnValue), Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUITween_Create_Statics::NewProp_easing = { "easing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITween_eventCreate_Parms, easing), Z_Construct_UEnum_UITween_EEasingType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUITween_Create_Statics::NewProp_easing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUITween_Create_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITween_eventCreate_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUITween_Create_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITween_eventCreate_Parms, duration), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUITween_Create_Statics::NewProp_targetWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUITween_Create_Statics::NewProp_targetWidget = { "targetWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UITween_eventCreate_Parms, targetWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUITween_Create_Statics::NewProp_targetWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUITween_Create_Statics::NewProp_targetWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUITween_Create_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUITween_Create_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUITween_Create_Statics::NewProp_easing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUITween_Create_Statics::NewProp_easing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUITween_Create_Statics::NewProp_delay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUITween_Create_Statics::NewProp_duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUITween_Create_Statics::NewProp_targetWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUITween_Create_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UITween.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUITween_Create_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUITween, nullptr, "Create", nullptr, nullptr, sizeof(UITween_eventCreate_Parms), Z_Construct_UFunction_UUITween_Create_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUITween_Create_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUITween_Create_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUITween_Create_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUITween_Create()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUITween_Create_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUITween_NoRegister()
	{
		return UUITween::StaticClass();
	}
	struct Z_Construct_UClass_UUITween_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUITween_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UITween,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUITween_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUITween_Clear, "Clear" }, // 1659072646
		{ &Z_Construct_UFunction_UUITween_Create, "Create" }, // 2750393737
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUITween_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UITween.h" },
		{ "ModuleRelativePath", "Public/UITween.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUITween_Statics::NewProp_ActiveInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/UITween.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUITween_Statics::NewProp_ActiveInstances = { "ActiveInstances", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUITween, ActiveInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUITween_Statics::NewProp_ActiveInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUITween_Statics::NewProp_ActiveInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUITween_Statics::NewProp_ActiveInstances_Inner = { "ActiveInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUITweenInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUITween_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUITween_Statics::NewProp_ActiveInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUITween_Statics::NewProp_ActiveInstances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUITween_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUITween>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUITween_Statics::ClassParams = {
		&UUITween::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUITween_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUITween_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUITween_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUITween_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUITween()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUITween_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUITween, 514018376);
	template<> UITWEEN_API UClass* StaticClass<UUITween>()
	{
		return UUITween::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUITween(Z_Construct_UClass_UUITween, &UUITween::StaticClass, TEXT("/Script/UITween"), TEXT("UUITween"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUITween);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
