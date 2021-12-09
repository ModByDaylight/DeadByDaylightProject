// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlayerStatusViewData;
struct FGameplayTag;
#ifdef DBDUIVIEWINTERFACES_PlayerStatusViewInterface_generated_h
#error "PlayerStatusViewInterface.generated.h already included, missing '#pragma once' in PlayerStatusViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_PlayerStatusViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_RPC_WRAPPERS \
	virtual void ClearData_Implementation() {}; \
	virtual void PlayHookEscapeFailedAnimation_Implementation() {}; \
	virtual void PlayTimerAnimation_Implementation() {}; \
	virtual void SetData_Implementation(FPlayerStatusViewData const& data) {}; \
	virtual void SetKiller_Implementation(FGameplayTag killerTag) {}; \
	virtual void SetPlayerNameVisibility_Implementation(bool visible) {}; \
	virtual void SetTimerProgress_Implementation(float value, bool isDeepWound) {}; \
	virtual void TriggerAfflictionHit_Implementation() {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execPlayHookEscapeFailedAnimation); \
	DECLARE_FUNCTION(execPlayTimerAnimation); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetKiller); \
	DECLARE_FUNCTION(execSetPlayerNameVisibility); \
	DECLARE_FUNCTION(execSetTimerProgress); \
	DECLARE_FUNCTION(execTriggerAfflictionHit);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearData_Implementation() {}; \
	virtual void PlayHookEscapeFailedAnimation_Implementation() {}; \
	virtual void PlayTimerAnimation_Implementation() {}; \
	virtual void SetData_Implementation(FPlayerStatusViewData const& data) {}; \
	virtual void SetKiller_Implementation(FGameplayTag killerTag) {}; \
	virtual void SetPlayerNameVisibility_Implementation(bool visible) {}; \
	virtual void SetTimerProgress_Implementation(float value, bool isDeepWound) {}; \
	virtual void TriggerAfflictionHit_Implementation() {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execPlayHookEscapeFailedAnimation); \
	DECLARE_FUNCTION(execPlayTimerAnimation); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetKiller); \
	DECLARE_FUNCTION(execSetPlayerNameVisibility); \
	DECLARE_FUNCTION(execSetTimerProgress); \
	DECLARE_FUNCTION(execTriggerAfflictionHit);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_EVENT_PARMS \
	struct PlayerStatusViewInterface_eventSetData_Parms \
	{ \
		FPlayerStatusViewData data; \
	}; \
	struct PlayerStatusViewInterface_eventSetKiller_Parms \
	{ \
		FGameplayTag killerTag; \
	}; \
	struct PlayerStatusViewInterface_eventSetPlayerNameVisibility_Parms \
	{ \
		bool visible; \
	}; \
	struct PlayerStatusViewInterface_eventSetTimerProgress_Parms \
	{ \
		float value; \
		bool isDeepWound; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStatusViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStatusViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStatusViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStatusViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStatusViewInterface(UPlayerStatusViewInterface&&); \
	NO_API UPlayerStatusViewInterface(const UPlayerStatusViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStatusViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStatusViewInterface(UPlayerStatusViewInterface&&); \
	NO_API UPlayerStatusViewInterface(const UPlayerStatusViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStatusViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStatusViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStatusViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerStatusViewInterface(); \
	friend struct Z_Construct_UClass_UPlayerStatusViewInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerStatusViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStatusViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerStatusViewInterface() {} \
public: \
	typedef UPlayerStatusViewInterface UClassType; \
	typedef IPlayerStatusViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_PlayHookEscapeFailedAnimation(UObject* O); \
	static void Execute_PlayTimerAnimation(UObject* O); \
	static void Execute_SetData(UObject* O, FPlayerStatusViewData const& data); \
	static void Execute_SetKiller(UObject* O, FGameplayTag killerTag); \
	static void Execute_SetPlayerNameVisibility(UObject* O, bool visible); \
	static void Execute_SetTimerProgress(UObject* O, float value, bool isDeepWound); \
	static void Execute_TriggerAfflictionHit(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IPlayerStatusViewInterface() {} \
public: \
	typedef UPlayerStatusViewInterface UClassType; \
	typedef IPlayerStatusViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_PlayHookEscapeFailedAnimation(UObject* O); \
	static void Execute_PlayTimerAnimation(UObject* O); \
	static void Execute_SetData(UObject* O, FPlayerStatusViewData const& data); \
	static void Execute_SetKiller(UObject* O, FGameplayTag killerTag); \
	static void Execute_SetPlayerNameVisibility(UObject* O, bool visible); \
	static void Execute_SetTimerProgress(UObject* O, float value, bool isDeepWound); \
	static void Execute_TriggerAfflictionHit(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_8_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UPlayerStatusViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
