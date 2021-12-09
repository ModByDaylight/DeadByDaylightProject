// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreBaseUserWidget;
class UUITweenInstance;
#ifdef DBDUIVIEWSCORE_CoreHudAlertWidget_generated_h
#error "CoreHudAlertWidget.generated.h already included, missing '#pragma once' in CoreHudAlertWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreHudAlertWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearAlerts); \
	DECLARE_FUNCTION(execGetAlerts); \
	DECLARE_FUNCTION(execGetPendingAlerts); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execOnClearAlertsComplete); \
	DECLARE_FUNCTION(execOnPopAlertComplete); \
	DECLARE_FUNCTION(execPopAlert);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearAlerts); \
	DECLARE_FUNCTION(execGetAlerts); \
	DECLARE_FUNCTION(execGetPendingAlerts); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execOnClearAlertsComplete); \
	DECLARE_FUNCTION(execOnPopAlertComplete); \
	DECLARE_FUNCTION(execPopAlert);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreHudAlertWidget(); \
	friend struct Z_Construct_UClass_UCoreHudAlertWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreHudAlertWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreHudAlertWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreHudAlertWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCoreHudAlertWidget(); \
	friend struct Z_Construct_UClass_UCoreHudAlertWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreHudAlertWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreHudAlertWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreHudAlertWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreHudAlertWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreHudAlertWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreHudAlertWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreHudAlertWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreHudAlertWidget(UCoreHudAlertWidget&&); \
	NO_API UCoreHudAlertWidget(const UCoreHudAlertWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreHudAlertWidget(UCoreHudAlertWidget&&); \
	NO_API UCoreHudAlertWidget(const UCoreHudAlertWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreHudAlertWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreHudAlertWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreHudAlertWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxDisplayedItems() { return STRUCT_OFFSET(UCoreHudAlertWidget, MaxDisplayedItems); } \
	FORCEINLINE static uint32 __PPO__SecondaryAlpha() { return STRUCT_OFFSET(UCoreHudAlertWidget, SecondaryAlpha); } \
	FORCEINLINE static uint32 __PPO__FullAlertDuration() { return STRUCT_OFFSET(UCoreHudAlertWidget, FullAlertDuration); } \
	FORCEINLINE static uint32 __PPO__PendingAlertDuration() { return STRUCT_OFFSET(UCoreHudAlertWidget, PendingAlertDuration); } \
	FORCEINLINE static uint32 __PPO__AnimationDuration() { return STRUCT_OFFSET(UCoreHudAlertWidget, AnimationDuration); } \
	FORCEINLINE static uint32 __PPO__AnimationEasing() { return STRUCT_OFFSET(UCoreHudAlertWidget, AnimationEasing); } \
	FORCEINLINE static uint32 __PPO__AnimationTranslationY() { return STRUCT_OFFSET(UCoreHudAlertWidget, AnimationTranslationY); } \
	FORCEINLINE static uint32 __PPO__CoreHudScoreAlertItemClass() { return STRUCT_OFFSET(UCoreHudAlertWidget, CoreHudScoreAlertItemClass); } \
	FORCEINLINE static uint32 __PPO__CoreHudStatusEffectAlertItemClass() { return STRUCT_OFFSET(UCoreHudAlertWidget, CoreHudStatusEffectAlertItemClass); } \
	FORCEINLINE static uint32 __PPO__AlertContainer() { return STRUCT_OFFSET(UCoreHudAlertWidget, AlertContainer); } \
	FORCEINLINE static uint32 __PPO___alerts() { return STRUCT_OFFSET(UCoreHudAlertWidget, _alerts); } \
	FORCEINLINE static uint32 __PPO___pendingAlerts() { return STRUCT_OFFSET(UCoreHudAlertWidget, _pendingAlerts); } \
	FORCEINLINE static uint32 __PPO___scoreAlertPool() { return STRUCT_OFFSET(UCoreHudAlertWidget, _scoreAlertPool); } \
	FORCEINLINE static uint32 __PPO___statusEffectAlertPool() { return STRUCT_OFFSET(UCoreHudAlertWidget, _statusEffectAlertPool); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_15_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreHudAlertWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreHudAlertWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
