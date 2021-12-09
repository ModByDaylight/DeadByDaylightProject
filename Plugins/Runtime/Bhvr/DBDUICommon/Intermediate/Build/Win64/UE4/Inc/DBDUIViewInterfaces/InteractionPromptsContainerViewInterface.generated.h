// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInteractionPromptViewData;
#ifdef DBDUIVIEWINTERFACES_InteractionPromptsContainerViewInterface_generated_h
#error "InteractionPromptsContainerViewInterface.generated.h already included, missing '#pragma once' in InteractionPromptsContainerViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_InteractionPromptsContainerViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_RPC_WRAPPERS \
	virtual void AddPrompt_Implementation(FInteractionPromptViewData const& data) {}; \
	virtual void RemoveAllPrompts_Implementation() {}; \
	virtual void RemovePrompt_Implementation(FName id) {}; \
 \
	DECLARE_FUNCTION(execAddPrompt); \
	DECLARE_FUNCTION(execRemoveAllPrompts); \
	DECLARE_FUNCTION(execRemovePrompt);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddPrompt_Implementation(FInteractionPromptViewData const& data) {}; \
	virtual void RemoveAllPrompts_Implementation() {}; \
	virtual void RemovePrompt_Implementation(FName id) {}; \
 \
	DECLARE_FUNCTION(execAddPrompt); \
	DECLARE_FUNCTION(execRemoveAllPrompts); \
	DECLARE_FUNCTION(execRemovePrompt);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_EVENT_PARMS \
	struct InteractionPromptsContainerViewInterface_eventAddPrompt_Parms \
	{ \
		FInteractionPromptViewData data; \
	}; \
	struct InteractionPromptsContainerViewInterface_eventRemovePrompt_Parms \
	{ \
		FName id; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionPromptsContainerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionPromptsContainerViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionPromptsContainerViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionPromptsContainerViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionPromptsContainerViewInterface(UInteractionPromptsContainerViewInterface&&); \
	NO_API UInteractionPromptsContainerViewInterface(const UInteractionPromptsContainerViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionPromptsContainerViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionPromptsContainerViewInterface(UInteractionPromptsContainerViewInterface&&); \
	NO_API UInteractionPromptsContainerViewInterface(const UInteractionPromptsContainerViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionPromptsContainerViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionPromptsContainerViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionPromptsContainerViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractionPromptsContainerViewInterface(); \
	friend struct Z_Construct_UClass_UInteractionPromptsContainerViewInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractionPromptsContainerViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UInteractionPromptsContainerViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractionPromptsContainerViewInterface() {} \
public: \
	typedef UInteractionPromptsContainerViewInterface UClassType; \
	typedef IInteractionPromptsContainerViewInterface ThisClass; \
	static void Execute_AddPrompt(UObject* O, FInteractionPromptViewData const& data); \
	static void Execute_RemoveAllPrompts(UObject* O); \
	static void Execute_RemovePrompt(UObject* O, FName id); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractionPromptsContainerViewInterface() {} \
public: \
	typedef UInteractionPromptsContainerViewInterface UClassType; \
	typedef IInteractionPromptsContainerViewInterface ThisClass; \
	static void Execute_AddPrompt(UObject* O, FInteractionPromptViewData const& data); \
	static void Execute_RemoveAllPrompts(UObject* O); \
	static void Execute_RemovePrompt(UObject* O, FName id); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UInteractionPromptsContainerViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_InteractionPromptsContainerViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
