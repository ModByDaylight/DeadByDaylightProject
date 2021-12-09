// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUIActionType : uint8;
#ifdef DBDUIVIEWSCORE_CoreKeyListenerInputPromptWidget_generated_h
#error "CoreKeyListenerInputPromptWidget.generated.h already included, missing '#pragma once' in CoreKeyListenerInputPromptWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreKeyListenerInputPromptWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_10_DELEGATE \
static inline void FCoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate) \
{ \
	CoreKeyListenerInputPromptWidgetOnKeyListenerInputPromptTriggeredDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetUIAction);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetUIAction);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_EVENT_PARMS \
	struct CoreKeyListenerInputPromptWidget_eventOnEnabledChanged_Parms \
	{ \
		bool NewIsEnabled; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreKeyListenerInputPromptWidget(); \
	friend struct Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreKeyListenerInputPromptWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreKeyListenerInputPromptWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCoreKeyListenerInputPromptWidget(); \
	friend struct Z_Construct_UClass_UCoreKeyListenerInputPromptWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreKeyListenerInputPromptWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreKeyListenerInputPromptWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreKeyListenerInputPromptWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreKeyListenerInputPromptWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreKeyListenerInputPromptWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreKeyListenerInputPromptWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreKeyListenerInputPromptWidget(UCoreKeyListenerInputPromptWidget&&); \
	NO_API UCoreKeyListenerInputPromptWidget(const UCoreKeyListenerInputPromptWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreKeyListenerInputPromptWidget(UCoreKeyListenerInputPromptWidget&&); \
	NO_API UCoreKeyListenerInputPromptWidget(const UCoreKeyListenerInputPromptWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreKeyListenerInputPromptWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreKeyListenerInputPromptWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreKeyListenerInputPromptWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputPrompt() { return STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, InputPrompt); } \
	FORCEINLINE static uint32 __PPO__LabelTB() { return STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, LabelTB); } \
	FORCEINLINE static uint32 __PPO___onKeyListenerInputPromptTriggeredDelegate() { return STRUCT_OFFSET(UCoreKeyListenerInputPromptWidget, _onKeyListenerInputPromptTriggeredDelegate); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_12_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreKeyListenerInputPromptWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreKeyListenerInputPromptWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
