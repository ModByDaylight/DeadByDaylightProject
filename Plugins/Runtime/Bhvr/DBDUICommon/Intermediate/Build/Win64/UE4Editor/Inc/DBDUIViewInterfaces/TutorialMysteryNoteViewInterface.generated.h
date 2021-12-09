// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNotifTutorialPopupViewData;
#ifdef DBDUIVIEWINTERFACES_TutorialMysteryNoteViewInterface_generated_h
#error "TutorialMysteryNoteViewInterface.generated.h already included, missing '#pragma once' in TutorialMysteryNoteViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_TutorialMysteryNoteViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_RPC_WRAPPERS \
	virtual void HideMysteryNote_Implementation() {}; \
	virtual void ShowMysteryNote_Implementation(FNotifTutorialPopupViewData const& notifData) {}; \
 \
	DECLARE_FUNCTION(execHideMysteryNote); \
	DECLARE_FUNCTION(execShowMysteryNote);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HideMysteryNote_Implementation() {}; \
	virtual void ShowMysteryNote_Implementation(FNotifTutorialPopupViewData const& notifData) {}; \
 \
	DECLARE_FUNCTION(execHideMysteryNote); \
	DECLARE_FUNCTION(execShowMysteryNote);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_EVENT_PARMS \
	struct TutorialMysteryNoteViewInterface_eventShowMysteryNote_Parms \
	{ \
		FNotifTutorialPopupViewData notifData; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialMysteryNoteViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialMysteryNoteViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialMysteryNoteViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialMysteryNoteViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialMysteryNoteViewInterface(UTutorialMysteryNoteViewInterface&&); \
	NO_API UTutorialMysteryNoteViewInterface(const UTutorialMysteryNoteViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialMysteryNoteViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialMysteryNoteViewInterface(UTutorialMysteryNoteViewInterface&&); \
	NO_API UTutorialMysteryNoteViewInterface(const UTutorialMysteryNoteViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialMysteryNoteViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialMysteryNoteViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialMysteryNoteViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTutorialMysteryNoteViewInterface(); \
	friend struct Z_Construct_UClass_UTutorialMysteryNoteViewInterface_Statics; \
public: \
	DECLARE_CLASS(UTutorialMysteryNoteViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UTutorialMysteryNoteViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITutorialMysteryNoteViewInterface() {} \
public: \
	typedef UTutorialMysteryNoteViewInterface UClassType; \
	typedef ITutorialMysteryNoteViewInterface ThisClass; \
	static void Execute_HideMysteryNote(UObject* O); \
	static void Execute_ShowMysteryNote(UObject* O, FNotifTutorialPopupViewData const& notifData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ITutorialMysteryNoteViewInterface() {} \
public: \
	typedef UTutorialMysteryNoteViewInterface UClassType; \
	typedef ITutorialMysteryNoteViewInterface ThisClass; \
	static void Execute_HideMysteryNote(UObject* O); \
	static void Execute_ShowMysteryNote(UObject* O, FNotifTutorialPopupViewData const& notifData); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UTutorialMysteryNoteViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialMysteryNoteViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
