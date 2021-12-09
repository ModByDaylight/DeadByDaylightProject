// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUITweenInstance;
#ifdef DBDUIVIEWSCORE_CoreStartSequenceWidget_generated_h
#error "CoreStartSequenceWidget.generated.h already included, missing '#pragma once' in CoreStartSequenceWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreStartSequenceWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_14_DELEGATE \
static inline void FCoreStartSequenceWidgetStartSequenceFadeOutDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreStartSequenceWidgetStartSequenceFadeOutDelegate) \
{ \
	CoreStartSequenceWidgetStartSequenceFadeOutDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHideStartSequenceComplete);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHideStartSequenceComplete);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStartSequenceWidget(); \
	friend struct Z_Construct_UClass_UCoreStartSequenceWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStartSequenceWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStartSequenceWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStartSequenceWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUCoreStartSequenceWidget(); \
	friend struct Z_Construct_UClass_UCoreStartSequenceWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreStartSequenceWidget, UCoreBaseHudWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreStartSequenceWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreStartSequenceWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStartSequenceWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStartSequenceWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStartSequenceWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStartSequenceWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStartSequenceWidget(UCoreStartSequenceWidget&&); \
	NO_API UCoreStartSequenceWidget(const UCoreStartSequenceWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreStartSequenceWidget(UCoreStartSequenceWidget&&); \
	NO_API UCoreStartSequenceWidget(const UCoreStartSequenceWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStartSequenceWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStartSequenceWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStartSequenceWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FadeInDuration() { return STRUCT_OFFSET(UCoreStartSequenceWidget, FadeInDuration); } \
	FORCEINLINE static uint32 __PPO__FadeOutDuration() { return STRUCT_OFFSET(UCoreStartSequenceWidget, FadeOutDuration); } \
	FORCEINLINE static uint32 __PPO__FadeInEasing() { return STRUCT_OFFSET(UCoreStartSequenceWidget, FadeInEasing); } \
	FORCEINLINE static uint32 __PPO__FadeOutEasing() { return STRUCT_OFFSET(UCoreStartSequenceWidget, FadeOutEasing); } \
	FORCEINLINE static uint32 __PPO__BorderColors() { return STRUCT_OFFSET(UCoreStartSequenceWidget, BorderColors); } \
	FORCEINLINE static uint32 __PPO__DefaultColor() { return STRUCT_OFFSET(UCoreStartSequenceWidget, DefaultColor); } \
	FORCEINLINE static uint32 __PPO__ThemeNameTextfield() { return STRUCT_OFFSET(UCoreStartSequenceWidget, ThemeNameTextfield); } \
	FORCEINLINE static uint32 __PPO__SeparatorImage() { return STRUCT_OFFSET(UCoreStartSequenceWidget, SeparatorImage); } \
	FORCEINLINE static uint32 __PPO__MapNameTextfield() { return STRUCT_OFFSET(UCoreStartSequenceWidget, MapNameTextfield); } \
	FORCEINLINE static uint32 __PPO__StartSequenceFadeOutDelegate() { return STRUCT_OFFSET(UCoreStartSequenceWidget, StartSequenceFadeOutDelegate); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_16_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreStartSequenceWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreStartSequenceWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
