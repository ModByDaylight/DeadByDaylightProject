// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOnboardingMenuState : uint8;
#ifdef DBDUIPRESENTERS_OnboardingMenuPresenter_generated_h
#error "OnboardingMenuPresenter.generated.h already included, missing '#pragma once' in OnboardingMenuPresenter.h"
#endif
#define DBDUIPRESENTERS_OnboardingMenuPresenter_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBackAction); \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMenuTabSelectedAgain); \
	DECLARE_FUNCTION(execOnSetUIEnabled);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBackAction); \
	DECLARE_FUNCTION(execOnMenuTabSelected); \
	DECLARE_FUNCTION(execOnMenuTabSelectedAgain); \
	DECLARE_FUNCTION(execOnSetUIEnabled);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnboardingMenuPresenter(); \
	friend struct Z_Construct_UClass_UOnboardingMenuPresenter_Statics; \
public: \
	DECLARE_CLASS(UOnboardingMenuPresenter, UPresenter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UOnboardingMenuPresenter)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOnboardingMenuPresenter(); \
	friend struct Z_Construct_UClass_UOnboardingMenuPresenter_Statics; \
public: \
	DECLARE_CLASS(UOnboardingMenuPresenter, UPresenter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UOnboardingMenuPresenter)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnboardingMenuPresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnboardingMenuPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnboardingMenuPresenter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnboardingMenuPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnboardingMenuPresenter(UOnboardingMenuPresenter&&); \
	NO_API UOnboardingMenuPresenter(const UOnboardingMenuPresenter&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnboardingMenuPresenter(UOnboardingMenuPresenter&&); \
	NO_API UOnboardingMenuPresenter(const UOnboardingMenuPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnboardingMenuPresenter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnboardingMenuPresenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnboardingMenuPresenter)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___onboardingTutorialSubPresenter() { return STRUCT_OFFSET(UOnboardingMenuPresenter, _onboardingTutorialSubPresenter); } \
	FORCEINLINE static uint32 __PPO___gameManualSubPresenter() { return STRUCT_OFFSET(UOnboardingMenuPresenter, _gameManualSubPresenter); } \
	FORCEINLINE static uint32 __PPO___activeSubPresenter() { return STRUCT_OFFSET(UOnboardingMenuPresenter, _activeSubPresenter); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_13_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UOnboardingMenuPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_OnboardingMenuPresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
