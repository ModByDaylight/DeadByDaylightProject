// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef DBDUIVIEWSCORE_CoreInputPromptWidget_generated_h
#error "CoreInputPromptWidget.generated.h already included, missing '#pragma once' in CoreInputPromptWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreInputPromptWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInputKey); \
	DECLARE_FUNCTION(execGetInputShortDisplayName); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execPromptNotFound); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetInputKey);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInputKey); \
	DECLARE_FUNCTION(execGetInputShortDisplayName); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execPromptNotFound); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetInputKey);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_EVENT_PARMS \
	struct CoreInputPromptWidget_eventOnEnabledChanged_Parms \
	{ \
		bool NewIsEnabled; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreInputPromptWidget(); \
	friend struct Z_Construct_UClass_UCoreInputPromptWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreInputPromptWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreInputPromptWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUCoreInputPromptWidget(); \
	friend struct Z_Construct_UClass_UCoreInputPromptWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreInputPromptWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreInputPromptWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreInputPromptWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreInputPromptWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreInputPromptWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreInputPromptWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreInputPromptWidget(UCoreInputPromptWidget&&); \
	NO_API UCoreInputPromptWidget(const UCoreInputPromptWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreInputPromptWidget(UCoreInputPromptWidget&&); \
	NO_API UCoreInputPromptWidget(const UCoreInputPromptWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreInputPromptWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreInputPromptWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreInputPromptWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___unfoundInputKeyText() { return STRUCT_OFFSET(UCoreInputPromptWidget, _unfoundInputKeyText); } \
	FORCEINLINE static uint32 __PPO___inputKey() { return STRUCT_OFFSET(UCoreInputPromptWidget, _inputKey); } \
	FORCEINLINE static uint32 __PPO___isEnabled() { return STRUCT_OFFSET(UCoreInputPromptWidget, _isEnabled); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreInputPromptWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInputPromptWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
