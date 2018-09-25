// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ADVGAMEPROGPROJECT_SProjectile_generated_h
#error "SProjectile.generated.h already included, missing '#pragma once' in SProjectile.h"
#endif
#define ADVGAMEPROGPROJECT_SProjectile_generated_h

#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplode) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Explode(Z_Param_DestroyedActor); \
		P_NATIVE_END; \
	}


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplode) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Explode(Z_Param_DestroyedActor); \
		P_NATIVE_END; \
	}


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASProjectile(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASProjectile(); \
public: \
	DECLARE_CLASS(ASProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASProjectile(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASProjectile(); \
public: \
	DECLARE_CLASS(ASProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectile(ASProjectile&&); \
	NO_API ASProjectile(const ASProjectile&); \
public:


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASProjectile(ASProjectile&&); \
	NO_API ASProjectile(const ASProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASProjectile)


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ASProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ASProjectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__ExplosionEffect() { return STRUCT_OFFSET(ASProjectile, ExplosionEffect); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASProjectile, DamageType); }


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_14_PROLOG
#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_RPC_WRAPPERS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_INCLASS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_INCLASS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
