// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/TemplateViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTemplateViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UTemplateViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
	DBDUIVIEWINTERFACES_API UScriptStruct* Z_Construct_UScriptStruct_FTemplateViewData();
// End Cross Module References
	DEFINE_FUNCTION(ITemplateViewInterface::execTemplateExampleFunction)
	{
		P_GET_STRUCT_REF(FTemplateViewData,Z_Param_Out_templateData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TemplateExampleFunction_Implementation(Z_Param_Out_templateData);
		P_NATIVE_END;
	}
	void ITemplateViewInterface::TemplateExampleFunction(FTemplateViewData const& templateData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TemplateExampleFunction instead.");
	}
	void UTemplateViewInterface::StaticRegisterNativesUTemplateViewInterface()
	{
		UClass* Class = UTemplateViewInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TemplateExampleFunction", &ITemplateViewInterface::execTemplateExampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_templateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_templateData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::NewProp_templateData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::NewProp_templateData = { "templateData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateViewInterface_eventTemplateExampleFunction_Parms, templateData), Z_Construct_UScriptStruct_FTemplateViewData, METADATA_PARAMS(Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::NewProp_templateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::NewProp_templateData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::NewProp_templateData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TemplateViewInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateViewInterface, nullptr, "TemplateExampleFunction", nullptr, nullptr, sizeof(TemplateViewInterface_eventTemplateExampleFunction_Parms), Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTemplateViewInterface_NoRegister()
	{
		return UTemplateViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTemplateViewInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTemplateViewInterface_TemplateExampleFunction, "TemplateExampleFunction" }, // 274588628
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateViewInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TemplateViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITemplateViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateViewInterface_Statics::ClassParams = {
		&UTemplateViewInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTemplateViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateViewInterface, 989862420);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UTemplateViewInterface>()
	{
		return UTemplateViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateViewInterface(Z_Construct_UClass_UTemplateViewInterface, &UTemplateViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UTemplateViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateViewInterface);
	static FName NAME_UTemplateViewInterface_TemplateExampleFunction = FName(TEXT("TemplateExampleFunction"));
	void ITemplateViewInterface::Execute_TemplateExampleFunction(UObject* O, FTemplateViewData const& templateData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTemplateViewInterface::StaticClass()));
		TemplateViewInterface_eventTemplateExampleFunction_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTemplateViewInterface_TemplateExampleFunction);
		if (Func)
		{
			Parms.templateData=templateData;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITemplateViewInterface*)(O->GetNativeInterfaceAddress(UTemplateViewInterface::StaticClass())))
		{
			I->TemplateExampleFunction_Implementation(templateData);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
