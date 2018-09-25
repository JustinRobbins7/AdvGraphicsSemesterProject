// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/AI/STrackerBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTrackerBot() {}
// Cross Module References
	ADVGAMEPROGPROJECT_API UClass* Z_Construct_UClass_ASTrackerBot_NoRegister();
	ADVGAMEPROGPROJECT_API UClass* Z_Construct_UClass_ASTrackerBot();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_AdvGameProgProject();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASTrackerBot::StaticRegisterNativesASTrackerBot()
	{
	}
	UClass* Z_Construct_UClass_ASTrackerBot_NoRegister()
	{
		return ASTrackerBot::StaticClass();
	}
	UClass* Z_Construct_UClass_ASTrackerBot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvGameProgProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "AI/STrackerBot.h" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDistanceToTarget_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RequiredDistanceToTarget = { UE4CodeGen_Private::EPropertyClass::Float, "RequiredDistanceToTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, RequiredDistanceToTarget), METADATA_PARAMS(NewProp_RequiredDistanceToTarget_MetaData, ARRAY_COUNT(NewProp_RequiredDistanceToTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVelocityChange_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			auto NewProp_bUseVelocityChange_SetBit = [](void* Obj){ ((ASTrackerBot*)Obj)->bUseVelocityChange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVelocityChange = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVelocityChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASTrackerBot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseVelocityChange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseVelocityChange_MetaData, ARRAY_COUNT(NewProp_bUseVelocityChange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementForce_MetaData[] = {
				{ "Category", "TrackerBot" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementForce = { UE4CodeGen_Private::EPropertyClass::Float, "MovementForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, MovementForce), METADATA_PARAMS(NewProp_MovementForce_MetaData, ARRAY_COUNT(NewProp_MovementForce_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
				{ "Category", "Components" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/AI/STrackerBot.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000b0009, 1, nullptr, STRUCT_OFFSET(ASTrackerBot, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComp_MetaData, ARRAY_COUNT(NewProp_MeshComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequiredDistanceToTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseVelocityChange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MovementForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASTrackerBot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASTrackerBot::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTrackerBot, 3111067429);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTrackerBot(Z_Construct_UClass_ASTrackerBot, &ASTrackerBot::StaticClass, TEXT("/Script/AdvGameProgProject"), TEXT("ASTrackerBot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTrackerBot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
