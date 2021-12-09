// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
enum class EGameManualMenuState : uint8;
enum class EHelpType : uint8;
#ifdef DBDUIVIEWSCORE_CoreGameManualPanelWidget_generated_h
#error "CoreGameManualPanelWidget.generated.h already included, missing '#pragma once' in CoreGameManualPanelWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreGameManualPanelWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_17_DELEGATE \
static inline void FCoreGameManualPanelWidgetOnResetOnboardingMenuSubtitleDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreGameManualPanelWidgetOnResetOnboardingMenuSubtitleDelegate) \
{ \
	CoreGameManualPanelWidgetOnResetOnboardingMenuSubtitleDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_16_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreGameManualPanelWidgetOnSetOnboardingMenuSubtitleDelegate_Parms \
{ \
	FText subtitle; \
}; \
static inline void FCoreGameManualPanelWidgetOnSetOnboardingMenuSubtitleDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreGameManualPanelWidgetOnSetOnboardingMenuSubtitleDelegate, const FText& subtitle) \
{ \
	_Script_DBDUIViewsCore_eventCoreGameManualPanelWidgetOnSetOnboardingMenuSubtitleDelegate_Parms Parms; \
	Parms.subtitle=subtitle; \
	CoreGameManualPanelWidgetOnSetOnboardingMenuSubtitleDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTopicsTabSelected); \
	DECLARE_FUNCTION(execSetCurrentOnbardingMenuSubtitle); \
	DECLARE_FUNCTION(execSetGameManualMenuState); \
	DECLARE_FUNCTION(execShowHelpTopics); \
	DECLARE_FUNCTION(execToggleGameManualMenuState);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTopicsTabSelected); \
	DECLARE_FUNCTION(execSetCurrentOnbardingMenuSubtitle); \
	DECLARE_FUNCTION(execSetGameManualMenuState); \
	DECLARE_FUNCTION(execShowHelpTopics); \
	DECLARE_FUNCTION(execToggleGameManualMenuState);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_EVENT_PARMS \
	struct CoreGameManualPanelWidget_eventResetScrolls_Parms \
	{ \
		bool resetTopicsScroll; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreGameManualPanelWidget(); \
	friend struct Z_Construct_UClass_UCoreGameManualPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreGameManualPanelWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreGameManualPanelWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreGameManualPanelWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCoreGameManualPanelWidget(); \
	friend struct Z_Construct_UClass_UCoreGameManualPanelWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreGameManualPanelWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreGameManualPanelWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreGameManualPanelWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreGameManualPanelWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreGameManualPanelWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGameManualPanelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGameManualPanelWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreGameManualPanelWidget(UCoreGameManualPanelWidget&&); \
	NO_API UCoreGameManualPanelWidget(const UCoreGameManualPanelWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreGameManualPanelWidget(UCoreGameManualPanelWidget&&); \
	NO_API UCoreGameManualPanelWidget(const UCoreGameManualPanelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGameManualPanelWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGameManualPanelWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreGameManualPanelWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentSelectedManualMenu() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, _currentSelectedManualMenu); } \
	FORCEINLINE static uint32 __PPO___currentGameManualTopic() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, _currentGameManualTopic); } \
	FORCEINLINE static uint32 __PPO__CategoryPanel() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, CategoryPanel); } \
	FORCEINLINE static uint32 __PPO__GameCategoryButton() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, GameCategoryButton); } \
	FORCEINLINE static uint32 __PPO__SurvivorCategoryButton() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, SurvivorCategoryButton); } \
	FORCEINLINE static uint32 __PPO__KillerCategoryButton() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, KillerCategoryButton); } \
	FORCEINLINE static uint32 __PPO__TopicsPanel() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, TopicsPanel); } \
	FORCEINLINE static uint32 __PPO__GameManualTopicsTabs() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, GameManualTopicsTabs); } \
	FORCEINLINE static uint32 __PPO__GameManualContentTitle() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, GameManualContentTitle); } \
	FORCEINLINE static uint32 __PPO__GameManualContentSubtitle() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, GameManualContentSubtitle); } \
	FORCEINLINE static uint32 __PPO__GameManualContentText() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, GameManualContentText); } \
	FORCEINLINE static uint32 __PPO___onSetOnboardingMenuSubtitleDelegate() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, _onSetOnboardingMenuSubtitleDelegate); } \
	FORCEINLINE static uint32 __PPO___onResetOnboardingMenuSubtitleDelegate() { return STRUCT_OFFSET(UCoreGameManualPanelWidget, _onResetOnboardingMenuSubtitleDelegate); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_19_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreGameManualPanelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreGameManualPanelWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
