// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef DBDUIPRESENTERS_HudPresenter_generated_h
#error "HudPresenter.generated.h already included, missing '#pragma once' in HudPresenter.h"
#endif
#define DBDUIPRESENTERS_HudPresenter_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnPossessed); \
	DECLARE_FUNCTION(execOnPawnUnpossessed);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnPossessed); \
	DECLARE_FUNCTION(execOnPawnUnpossessed);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHudPresenter(); \
	friend struct Z_Construct_UClass_UHudPresenter_Statics; \
public: \
	DECLARE_CLASS(UHudPresenter, UPresenter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UHudPresenter)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUHudPresenter(); \
	friend struct Z_Construct_UClass_UHudPresenter_Statics; \
public: \
	DECLARE_CLASS(UHudPresenter, UPresenter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UHudPresenter)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudPresenter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudPresenter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudPresenter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudPresenter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudPresenter(UHudPresenter&&); \
	NO_API UHudPresenter(const UHudPresenter&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudPresenter(UHudPresenter&&); \
	NO_API UHudPresenter(const UHudPresenter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudPresenter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudPresenter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHudPresenter)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___presentedCharacter() { return STRUCT_OFFSET(UHudPresenter, _presentedCharacter); } \
	FORCEINLINE static uint32 __PPO___pendingCharacter() { return STRUCT_OFFSET(UHudPresenter, _pendingCharacter); } \
	FORCEINLINE static uint32 __PPO___spectatorPawn() { return STRUCT_OFFSET(UHudPresenter, _spectatorPawn); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_10_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UHudPresenter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_HudPresenter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
