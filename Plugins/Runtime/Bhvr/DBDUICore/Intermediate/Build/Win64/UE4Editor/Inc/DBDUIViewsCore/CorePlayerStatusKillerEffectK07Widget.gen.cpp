// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsCore/Public/CorePlayerStatusKillerEffectK07Widget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCorePlayerStatusKillerEffectK07Widget() {}
// Cross Module References
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_NoRegister();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget();
	DBDUIVIEWSCORE_API UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsCore();
// End Cross Module References
	static FName NAME_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit = FName(TEXT("AfflictionHit"));
	void UCorePlayerStatusKillerEffectK07Widget::AfflictionHit()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit),NULL);
	}
	void UCorePlayerStatusKillerEffectK07Widget::StaticRegisterNativesUCorePlayerStatusKillerEffectK07Widget()
	{
	}
	struct Z_Construct_UFunction_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CorePlayerStatusKillerEffectK07Widget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget, nullptr, "AfflictionHit", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_NoRegister()
	{
		return UCorePlayerStatusKillerEffectK07Widget::StaticClass();
	}
	struct Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCorePlayerStatusKillerEffectWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCorePlayerStatusKillerEffectK07Widget_AfflictionHit, "AfflictionHit" }, // 1225303345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CorePlayerStatusKillerEffectK07Widget.h" },
		{ "ModuleRelativePath", "Public/CorePlayerStatusKillerEffectK07Widget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorePlayerStatusKillerEffectK07Widget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_Statics::ClassParams = {
		&UCorePlayerStatusKillerEffectK07Widget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorePlayerStatusKillerEffectK07Widget, 240115405);
	template<> DBDUIVIEWSCORE_API UClass* StaticClass<UCorePlayerStatusKillerEffectK07Widget>()
	{
		return UCorePlayerStatusKillerEffectK07Widget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorePlayerStatusKillerEffectK07Widget(Z_Construct_UClass_UCorePlayerStatusKillerEffectK07Widget, &UCorePlayerStatusKillerEffectK07Widget::StaticClass, TEXT("/Script/DBDUIViewsCore"), TEXT("UCorePlayerStatusKillerEffectK07Widget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorePlayerStatusKillerEffectK07Widget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
