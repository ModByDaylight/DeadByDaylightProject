// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNotifTutorialPopupViewData;
#ifdef DBDUIVIEWINTERFACES_TutorialPopupViewInterface_generated_h
#error "TutorialPopupViewInterface.generated.h already included, missing '#pragma once' in TutorialPopupViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_TutorialPopupViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_RPC_WRAPPERS \
	virtual void HideTutorialPopup_Implementation(bool playSoundEffect) {}; \
	virtual void ShowNotifTutorialPopup_Implementation(FNotifTutorialPopupViewData const& notifTutoData) {}; \
 \
	DECLARE_FUNCTION(execHideTutorialPopup); \
	DECLARE_FUNCTION(execShowNotifTutorialPopup);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HideTutorialPopup_Implementation(bool playSoundEffect) {}; \
	virtual void ShowNotifTutorialPopup_Implementation(FNotifTutorialPopupViewData const& notifTutoData) {}; \
 \
	DECLARE_FUNCTION(execHideTutorialPopup); \
	DECLARE_FUNCTION(execShowNotifTutorialPopup);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_EVENT_PARMS \
	struct TutorialPopupViewInterface_eventHideTutorialPopup_Parms \
	{ \
		bool playSoundEffect; \
	}; \
	struct TutorialPopupViewInterface_eventShowNotifTutorialPopup_Parms \
	{ \
		FNotifTutorialPopupViewData notifTutoData; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialPopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialPopupViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialPopupViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialPopupViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialPopupViewInterface(UTutorialPopupViewInterface&&); \
	NO_API UTutorialPopupViewInterface(const UTutorialPopupViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialPopupViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialPopupViewInterface(UTutorialPopupViewInterface&&); \
	NO_API UTutorialPopupViewInterface(const UTutorialPopupViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialPopupViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialPopupViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialPopupViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTutorialPopupViewInterface(); \
	friend struct Z_Construct_UClass_UTutorialPopupViewInterface_Statics; \
public: \
	DECLARE_CLASS(UTutorialPopupViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UTutorialPopupViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITutorialPopupViewInterface() {} \
public: \
	typedef UTutorialPopupViewInterface UClassType; \
	typedef ITutorialPopupViewInterface ThisClass; \
	static void Execute_HideTutorialPopup(UObject* O, bool playSoundEffect); \
	static void Execute_ShowNotifTutorialPopup(UObject* O, FNotifTutorialPopupViewData const& notifTutoData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ITutorialPopupViewInterface() {} \
public: \
	typedef UTutorialPopupViewInterface UClassType; \
	typedef ITutorialPopupViewInterface ThisClass; \
	static void Execute_HideTutorialPopup(UObject* O, bool playSoundEffect); \
	static void Execute_ShowNotifTutorialPopup(UObject* O, FNotifTutorialPopupViewData const& notifTutoData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UTutorialPopupViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialPopupViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
