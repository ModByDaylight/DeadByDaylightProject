// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreSelectableButtonWidget;
#ifdef DBDUIVIEWSCORE_CoreButtonSelector_generated_h
#error "CoreButtonSelector.generated.h already included, missing '#pragma once' in CoreButtonSelector.h"
#endif
#define DBDUIVIEWSCORE_CoreButtonSelector_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_10_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreButtonSelectorOnUnselectedDelegate_Parms \
{ \
	UCoreSelectableButtonWidget* unselectedButton; \
}; \
static inline void FCoreButtonSelectorOnUnselectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreButtonSelectorOnUnselectedDelegate, UCoreSelectableButtonWidget* unselectedButton) \
{ \
	_Script_DBDUIViewsCore_eventCoreButtonSelectorOnUnselectedDelegate_Parms Parms; \
	Parms.unselectedButton=unselectedButton; \
	CoreButtonSelectorOnUnselectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_9_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreButtonSelectorOnSelectedDelegate_Parms \
{ \
	UCoreSelectableButtonWidget* selectedButton; \
}; \
static inline void FCoreButtonSelectorOnSelectedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreButtonSelectorOnSelectedDelegate, UCoreSelectableButtonWidget* selectedButton) \
{ \
	_Script_DBDUIViewsCore_eventCoreButtonSelectorOnSelectedDelegate_Parms Parms; \
	Parms.selectedButton=selectedButton; \
	CoreButtonSelectorOnSelectedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_8_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreButtonSelectorOnSelectedAgainDelegate_Parms \
{ \
	UCoreSelectableButtonWidget* selectedButton; \
}; \
static inline void FCoreButtonSelectorOnSelectedAgainDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreButtonSelectorOnSelectedAgainDelegate, UCoreSelectableButtonWidget* selectedButton) \
{ \
	_Script_DBDUIViewsCore_eventCoreButtonSelectorOnSelectedAgainDelegate_Parms Parms; \
	Parms.selectedButton=selectedButton; \
	CoreButtonSelectorOnSelectedAgainDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasSelection); \
	DECLARE_FUNCTION(execOnButtonSelectedAgain); \
	DECLARE_FUNCTION(execOnButtonSelectedChanged); \
	DECLARE_FUNCTION(execSelect); \
	DECLARE_FUNCTION(execSelectNext); \
	DECLARE_FUNCTION(execSelectPrevious); \
	DECLARE_FUNCTION(execSetAllEnabled); \
	DECLARE_FUNCTION(execUnselectCurrent);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasSelection); \
	DECLARE_FUNCTION(execOnButtonSelectedAgain); \
	DECLARE_FUNCTION(execOnButtonSelectedChanged); \
	DECLARE_FUNCTION(execSelect); \
	DECLARE_FUNCTION(execSelectNext); \
	DECLARE_FUNCTION(execSelectPrevious); \
	DECLARE_FUNCTION(execSetAllEnabled); \
	DECLARE_FUNCTION(execUnselectCurrent);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreButtonSelector(); \
	friend struct Z_Construct_UClass_UCoreButtonSelector_Statics; \
public: \
	DECLARE_CLASS(UCoreButtonSelector, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreButtonSelector)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCoreButtonSelector(); \
	friend struct Z_Construct_UClass_UCoreButtonSelector_Statics; \
public: \
	DECLARE_CLASS(UCoreButtonSelector, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreButtonSelector)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreButtonSelector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreButtonSelector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreButtonSelector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreButtonSelector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreButtonSelector(UCoreButtonSelector&&); \
	NO_API UCoreButtonSelector(const UCoreButtonSelector&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreButtonSelector(UCoreButtonSelector&&); \
	NO_API UCoreButtonSelector(const UCoreButtonSelector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreButtonSelector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreButtonSelector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreButtonSelector)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___buttons() { return STRUCT_OFFSET(UCoreButtonSelector, _buttons); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_12_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreButtonSelector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreButtonSelector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
