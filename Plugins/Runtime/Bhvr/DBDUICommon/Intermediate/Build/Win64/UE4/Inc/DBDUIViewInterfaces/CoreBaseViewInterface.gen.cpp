// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDUIViewInterfaces/Public/CoreBaseViewInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreBaseViewInterface() {}
// Cross Module References
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCoreBaseViewInterface_NoRegister();
	DBDUIVIEWINTERFACES_API UClass* Z_Construct_UClass_UCoreBaseViewInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewInterfaces();
// End Cross Module References
	void UCoreBaseViewInterface::StaticRegisterNativesUCoreBaseViewInterface()
	{
	}
	UClass* Z_Construct_UClass_UCoreBaseViewInterface_NoRegister()
	{
		return UCoreBaseViewInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCoreBaseViewInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreBaseViewInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDUIViewInterfaces,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreBaseViewInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CoreBaseViewInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreBaseViewInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICoreBaseViewInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreBaseViewInterface_Statics::ClassParams = {
		&UCoreBaseViewInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreBaseViewInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoreBaseViewInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreBaseViewInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreBaseViewInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreBaseViewInterface, 1255709881);
	template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<UCoreBaseViewInterface>()
	{
		return UCoreBaseViewInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreBaseViewInterface(Z_Construct_UClass_UCoreBaseViewInterface, &UCoreBaseViewInterface::StaticClass, TEXT("/Script/DBDUIViewInterfaces"), TEXT("UCoreBaseViewInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreBaseViewInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
