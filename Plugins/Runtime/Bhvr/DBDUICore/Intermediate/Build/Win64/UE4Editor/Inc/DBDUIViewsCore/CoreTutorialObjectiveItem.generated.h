// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCoreTutorialObjectiveItem;
struct FTutorialObjectivesViewData;
#ifdef DBDUIVIEWSCORE_CoreTutorialObjectiveItem_generated_h
#error "CoreTutorialObjectiveItem.generated.h already included, missing '#pragma once' in CoreTutorialObjectiveItem.h"
#endif
#define DBDUIVIEWSCORE_CoreTutorialObjectiveItem_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_9_DELEGATE \
struct _Script_DBDUIViewsCore_eventCoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate_Parms \
{ \
	UCoreTutorialObjectiveItem* item; \
}; \
static inline void FCoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate, UCoreTutorialObjectiveItem* item) \
{ \
	_Script_DBDUIViewsCore_eventCoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate_Parms Parms; \
	Parms.item=item; \
	CoreTutorialObjectiveItemTutorialObjectiveCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_RPC_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_EVENT_PARMS \
	struct CoreTutorialObjectiveItem_eventInitObjective_Parms \
	{ \
		FTutorialObjectivesViewData interactionsViewData; \
	}; \
	struct CoreTutorialObjectiveItem_eventSetObjectiveCompleted_Parms \
	{ \
		bool removeAfterCompletion; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreTutorialObjectiveItem(); \
	friend struct Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics; \
public: \
	DECLARE_CLASS(UCoreTutorialObjectiveItem, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreTutorialObjectiveItem)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCoreTutorialObjectiveItem(); \
	friend struct Z_Construct_UClass_UCoreTutorialObjectiveItem_Statics; \
public: \
	DECLARE_CLASS(UCoreTutorialObjectiveItem, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreTutorialObjectiveItem)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreTutorialObjectiveItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreTutorialObjectiveItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreTutorialObjectiveItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreTutorialObjectiveItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreTutorialObjectiveItem(UCoreTutorialObjectiveItem&&); \
	NO_API UCoreTutorialObjectiveItem(const UCoreTutorialObjectiveItem&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreTutorialObjectiveItem(UCoreTutorialObjectiveItem&&); \
	NO_API UCoreTutorialObjectiveItem(const UCoreTutorialObjectiveItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreTutorialObjectiveItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreTutorialObjectiveItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreTutorialObjectiveItem)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_11_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreTutorialObjectiveItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreTutorialObjectiveItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
