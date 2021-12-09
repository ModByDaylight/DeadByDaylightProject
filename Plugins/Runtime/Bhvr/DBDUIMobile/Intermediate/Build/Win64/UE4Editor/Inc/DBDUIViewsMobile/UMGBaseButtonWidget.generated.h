// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWSMOBILE_UMGBaseButtonWidget_generated_h
#error "UMGBaseButtonWidget.generated.h already included, missing '#pragma once' in UMGBaseButtonWidget.h"
#endif
#define DBDUIVIEWSMOBILE_UMGBaseButtonWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_15_DELEGATE \
static inline void FUMGBaseButtonWidgetOnBaseButtonReleasedEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGBaseButtonWidgetOnBaseButtonReleasedEvent) \
{ \
	UMGBaseButtonWidgetOnBaseButtonReleasedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_14_DELEGATE \
static inline void FUMGBaseButtonWidgetOnBaseButtonLongPressEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGBaseButtonWidgetOnBaseButtonLongPressEvent) \
{ \
	UMGBaseButtonWidgetOnBaseButtonLongPressEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_13_DELEGATE \
static inline void FUMGBaseButtonWidgetOnBaseButtonPressedEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGBaseButtonWidgetOnBaseButtonPressedEvent) \
{ \
	UMGBaseButtonWidgetOnBaseButtonPressedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_12_DELEGATE \
static inline void FUMGBaseButtonWidgetOnBaseButtonClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& UMGBaseButtonWidgetOnBaseButtonClickedEvent) \
{ \
	UMGBaseButtonWidgetOnBaseButtonClickedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleButtonClickedEvent); \
	DECLARE_FUNCTION(execHandleButtonHoveredEvent); \
	DECLARE_FUNCTION(execHandleButtonLongPressEvent); \
	DECLARE_FUNCTION(execHandleButtonPressedEvent); \
	DECLARE_FUNCTION(execHandleButtonReleasedEvent);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleButtonClickedEvent); \
	DECLARE_FUNCTION(execHandleButtonHoveredEvent); \
	DECLARE_FUNCTION(execHandleButtonLongPressEvent); \
	DECLARE_FUNCTION(execHandleButtonPressedEvent); \
	DECLARE_FUNCTION(execHandleButtonReleasedEvent);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUMGBaseButtonWidget(); \
	friend struct Z_Construct_UClass_UUMGBaseButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBaseButtonWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsMobile"), NO_API) \
	DECLARE_SERIALIZER(UUMGBaseButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUUMGBaseButtonWidget(); \
	friend struct Z_Construct_UClass_UUMGBaseButtonWidget_Statics; \
public: \
	DECLARE_CLASS(UUMGBaseButtonWidget, UMobileBaseUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsMobile"), NO_API) \
	DECLARE_SERIALIZER(UUMGBaseButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUMGBaseButtonWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUMGBaseButtonWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBaseButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBaseButtonWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBaseButtonWidget(UUMGBaseButtonWidget&&); \
	NO_API UUMGBaseButtonWidget(const UUMGBaseButtonWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUMGBaseButtonWidget(UUMGBaseButtonWidget&&); \
	NO_API UUMGBaseButtonWidget(const UUMGBaseButtonWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUMGBaseButtonWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUMGBaseButtonWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUMGBaseButtonWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Button() { return STRUCT_OFFSET(UUMGBaseButtonWidget, Button); } \
	FORCEINLINE static uint32 __PPO__IconPicture() { return STRUCT_OFFSET(UUMGBaseButtonWidget, IconPicture); } \
	FORCEINLINE static uint32 __PPO__ButtonLabel() { return STRUCT_OFFSET(UUMGBaseButtonWidget, ButtonLabel); } \
	FORCEINLINE static uint32 __PPO__ButtonPictureBrush() { return STRUCT_OFFSET(UUMGBaseButtonWidget, ButtonPictureBrush); } \
	FORCEINLINE static uint32 __PPO__ButtonText() { return STRUCT_OFFSET(UUMGBaseButtonWidget, ButtonText); } \
	FORCEINLINE static uint32 __PPO__OnPressSound() { return STRUCT_OFFSET(UUMGBaseButtonWidget, OnPressSound); } \
	FORCEINLINE static uint32 __PPO__OnClickSound() { return STRUCT_OFFSET(UUMGBaseButtonWidget, OnClickSound); } \
	FORCEINLINE static uint32 __PPO__OnLongPressSound() { return STRUCT_OFFSET(UUMGBaseButtonWidget, OnLongPressSound); } \
	FORCEINLINE static uint32 __PPO__OnReleaseSound() { return STRUCT_OFFSET(UUMGBaseButtonWidget, OnReleaseSound); } \
	FORCEINLINE static uint32 __PPO__OnHoveredSound() { return STRUCT_OFFSET(UUMGBaseButtonWidget, OnHoveredSound); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_17_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSMOBILE_API UClass* StaticClass<class UUMGBaseButtonWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUIMobile_Source_DBDUIViewsMobile_Public_UMGBaseButtonWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
