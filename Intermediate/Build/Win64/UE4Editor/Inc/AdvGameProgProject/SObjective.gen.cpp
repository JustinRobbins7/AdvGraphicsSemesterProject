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
	ADVGAMEPROGPROJECT_API UFunction* Z_Construct_UFunction_ASObjective_HandleCompletion();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_ASObjective_HandleCompletion = FName(TEXT("HandleCompletion"));
	void ASObjective::HandleCompletion(AActor* DestroyedActor)
	{
		SObjective_eventHandleCompletion_Parms Parms;
		Parms.DestroyedActor=DestroyedActor;
		ProcessEvent(FindFunctionChecked(NAME_ASObjective_HandleCompletion),&Parms);
	}
	void ASObjective::StaticRegisterNativesASObjective()
	{
	}
	UFunction* Z_Construct_UFunction_ASObjective_HandleCompletion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor = { UE4CodeGen_Private::EPropertyClass::Object, "DestroyedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SObjective_eventHandleCompletion_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestroyedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Objective" },
				{ "ModuleRelativePath", "Public/Actors/SObjective.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASObjective, "HandleCompletion", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, sizeof(SObjective_eventHandleCompletion_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASObjective_HandleCompletion, "HandleCompletion" }, // 1718162276
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
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ASObjective, 3216975001);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASObjective(Z_Construct_UClass_ASObjective, &ASObjective::StaticClass, TEXT("/Script/AdvGameProgProject"), TEXT("ASObjective"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASObjective);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
