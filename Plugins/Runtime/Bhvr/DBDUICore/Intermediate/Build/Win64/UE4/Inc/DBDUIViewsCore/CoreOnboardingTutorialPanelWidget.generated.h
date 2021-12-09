// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSCORE_CoreOnboardingTutorialPanelWidget_generated_h
#error "CoreOnboardingTutorialPanelWidget.generated.h already included, missing '#pragma once' in CoreOnboardingTutorialPanelWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreOnboardingTutorialPanelWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_10_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreOnboardingTutorialPanelWidgetTutorialSelectedDelegate_Parms \
{ \
	FString stepId; \
	FString tutorialId; \
}; \
static inline void FCoreOnboardingTutorialPanelWidgetTutorialSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreOnboardingTutorialPanelWidgetTutorialSelectedDelegate, const FString& stepId, const FString& tutorialId) \
{ \
	_Script_DBDUIViewsCore_eventCoreOnboardingTutorialPanelWidgetTutorialSelectedDelegate_Parms Parms; \
	Parms.stepId=stepId; \
	Parms.tutorialId=tutorialId; \
	CoreOnboardingTutorialPanelWidgetTutorialSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckNextPendingButtonUpdate); \
	DECLARE_FUNCTION(execNextPendingButtonUpdated);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckNextPendingButtonUpdate); \
	DECLARE_FUNCTION(execNextPendingButtonUpdated);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_EVENT_PARMS \
	struct CoreOnboardingTutorialPanelWidget_eventSetTutorialDescription_Parms \
	{ \
		FText description; \
		bool isWarning; \
	}; \
	struct CoreOnboardingTutorialPanelWidget_eventSetTutorialSeparators_Parms \
	{ \
		FString completedStepId; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreOnboardingTutorialPanelWidget(); \
	friend struct Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreOnboardingTutorialPanelWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreOnboardingTutorialPanelWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreOnboardingTutorialPanelWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCoreOnboardingTutorialPanelWidget(); \
	friend struct Z_Construct_UClass_UCoreOnboardingTutorialPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreOnboardingTutorialPanelWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreOnboardingTutorialPanelWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreOnboardingTutorialPanelWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreOnboardingTutorialPanelWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreOnboardingTutorialPanelWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreOnboardingTutorialPanelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreOnboardingTutorialPanelWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreOnboardingTutorialPanelWidget(UCoreOnboardingTutorialPanelWidget&&); \
	NO_API UCoreOnboardingTutorialPanelWidget(const UCoreOnboardingTutorialPanelWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreOnboardingTutorialPanelWidget(UCoreOnboardingTutorialPanelWidget&&); \
	NO_API UCoreOnboardingTutorialPanelWidget(const UCoreOnboardingTutorialPanelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreOnboardingTutorialPanelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreOnboardingTutorialPanelWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreOnboardingTutorialPanelWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TutorialButtons() { return STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, TutorialButtons); } \
	FORCEINLINE static uint32 __PPO__TutorialSelectedDelegate() { return STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, TutorialSelectedDelegate); } \
	FORCEINLINE static uint32 __PPO___pendingData() { return STRUCT_OFFSET(UCoreOnboardingTutorialPanelWidget, _pendingData); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_12_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreOnboardingTutorialPanelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialPanelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
