// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterTooltipViewData;
struct FGeometry;
struct FCurrencyProgressionTooltipViewData;
struct FCustomizationTooltipViewData;
#ifdef DBDUIVIEWSCORE_DBDTooltipManager_generated_h
#error "DBDTooltipManager.generated.h already included, missing '#pragma once' in DBDTooltipManager.h"
#endif
#define DBDUIVIEWSCORE_DBDTooltipManager_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHideTooltip); \
	DECLARE_FUNCTION(execShowCharacterTooltip); \
	DECLARE_FUNCTION(execShowCurrencyTooltip); \
	DECLARE_FUNCTION(execShowCustomizationTooltip);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHideTooltip); \
	DECLARE_FUNCTION(execShowCharacterTooltip); \
	DECLARE_FUNCTION(execShowCurrencyTooltip); \
	DECLARE_FUNCTION(execShowCustomizationTooltip);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDTooltipManager(); \
	friend struct Z_Construct_UClass_UDBDTooltipManager_Statics; \
public: \
	DECLARE_CLASS(UDBDTooltipManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDTooltipManager)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDBDTooltipManager(); \
	friend struct Z_Construct_UClass_UDBDTooltipManager_Statics; \
public: \
	DECLARE_CLASS(UDBDTooltipManager, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDTooltipManager)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDTooltipManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDTooltipManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDTooltipManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDTooltipManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDTooltipManager(UDBDTooltipManager&&); \
	NO_API UDBDTooltipManager(const UDBDTooltipManager&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDTooltipManager(UDBDTooltipManager&&); \
	NO_API UDBDTooltipManager(const UDBDTooltipManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDTooltipManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDTooltipManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDTooltipManager)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentTooltip() { return STRUCT_OFFSET(UDBDTooltipManager, _currentTooltip); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_12_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UDBDTooltipManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDTooltipManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
