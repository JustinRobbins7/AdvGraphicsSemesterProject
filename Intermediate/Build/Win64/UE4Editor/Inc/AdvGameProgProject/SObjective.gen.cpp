// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Actors/SObjective.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSObjective() {}
// Cross Module References
	ADVGAMEPROGPROJECT_API UClass* Z_Construct_UClass_ASObjective_NoRegister();
	ADVGAMEPROGPROJECT_API UClass* Z_Construct_UClass_ASObjective();
	ADVGAMEPROGPROJECT_API UClass* Z_Construct_UClass_ASDeployable();
	UPackage* Z_Construct_UPackage__Script_AdvGameProgProject();
// End Cross Module References
	void ASObjective::StaticRegisterNativesASObjective()
	{
	}
	UClass* Z_Construct_UClass_ASObjective_NoRegister()
	{
		return ASObjective::StaticClass();
	}
	UClass* Z_Construct_UClass_ASObjective()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASDeployable,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvGameProgProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Actors/SObjective.h" },
				{ "ModuleRelativePath", "Public/Actors/SObjective.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefendTime_MetaData[] = {
				{ "Category", "Objective" },
				{ "ModuleRelativePath", "Public/Actors/SObjective.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefendTime = { UE4CodeGen_Private::EPropertyClass::Float, "DefendTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASObjective, DefendTime), METADATA_PARAMS(NewProp_DefendTime_MetaData, ARRAY_COUNT(NewProp_DefendTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefendTime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASObjective>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASObjective::StaticClass,
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
	IMPLEMENT_CLASS(ASObjective, 2652732067);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASObjective(Z_Construct_UClass_ASObjective, &ASObjective::StaticClass, TEXT("/Script/AdvGameProgProject"), TEXT("ASObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
