// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnboardingMenuState : uint8;
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreOnboardingMenuWidget_generated_h
#error "CoreOnboardingMenuWidget.generated.h already included, missing '#pragma once' in CoreOnboardingMenuWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreOnboardingMenuWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_15_DELEGATE \
static inline void FCoreOnboardingMenuWidgetBackActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreOnboardingMenuWidgetBackActionDelegate) \
{ \
	CoreOnboardingMenuWidgetBackActionDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_14_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreOnboardingMenuWidgetMenuTabSelectedDelegate_Parms \
{ \
	EOnboardingMenuState selectedTabIndex; \
}; \
static inline void FCoreOnboardingMenuWidgetMenuTabSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreOnboardingMenuWidgetMenuTabSelectedDelegate, EOnboardingMenuState selectedTabIndex) \
{ \
	_Script_DBDUIViewsCore_eventCoreOnboardingMenuWidgetMenuTabSelectedDelegate_Parms Parms; \
	Parms.selectedTabIndex=selectedTabIndex; \
	CoreOnboardingMenuWidgetMenuTabSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_13_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreOnboardingMenuWidgetMenuTabSelectedAgainDelegate_Parms \
{ \
	EOnboardingMenuState selectedTabIndex; \
}; \
static inline void FCoreOnboardingMenuWidgetMenuTabSelectedAgainDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreOnboardingMenuWidgetMenuTabSelectedAgainDelegate, EOnboardingMenuState selectedTabIndex) \
{ \
	_Script_DBDUIViewsCore_eventCoreOnboardingMenuWidgetMenuTabSelectedAgainDelegate_Parms Parms; \
	Parms.selectedTabIndex=selectedTabIndex; \
	CoreOnboardingMenuWidgetMenuTabSelectedAgainDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMenuTabSelectedAgain); \
	DECLARE_FUNCTION(execSetBackButtonText); \
	DECLARE_FUNCTION(execSetTitleText);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMenuTabSelectedAgain); \
	DECLARE_FUNCTION(execSetBackButtonText); \
	DECLARE_FUNCTION(execSetTitleText);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreOnboardingMenuWidget(); \
	friend struct Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreOnboardingMenuWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreOnboardingMenuWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreOnboardingMenuWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCoreOnboardingMenuWidget(); \
	friend struct Z_Construct_UClass_UCoreOnboardingMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreOnboardingMenuWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreOnboardingMenuWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreOnboardingMenuWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreOnboardingMenuWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreOnboardingMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreOnboardingMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreOnboardingMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreOnboardingMenuWidget(UCoreOnboardingMenuWidget&&); \
	NO_API UCoreOnboardingMenuWidget(const UCoreOnboardingMenuWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreOnboardingMenuWidget(UCoreOnboardingMenuWidget&&); \
	NO_API UCoreOnboardingMenuWidget(const UCoreOnboardingMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreOnboardingMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreOnboardingMenuWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreOnboardingMenuWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MenuTitle() { return STRUCT_OFFSET(UCoreOnboardingMenuWidget, MenuTitle); } \
	FORCEINLINE static uint32 __PPO__BackButton() { return STRUCT_OFFSET(UCoreOnboardingMenuWidget, BackButton); } \
	FORCEINLINE static uint32 __PPO__BackActionDelegate() { return STRUCT_OFFSET(UCoreOnboardingMenuWidget, BackActionDelegate); } \
	FORCEINLINE static uint32 __PPO__MenuTabSelectedDelegate() { return STRUCT_OFFSET(UCoreOnboardingMenuWidget, MenuTabSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO__MenuTabSelectedAgainDelegate() { return STRUCT_OFFSET(UCoreOnboardingMenuWidget, MenuTabSelectedAgainDelegate); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_17_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreOnboardingMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
