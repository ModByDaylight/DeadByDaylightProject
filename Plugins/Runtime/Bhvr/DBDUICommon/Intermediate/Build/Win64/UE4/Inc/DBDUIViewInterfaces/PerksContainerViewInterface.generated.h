// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IPerkViewInterface;
#ifdef DBDUIVIEWINTERFACES_PerksContainerViewInterface_generated_h
#error "PerksContainerViewInterface.generated.h already included, missing '#pragma once' in PerksContainerViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_PerksContainerViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_RPC_WRAPPERS \
	virtual TScriptInterface<IPerkViewInterface> GetPerkInterface_Implementation(int32 index) { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetPerkInterface);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IPerkViewInterface> GetPerkInterface_Implementation(int32 index) { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetPerkInterface);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_EVENT_PARMS \
	struct PerksContainerViewInterface_eventGetPerkInterface_Parms \
	{ \
		int32 index; \
		TScriptInterface<IPerkViewInterface> ReturnValue; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerksContainerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerksContainerViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerksContainerViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerksContainerViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerksContainerViewInterface(UPerksContainerViewInterface&&); \
	NO_API UPerksContainerViewInterface(const UPerksContainerViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerksContainerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerksContainerViewInterface(UPerksContainerViewInterface&&); \
	NO_API UPerksContainerViewInterface(const UPerksContainerViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerksContainerViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerksContainerViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerksContainerViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPerksContainerViewInterface(); \
	friend struct Z_Construct_UClass_UPerksContainerViewInterface_Statics; \
public: \
	DECLARE_CLASS(UPerksContainerViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UPerksContainerViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPerksContainerViewInterface() {} \
public: \
	typedef UPerksContainerViewInterface UClassType; \
	typedef IPerksContainerViewInterface ThisClass; \
	static TScriptInterface<IPerkViewInterface> Execute_GetPerkInterface(UObject* O, int32 index); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IPerksContainerViewInterface() {} \
public: \
	typedef UPerksContainerViewInterface UClassType; \
	typedef IPerksContainerViewInterface ThisClass; \
	static TScriptInterface<IPerkViewInterface> Execute_GetPerkInterface(UObject* O, int32 index); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_9_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UPerksContainerViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PerksContainerViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
