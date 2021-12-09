// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHudObjectiveViewData;
#ifdef DBDUIVIEWINTERFACES_HudObjectiveViewInterface_generated_h
#error "HudObjectiveViewInterface.generated.h already included, missing '#pragma once' in HudObjectiveViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_HudObjectiveViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_RPC_WRAPPERS \
	virtual void ClearData_Implementation() {}; \
	virtual void SetCurrentHudObjectiveHighlight_Implementation(bool highlight) {}; \
	virtual void SetHudObjectiveData_Implementation(FHudObjectiveViewData const& hudObjectiveViewData) {}; \
	virtual void SetHudObjectivePosition_Implementation(bool isHookCountDisplayed) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execSetCurrentHudObjectiveHighlight); \
	DECLARE_FUNCTION(execSetHudObjectiveData); \
	DECLARE_FUNCTION(execSetHudObjectivePosition);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearData_Implementation() {}; \
	virtual void SetCurrentHudObjectiveHighlight_Implementation(bool highlight) {}; \
	virtual void SetHudObjectiveData_Implementation(FHudObjectiveViewData const& hudObjectiveViewData) {}; \
	virtual void SetHudObjectivePosition_Implementation(bool isHookCountDisplayed) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execSetCurrentHudObjectiveHighlight); \
	DECLARE_FUNCTION(execSetHudObjectiveData); \
	DECLARE_FUNCTION(execSetHudObjectivePosition);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_EVENT_PARMS \
	struct HudObjectiveViewInterface_eventSetCurrentHudObjectiveHighlight_Parms \
	{ \
		bool highlight; \
	}; \
	struct HudObjectiveViewInterface_eventSetHudObjectiveData_Parms \
	{ \
		FHudObjectiveViewData hudObjectiveViewData; \
	}; \
	struct HudObjectiveViewInterface_eventSetHudObjectivePosition_Parms \
	{ \
		bool isHookCountDisplayed; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudObjectiveViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudObjectiveViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudObjectiveViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudObjectiveViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudObjectiveViewInterface(UHudObjectiveViewInterface&&); \
	NO_API UHudObjectiveViewInterface(const UHudObjectiveViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudObjectiveViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudObjectiveViewInterface(UHudObjectiveViewInterface&&); \
	NO_API UHudObjectiveViewInterface(const UHudObjectiveViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudObjectiveViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudObjectiveViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudObjectiveViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHudObjectiveViewInterface(); \
	friend struct Z_Construct_UClass_UHudObjectiveViewInterface_Statics; \
public: \
	DECLARE_CLASS(UHudObjectiveViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UHudObjectiveViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHudObjectiveViewInterface() {} \
public: \
	typedef UHudObjectiveViewInterface UClassType; \
	typedef IHudObjectiveViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_SetCurrentHudObjectiveHighlight(UObject* O, bool highlight); \
	static void Execute_SetHudObjectiveData(UObject* O, FHudObjectiveViewData const& hudObjectiveViewData); \
	static void Execute_SetHudObjectivePosition(UObject* O, bool isHookCountDisplayed); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IHudObjectiveViewInterface() {} \
public: \
	typedef UHudObjectiveViewInterface UClassType; \
	typedef IHudObjectiveViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_SetCurrentHudObjectiveHighlight(UObject* O, bool highlight); \
	static void Execute_SetHudObjectiveData(UObject* O, FHudObjectiveViewData const& hudObjectiveViewData); \
	static void Execute_SetHudObjectivePosition(UObject* O, bool isHookCountDisplayed); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UHudObjectiveViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectiveViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
