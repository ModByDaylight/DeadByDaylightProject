// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreSelectableButtonWidget_generated_h
#error "CoreSelectableButtonWidget.generated.h already included, missing '#pragma once' in CoreSelectableButtonWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreSelectableButtonWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_9_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedAgainDelegate_Parms \
{ \
	UCoreSelectableButtonWidget* buttonTarget; \
}; \
static inline void FCoreSelectableButtonWidgetOnSelectedAgainDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreSelectableButtonWidgetOnSelectedAgainDelegate, UCoreSelectableButtonWidget* buttonTarget) \
{ \
	_Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedAgainDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	CoreSelectableButtonWidgetOnSelectedAgainDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_8_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedChangedDelegate_Parms \
{ \
	UCoreSelectableButtonWidget* buttonTarget; \
	bool isSelected; \
}; \
static inline void FCoreSelectableButtonWidgetOnSelectedChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreSelectableButtonWidgetOnSelectedChangedDelegate, UCoreSelectableButtonWidget* buttonTarget, bool isSelected) \
{ \
	_Script_DBDUIViewsCore_eventCoreSelectableButtonWidgetOnSelectedChangedDelegate_Parms Parms; \
	Parms.buttonTarget=buttonTarget; \
	Parms.isSelected=isSelected ? true : false; \
	CoreSelectableButtonWidgetOnSelectedChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsSelectable); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execSetSelected);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsSelectable); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execSetSelected);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_EVENT_PARMS \
	struct CoreSelectableButtonWidget_eventOnSelectedChanged_Parms \
	{ \
		bool NewIsSelected; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreSelectableButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreSelectableButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreSelectableButtonWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSelectableButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCoreSelectableButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreSelectableButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreSelectableButtonWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSelectableButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreSelectableButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreSelectableButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSelectableButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSelectableButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSelectableButtonWidget(UCoreSelectableButtonWidget&&); \
	NO_API UCoreSelectableButtonWidget(const UCoreSelectableButtonWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSelectableButtonWidget(UCoreSelectableButtonWidget&&); \
	NO_API UCoreSelectableButtonWidget(const UCoreSelectableButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSelectableButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSelectableButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreSelectableButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_11_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreSelectableButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSelectableButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
