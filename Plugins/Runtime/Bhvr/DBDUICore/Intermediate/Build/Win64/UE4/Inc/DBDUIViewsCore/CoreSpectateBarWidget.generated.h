// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_CoreSpectateBarWidget_generated_h
#error "CoreSpectateBarWidget.generated.h already included, missing '#pragma once' in CoreSpectateBarWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreSpectateBarWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_9_DELEGATE \
static inline void FCoreSpectateBarWidgetRightArrowClickDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreSpectateBarWidgetRightArrowClickDelegate) \
{ \
	CoreSpectateBarWidgetRightArrowClickDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_8_DELEGATE \
static inline void FCoreSpectateBarWidgetLeftArrowClickDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreSpectateBarWidgetLeftArrowClickDelegate) \
{ \
	CoreSpectateBarWidgetLeftArrowClickDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_7_DELEGATE \
static inline void FCoreSpectateBarWidgetLeaveButtonClickDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreSpectateBarWidgetLeaveButtonClickDelegate) \
{ \
	CoreSpectateBarWidgetLeaveButtonClickDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_RPC_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreSpectateBarWidget(); \
	friend struct Z_Construct_UClass_UCoreSpectateBarWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreSpectateBarWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSpectateBarWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreSpectateBarWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCoreSpectateBarWidget(); \
	friend struct Z_Construct_UClass_UCoreSpectateBarWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreSpectateBarWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSpectateBarWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreSpectateBarWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreSpectateBarWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreSpectateBarWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSpectateBarWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSpectateBarWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSpectateBarWidget(UCoreSpectateBarWidget&&); \
	NO_API UCoreSpectateBarWidget(const UCoreSpectateBarWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSpectateBarWidget(UCoreSpectateBarWidget&&); \
	NO_API UCoreSpectateBarWidget(const UCoreSpectateBarWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSpectateBarWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSpectateBarWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreSpectateBarWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___leaveButtonClickDelegate() { return STRUCT_OFFSET(UCoreSpectateBarWidget, _leaveButtonClickDelegate); } \
	FORCEINLINE static uint32 __PPO___leftArrowClickDelegate() { return STRUCT_OFFSET(UCoreSpectateBarWidget, _leftArrowClickDelegate); } \
	FORCEINLINE static uint32 __PPO___rightArrowClickDelegate() { return STRUCT_OFFSET(UCoreSpectateBarWidget, _rightArrowClickDelegate); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_11_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreSpectateBarWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSpectateBarWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
