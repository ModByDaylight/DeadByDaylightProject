// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_CoreExternalEffectsWidget_generated_h
#error "CoreExternalEffectsWidget.generated.h already included, missing '#pragma once' in CoreExternalEffectsWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreExternalEffectsWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideExternalAddon); \
	DECLARE_FUNCTION(execHideExternalPerk);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideExternalAddon); \
	DECLARE_FUNCTION(execHideExternalPerk);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreExternalEffectsWidget(); \
	friend struct Z_Construct_UClass_UCoreExternalEffectsWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreExternalEffectsWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreExternalEffectsWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreExternalEffectsWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUCoreExternalEffectsWidget(); \
	friend struct Z_Construct_UClass_UCoreExternalEffectsWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreExternalEffectsWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreExternalEffectsWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreExternalEffectsWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreExternalEffectsWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreExternalEffectsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreExternalEffectsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreExternalEffectsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreExternalEffectsWidget(UCoreExternalEffectsWidget&&); \
	NO_API UCoreExternalEffectsWidget(const UCoreExternalEffectsWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreExternalEffectsWidget(UCoreExternalEffectsWidget&&); \
	NO_API UCoreExternalEffectsWidget(const UCoreExternalEffectsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreExternalEffectsWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreExternalEffectsWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreExternalEffectsWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GridSlotSize() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, GridSlotSize); } \
	FORCEINLINE static uint32 __PPO__AddonScaleRatio() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, AddonScaleRatio); } \
	FORCEINLINE static uint32 __PPO__SpacingBetweenRows() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, SpacingBetweenRows); } \
	FORCEINLINE static uint32 __PPO__SpacingPerks() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, SpacingPerks); } \
	FORCEINLINE static uint32 __PPO__SpacingAddons() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, SpacingAddons); } \
	FORCEINLINE static uint32 __PPO__SpacingBetweenPerksAndAddons() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, SpacingBetweenPerksAndAddons); } \
	FORCEINLINE static uint32 __PPO__PerkWidgetClass() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, PerkWidgetClass); } \
	FORCEINLINE static uint32 __PPO__AddonWidgetClass() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, AddonWidgetClass); } \
	FORCEINLINE static uint32 __PPO__Container() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, Container); } \
	FORCEINLINE static uint32 __PPO___perkData() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _perkData); } \
	FORCEINLINE static uint32 __PPO___perkWidgets() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _perkWidgets); } \
	FORCEINLINE static uint32 __PPO___perkPool() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _perkPool); } \
	FORCEINLINE static uint32 __PPO___perkViewInterfaces() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _perkViewInterfaces); } \
	FORCEINLINE static uint32 __PPO___addonData() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _addonData); } \
	FORCEINLINE static uint32 __PPO___addonWidgets() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _addonWidgets); } \
	FORCEINLINE static uint32 __PPO___addonPool() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _addonPool); } \
	FORCEINLINE static uint32 __PPO___addonViewInterfaces() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _addonViewInterfaces); } \
	FORCEINLINE static uint32 __PPO___timerHandleMap() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _timerHandleMap); } \
	FORCEINLINE static uint32 __PPO___spacerWidgets() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _spacerWidgets); } \
	FORCEINLINE static uint32 __PPO___spacerPool() { return STRUCT_OFFSET(UCoreExternalEffectsWidget, _spacerPool); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_21_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreExternalEffectsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreExternalEffectsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
