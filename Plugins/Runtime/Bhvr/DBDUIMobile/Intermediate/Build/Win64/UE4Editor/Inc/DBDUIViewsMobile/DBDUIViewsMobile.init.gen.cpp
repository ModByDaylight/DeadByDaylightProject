// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDUIViewsMobile_init() {}
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGBaseButtonWidgetOnBaseButtonClickedEvent__DelegateSignature();
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGBaseButtonWidgetOnBaseButtonPressedEvent__DelegateSignature();
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGBaseButtonWidgetOnBaseButtonLongPressEvent__DelegateSignature();
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGBaseButtonWidgetOnBaseButtonReleasedEvent__DelegateSignature();
	DBDUIVIEWSMOBILE_API UFunction* Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DBDUIViewsMobile()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGBaseButtonWidgetOnBaseButtonClickedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGBaseButtonWidgetOnBaseButtonPressedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGBaseButtonWidgetOnBaseButtonLongPressEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGBaseButtonWidgetOnBaseButtonReleasedEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_DBDUIViewsMobile_UMGScrollListPageButtonOnClicked__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/DBDUIViewsMobile",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x990A8639,
				0x9284ED43,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
