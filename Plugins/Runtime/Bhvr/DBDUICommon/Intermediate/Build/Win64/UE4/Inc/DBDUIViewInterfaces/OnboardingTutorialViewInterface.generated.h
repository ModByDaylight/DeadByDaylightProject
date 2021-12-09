// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOnboardingStepViewData;
struct FRewardWrapperViewData;
#ifdef DBDUIVIEWINTERFACES_OnboardingTutorialViewInterface_generated_h
#error "OnboardingTutorialViewInterface.generated.h already included, missing '#pragma once' in OnboardingTutorialViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_OnboardingTutorialViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_RPC_WRAPPERS \
	virtual void SetProgress_Implementation(TArray<FOnboardingStepViewData> const& progress) {}; \
	virtual void SetTutorialProgressionFeedbacks_Implementation(const FString& completedStepId, bool isOnboardingEnabled) {}; \
	virtual void SetUIEnabled_Implementation(bool enabled) {}; \
	virtual void StopLoadingSpinner_Implementation() {}; \
	virtual void UpdateProgress_Implementation(TArray<FOnboardingStepViewData> const& before, TArray<FOnboardingStepViewData> const& after, TArray<FRewardWrapperViewData> const& rewards) {}; \
 \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execSetTutorialProgressionFeedbacks); \
	DECLARE_FUNCTION(execSetUIEnabled); \
	DECLARE_FUNCTION(execStopLoadingSpinner); \
	DECLARE_FUNCTION(execUpdateProgress);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetProgress_Implementation(TArray<FOnboardingStepViewData> const& progress) {}; \
	virtual void SetTutorialProgressionFeedbacks_Implementation(const FString& completedStepId, bool isOnboardingEnabled) {}; \
	virtual void SetUIEnabled_Implementation(bool enabled) {}; \
	virtual void StopLoadingSpinner_Implementation() {}; \
	virtual void UpdateProgress_Implementation(TArray<FOnboardingStepViewData> const& before, TArray<FOnboardingStepViewData> const& after, TArray<FRewardWrapperViewData> const& rewards) {}; \
 \
	DECLARE_FUNCTION(execSetProgress); \
	DECLARE_FUNCTION(execSetTutorialProgressionFeedbacks); \
	DECLARE_FUNCTION(execSetUIEnabled); \
	DECLARE_FUNCTION(execStopLoadingSpinner); \
	DECLARE_FUNCTION(execUpdateProgress);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_EVENT_PARMS \
	struct OnboardingTutorialViewInterface_eventSetProgress_Parms \
	{ \
		TArray<FOnboardingStepViewData> progress; \
	}; \
	struct OnboardingTutorialViewInterface_eventSetTutorialProgressionFeedbacks_Parms \
	{ \
		FString completedStepId; \
		bool isOnboardingEnabled; \
	}; \
	struct OnboardingTutorialViewInterface_eventSetUIEnabled_Parms \
	{ \
		bool enabled; \
	}; \
	struct OnboardingTutorialViewInterface_eventUpdateProgress_Parms \
	{ \
		TArray<FOnboardingStepViewData> before; \
		TArray<FOnboardingStepViewData> after; \
		TArray<FRewardWrapperViewData> rewards; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnboardingTutorialViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnboardingTutorialViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnboardingTutorialViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnboardingTutorialViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnboardingTutorialViewInterface(UOnboardingTutorialViewInterface&&); \
	NO_API UOnboardingTutorialViewInterface(const UOnboardingTutorialViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnboardingTutorialViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnboardingTutorialViewInterface(UOnboardingTutorialViewInterface&&); \
	NO_API UOnboardingTutorialViewInterface(const UOnboardingTutorialViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnboardingTutorialViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnboardingTutorialViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnboardingTutorialViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOnboardingTutorialViewInterface(); \
	friend struct Z_Construct_UClass_UOnboardingTutorialViewInterface_Statics; \
public: \
	DECLARE_CLASS(UOnboardingTutorialViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UOnboardingTutorialViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOnboardingTutorialViewInterface() {} \
public: \
	typedef UOnboardingTutorialViewInterface UClassType; \
	typedef IOnboardingTutorialViewInterface ThisClass; \
	static void Execute_SetProgress(UObject* O, TArray<FOnboardingStepViewData> const& progress); \
	static void Execute_SetTutorialProgressionFeedbacks(UObject* O, const FString& completedStepId, bool isOnboardingEnabled); \
	static void Execute_SetUIEnabled(UObject* O, bool enabled); \
	static void Execute_StopLoadingSpinner(UObject* O); \
	static void Execute_UpdateProgress(UObject* O, TArray<FOnboardingStepViewData> const& before, TArray<FOnboardingStepViewData> const& after, TArray<FRewardWrapperViewData> const& rewards); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IOnboardingTutorialViewInterface() {} \
public: \
	typedef UOnboardingTutorialViewInterface UClassType; \
	typedef IOnboardingTutorialViewInterface ThisClass; \
	static void Execute_SetProgress(UObject* O, TArray<FOnboardingStepViewData> const& progress); \
	static void Execute_SetTutorialProgressionFeedbacks(UObject* O, const FString& completedStepId, bool isOnboardingEnabled); \
	static void Execute_SetUIEnabled(UObject* O, bool enabled); \
	static void Execute_StopLoadingSpinner(UObject* O); \
	static void Execute_UpdateProgress(UObject* O, TArray<FOnboardingStepViewData> const& before, TArray<FOnboardingStepViewData> const& after, TArray<FRewardWrapperViewData> const& rewards); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_8_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UOnboardingTutorialViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_OnboardingTutorialViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
