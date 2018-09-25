// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMEPROGPROJECT_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define ADVGAMEPROGPROJECT_SWeapon_generated_h

#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_17_GENERATED_BODY \
	friend ADVGAMEPROGPROJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FHitScanTrace(); \
	ADVGAMEPROGPROJECT_API static class UScriptStruct* StaticStruct();


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	}


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execStopFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFire_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFire_Validate")); \
			return; \
		} \
		P_THIS->ServerFire_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_HitScanTrace) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_HitScanTrace(); \
		P_NATIVE_END; \
	}


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_EVENT_PARMS
#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_CALLBACK_WRAPPERS
#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASWeapon(); \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ASWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(ASWeapon, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ASWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(ASWeapon, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(ASWeapon, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(ASWeapon, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__FireCamShake() { return STRUCT_OFFSET(ASWeapon, FireCamShake); } \
	FORCEINLINE static uint32 __PPO__BaseDamage() { return STRUCT_OFFSET(ASWeapon, BaseDamage); } \
	FORCEINLINE static uint32 __PPO__RateOfFire() { return STRUCT_OFFSET(ASWeapon, RateOfFire); } \
	FORCEINLINE static uint32 __PPO__FireRecoil() { return STRUCT_OFFSET(ASWeapon, FireRecoil); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(ASWeapon, HitScanTrace); }


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_28_PROLOG \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_EVENT_PARMS


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_RPC_WRAPPERS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_CALLBACK_WRAPPERS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_INCLASS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_CALLBACK_WRAPPERS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_INCLASS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvGameProgProject_Source_AdvGameProgProject_Public_Actors_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
