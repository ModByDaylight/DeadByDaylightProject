// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSkillCheckViewData;
#ifdef DBDUIVIEWINTERFACES_SkillCheckViewInterface_generated_h
#error "SkillCheckViewInterface.generated.h already included, missing '#pragma once' in SkillCheckViewInterface.h"
#endif
#define DBDUIVIEWINTERFACES_SkillCheckViewInterface_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_RPC_WRAPPERS \
	virtual void ApplyScaleFactor_Implementation(float scale) {}; \
	virtual void HideSkillCheck_Implementation() {}; \
	virtual void ShowSkillCheck_Implementation(FSkillCheckViewData const& skillCheckData) {}; \
	virtual void ShowSkillCheckFail_Implementation() {}; \
	virtual void ShowSkillCheckSuccess_Implementation(bool isBonus) {}; \
	virtual void UpdatePositionOffset_Implementation(int32 x, int32 y) {}; \
	virtual void UpdateProgress_Implementation(float value) {}; \
 \
	DECLARE_FUNCTION(execApplyScaleFactor); \
	DECLARE_FUNCTION(execHideSkillCheck); \
	DECLARE_FUNCTION(execShowSkillCheck); \
	DECLARE_FUNCTION(execShowSkillCheckFail); \
	DECLARE_FUNCTION(execShowSkillCheckSuccess); \
	DECLARE_FUNCTION(execUpdatePositionOffset); \
	DECLARE_FUNCTION(execUpdateProgress);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ApplyScaleFactor_Implementation(float scale) {}; \
	virtual void HideSkillCheck_Implementation() {}; \
	virtual void ShowSkillCheck_Implementation(FSkillCheckViewData const& skillCheckData) {}; \
	virtual void ShowSkillCheckFail_Implementation() {}; \
	virtual void ShowSkillCheckSuccess_Implementation(bool isBonus) {}; \
	virtual void UpdatePositionOffset_Implementation(int32 x, int32 y) {}; \
	virtual void UpdateProgress_Implementation(float value) {}; \
 \
	DECLARE_FUNCTION(execApplyScaleFactor); \
	DECLARE_FUNCTION(execHideSkillCheck); \
	DECLARE_FUNCTION(execShowSkillCheck); \
	DECLARE_FUNCTION(execShowSkillCheckFail); \
	DECLARE_FUNCTION(execShowSkillCheckSuccess); \
	DECLARE_FUNCTION(execUpdatePositionOffset); \
	DECLARE_FUNCTION(execUpdateProgress);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_EVENT_PARMS \
	struct SkillCheckViewInterface_eventApplyScaleFactor_Parms \
	{ \
		float scale; \
	}; \
	struct SkillCheckViewInterface_eventShowSkillCheck_Parms \
	{ \
		FSkillCheckViewData skillCheckData; \
	}; \
	struct SkillCheckViewInterface_eventShowSkillCheckSuccess_Parms \
	{ \
		bool isBonus; \
	}; \
	struct SkillCheckViewInterface_eventUpdatePositionOffset_Parms \
	{ \
		int32 x; \
		int32 y; \
	}; \
	struct SkillCheckViewInterface_eventUpdateProgress_Parms \
	{ \
		float value; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillCheckViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillCheckViewInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillCheckViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillCheckViewInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillCheckViewInterface(USkillCheckViewInterface&&); \
	NO_API USkillCheckViewInterface(const USkillCheckViewInterface&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkillCheckViewInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkillCheckViewInterface(USkillCheckViewInterface&&); \
	NO_API USkillCheckViewInterface(const USkillCheckViewInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkillCheckViewInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkillCheckViewInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkillCheckViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSkillCheckViewInterface(); \
	friend struct Z_Construct_UClass_USkillCheckViewInterface_Statics; \
public: \
	DECLARE_CLASS(USkillCheckViewInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DBDUIViewInterfaces"), NO_API) \
	DECLARE_SERIALIZER(USkillCheckViewInterface)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISkillCheckViewInterface() {} \
public: \
	typedef USkillCheckViewInterface UClassType; \
	typedef ISkillCheckViewInterface ThisClass; \
	static void Execute_ApplyScaleFactor(UObject* O, float scale); \
	static void Execute_HideSkillCheck(UObject* O); \
	static void Execute_ShowSkillCheck(UObject* O, FSkillCheckViewData const& skillCheckData); \
	static void Execute_ShowSkillCheckFail(UObject* O); \
	static void Execute_ShowSkillCheckSuccess(UObject* O, bool isBonus); \
	static void Execute_UpdatePositionOffset(UObject* O, int32 x, int32 y); \
	static void Execute_UpdateProgress(UObject* O, float value); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~ISkillCheckViewInterface() {} \
public: \
	typedef USkillCheckViewInterface UClassType; \
	typedef ISkillCheckViewInterface ThisClass; \
	static void Execute_ApplyScaleFactor(UObject* O, float scale); \
	static void Execute_HideSkillCheck(UObject* O); \
	static void Execute_ShowSkillCheck(UObject* O, FSkillCheckViewData const& skillCheckData); \
	static void Execute_ShowSkillCheckFail(UObject* O); \
	static void Execute_ShowSkillCheckSuccess(UObject* O, bool isBonus); \
	static void Execute_UpdatePositionOffset(UObject* O, int32 x, int32 y); \
	static void Execute_UpdateProgress(UObject* O, float value); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_7_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWINTERFACES_API UClass* StaticClass<class USkillCheckViewInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICommon_Source_DBDUIViewInterfaces_Public_SkillCheckViewInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
