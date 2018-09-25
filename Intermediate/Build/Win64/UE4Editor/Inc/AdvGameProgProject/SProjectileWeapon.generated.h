// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMEPROGPROJECT_SProjectileWeapon_generated_h
#error "SProjectileWeapon.generated.h already included, missing '#pragma once' in SProjectileWeapon.h"
#endif
#define ADVGAMEPROGPROJECT_SProjectileWeapon_generated_h

#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASProjectileWeapon(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASProjectileWeapon(); \
public: \
	DECLARE_CLASS(ASProjectileWeapon, ASWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASProjectileWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASProjectileWeapon(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASProjectileWeapon(); \
public: \
	DECLARE_CLASS(ASProjectileWeapon, ASWeapon, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASProjectileWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectileWeapon(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASProjectileWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectileWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectileWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectileWeapon(ASProjectileWeapon&&); \
	NO_API ASProjectileWeapon(const ASProjectileWeapon&); \
public:


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectileWeapon() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectileWeapon(ASProjectileWeapon&&); \
	NO_API ASProjectileWeapon(const ASProjectileWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectileWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectileWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASProjectileWeapon)


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_PRIVATE_PROPERTY_OFFSET
#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_13_PROLOG
#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_RPC_WRAPPERS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_INCLASS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_INCLASS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectileWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
