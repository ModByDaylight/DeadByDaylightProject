// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/ExampleViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UExampleViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UExampleViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	DEFINE_FUNCTION(IExampleViewInterface::execSetExampleProgressRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ratio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExampleProgressRatio_Implementation(Z_Param_ratio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IExampleViewInterface::execSetExampleText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExampleText_Implementation(Z_Param_text);
		P_NATIVE_END;
	}
	void IExampleViewInterface::SetExampleProgressRatio(float ratio)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetExampleProgressRatio instead.");
	}
	void IExampleViewInterface::SetExampleText(const FString& text)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetExampleText instead.");
	}
	void UExampleViewInterface::StaticRegisterNativesUExampleViewInterface()
	{
		UClass* Class = UExampleViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetExampleProgressRatio", &IExampleViewInterface::execSetExampleProgressRatio },
			{ "SetExampleText", &IExampleViewInterface::execSetExampleText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ratio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::NewProp_ratio = { "ratio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExampleViewInterface_eventSetExampleProgressRatio_Parms, ratio), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::NewProp_ratio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExampleViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExampleViewInterface, nullptr, "SetExampleProgressRatio", nullptr, nullptr, sizeof(ExampleViewInterface_eventSetExampleProgressRatio_Parms), Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExampleViewInterface_eventSetExampleText_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ExampleViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExampleViewInterface, nullptr, "SetExampleText", nullptr, nullptr, sizeof(ExampleViewInterface_eventSetExampleText_Parms), Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExampleViewInterface_SetExampleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExampleViewInterface_SetExampleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExampleViewInterface_NoRegister()
	{
		return UExampleViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UExampleViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExampleViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExampleViewInterface_SetExampleProgressRatio, "SetExampleProgressRatio" }, // 4072817550
		{ &Z_Construct_UFunction_UExampleViewInterface_SetExampleText, "SetExampleText" }, // 969093303
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ExampleViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IExampleViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExampleViewInterface_Statics::ClassParams = {
		&UExampleViewInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UExampleViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExampleViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExampleViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExampleViewInterface, 3137450544);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UExampleViewInterface>()
	{
		return UExampleViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExampleViewInterface(Z_Construct_UClass_UExampleViewInterface, &UExampleViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UExampleViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleViewInterface);
	static FName NAME_UExampleViewInterface_SetExampleProgressRatio = FName(TEXT("SetExampleProgressRatio"));
	void IExampleViewInterface::Execute_SetExampleProgressRatio(UObject* O, float ratio)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UExampleViewInterface::StaticClass()));
		ExampleViewInterface_eventSetExampleProgressRatio_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UExampleViewInterface_SetExampleProgressRatio);
		if (Func)
		{
			Parms.ratio=ratio;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IExampleViewInterface*)(O->GetNativeInterfaceAddress(UExampleViewInterface::StaticClass())))
		{
			I->SetExampleProgressRatio_Implementation(ratio);
		}
	}
	static FName NAME_UExampleViewInterface_SetExampleText = FName(TEXT("SetExampleText"));
	void IExampleViewInterface::Execute_SetExampleText(UObject* O, const FString& text)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UExampleViewInterface::StaticClass()));
		ExampleViewInterface_eventSetExampleText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UExampleViewInterface_SetExampleText);
		if (Func)
		{
			Parms.text=text;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IExampleViewInterface*)(O->GetNativeInterfaceAddress(UExampleViewInterface::StaticClass())))
		{
			I->SetExampleText_Implementation(text);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
