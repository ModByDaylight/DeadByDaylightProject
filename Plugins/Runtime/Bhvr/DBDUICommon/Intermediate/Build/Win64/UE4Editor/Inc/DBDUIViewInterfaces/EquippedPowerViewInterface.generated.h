// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPowerBundleViewData;
#ifdef DBDUIVIEWINTERFACES_EquippedPowerViewInterface_generated_h
#error "EquippedPowerViewInterface.generated.h already included, missing '#pragma once' in EquippedPowerViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_EquippedPowerViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_RPC_WRAPPERS \
	virtual void ClearData_Implementation() {}; \
	virtual void SetActiveState_Implementation(bool isActive) {}; \
	virtual void SetCarryingMode_Implementation(bool isCarrying) {}; \
	virtual void SetData_Implementation(FPowerBundleViewData const& powerBundleData) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execSetActiveState); \
	DECLARE_FUNCTION(execSetCarryingMode); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearData_Implementation() {}; \
	virtual void SetActiveState_Implementation(bool isActive) {}; \
	virtual void SetCarryingMode_Implementation(bool isCarrying) {}; \
	virtual void SetData_Implementation(FPowerBundleViewData const& powerBundleData) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execSetActiveState); \
	DECLARE_FUNCTION(execSetCarryingMode); \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_EVENT_PARMS \
	struct EquippedPowerViewInterface_eventSetActiveState_Parms \
	{ \
		bool isActive; \
	}; \
	struct EquippedPowerViewInterface_eventSetCarryingMode_Parms \
	{ \
		bool isCarrying; \
	}; \
	struct EquippedPowerViewInterface_eventSetData_Parms \
	{ \
		FPowerBundleViewData powerBundleData; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquippedPowerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquippedPowerViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquippedPowerViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquippedPowerViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquippedPowerViewInterface(UEquippedPowerViewInterface&&); \
	NO_API UEquippedPowerViewInterface(const UEquippedPowerViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquippedPowerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquippedPowerViewInterface(UEquippedPowerViewInterface&&); \
	NO_API UEquippedPowerViewInterface(const UEquippedPowerViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquippedPowerViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquippedPowerViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquippedPowerViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEquippedPowerViewInterface(); \
	friend struct Z_Construct_UClass_UEquippedPowerViewInterface_Statics; \
public: \
	DECLARE_CLASS(UEquippedPowerViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UEquippedPowerViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEquippedPowerViewInterface() {} \
public: \
	typedef UEquippedPowerViewInterface UClassType; \
	typedef IEquippedPowerViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_SetActiveState(UObject* O, bool isActive); \
	static void Execute_SetCarryingMode(UObject* O, bool isCarrying); \
	static void Execute_SetData(UObject* O, FPowerBundleViewData const& powerBundleData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IEquippedPowerViewInterface() {} \
public: \
	typedef UEquippedPowerViewInterface UClassType; \
	typedef IEquippedPowerViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_SetActiveState(UObject* O, bool isActive); \
	static void Execute_SetCarryingMode(UObject* O, bool isCarrying); \
	static void Execute_SetData(UObject* O, FPowerBundleViewData const& powerBundleData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UEquippedPowerViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_EquippedPowerViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
