// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceConstant;
struct FBeMaterialScalar;
struct FBeMaterialVector;
struct FBeMaterialTexture;
class UTexture;
#ifdef BEUTIL_BeMaterialEditorHelper_generated_h
#error "BeMaterialEditorHelper.generated.h already included, missing '#pragma once' in BeMaterialEditorHelper.h"
#endif
#define BEUTIL_BeMaterialEditorHelper_generated_h

#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_SPARSE_DATA
#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEditMaterialConstant); \
	DECLARE_FUNCTION(execReloadTexture);


#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEditMaterialConstant); \
	DECLARE_FUNCTION(execReloadTexture);


#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBeMaterialEditorHelper(); \
	friend struct Z_Construct_UClass_UBeMaterialEditorHelper_Statics; \
public: \
	DECLARE_CLASS(UBeMaterialEditorHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BeUtil"), NO_API) \
	DECLARE_SERIALIZER(UBeMaterialEditorHelper)


#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUBeMaterialEditorHelper(); \
	friend struct Z_Construct_UClass_UBeMaterialEditorHelper_Statics; \
public: \
	DECLARE_CLASS(UBeMaterialEditorHelper, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BeUtil"), NO_API) \
	DECLARE_SERIALIZER(UBeMaterialEditorHelper)


#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBeMaterialEditorHelper(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBeMaterialEditorHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBeMaterialEditorHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBeMaterialEditorHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBeMaterialEditorHelper(UBeMaterialEditorHelper&&); \
	NO_API UBeMaterialEditorHelper(const UBeMaterialEditorHelper&); \
public:


#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBeMaterialEditorHelper(UBeMaterialEditorHelper&&); \
	NO_API UBeMaterialEditorHelper(const UBeMaterialEditorHelper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBeMaterialEditorHelper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBeMaterialEditorHelper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBeMaterialEditorHelper)


#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_12_PROLOG
#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_RPC_WRAPPERS \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_INCLASS \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_SPARSE_DATA \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEUTIL_API UClass* StaticClass<class UBeMaterialEditorHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Plugins_Runtime_Bhvr_BeUtil_Source_BeUtil_Public_BeMaterialEditorHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
