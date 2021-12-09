// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTutorialObjectivesViewData;
#ifdef DBDUIVIEWINTERFACES_TutorialObjectivesViewInterface_generated_h
#error "TutorialObjectivesViewInterface.generated.h already included, missing '#pragma once' in TutorialObjectivesViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_TutorialObjectivesViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_RPC_WRAPPERS \
	virtual void AddTutorialObjective_Implementation(FName const& id, FTutorialObjectivesViewData const& interactionPromptViewData) {}; \
	virtual void CompleteTutorialObjective_Implementation(FName const& id, bool removeAfterCompletion) {}; \
	virtual void RemoveAllTutorialObjectives_Implementation() {}; \
	virtual void RemoveTutorialObjective_Implementation(FName const& id) {}; \
 \
	DECLARE_FUNCTION(execAddTutorialObjective); \
	DECLARE_FUNCTION(execCompleteTutorialObjective); \
	DECLARE_FUNCTION(execRemoveAllTutorialObjectives); \
	DECLARE_FUNCTION(execRemoveTutorialObjective);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddTutorialObjective_Implementation(FName const& id, FTutorialObjectivesViewData const& interactionPromptViewData) {}; \
	virtual void CompleteTutorialObjective_Implementation(FName const& id, bool removeAfterCompletion) {}; \
	virtual void RemoveAllTutorialObjectives_Implementation() {}; \
	virtual void RemoveTutorialObjective_Implementation(FName const& id) {}; \
 \
	DECLARE_FUNCTION(execAddTutorialObjective); \
	DECLARE_FUNCTION(execCompleteTutorialObjective); \
	DECLARE_FUNCTION(execRemoveAllTutorialObjectives); \
	DECLARE_FUNCTION(execRemoveTutorialObjective);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_EVENT_PARMS \
	struct TutorialObjectivesViewInterface_eventAddTutorialObjective_Parms \
	{ \
		FName id; \
		FTutorialObjectivesViewData interactionPromptViewData; \
	}; \
	struct TutorialObjectivesViewInterface_eventCompleteTutorialObjective_Parms \
	{ \
		FName id; \
		bool removeAfterCompletion; \
	}; \
	struct TutorialObjectivesViewInterface_eventRemoveTutorialObjective_Parms \
	{ \
		FName id; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialObjectivesViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialObjectivesViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialObjectivesViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialObjectivesViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialObjectivesViewInterface(UTutorialObjectivesViewInterface&&); \
	NO_API UTutorialObjectivesViewInterface(const UTutorialObjectivesViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTutorialObjectivesViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTutorialObjectivesViewInterface(UTutorialObjectivesViewInterface&&); \
	NO_API UTutorialObjectivesViewInterface(const UTutorialObjectivesViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTutorialObjectivesViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialObjectivesViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialObjectivesViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTutorialObjectivesViewInterface(); \
	friend struct Z_Construct_UClass_UTutorialObjectivesViewInterface_Statics; \
public: \
	DECLARE_CLASS(UTutorialObjectivesViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UTutorialObjectivesViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITutorialObjectivesViewInterface() {} \
public: \
	typedef UTutorialObjectivesViewInterface UClassType; \
	typedef ITutorialObjectivesViewInterface ThisClass; \
	static void Execute_AddTutorialObjective(UObject* O, FName const& id, FTutorialObjectivesViewData const& interactionPromptViewData); \
	static void Execute_CompleteTutorialObjective(UObject* O, FName const& id, bool removeAfterCompletion); \
	static void Execute_RemoveAllTutorialObjectives(UObject* O); \
	static void Execute_RemoveTutorialObjective(UObject* O, FName const& id); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ITutorialObjectivesViewInterface() {} \
public: \
	typedef UTutorialObjectivesViewInterface UClassType; \
	typedef ITutorialObjectivesViewInterface ThisClass; \
	static void Execute_AddTutorialObjective(UObject* O, FName const& id, FTutorialObjectivesViewData const& interactionPromptViewData); \
	static void Execute_CompleteTutorialObjective(UObject* O, FName const& id, bool removeAfterCompletion); \
	static void Execute_RemoveAllTutorialObjectives(UObject* O); \
	static void Execute_RemoveTutorialObjective(UObject* O, FName const& id); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UTutorialObjectivesViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_TutorialObjectivesViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
