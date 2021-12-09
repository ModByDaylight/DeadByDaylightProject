// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UCoreStatusEffectIcon;
#ifdef DBDUIVIEWSCORE_CoreStatusEffectWidget_generated_h
#error "CoreStatusEffectWidget.generated.h already included, missing '#pragma once' in CoreStatusEffectWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStatusEffectWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStatusEffectMap);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStatusEffectMap);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStatusEffectWidget(); \
	friend struct Z_Construct_UClass_UCoreStatusEffectWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStatusEffectWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStatusEffectWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStatusEffectWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStatusEffectWidget(); \
	friend struct Z_Construct_UClass_UCoreStatusEffectWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStatusEffectWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStatusEffectWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStatusEffectWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStatusEffectWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStatusEffectWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStatusEffectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStatusEffectWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStatusEffectWidget(UCoreStatusEffectWidget&&); \
	NO_API UCoreStatusEffectWidget(const UCoreStatusEffectWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStatusEffectWidget(UCoreStatusEffectWidget&&); \
	NO_API UCoreStatusEffectWidget(const UCoreStatusEffectWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStatusEffectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStatusEffectWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStatusEffectWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InactiveThreshold() { return STRUCT_OFFSET(UCoreStatusEffectWidget, InactiveThreshold); } \
	FORCEINLINE static uint32 __PPO__PrepooledItemAmount() { return STRUCT_OFFSET(UCoreStatusEffectWidget, PrepooledItemAmount); } \
	FORCEINLINE static uint32 __PPO__ItemsByColumn() { return STRUCT_OFFSET(UCoreStatusEffectWidget, ItemsByColumn); } \
	FORCEINLINE static uint32 __PPO__EvenColumnOffset() { return STRUCT_OFFSET(UCoreStatusEffectWidget, EvenColumnOffset); } \
	FORCEINLINE static uint32 __PPO__CoreStatusEffectIconClass() { return STRUCT_OFFSET(UCoreStatusEffectWidget, CoreStatusEffectIconClass); } \
	FORCEINLINE static uint32 __PPO__StatusEffectContainer() { return STRUCT_OFFSET(UCoreStatusEffectWidget, StatusEffectContainer); } \
	FORCEINLINE static uint32 __PPO___statusEffectPool() { return STRUCT_OFFSET(UCoreStatusEffectWidget, _statusEffectPool); } \
	FORCEINLINE static uint32 __PPO___statusEffectOrder() { return STRUCT_OFFSET(UCoreStatusEffectWidget, _statusEffectOrder); } \
	FORCEINLINE static uint32 __PPO___statusEffectMap() { return STRUCT_OFFSET(UCoreStatusEffectWidget, _statusEffectMap); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_11_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStatusEffectWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
