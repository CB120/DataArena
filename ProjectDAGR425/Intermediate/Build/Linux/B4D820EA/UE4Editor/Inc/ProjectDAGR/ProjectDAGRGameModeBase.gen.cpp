// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectDAGR/ProjectDAGRGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDAGRGameModeBase() {}
// Cross Module References
	PROJECTDAGR_API UClass* Z_Construct_UClass_AProjectDAGRGameModeBase_NoRegister();
	PROJECTDAGR_API UClass* Z_Construct_UClass_AProjectDAGRGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectDAGR();
// End Cross Module References
	void AProjectDAGRGameModeBase::StaticRegisterNativesAProjectDAGRGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProjectDAGRGameModeBase_NoRegister()
	{
		return AProjectDAGRGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjectDAGRGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectDAGRGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectDAGR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectDAGRGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectDAGRGameModeBase.h" },
		{ "ModuleRelativePath", "ProjectDAGRGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectDAGRGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectDAGRGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectDAGRGameModeBase_Statics::ClassParams = {
		&AProjectDAGRGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProjectDAGRGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectDAGRGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectDAGRGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectDAGRGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectDAGRGameModeBase, 1761021099);
	template<> PROJECTDAGR_API UClass* StaticClass<AProjectDAGRGameModeBase>()
	{
		return AProjectDAGRGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectDAGRGameModeBase(Z_Construct_UClass_AProjectDAGRGameModeBase, &AProjectDAGRGameModeBase::StaticClass, TEXT("/Script/ProjectDAGR"), TEXT("AProjectDAGRGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDAGRGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
