// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScoreAlertViewData;
struct FStatusEffectAlertViewData;
#ifdef DBDUIVIEWINTERFACES_HudAlertViewInterface_generated_h
#error "HudAlertViewInterface.generated.h already included, missing '#pragma once' in HudAlertViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_HudAlertViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_RPC_WRAPPERS \
	virtual void FadeIn_Implementation() {}; \
	virtual void FadeOut_Implementation(float delay) {}; \
	virtual void SetScoreEventsVisibility_Implementation(bool visible) {}; \
	virtual void ShowScoreAlert_Implementation(FScoreAlertViewData const& data) {}; \
	virtual void ShowStatusEffectAlert_Implementation(FStatusEffectAlertViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execSetScoreEventsVisibility); \
	DECLARE_FUNCTION(execShowScoreAlert); \
	DECLARE_FUNCTION(execShowStatusEffectAlert);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void FadeIn_Implementation() {}; \
	virtual void FadeOut_Implementation(float delay) {}; \
	virtual void SetScoreEventsVisibility_Implementation(bool visible) {}; \
	virtual void ShowScoreAlert_Implementation(FScoreAlertViewData const& data) {}; \
	virtual void ShowStatusEffectAlert_Implementation(FStatusEffectAlertViewData const& data) {}; \
 \
	DECLARE_FUNCTION(execFadeIn); \
	DECLARE_FUNCTION(execFadeOut); \
	DECLARE_FUNCTION(execSetScoreEventsVisibility); \
	DECLARE_FUNCTION(execShowScoreAlert); \
	DECLARE_FUNCTION(execShowStatusEffectAlert);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_EVENT_PARMS \
	struct HudAlertViewInterface_eventFadeOut_Parms \
	{ \
		float delay; \
	}; \
	struct HudAlertViewInterface_eventSetScoreEventsVisibility_Parms \
	{ \
		bool visible; \
	}; \
	struct HudAlertViewInterface_eventShowScoreAlert_Parms \
	{ \
		FScoreAlertViewData data; \
	}; \
	struct HudAlertViewInterface_eventShowStatusEffectAlert_Parms \
	{ \
		FStatusEffectAlertViewData data; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudAlertViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudAlertViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudAlertViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudAlertViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudAlertViewInterface(UHudAlertViewInterface&&); \
	NO_API UHudAlertViewInterface(const UHudAlertViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHudAlertViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHudAlertViewInterface(UHudAlertViewInterface&&); \
	NO_API UHudAlertViewInterface(const UHudAlertViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHudAlertViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHudAlertViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHudAlertViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHudAlertViewInterface(); \
	friend struct Z_Construct_UClass_UHudAlertViewInterface_Statics; \
public: \
	DECLARE_CLASS(UHudAlertViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UHudAlertViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHudAlertViewInterface() {} \
public: \
	typedef UHudAlertViewInterface UClassType; \
	typedef IHudAlertViewInterface ThisClass; \
	static void Execute_FadeIn(UObject* O); \
	static void Execute_FadeOut(UObject* O, float delay); \
	static void Execute_SetScoreEventsVisibility(UObject* O, bool visible); \
	static void Execute_ShowScoreAlert(UObject* O, FScoreAlertViewData const& data); \
	static void Execute_ShowStatusEffectAlert(UObject* O, FStatusEffectAlertViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IHudAlertViewInterface() {} \
public: \
	typedef UHudAlertViewInterface UClassType; \
	typedef IHudAlertViewInterface ThisClass; \
	static void Execute_FadeIn(UObject* O); \
	static void Execute_FadeOut(UObject* O, float delay); \
	static void Execute_SetScoreEventsVisibility(UObject* O, bool visible); \
	static void Execute_ShowScoreAlert(UObject* O, FScoreAlertViewData const& data); \
	static void Execute_ShowStatusEffectAlert(UObject* O, FStatusEffectAlertViewData const& data); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_8_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UHudAlertViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_HudAlertViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
