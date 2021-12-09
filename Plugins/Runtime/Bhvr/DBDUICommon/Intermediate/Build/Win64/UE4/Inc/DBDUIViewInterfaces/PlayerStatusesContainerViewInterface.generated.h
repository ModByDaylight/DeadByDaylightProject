// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IPlayerStatusViewInterface;
#ifdef DBDUIVIEWINTERFACES_PlayerStatusesContainerViewInterface_generated_h
#error "PlayerStatusesContainerViewInterface.generated.h already included, missing '#pragma once' in PlayerStatusesContainerViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_PlayerStatusesContainerViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_RPC_WRAPPERS \
	virtual TScriptInterface<IPlayerStatusViewInterface> GetPlayerStatusInterface_Implementation(int32 index) { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetPlayerStatusInterface);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TScriptInterface<IPlayerStatusViewInterface> GetPlayerStatusInterface_Implementation(int32 index) { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetPlayerStatusInterface);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_EVENT_PARMS \
	struct PlayerStatusesContainerViewInterface_eventGetPlayerStatusInterface_Parms \
	{ \
		int32 index; \
		TScriptInterface<IPlayerStatusViewInterface> ReturnValue; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStatusesContainerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStatusesContainerViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStatusesContainerViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStatusesContainerViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStatusesContainerViewInterface(UPlayerStatusesContainerViewInterface&&); \
	NO_API UPlayerStatusesContainerViewInterface(const UPlayerStatusesContainerViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerStatusesContainerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerStatusesContainerViewInterface(UPlayerStatusesContainerViewInterface&&); \
	NO_API UPlayerStatusesContainerViewInterface(const UPlayerStatusesContainerViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerStatusesContainerViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStatusesContainerViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerStatusesContainerViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPlayerStatusesContainerViewInterface(); \
	friend struct Z_Construct_UClass_UPlayerStatusesContainerViewInterface_Statics; \
public: \
	DECLARE_CLASS(UPlayerStatusesContainerViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UPlayerStatusesContainerViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPlayerStatusesContainerViewInterface() {} \
public: \
	typedef UPlayerStatusesContainerViewInterface UClassType; \
	typedef IPlayerStatusesContainerViewInterface ThisClass; \
	static TScriptInterface<IPlayerStatusViewInterface> Execute_GetPlayerStatusInterface(UObject* O, int32 index); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IPlayerStatusesContainerViewInterface() {} \
public: \
	typedef UPlayerStatusesContainerViewInterface UClassType; \
	typedef IPlayerStatusesContainerViewInterface ThisClass; \
	static TScriptInterface<IPlayerStatusViewInterface> Execute_GetPlayerStatusInterface(UObject* O, int32 index); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_9_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UPlayerStatusesContainerViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_PlayerStatusesContainerViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
