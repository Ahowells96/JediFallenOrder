// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JediFallenOrder/JediFallenOrderGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJediFallenOrderGameMode() {}
// Cross Module References
	JEDIFALLENORDER_API UClass* Z_Construct_UClass_AJediFallenOrderGameMode_NoRegister();
	JEDIFALLENORDER_API UClass* Z_Construct_UClass_AJediFallenOrderGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_JediFallenOrder();
// End Cross Module References
	void AJediFallenOrderGameMode::StaticRegisterNativesAJediFallenOrderGameMode()
	{
	}
	UClass* Z_Construct_UClass_AJediFallenOrderGameMode_NoRegister()
	{
		return AJediFallenOrderGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AJediFallenOrderGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJediFallenOrderGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_JediFallenOrder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJediFallenOrderGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "JediFallenOrderGameMode.h" },
		{ "ModuleRelativePath", "JediFallenOrderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJediFallenOrderGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJediFallenOrderGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AJediFallenOrderGameMode_Statics::ClassParams = {
		&AJediFallenOrderGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AJediFallenOrderGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJediFallenOrderGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJediFallenOrderGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AJediFallenOrderGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AJediFallenOrderGameMode, 1918960963);
	template<> JEDIFALLENORDER_API UClass* StaticClass<AJediFallenOrderGameMode>()
	{
		return AJediFallenOrderGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AJediFallenOrderGameMode(Z_Construct_UClass_AJediFallenOrderGameMode, &AJediFallenOrderGameMode::StaticClass, TEXT("/Script/JediFallenOrder"), TEXT("AJediFallenOrderGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJediFallenOrderGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
