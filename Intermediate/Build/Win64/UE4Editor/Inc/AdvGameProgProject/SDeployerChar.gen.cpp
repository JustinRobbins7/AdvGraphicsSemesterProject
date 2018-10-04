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
	ADVGAMEPROGPROJECT_API UFunction* Z_Construct_UFunction_ASDeployerChar_InitDeployables();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASDeployerChar::StaticRegisterNativesASDeployerChar()
	{
		UClass* Class = ASDeployerChar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitDeployables", &ASDeployerChar::execInitDeployables },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASDeployerChar_InitDeployables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Initialization" },
				{ "ModuleRelativePath", "Public/Character/SDeployerChar.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDeployerChar, "InitDeployables", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASDeployerChar_InitDeployables, "InitDeployables" }, // 2934452817
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
				{ "Category", "Deployables" },
				{ "ModuleRelativePath", "Public/Character/SDeployerChar.h" },
				{ "ToolTip", "Deployable to Spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_DeployableClass_1 = { UE4CodeGen_Private::EPropertyClass::Class, "DeployableClass_1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(ASDeployerChar, DeployableClass_1), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_DeployableClass_1_MetaData, ARRAY_COUNT(NewProp_DeployableClass_1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeployableCounts_MetaData[] = {
				{ "Category", "Deployables" },
				{ "ModuleRelativePath", "Public/Character/SDeployerChar.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DeployableCounts = { UE4CodeGen_Private::EPropertyClass::Array, "DeployableCounts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(ASDeployerChar, DeployableCounts), METADATA_PARAMS(NewProp_DeployableCounts_MetaData, ARRAY_COUNT(NewProp_DeployableCounts_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeployableCounts_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "DeployableCounts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeployableClass_1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeployableCounts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DeployableCounts_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASDeployerChar>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASDeployerChar::StaticClass,
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
	IMPLEMENT_CLASS(ASDeployerChar, 471470910);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASDeployerChar(Z_Construct_UClass_ASDeployerChar, &ASDeployerChar::StaticClass, TEXT("/Script/AdvGameProgProject"), TEXT("ASDeployerChar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDeployerChar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
