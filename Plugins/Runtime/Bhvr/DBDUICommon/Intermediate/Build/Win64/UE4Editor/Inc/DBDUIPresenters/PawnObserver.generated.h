// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIPRESENTERS_PawnObserver_generated_h
#error "PawnObserver.generated.h already included, missing '#pragma once' in PawnObserver.h"
#endif
#define DBDUIPRESENTERS_PawnObserver_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLocallyObservedChanged);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLocallyObservedChanged);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPawnObserver(); \
	friend struct Z_Construct_UClass_UPawnObserver_Statics; \
public: \
	DECLARE_CLASS(UPawnObserver, UUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPawnObserver)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPawnObserver(); \
	friend struct Z_Construct_UClass_UPawnObserver_Statics; \
public: \
	DECLARE_CLASS(UPawnObserver, UUIComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDUIPresenters"), NO_API) \
	DECLARE_SERIALIZER(UPawnObserver)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPawnObserver(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPawnObserver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnObserver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnObserver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnObserver(UPawnObserver&&); \
	NO_API UPawnObserver(const UPawnObserver&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPawnObserver(UPawnObserver&&); \
	NO_API UPawnObserver(const UPawnObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPawnObserver); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPawnObserver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPawnObserver)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___pawn() { return STRUCT_OFFSET(UPawnObserver, _pawn); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_8_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIPRESENTERS_API UClass* StaticClass<class UPawnObserver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIPresenters_Public_PawnObserver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
