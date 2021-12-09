// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStatusEffectViewData;
#ifdef DBDUIVIEWSCORE_CoreStatusEffectIcon_generated_h
#error "CoreStatusEffectIcon.generated.h already included, missing '#pragma once' in CoreStatusEffectIcon.h"
#endif
#define DBDUIVIEWSCORE_CoreStatusEffectIcon_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInactiveTicks); \
	DECLARE_FUNCTION(execGetStatusEffectData); \
	DECLARE_FUNCTION(execSetInactiveTicks); \
	DECLARE_FUNCTION(execSetStatusEffectData);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInactiveTicks); \
	DECLARE_FUNCTION(execGetStatusEffectData); \
	DECLARE_FUNCTION(execSetInactiveTicks); \
	DECLARE_FUNCTION(execSetStatusEffectData);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_EVENT_PARMS \
	struct CoreStatusEffectIcon_eventUpdatePercentageFill_Parms \
	{ \
		float percentage; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStatusEffectIcon(); \
	friend struct Z_Construct_UClass_UCoreStatusEffectIcon_Statics; \
public: \
	DECLARE_CLASS(UCoreStatusEffectIcon, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStatusEffectIcon)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStatusEffectIcon(); \
	friend struct Z_Construct_UClass_UCoreStatusEffectIcon_Statics; \
public: \
	DECLARE_CLASS(UCoreStatusEffectIcon, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStatusEffectIcon)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStatusEffectIcon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStatusEffectIcon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStatusEffectIcon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStatusEffectIcon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStatusEffectIcon(UCoreStatusEffectIcon&&); \
	NO_API UCoreStatusEffectIcon(const UCoreStatusEffectIcon&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStatusEffectIcon(UCoreStatusEffectIcon&&); \
	NO_API UCoreStatusEffectIcon(const UCoreStatusEffectIcon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStatusEffectIcon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStatusEffectIcon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStatusEffectIcon)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStatusEffectIcon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStatusEffectIcon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
