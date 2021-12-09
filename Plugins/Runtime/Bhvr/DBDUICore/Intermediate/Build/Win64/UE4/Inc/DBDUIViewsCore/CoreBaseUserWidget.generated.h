// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControlMode : uint8;
#ifdef DBDUIVIEWSCORE_CoreBaseUserWidget_generated_h
#error "CoreBaseUserWidget.generated.h already included, missing '#pragma once' in CoreBaseUserWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreBaseUserWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_RPC_WRAPPERS \
	virtual void UpdateScale_Implementation(float scale); \
 \
	DECLARE_FUNCTION(execDeregisterFromInput); \
	DECLARE_FUNCTION(execRegisterForInput); \
	DECLARE_FUNCTION(execUpdateScale);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UpdateScale_Implementation(float scale); \
 \
	DECLARE_FUNCTION(execDeregisterFromInput); \
	DECLARE_FUNCTION(execRegisterForInput); \
	DECLARE_FUNCTION(execUpdateScale);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_EVENT_PARMS \
	struct CoreBaseUserWidget_eventOnControlModeChangedBP_Parms \
	{ \
		EControlMode controlMode; \
	}; \
	struct CoreBaseUserWidget_eventUpdateScale_Parms \
	{ \
		float scale; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreBaseUserWidget(); \
	friend struct Z_Construct_UClass_UCoreBaseUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreBaseUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreBaseUserWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreBaseUserWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCoreBaseUserWidget(); \
	friend struct Z_Construct_UClass_UCoreBaseUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreBaseUserWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreBaseUserWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreBaseUserWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreBaseUserWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreBaseUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreBaseUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreBaseUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreBaseUserWidget(UCoreBaseUserWidget&&); \
	NO_API UCoreBaseUserWidget(const UCoreBaseUserWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreBaseUserWidget(UCoreBaseUserWidget&&); \
	NO_API UCoreBaseUserWidget(const UCoreBaseUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreBaseUserWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreBaseUserWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreBaseUserWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScaleContainer() { return STRUCT_OFFSET(UCoreBaseUserWidget, ScaleContainer); } \
	FORCEINLINE static uint32 __PPO__IsInteractive() { return STRUCT_OFFSET(UCoreBaseUserWidget, IsInteractive); } \
	FORCEINLINE static uint32 __PPO___controlMode() { return STRUCT_OFFSET(UCoreBaseUserWidget, _controlMode); } \
	FORCEINLINE static uint32 __PPO__ScaleType() { return STRUCT_OFFSET(UCoreBaseUserWidget, ScaleType); } \
	FORCEINLINE static uint32 __PPO___inputManager() { return STRUCT_OFFSET(UCoreBaseUserWidget, _inputManager); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_13_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreBaseUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreBaseUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
