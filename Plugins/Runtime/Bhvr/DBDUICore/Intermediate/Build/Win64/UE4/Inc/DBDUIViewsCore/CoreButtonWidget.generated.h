// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
enum class EButtonWidgetVisibility : uint8;
#ifdef DBDUIVIEWSCORE_CoreButtonWidget_generated_h
#error "CoreButtonWidget.generated.h already included, missing '#pragma once' in CoreButtonWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreButtonWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_17_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreButtonWidgetOnReleasedDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FCoreButtonWidgetOnReleasedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreButtonWidgetOnReleasedDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	_Script_DBDUIViewsCore_eventCoreButtonWidgetOnReleasedDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	CoreButtonWidgetOnReleasedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_16_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreButtonWidgetOnPressedDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FCoreButtonWidgetOnPressedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreButtonWidgetOnPressedDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	_Script_DBDUIViewsCore_eventCoreButtonWidgetOnPressedDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	CoreButtonWidgetOnPressedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_15_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreButtonWidgetOnUnhoveredDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FCoreButtonWidgetOnUnhoveredDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreButtonWidgetOnUnhoveredDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	_Script_DBDUIViewsCore_eventCoreButtonWidgetOnUnhoveredDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	CoreButtonWidgetOnUnhoveredDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_14_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreButtonWidgetOnHoveredDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FCoreButtonWidgetOnHoveredDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreButtonWidgetOnHoveredDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	_Script_DBDUIViewsCore_eventCoreButtonWidgetOnHoveredDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	CoreButtonWidgetOnHoveredDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_13_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreButtonWidgetOnClickedDelegate_Parms \
{ \
	UCoreButtonWidget* buttonTarget; \
}; \
static inline void FCoreButtonWidgetOnClickedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreButtonWidgetOnClickedDelegate, UCoreButtonWidget* buttonTarget) \
{ \
	_Script_DBDUIViewsCore_eventCoreButtonWidgetOnClickedDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	CoreButtonWidgetOnClickedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execOnInternalClicked); \
	DECLARE_FUNCTION(execOnInternalHovered); \
	DECLARE_FUNCTION(execOnInternalPressed); \
	DECLARE_FUNCTION(execOnInternalReleased); \
	DECLARE_FUNCTION(execOnInternalUnhovered); \
	DECLARE_FUNCTION(execSetChargeable); \
	DECLARE_FUNCTION(execSetClickable); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetHoldable); \
	DECLARE_FUNCTION(execSetHoverable); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetPressable); \
	DECLARE_FUNCTION(execSetVisible);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execOnInternalClicked); \
	DECLARE_FUNCTION(execOnInternalHovered); \
	DECLARE_FUNCTION(execOnInternalPressed); \
	DECLARE_FUNCTION(execOnInternalReleased); \
	DECLARE_FUNCTION(execOnInternalUnhovered); \
	DECLARE_FUNCTION(execSetChargeable); \
	DECLARE_FUNCTION(execSetClickable); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execSetHoldable); \
	DECLARE_FUNCTION(execSetHoverable); \
	DECLARE_FUNCTION(execSetLabel); \
	DECLARE_FUNCTION(execSetPressable); \
	DECLARE_FUNCTION(execSetVisible);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_EVENT_PARMS \
	struct CoreButtonWidget_eventOnEnabledChanged_Parms \
	{ \
		bool NewIsEnabled; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreButtonWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCoreButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreButtonWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreButtonWidget(UCoreButtonWidget&&); \
	NO_API UCoreButtonWidget(const UCoreButtonWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreButtonWidget(UCoreButtonWidget&&); \
	NO_API UCoreButtonWidget(const UCoreButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HitzoneButton() { return STRUCT_OFFSET(UCoreButtonWidget, HitzoneButton); } \
	FORCEINLINE static uint32 __PPO__LabelTB() { return STRUCT_OFFSET(UCoreButtonWidget, LabelTB); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_19_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
