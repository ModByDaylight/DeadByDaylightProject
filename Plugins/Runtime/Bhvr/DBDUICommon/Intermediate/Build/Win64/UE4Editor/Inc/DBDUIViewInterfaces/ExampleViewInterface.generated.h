// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDUIVIEWINTERFACES_ExampleViewInterface_generated_h
#error "ExampleViewInterface.generated.h already included, missing '#pragma once' in ExampleViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_ExampleViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_RPC_WRAPPERS \
	virtual void SetExampleProgressRatio_Implementation(float ratio) {}; \
	virtual void SetExampleText_Implementation(const FString& text) {}; \
 \
	DECLARE_FUNCTION(execSetExampleProgressRatio); \
	DECLARE_FUNCTION(execSetExampleText);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetExampleProgressRatio_Implementation(float ratio) {}; \
	virtual void SetExampleText_Implementation(const FString& text) {}; \
 \
	DECLARE_FUNCTION(execSetExampleProgressRatio); \
	DECLARE_FUNCTION(execSetExampleText);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_EVENT_PARMS \
	struct ExampleViewInterface_eventSetExampleProgressRatio_Parms \
	{ \
		float ratio; \
	}; \
	struct ExampleViewInterface_eventSetExampleText_Parms \
	{ \
		FString text; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExampleViewInterface(UExampleViewInterface&&); \
	NO_API UExampleViewInterface(const UExampleViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExampleViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UExampleViewInterface(UExampleViewInterface&&); \
	NO_API UExampleViewInterface(const UExampleViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExampleViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUExampleViewInterface(); \
	friend struct Z_Construct_UClass_UExampleViewInterface_Statics; \
public: \
	DECLARE_CLASS(UExampleViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(UExampleViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IExampleViewInterface() {} \
public: \
	typedef UExampleViewInterface UClassType; \
	typedef IExampleViewInterface ThisClass; \
	static void Execute_SetExampleProgressRatio(UObject* O, float ratio); \
	static void Execute_SetExampleText(UObject* O, const FString& text); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IExampleViewInterface() {} \
public: \
	typedef UExampleViewInterface UClassType; \
	typedef IExampleViewInterface ThisClass; \
	static void Execute_SetExampleProgressRatio(UObject* O, float ratio); \
	static void Execute_SetExampleText(UObject* O, const FString& text); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_6_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class UExampleViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_ExampleViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
