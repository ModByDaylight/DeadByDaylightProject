// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELeanState : uint8;
#ifdef DBDUIVIEWINTERFACES_LeaningArrowsViewInterface_generated_h
#error "LeaningArrowsViewInterface.generated.h already included, missing '#pragma once' in LeaningArrowsViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_LeaningArrowsViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_RPC_WRAPPERS \
	virtual void SetData_Implementation(ELeanState const& leanState) {}; \
 \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetData_Implementation(ELeanState const& leanState) {}; \
 \
	DECLARE_FUNCTION(execSetData);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_EVENT_PARMS \
	struct LeaningArrowsViewInterface_eventSetData_Parms \
	{ \
		ELeanState leanState; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeaningArrowsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaningArrowsViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeaningArrowsViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaningArrowsViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeaningArrowsViewInterface(ULeaningArrowsViewInterface&&); \
	NO_API ULeaningArrowsViewInterface(const ULeaningArrowsViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULeaningArrowsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULeaningArrowsViewInterface(ULeaningArrowsViewInterface&&); \
	NO_API ULeaningArrowsViewInterface(const ULeaningArrowsViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULeaningArrowsViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaningArrowsViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaningArrowsViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULeaningArrowsViewInterface(); \
	friend struct Z_Construct_UClass_ULeaningArrowsViewInterface_Statics; \
public: \
	DECLARE_CLASS(ULeaningArrowsViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(ULeaningArrowsViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILeaningArrowsViewInterface() {} \
public: \
	typedef ULeaningArrowsViewInterface UClassType; \
	typedef ILeaningArrowsViewInterface ThisClass; \
	static void Execute_SetData(UObject* O, ELeanState const& leanState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ILeaningArrowsViewInterface() {} \
public: \
	typedef ULeaningArrowsViewInterface UClassType; \
	typedef ILeaningArrowsViewInterface ThisClass; \
	static void Execute_SetData(UObject* O, ELeanState const& leanState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class ULeaningArrowsViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_LeaningArrowsViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
