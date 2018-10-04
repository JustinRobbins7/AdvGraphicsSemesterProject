// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMEPROGPROJECT_SDeployerChar_generated_h
#error "SDeployerChar.generated.h already included, missing '#pragma once' in SDeployerChar.h"
#endif
#define ADVGAMEPROGPROJECT_SDeployerChar_generated_h

#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitDeployables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitDeployables(); \
		P_NATIVE_END; \
	}


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitDeployables) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitDeployables(); \
		P_NATIVE_END; \
	}


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASDeployerChar(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASDeployerChar(); \
public: \
	DECLARE_CLASS(ASDeployerChar, ASCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASDeployerChar) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASDeployerChar(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASDeployerChar(); \
public: \
	DECLARE_CLASS(ASDeployerChar, ASCharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASDeployerChar) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASDeployerChar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASDeployerChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDeployerChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDeployerChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDeployerChar(ASDeployerChar&&); \
	NO_API ASDeployerChar(const ASDeployerChar&); \
public:


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDeployerChar(ASDeployerChar&&); \
	NO_API ASDeployerChar(const ASDeployerChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDeployerChar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDeployerChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASDeployerChar)


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_PRIVATE_PROPERTY_OFFSET
#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_14_PROLOG
#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_RPC_WRAPPERS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_INCLASS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_INCLASS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvGameProgProject_Source_AdvGameProgProject_Public_Character_SDeployerChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
