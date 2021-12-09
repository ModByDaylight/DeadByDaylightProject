// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAddonViewData;
struct FPerkViewData;
#ifdef DBDUIVIEWINTERFACES_ExternalEffectsViewInterface_generated_h
#error "ExternalEffectsViewInterface.generated.h already included, missing '#pragma once' in ExternalEffectsViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ExternalEffectsViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_RPC_WRAPPERS \
	virtual void ShowExternalAddon_Implementation(FAddonViewData const& addonViewData) {}; \
	virtual void ShowExternalPerk_Implementation(FPerkViewData const& perkViewData) {}; \
 \
	DECLARE_FUNCTION(execShowExternalAddon); \
	DECLARE_FUNCTION(execShowExternalPerk);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ShowExternalAddon_Implementation(FAddonViewData const& addonViewData) {}; \
	virtual void ShowExternalPerk_Implementation(FPerkViewData const& perkViewData) {}; \
 \
	DECLARE_FUNCTION(execShowExternalAddon); \
	DECLARE_FUNCTION(execShowExternalPerk);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_EVENT_PARMS \
	struct ExternalEffectsViewInterface_eventShowExternalAddon_Parms \
	{ \
		FAddonViewData addonViewData; \
	}; \
	struct ExternalEffectsViewInterface_eventShowExternalPerk_Parms \
	{ \
		FPerkViewData perkViewData; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExternalEffectsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalEffectsViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExternalEffectsViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalEffectsViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExternalEffectsViewInterface(UExternalEffectsViewInterface&&); \
	NO_API UExternalEffectsViewInterface(const UExternalEffectsViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExternalEffectsViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExternalEffectsViewInterface(UExternalEffectsViewInterface&&); \
	NO_API UExternalEffectsViewInterface(const UExternalEffectsViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExternalEffectsViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalEffectsViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalEffectsViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUExternalEffectsViewInterface(); \
	friend struct Z_Construct_UClass_UExternalEffectsViewInterface_Statics; \
public: \
	DECLARE_CLASS(UExternalEffectsViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UExternalEffectsViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IExternalEffectsViewInterface() {} \
public: \
	typedef UExternalEffectsViewInterface UClassType; \
	typedef IExternalEffectsViewInterface ThisClass; \
	static void Execute_ShowExternalAddon(UObject* O, FAddonViewData const& addonViewData); \
	static void Execute_ShowExternalPerk(UObject* O, FPerkViewData const& perkViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IExternalEffectsViewInterface() {} \
public: \
	typedef UExternalEffectsViewInterface UClassType; \
	typedef IExternalEffectsViewInterface ThisClass; \
	static void Execute_ShowExternalAddon(UObject* O, FAddonViewData const& addonViewData); \
	static void Execute_ShowExternalPerk(UObject* O, FPerkViewData const& perkViewData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_8_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UExternalEffectsViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExternalEffectsViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
