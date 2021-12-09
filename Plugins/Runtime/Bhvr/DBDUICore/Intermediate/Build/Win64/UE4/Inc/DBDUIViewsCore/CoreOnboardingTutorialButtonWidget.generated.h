// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreButtonWidget;
struct FOnboardingTutorialButtonViewData;
#ifdef DBDUIVIEWSCORE_CoreOnboardingTutorialButtonWidget_generated_h
#error "CoreOnboardingTutorialButtonWidget.generated.h already included, missing '#pragma once' in CoreOnboardingTutorialButtonWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreOnboardingTutorialButtonWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_13_DELEGATE \
static inline void FCoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate) \
{ \
	CoreOnboardingTutorialButtonWidgetOnSetDataAnimationCompleteDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsInUnavailableStep); \
	DECLARE_FUNCTION(execOnRewardClicked); \
	DECLARE_FUNCTION(execOnRewardPressed); \
	DECLARE_FUNCTION(execOnRewardReleased); \
	DECLARE_FUNCTION(execSetVisual);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsInUnavailableStep); \
	DECLARE_FUNCTION(execOnRewardClicked); \
	DECLARE_FUNCTION(execOnRewardPressed); \
	DECLARE_FUNCTION(execOnRewardReleased); \
	DECLARE_FUNCTION(execSetVisual);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_EVENT_PARMS \
	struct CoreOnboardingTutorialButtonWidget_eventSetData_Parms \
	{ \
		FOnboardingTutorialButtonViewData NewViewData; \
		bool isRefreshingWithAnimation; \
	}; \
	struct CoreOnboardingTutorialButtonWidget_eventSetUIEnabled_Parms \
	{ \
		bool enabled; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreOnboardingTutorialButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreOnboardingTutorialButtonWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreOnboardingTutorialButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCoreOnboardingTutorialButtonWidget(); \
	friend struct Z_Construct_UClass_UCoreOnboardingTutorialButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreOnboardingTutorialButtonWidget, UCoreButtonWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreOnboardingTutorialButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreOnboardingTutorialButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreOnboardingTutorialButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreOnboardingTutorialButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreOnboardingTutorialButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreOnboardingTutorialButtonWidget(UCoreOnboardingTutorialButtonWidget&&); \
	NO_API UCoreOnboardingTutorialButtonWidget(const UCoreOnboardingTutorialButtonWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreOnboardingTutorialButtonWidget(UCoreOnboardingTutorialButtonWidget&&); \
	NO_API UCoreOnboardingTutorialButtonWidget(const UCoreOnboardingTutorialButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreOnboardingTutorialButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreOnboardingTutorialButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreOnboardingTutorialButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TitleText() { return STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, TitleText); } \
	FORCEINLINE static uint32 __PPO__DescriptionText() { return STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, DescriptionText); } \
	FORCEINLINE static uint32 __PPO__RewardsText() { return STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, RewardsText); } \
	FORCEINLINE static uint32 __PPO__RoleIcon() { return STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, RoleIcon); } \
	FORCEINLINE static uint32 __PPO__StateSwitcher() { return STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, StateSwitcher); } \
	FORCEINLINE static uint32 __PPO__LockedImage() { return STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, LockedImage); } \
	FORCEINLINE static uint32 __PPO__CompletedImage() { return STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, CompletedImage); } \
	FORCEINLINE static uint32 __PPO__RewardWrappers() { return STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, RewardWrappers); } \
	FORCEINLINE static uint32 __PPO__ViewData() { return STRUCT_OFFSET(UCoreOnboardingTutorialButtonWidget, ViewData); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_15_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreOnboardingTutorialButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreOnboardingTutorialButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
