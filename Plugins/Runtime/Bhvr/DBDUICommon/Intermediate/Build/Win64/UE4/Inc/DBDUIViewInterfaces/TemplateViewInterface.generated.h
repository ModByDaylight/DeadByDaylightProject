// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTemplateViewData;
#ifdef DBDUIVIEWINTERFACES_TemplateViewInterface_generated_h
#error "TemplateViewInterface.generated.h already included, missing '#pragma once' in TemplateViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_TemplateViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_RPC_WRAPPERS \
	virtual void TemplateExampleFunction_Implementation(FTemplateViewData const& templateData) {}; \
 \
	DECLARE_FUNCTION(execTemplateExampleFunction);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TemplateExampleFunction_Implementation(FTemplateViewData const& templateData) {}; \
 \
	DECLARE_FUNCTION(execTemplateExampleFunction);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_EVENT_PARMS \
	struct TemplateViewInterface_eventTemplateExampleFunction_Parms \
	{ \
		FTemplateViewData templateData; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTemplateViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTemplateViewInterface(UTemplateViewInterface&&); \
	NO_API UTemplateViewInterface(const UTemplateViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTemplateViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTemplateViewInterface(UTemplateViewInterface&&); \
	NO_API UTemplateViewInterface(const UTemplateViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTemplateViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTemplateViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTemplateViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTemplateViewInterface(); \
	friend struct Z_Construct_UClass_UTemplateViewInterface_Statics; \
public: \
	DECLARE_CLASS(UTemplateViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UTemplateViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITemplateViewInterface() {} \
public: \
	typedef UTemplateViewInterface UClassType; \
	typedef ITemplateViewInterface ThisClass; \
	static void Execute_TemplateExampleFunction(UObject* O, FTemplateViewData const& templateData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ITemplateViewInterface() {} \
public: \
	typedef UTemplateViewInterface UClassType; \
	typedef ITemplateViewInterface ThisClass; \
	static void Execute_TemplateExampleFunction(UObject* O, FTemplateViewData const& templateData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UTemplateViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TemplateViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
