// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ADVGAMEPROGPROJECT_STrackerBot_generated_h
#error "STrackerBot.generated.h already included, missing '#pragma once' in STrackerBot.h"
#endif
#define ADVGAMEPROGPROJECT_STrackerBot_generated_h

#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_RPC_WRAPPERS
#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASTrackerBot(); \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASTrackerBot(); \
	friend ADVGAMEPROGPROJECT_API class UClass* Z_Construct_UClass_ASTrackerBot(); \
public: \
	DECLARE_CLASS(ASTrackerBot, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvGameProgProject"), NO_API) \
	DECLARE_SERIALIZER(ASTrackerBot) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASTrackerBot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASTrackerBot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public:


#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASTrackerBot(ASTrackerBot&&); \
	NO_API ASTrackerBot(const ASTrackerBot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTrackerBot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTrackerBot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTrackerBot)


#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASTrackerBot, MeshComp); } \
	FORCEINLINE static uint32 __PPO__MovementForce() { return STRUCT_OFFSET(ASTrackerBot, MovementForce); } \
	FORCEINLINE static uint32 __PPO__bUseVelocityChange() { return STRUCT_OFFSET(ASTrackerBot, bUseVelocityChange); } \
	FORCEINLINE static uint32 __PPO__RequiredDistanceToTarget() { return STRUCT_OFFSET(ASTrackerBot, RequiredDistanceToTarget); }


#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_9_PROLOG
#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_RPC_WRAPPERS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_INCLASS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_PRIVATE_PROPERTY_OFFSET \
	AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_INCLASS_NO_PURE_DECLS \
	AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AdvGameProgProject_Source_AdvGameProgProject_Public_AI_STrackerBot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
