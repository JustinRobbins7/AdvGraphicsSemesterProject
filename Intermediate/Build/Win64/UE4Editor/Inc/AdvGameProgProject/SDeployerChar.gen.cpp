// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Character/SDeployerChar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDeployerChar() {}
// Cross Module References
	ADVGAMEPROGPROJECT_API UClass* Z_Construct_UClass_ASDeployerChar_NoRegister();
	ADVGAMEPROGPROJECT_API UClass* Z_Construct_UClass_ASDeployerChar();
	ADVGAMEPROGPROJECT_API UClass* Z_Construct_UClass_ASCharacter();
	UPackage* Z_Construct_UPackage__Script_AdvGameProgProject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASDeployerChar::StaticRegisterNativesASDeployerChar()
	{
	}
	UClass* Z_Construct_UClass_ASDeployerChar_NoRegister()
	{
		return ASDeployerChar::StaticClass();
	}
	UClass* Z_Construct_UClass_ASDeployerChar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ASCharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_AdvGameProgProject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Character/SDeployerChar.h" },
				{ "ModuleRelativePath", "Public/Character/SDeployerChar.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeployableClass_1_MetaData[] = {
				{ "Category", "Deployment" },
				{ "ModuleRelativePath", "Public/Character/SDeployerChar.h" },
				{ "ToolTip", "Deployable to Spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DeployableClass_1 = { UE4CodeGen_Private::EPropertyClass::Class, "DeployableClass_1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(ASDeployerChar, DeployableClass_1), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DeployableClass_1_MetaData, ARRAY_COUNT(NewProp_DeployableClass_1_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeployableClass_1,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASDeployerChar>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASDeployerChar::StaticClass,
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
	IMPLEMENT_CLASS(ASDeployerChar, 2805914244);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASDeployerChar(Z_Construct_UClass_ASDeployerChar, &ASDeployerChar::StaticClass, TEXT("/Script/AdvGameProgProject"), TEXT("ASDeployerChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDeployerChar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
