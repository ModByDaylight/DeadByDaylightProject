// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSMOBILE_UMGScrollListPageButton_generated_h
#error "UMGScrollListPageButton.generated.h already included, missing '#pragma once' in UMGScrollListPageButton.h"
#endif
#define DBDUIVIEWSMOBILE_UMGScrollListPageButton_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_9_DELEGATE \
struct _Script_DBDUIViewsMobile_eventUMGScrollListPageButtonOnClicked_Parms \
{ \
	int32 pageIndex; \
}; \
static inline void FUMGScrollListPageButtonOnClicked_DelegateWrapper(const FMulticastScriptDelegate& UMGScrollListPageButtonOnClicked, int32 pageIndex) \
{ \
	_Script_DBDUIViewsMobile_eventUMGScrollListPageButtonOnClicked_Parms Parms; \
	Parms.pageIndex=pageIndex; \
	UMGScrollListPageButtonOnClicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleActionButtonClick); \
	DECLARE_FUNCTION(execSetIsSelected);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleActionButtonClick); \
	DECLARE_FUNCTION(execSetIsSelected);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGScrollListPageButton(); \
	friend struct Z_Construct_UClass_UUMGScrollListPageButton_Statics; \
public: \
	DECLARE_CLASS(UUMGScrollListPageButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsMobile"), NO_API) \
	DECLARE_SERIALIZER(UUMGScrollListPageButton)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUUMGScrollListPageButton(); \
	friend struct Z_Construct_UClass_UUMGScrollListPageButton_Statics; \
public: \
	DECLARE_CLASS(UUMGScrollListPageButton, UMobileBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsMobile"), NO_API) \
	DECLARE_SERIALIZER(UUMGScrollListPageButton)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGScrollListPageButton(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGScrollListPageButton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGScrollListPageButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGScrollListPageButton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGScrollListPageButton(UUMGScrollListPageButton&&); \
	NO_API UUMGScrollListPageButton(const UUMGScrollListPageButton&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGScrollListPageButton(UUMGScrollListPageButton&&); \
	NO_API UUMGScrollListPageButton(const UUMGScrollListPageButton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGScrollListPageButton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGScrollListPageButton); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGScrollListPageButton)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActionButton() { return STRUCT_OFFSET(UUMGScrollListPageButton, ActionButton); } \
	FORCEINLINE static uint32 __PPO__SelectedImage() { return STRUCT_OFFSET(UUMGScrollListPageButton, SelectedImage); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_11_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<class UUMGScrollListPageButton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGScrollListPageButton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
