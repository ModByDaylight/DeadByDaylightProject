// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef DBDUIVIEWSCORE_CoreInteractionPromptActionWidget_generated_h
#error "CoreInteractionPromptActionWidget.generated.h already included, missing '#pragma once' in CoreInteractionPromptActionWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreInteractionPromptActionWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasFourthPrompt); \
	DECLARE_FUNCTION(execHasSecondPrompt); \
	DECLARE_FUNCTION(execHasThirdPrompt); \
	DECLARE_FUNCTION(execPlayIdleAnimation); \
	DECLARE_FUNCTION(execSetInputKey); \
	DECLARE_FUNCTION(execSetInputKey2); \
	DECLARE_FUNCTION(execSetInputKey3); \
	DECLARE_FUNCTION(execSetInputKey4); \
	DECLARE_FUNCTION(execStopIdleAnimation);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasFourthPrompt); \
	DECLARE_FUNCTION(execHasSecondPrompt); \
	DECLARE_FUNCTION(execHasThirdPrompt); \
	DECLARE_FUNCTION(execPlayIdleAnimation); \
	DECLARE_FUNCTION(execSetInputKey); \
	DECLARE_FUNCTION(execSetInputKey2); \
	DECLARE_FUNCTION(execSetInputKey3); \
	DECLARE_FUNCTION(execSetInputKey4); \
	DECLARE_FUNCTION(execStopIdleAnimation);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreInteractionPromptActionWidget(); \
	friend struct Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreInteractionPromptActionWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreInteractionPromptActionWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCoreInteractionPromptActionWidget(); \
	friend struct Z_Construct_UClass_UCoreInteractionPromptActionWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreInteractionPromptActionWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreInteractionPromptActionWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreInteractionPromptActionWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreInteractionPromptActionWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreInteractionPromptActionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreInteractionPromptActionWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreInteractionPromptActionWidget(UCoreInteractionPromptActionWidget&&); \
	NO_API UCoreInteractionPromptActionWidget(const UCoreInteractionPromptActionWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreInteractionPromptActionWidget(UCoreInteractionPromptActionWidget&&); \
	NO_API UCoreInteractionPromptActionWidget(const UCoreInteractionPromptActionWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreInteractionPromptActionWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreInteractionPromptActionWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreInteractionPromptActionWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputPrompt() { return STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputPrompt); } \
	FORCEINLINE static uint32 __PPO__InputPrompt2() { return STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputPrompt2); } \
	FORCEINLINE static uint32 __PPO__InputPrompt3() { return STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputPrompt3); } \
	FORCEINLINE static uint32 __PPO__InputPrompt4() { return STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputPrompt4); } \
	FORCEINLINE static uint32 __PPO__IdleAnimationName() { return STRUCT_OFFSET(UCoreInteractionPromptActionWidget, IdleAnimationName); } \
	FORCEINLINE static uint32 __PPO__InputKey() { return STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputKey); } \
	FORCEINLINE static uint32 __PPO__InputKey2() { return STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputKey2); } \
	FORCEINLINE static uint32 __PPO__InputKey3() { return STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputKey3); } \
	FORCEINLINE static uint32 __PPO__InputKey4() { return STRUCT_OFFSET(UCoreInteractionPromptActionWidget, InputKey4); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_9_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreInteractionPromptActionWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreInteractionPromptActionWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
