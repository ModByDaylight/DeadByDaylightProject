// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EUIActionType : uint8;
struct FKey;
#ifdef DBDUIVIEWSCORE_CoreButtonPromptWidget_generated_h
#error "CoreButtonPromptWidget.generated.h already included, missing '#pragma once' in CoreButtonPromptWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreButtonPromptWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_12_DELEGATE \
static inline void FCoreButtonPromptWidgetButtonPromptTriggeredDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreButtonPromptWidgetButtonPromptTriggeredDelegate) \
{ \
	CoreButtonPromptWidgetButtonPromptTriggeredDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAction); \
	DECLARE_FUNCTION(execSetInputKey); \
	DECLARE_FUNCTION(execSetText);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAction); \
	DECLARE_FUNCTION(execSetInputKey); \
	DECLARE_FUNCTION(execSetText);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_EVENT_PARMS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreButtonPromptWidget(); \
	friend struct Z_Construct_UClass_UCoreButtonPromptWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreButtonPromptWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreButtonPromptWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCoreButtonPromptWidget(); \
	friend struct Z_Construct_UClass_UCoreButtonPromptWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreButtonPromptWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreButtonPromptWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreButtonPromptWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreButtonPromptWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreButtonPromptWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreButtonPromptWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreButtonPromptWidget(UCoreButtonPromptWidget&&); \
	NO_API UCoreButtonPromptWidget(const UCoreButtonPromptWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreButtonPromptWidget(UCoreButtonPromptWidget&&); \
	NO_API UCoreButtonPromptWidget(const UCoreButtonPromptWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreButtonPromptWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreButtonPromptWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreButtonPromptWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CursorOverSfx() { return STRUCT_OFFSET(UCoreButtonPromptWidget, CursorOverSfx); } \
	FORCEINLINE static uint32 __PPO__CursorPressSfx() { return STRUCT_OFFSET(UCoreButtonPromptWidget, CursorPressSfx); } \
	FORCEINLINE static uint32 __PPO__CursorReleaseSfx() { return STRUCT_OFFSET(UCoreButtonPromptWidget, CursorReleaseSfx); } \
	FORCEINLINE static uint32 __PPO___inputPromptText() { return STRUCT_OFFSET(UCoreButtonPromptWidget, _inputPromptText); } \
	FORCEINLINE static uint32 __PPO___buttonTextField() { return STRUCT_OFFSET(UCoreButtonPromptWidget, _buttonTextField); } \
	FORCEINLINE static uint32 __PPO___buttonPromptTriggeredDelegate() { return STRUCT_OFFSET(UCoreButtonPromptWidget, _buttonPromptTriggeredDelegate); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_14_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreButtonPromptWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonPromptWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
