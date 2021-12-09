// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewsMobile/Public/UMGAtlantaRequestRoleButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaRequestRoleButton() {}
// Cross Module References
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGAtlantaRequestRoleButton_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGAtlantaRequestRoleButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaRequestRoleButton::execGetIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaRequestRoleButton::execSetIsActive)
	{
		P_GET_UBOOL(Z_Param_isActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsActive(Z_Param_isActive);
		P_NATIVE_END;
	}
	static FName NAME_UUMGAtlantaRequestRoleButton_OnToggleActiveState = FName(TEXT("OnToggleActiveState"));
	void UUMGAtlantaRequestRoleButton::OnToggleActiveState(bool isActive)
	{
		UMGAtlantaRequestRoleButton_eventOnToggleActiveState_Parms Parms;
		Parms.isActive=isActive ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaRequestRoleButton_OnToggleActiveState),&Parms);
	}
	void UUMGAtlantaRequestRoleButton::StaticRegisterNativesUUMGAtlantaRequestRoleButton()
	{
		UClass* Class = UUMGAtlantaRequestRoleButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsActive", &UUMGAtlantaRequestRoleButton::execGetIsActive },
			{ "SetIsActive", &UUMGAtlantaRequestRoleButton::execSetIsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics
	{
		struct UMGAtlantaRequestRoleButton_eventGetIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UMGAtlantaRequestRoleButton_eventGetIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaRequestRoleButton_eventGetIsActive_Parms), &Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaRequestRoleButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaRequestRoleButton, nullptr, "GetIsActive", nullptr, nullptr, sizeof(UMGAtlantaRequestRoleButton_eventGetIsActive_Parms), Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics
	{
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((UMGAtlantaRequestRoleButton_eventOnToggleActiveState_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaRequestRoleButton_eventOnToggleActiveState_Parms), &Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaRequestRoleButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaRequestRoleButton, nullptr, "OnToggleActiveState", nullptr, nullptr, sizeof(UMGAtlantaRequestRoleButton_eventOnToggleActiveState_Parms), Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics
	{
		struct UMGAtlantaRequestRoleButton_eventSetIsActive_Parms
		{
			bool isActive;
		};
		static void NewProp_isActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::NewProp_isActive_SetBit(void* Obj)
	{
		((UMGAtlantaRequestRoleButton_eventSetIsActive_Parms*)Obj)->isActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::NewProp_isActive = { "isActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaRequestRoleButton_eventSetIsActive_Parms), &Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::NewProp_isActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::NewProp_isActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaRequestRoleButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaRequestRoleButton, nullptr, "SetIsActive", nullptr, nullptr, sizeof(UMGAtlantaRequestRoleButton_eventSetIsActive_Parms), Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaRequestRoleButton_NoRegister()
	{
		return UUMGAtlantaRequestRoleButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IconSwitcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewsMobile,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_GetIsActive, "GetIsActive" }, // 947045975
		{ &Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_OnToggleActiveState, "OnToggleActiveState" }, // 3817981708
		{ &Z_Construct_UFunction_UUMGAtlantaRequestRoleButton_SetIsActive, "SetIsActive" }, // 1659675177
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaRequestRoleButton.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRequestRoleButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::NewProp_IconSwitcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRequestRoleButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::NewProp_IconSwitcher = { "IconSwitcher", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRequestRoleButton, IconSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::NewProp_IconSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::NewProp_IconSwitcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::NewProp_IconSwitcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaRequestRoleButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::ClassParams = {
		&UUMGAtlantaRequestRoleButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaRequestRoleButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaRequestRoleButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaRequestRoleButton, 2703322438);
	template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<UUMGAtlantaRequestRoleButton>()
	{
		return UUMGAtlantaRequestRoleButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaRequestRoleButton(Z_Construct_UClass_UUMGAtlantaRequestRoleButton, &UUMGAtlantaRequestRoleButton::StaticClass, TEXT("/Script/DBDUIViewsMobile"), TEXT("UUMGAtlantaRequestRoleButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaRequestRoleButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
