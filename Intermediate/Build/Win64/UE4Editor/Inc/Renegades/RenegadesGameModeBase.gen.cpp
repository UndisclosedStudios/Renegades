// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Renegades/RenegadesGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenegadesGameModeBase() {}
// Cross Module References
	RENEGADES_API UClass* Z_Construct_UClass_ARenegadesGameModeBase_NoRegister();
	RENEGADES_API UClass* Z_Construct_UClass_ARenegadesGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Renegades();
// End Cross Module References
	void ARenegadesGameModeBase::StaticRegisterNativesARenegadesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARenegadesGameModeBase_NoRegister()
	{
		return ARenegadesGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARenegadesGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARenegadesGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Renegades,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARenegadesGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RenegadesGameModeBase.h" },
		{ "ModuleRelativePath", "RenegadesGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARenegadesGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenegadesGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARenegadesGameModeBase_Statics::ClassParams = {
		&ARenegadesGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARenegadesGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARenegadesGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARenegadesGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARenegadesGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARenegadesGameModeBase, 345577322);
	template<> RENEGADES_API UClass* StaticClass<ARenegadesGameModeBase>()
	{
		return ARenegadesGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARenegadesGameModeBase(Z_Construct_UClass_ARenegadesGameModeBase, &ARenegadesGameModeBase::StaticClass, TEXT("/Script/Renegades"), TEXT("ARenegadesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARenegadesGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
