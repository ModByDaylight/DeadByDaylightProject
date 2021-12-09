// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_HookCountViewInterface_generated_h
#error "HookCountViewInterface.generated.h already included, missing '#pragma once' in HookCountViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_HookCountViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_RPC_WRAPPERS \
	virtual void ClearData_Implementation() {}; \
	virtual void InitWidget_Implementation() {}; \
	virtual void SetData_Implementation(const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount) {}; \
	virtual void SetHookCountVisibility_Implementation(bool visible) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execInitWidget); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetHookCountVisibility);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClearData_Implementation() {}; \
	virtual void InitWidget_Implementation() {}; \
	virtual void SetData_Implementation(const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount) {}; \
	virtual void SetHookCountVisibility_Implementation(bool visible) {}; \
 \
	DECLARE_FUNCTION(execClearData); \
	DECLARE_FUNCTION(execInitWidget); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execSetHookCountVisibility);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_EVENT_PARMS \
	struct HookCountViewInterface_eventSetData_Parms \
	{ \
		int32 currentHookCount; \
		int32 maxHookCount; \
		int32 initialMaxHookCount; \
	}; \
	struct HookCountViewInterface_eventSetHookCountVisibility_Parms \
	{ \
		bool visible; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHookCountViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHookCountViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHookCountViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHookCountViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHookCountViewInterface(UHookCountViewInterface&&); \
	NO_API UHookCountViewInterface(const UHookCountViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHookCountViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHookCountViewInterface(UHookCountViewInterface&&); \
	NO_API UHookCountViewInterface(const UHookCountViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHookCountViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHookCountViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHookCountViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHookCountViewInterface(); \
	friend struct Z_Construct_UClass_UHookCountViewInterface_Statics; \
public: \
	DECLARE_CLASS(UHookCountViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UHookCountViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHookCountViewInterface() {} \
public: \
	typedef UHookCountViewInterface UClassType; \
	typedef IHookCountViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_InitWidget(UObject* O); \
	static void Execute_SetData(UObject* O, const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount); \
	static void Execute_SetHookCountVisibility(UObject* O, bool visible); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IHookCountViewInterface() {} \
public: \
	typedef UHookCountViewInterface UClassType; \
	typedef IHookCountViewInterface ThisClass; \
	static void Execute_ClearData(UObject* O); \
	static void Execute_InitWidget(UObject* O); \
	static void Execute_SetData(UObject* O, const int32 currentHookCount, const int32 maxHookCount, const int32 initialMaxHookCount); \
	static void Execute_SetHookCountVisibility(UObject* O, bool visible); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_6_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UHookCountViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HookCountViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
