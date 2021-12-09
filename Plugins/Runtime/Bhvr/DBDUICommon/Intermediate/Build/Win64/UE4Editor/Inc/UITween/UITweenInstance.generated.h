// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUITweenInstance;
enum class EEasingType : uint8;
struct FLinearColor;
class UMaterialInstanceDynamic;
struct FVector2D;
class UWidget;
#ifdef UITWEEN_UITweenInstance_generated_h
#error "UITweenInstance.generated.h already included, missing '#pragma once' in UITweenInstance.h"
#endif
#define UITWEEN_UITweenInstance_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_16_DELEGATE \
struct _Script_UITween_eventUITweenInstanceTweenCompletedDelegate_Parms \
{ \
	UUITweenInstance* tween; \
}; \
static inline void FUITweenInstanceTweenCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UITweenInstanceTweenCompletedDelegate, UUITweenInstance* tween) \
{ \
	_Script_UITween_eventUITweenInstanceTweenCompletedDelegate_Parms Parms; \
	Parms.tween=tween; \
	UITweenInstanceTweenCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_15_DELEGATE \
struct _Script_UITween_eventUITweenInstanceTweenUpdatedDelegate_Parms \
{ \
	UUITweenInstance* tween; \
}; \
static inline void FUITweenInstanceTweenUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& UITweenInstanceTweenUpdatedDelegate, UUITweenInstance* tween) \
{ \
	_Script_UITween_eventUITweenInstanceTweenUpdatedDelegate_Parms Parms; \
	Parms.tween=tween; \
	UITweenInstanceTweenUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBegin); \
	DECLARE_FUNCTION(execEasing); \
	DECLARE_FUNCTION(execFromColor); \
	DECLARE_FUNCTION(execFromMaterialScalarParameter); \
	DECLARE_FUNCTION(execFromMaterialVectorParameter); \
	DECLARE_FUNCTION(execFromOpacity); \
	DECLARE_FUNCTION(execFromScale); \
	DECLARE_FUNCTION(execFromTranslation); \
	DECLARE_FUNCTION(execGetDelay); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetEasing); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetTargetWidget); \
	DECLARE_FUNCTION(execToColor); \
	DECLARE_FUNCTION(execToMaterialScalarParameter); \
	DECLARE_FUNCTION(execToMaterialVectorParameter); \
	DECLARE_FUNCTION(execToOpacity); \
	DECLARE_FUNCTION(execToReset); \
	DECLARE_FUNCTION(execToScale); \
	DECLARE_FUNCTION(execToTranslation);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBegin); \
	DECLARE_FUNCTION(execEasing); \
	DECLARE_FUNCTION(execFromColor); \
	DECLARE_FUNCTION(execFromMaterialScalarParameter); \
	DECLARE_FUNCTION(execFromMaterialVectorParameter); \
	DECLARE_FUNCTION(execFromOpacity); \
	DECLARE_FUNCTION(execFromScale); \
	DECLARE_FUNCTION(execFromTranslation); \
	DECLARE_FUNCTION(execGetDelay); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execGetEasing); \
	DECLARE_FUNCTION(execGetProgress); \
	DECLARE_FUNCTION(execGetTargetWidget); \
	DECLARE_FUNCTION(execToColor); \
	DECLARE_FUNCTION(execToMaterialScalarParameter); \
	DECLARE_FUNCTION(execToMaterialVectorParameter); \
	DECLARE_FUNCTION(execToOpacity); \
	DECLARE_FUNCTION(execToReset); \
	DECLARE_FUNCTION(execToScale); \
	DECLARE_FUNCTION(execToTranslation);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUITweenInstance(); \
	friend struct Z_Construct_UClass_UUITweenInstance_Statics; \
public: \
	DECLARE_CLASS(UUITweenInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UITween"), NO_API) \
	DECLARE_SERIALIZER(UUITweenInstance)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUUITweenInstance(); \
	friend struct Z_Construct_UClass_UUITweenInstance_Statics; \
public: \
	DECLARE_CLASS(UUITweenInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UITween"), NO_API) \
	DECLARE_SERIALIZER(UUITweenInstance)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUITweenInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUITweenInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUITweenInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUITweenInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUITweenInstance(UUITweenInstance&&); \
	NO_API UUITweenInstance(const UUITweenInstance&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUITweenInstance(UUITweenInstance&&); \
	NO_API UUITweenInstance(const UUITweenInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUITweenInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUITweenInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUITweenInstance)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___materialScalarProperties() { return STRUCT_OFFSET(UUITweenInstance, _materialScalarProperties); } \
	FORCEINLINE static uint32 __PPO___materialVectorProperties() { return STRUCT_OFFSET(UUITweenInstance, _materialVectorProperties); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_18_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UITWEEN_API UClass* StaticClass<class UUITweenInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_UITween_Public_UITweenInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
