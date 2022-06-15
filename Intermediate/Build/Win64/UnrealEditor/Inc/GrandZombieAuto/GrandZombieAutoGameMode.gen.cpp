// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrandZombieAuto/GrandZombieAutoGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrandZombieAutoGameMode() {}
// Cross Module References
	GRANDZOMBIEAUTO_API UClass* Z_Construct_UClass_AGrandZombieAutoGameMode_NoRegister();
	GRANDZOMBIEAUTO_API UClass* Z_Construct_UClass_AGrandZombieAutoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GrandZombieAuto();
// End Cross Module References
	void AGrandZombieAutoGameMode::StaticRegisterNativesAGrandZombieAutoGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGrandZombieAutoGameMode);
	UClass* Z_Construct_UClass_AGrandZombieAutoGameMode_NoRegister()
	{
		return AGrandZombieAutoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGrandZombieAutoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrandZombieAutoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GrandZombieAuto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrandZombieAutoGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GrandZombieAutoGameMode.h" },
		{ "ModuleRelativePath", "GrandZombieAutoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrandZombieAutoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrandZombieAutoGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGrandZombieAutoGameMode_Statics::ClassParams = {
		&AGrandZombieAutoGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGrandZombieAutoGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrandZombieAutoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrandZombieAutoGameMode()
	{
		if (!Z_Registration_Info_UClass_AGrandZombieAutoGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGrandZombieAutoGameMode.OuterSingleton, Z_Construct_UClass_AGrandZombieAutoGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGrandZombieAutoGameMode.OuterSingleton;
	}
	template<> GRANDZOMBIEAUTO_API UClass* StaticClass<AGrandZombieAutoGameMode>()
	{
		return AGrandZombieAutoGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrandZombieAutoGameMode);
	struct Z_CompiledInDeferFile_FID_GZA_Source_GrandZombieAuto_GrandZombieAutoGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GZA_Source_GrandZombieAuto_GrandZombieAutoGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGrandZombieAutoGameMode, AGrandZombieAutoGameMode::StaticClass, TEXT("AGrandZombieAutoGameMode"), &Z_Registration_Info_UClass_AGrandZombieAutoGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGrandZombieAutoGameMode), 2976502831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GZA_Source_GrandZombieAuto_GrandZombieAutoGameMode_h_2094411637(TEXT("/Script/GrandZombieAuto"),
		Z_CompiledInDeferFile_FID_GZA_Source_GrandZombieAuto_GrandZombieAutoGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GZA_Source_GrandZombieAuto_GrandZombieAutoGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
