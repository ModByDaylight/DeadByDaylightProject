// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHudObjectivesViewData;
#ifdef DBDUIVIEWINTERFACES_HudObjectivesViewInterface_generated_h
#error "HudObjectivesViewInterface.generated.h already included, missing '#pragma once' in HudObjectivesViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_HudObjectivesViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_RPC_WRAPPERS \
	virtual void ClearData_Implementation() {}; \
	virtual void ClearHookCountData_Implementation() {}; \
	virtual void InitWidget_Implementation() {}; \
	virtual void SetHookCountData_Implementation(const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount) {}; \
	virtual void SetHookCountVisibility_Implementation(bool visible) {}; \
	virtual void SetHudObjectiveData_Implementation(FHudObjectivesViewData const& hudObjectiveViewData) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execClearHookCountData); \
	DECLARE_FUNCTION(execInitWidget); \
	DECLARE_FUNCTION(execSetHookCountData); \
	DECLARE_FUNCTION(execSetHookCountVisibility); \
	DECLARE_FUNCTION(execSetHudObjectiveData);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearData_Implementation() {}; \
	virtual void ClearHookCountData_Implementation() {}; \
	virtual void InitWidget_Implementation() {}; \
	virtual void SetHookCountData_Implementation(const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount) {}; \
	virtual void SetHookCountVisibility_Implementation(bool visible) {}; \
	virtual void SetHudObjectiveData_Implementation(FHudObjectivesViewData const& hudObjectiveViewData) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execClearHookCountData); \
	DECLARE_FUNCTION(execInitWidget); \
	DECLARE_FUNCTION(execSetHookCountData); \
	DECLARE_FUNCTION(execSetHookCountVisibility); \
	DECLARE_FUNCTION(execSetHudObjectiveData);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_EVENT_PARMS \
	struct HudObjectivesViewInterface_eventSetHookCountData_Parms \
	{ \
		int32 currentHookCount; \
		int32 maxHookCount; \
		int32 initialMaxHookCount; \
	}; \
	struct HudObjectivesViewInterface_eventSetHookCountVisibility_Parms \
	{ \
		bool visible; \
	}; \
	struct HudObjectivesViewInterface_eventSetHudObjectiveData_Parms \
	{ \
		FHudObjectivesViewData hudObjectiveViewData; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudObjectivesViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudObjectivesViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudObjectivesViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudObjectivesViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudObjectivesViewInterface(UHudObjectivesViewInterface&&); \
	NO_API UHudObjectivesViewInterface(const UHudObjectivesViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudObjectivesViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudObjectivesViewInterface(UHudObjectivesViewInterface&&); \
	NO_API UHudObjectivesViewInterface(const UHudObjectivesViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudObjectivesViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudObjectivesViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudObjectivesViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHudObjectivesViewInterface(); \
	friend struct Z_Construct_UClass_UHudObjectivesViewInterface_Statics; \
public: \
	DECLARE_CLASS(UHudObjectivesViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UHudObjectivesViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHudObjectivesViewInterface() {} \
public: \
	typedef UHudObjectivesViewInterface UClassType; \
	typedef IHudObjectivesViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_ClearHookCountData(UObject* O); \
	static void Execute_InitWidget(UObject* O); \
	static void Execute_SetHookCountData(UObject* O, const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount); \
	static void Execute_SetHookCountVisibility(UObject* O, bool visible); \
	static void Execute_SetHudObjectiveData(UObject* O, FHudObjectivesViewData const& hudObjectiveViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IHudObjectivesViewInterface() {} \
public: \
	typedef UHudObjectivesViewInterface UClassType; \
	typedef IHudObjectivesViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_ClearHookCountData(UObject* O); \
	static void Execute_InitWidget(UObject* O); \
	static void Execute_SetHookCountData(UObject* O, const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount); \
	static void Execute_SetHookCountVisibility(UObject* O, bool visible); \
	static void Execute_SetHudObjectiveData(UObject* O, FHudObjectivesViewData const& hudObjectiveViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UHudObjectivesViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudObjectivesViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
