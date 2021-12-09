// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControlMode : uint8;
#ifdef DBDUIVIEWSCORE_DBDScrollBox_generated_h
#error "DBDScrollBox.generated.h already included, missing '#pragma once' in DBDScrollBox.h"
#endif
#define DBDUIVIEWSCORE_DBDScrollBox_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleControllerInput); \
	DECLARE_FUNCTION(execIsMouseOver); \
	DECLARE_FUNCTION(execOnControlModeChanged); \
	DECLARE_FUNCTION(execUpdateDisplayPrompt);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleControllerInput); \
	DECLARE_FUNCTION(execIsMouseOver); \
	DECLARE_FUNCTION(execOnControlModeChanged); \
	DECLARE_FUNCTION(execUpdateDisplayPrompt);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDScrollBox(); \
	friend struct Z_Construct_UClass_UDBDScrollBox_Statics; \
public: \
	DECLARE_CLASS(UDBDScrollBox, UScrollBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDScrollBox)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDBDScrollBox(); \
	friend struct Z_Construct_UClass_UDBDScrollBox_Statics; \
public: \
	DECLARE_CLASS(UDBDScrollBox, UScrollBox, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UDBDScrollBox)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDScrollBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDScrollBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDScrollBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDScrollBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDScrollBox(UDBDScrollBox&&); \
	NO_API UDBDScrollBox(const UDBDScrollBox&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDScrollBox(UDBDScrollBox&&); \
	NO_API UDBDScrollBox(const UDBDScrollBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDScrollBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDScrollBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDScrollBox)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___useControllerScroll() { return STRUCT_OFFSET(UDBDScrollBox, _useControllerScroll); } \
	FORCEINLINE static uint32 __PPO___shouldScrollOnMouseOver() { return STRUCT_OFFSET(UDBDScrollBox, _shouldScrollOnMouseOver); } \
	FORCEINLINE static uint32 __PPO___scrollSpeed() { return STRUCT_OFFSET(UDBDScrollBox, _scrollSpeed); } \
	FORCEINLINE static uint32 __PPO___displayPrompt() { return STRUCT_OFFSET(UDBDScrollBox, _displayPrompt); } \
	FORCEINLINE static uint32 __PPO___displayPromptText() { return STRUCT_OFFSET(UDBDScrollBox, _displayPromptText); } \
	FORCEINLINE static uint32 __PPO___showDisplayPrompt() { return STRUCT_OFFSET(UDBDScrollBox, _showDisplayPrompt); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_10_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UDBDScrollBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_DBDScrollBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
