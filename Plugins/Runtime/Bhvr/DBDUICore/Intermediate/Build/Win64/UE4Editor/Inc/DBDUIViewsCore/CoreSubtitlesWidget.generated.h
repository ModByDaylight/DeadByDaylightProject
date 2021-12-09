// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESubtitlesPosition : uint8;
#ifdef DBDUIVIEWSCORE_CoreSubtitlesWidget_generated_h
#error "CoreSubtitlesWidget.generated.h already included, missing '#pragma once' in CoreSubtitlesWidget.h"
#endif
#define DBDUIVIEWSCORE_CoreSubtitlesWidget_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEntryTimedOut);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEntryTimedOut);


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_EVENT_PARMS \
	struct CoreSubtitlesWidget_eventSetSubtitlesPosition_Parms \
	{ \
		ESubtitlesPosition position; \
	};


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreSubtitlesWidget(); \
	friend struct Z_Construct_UClass_UCoreSubtitlesWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreSubtitlesWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSubtitlesWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreSubtitlesWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUCoreSubtitlesWidget(); \
	friend struct Z_Construct_UClass_UCoreSubtitlesWidget_Statics; \
public: \
	DECLARE_CLASS(UCoreSubtitlesWidget, UCoreBaseUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDUIViewsCore"), NO_API) \
	DECLARE_SERIALIZER(UCoreSubtitlesWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UCoreSubtitlesWidget*>(this); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreSubtitlesWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreSubtitlesWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSubtitlesWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSubtitlesWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSubtitlesWidget(UCoreSubtitlesWidget&&); \
	NO_API UCoreSubtitlesWidget(const UCoreSubtitlesWidget&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoreSubtitlesWidget(UCoreSubtitlesWidget&&); \
	NO_API UCoreSubtitlesWidget(const UCoreSubtitlesWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreSubtitlesWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreSubtitlesWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreSubtitlesWidget)


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SubtitlesTB() { return STRUCT_OFFSET(UCoreSubtitlesWidget, SubtitlesTB); } \
	FORCEINLINE static uint32 __PPO__NumberOfCharacterPerLine() { return STRUCT_OFFSET(UCoreSubtitlesWidget, NumberOfCharacterPerLine); } \
	FORCEINLINE static uint32 __PPO__DurationPerLine() { return STRUCT_OFFSET(UCoreSubtitlesWidget, DurationPerLine); } \
	FORCEINLINE static uint32 __PPO__KeepSingleCharacter() { return STRUCT_OFFSET(UCoreSubtitlesWidget, KeepSingleCharacter); } \
	FORCEINLINE static uint32 __PPO___entryQueue() { return STRUCT_OFFSET(UCoreSubtitlesWidget, _entryQueue); } \
	FORCEINLINE static uint32 __PPO___timerHandle() { return STRUCT_OFFSET(UCoreSubtitlesWidget, _timerHandle); }


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_12_PROLOG \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_EVENT_PARMS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDUIVIEWSCORE_API UClass* StaticClass<class UCoreSubtitlesWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_DBDUICore_Source_DBDUIViewsCore_Public_CoreSubtitlesWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
