// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGameManualMenuState : uint8;
struct FHelpCategoryData;
struct FHelpTopicData;
#ifdef DBDUIVIEWINTERFACES_GameManualViewInterface_generated_h
#error "GameManualViewInterface.generated.h already included, missing '#pragma once' in GameManualViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_GameManualViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_RPC_WRAPPERS \
	virtual EGameManualMenuState GetCurrentManualMenuState_Implementation() const { return (EGameManualMenuState)0; }; \
	virtual void SetCategoryData_Implementation(const FHelpCategoryData categoryData, TArray<FHelpTopicData> const& topicsData) {}; \
	virtual void SetCurrentManualMenuState_Implementation(const EGameManualMenuState menuState) {}; \
 \
	DECLARE_FUNCTION(execGetCurrentManualMenuState); \
	DECLARE_FUNCTION(execSetCategoryData); \
	DECLARE_FUNCTION(execSetCurrentManualMenuState);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual EGameManualMenuState GetCurrentManualMenuState_Implementation() const { return (EGameManualMenuState)0; }; \
	virtual void SetCategoryData_Implementation(const FHelpCategoryData categoryData, TArray<FHelpTopicData> const& topicsData) {}; \
	virtual void SetCurrentManualMenuState_Implementation(const EGameManualMenuState menuState) {}; \
 \
	DECLARE_FUNCTION(execGetCurrentManualMenuState); \
	DECLARE_FUNCTION(execSetCategoryData); \
	DECLARE_FUNCTION(execSetCurrentManualMenuState);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_EVENT_PARMS \
	struct GameManualViewInterface_eventGetCurrentManualMenuState_Parms \
	{ \
		EGameManualMenuState ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameManualViewInterface_eventGetCurrentManualMenuState_Parms() \
			: ReturnValue((EGameManualMenuState)0) \
		{ \
		} \
	}; \
	struct GameManualViewInterface_eventSetCategoryData_Parms \
	{ \
		FHelpCategoryData categoryData; \
		TArray<FHelpTopicData> topicsData; \
	}; \
	struct GameManualViewInterface_eventSetCurrentManualMenuState_Parms \
	{ \
		EGameManualMenuState menuState; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameManualViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameManualViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManualViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManualViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManualViewInterface(UGameManualViewInterface&&); \
	NO_API UGameManualViewInterface(const UGameManualViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameManualViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameManualViewInterface(UGameManualViewInterface&&); \
	NO_API UGameManualViewInterface(const UGameManualViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameManualViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameManualViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameManualViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameManualViewInterface(); \
	friend struct Z_Construct_UClass_UGameManualViewInterface_Statics; \
public: \
	DECLARE_CLASS(UGameManualViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UGameManualViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameManualViewInterface() {} \
public: \
	typedef UGameManualViewInterface UClassType; \
	typedef IGameManualViewInterface ThisClass; \
	static EGameManualMenuState Execute_GetCurrentManualMenuState(const UObject* O); \
	static void Execute_SetCategoryData(UObject* O, const FHelpCategoryData categoryData, TArray<FHelpTopicData> const& topicsData); \
	static void Execute_SetCurrentManualMenuState(UObject* O, const EGameManualMenuState menuState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameManualViewInterface() {} \
public: \
	typedef UGameManualViewInterface UClassType; \
	typedef IGameManualViewInterface ThisClass; \
	static EGameManualMenuState Execute_GetCurrentManualMenuState(const UObject* O); \
	static void Execute_SetCategoryData(UObject* O, const FHelpCategoryData categoryData, TArray<FHelpTopicData> const& topicsData); \
	static void Execute_SetCurrentManualMenuState(UObject* O, const EGameManualMenuState menuState); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_9_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UGameManualViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_GameManualViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
