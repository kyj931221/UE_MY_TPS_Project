// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_TPS_Project/public/TPSProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTPSProjectGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MY_TPS_PROJECT_API UClass* Z_Construct_UClass_ATPSProjectGameModeBase();
	MY_TPS_PROJECT_API UClass* Z_Construct_UClass_ATPSProjectGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_My_TPS_Project();
// End Cross Module References
	void ATPSProjectGameModeBase::StaticRegisterNativesATPSProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATPSProjectGameModeBase);
	UClass* Z_Construct_UClass_ATPSProjectGameModeBase_NoRegister()
	{
		return ATPSProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATPSProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATPSProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_My_TPS_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSProjectGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATPSProjectGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPSProjectGameModeBase.h" },
		{ "ModuleRelativePath", "public/TPSProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATPSProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSProjectGameModeBase_Statics::ClassParams = {
		&ATPSProjectGameModeBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSProjectGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSProjectGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATPSProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATPSProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSProjectGameModeBase.OuterSingleton, Z_Construct_UClass_ATPSProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATPSProjectGameModeBase.OuterSingleton;
	}
	template<> MY_TPS_PROJECT_API UClass* StaticClass<ATPSProjectGameModeBase>()
	{
		return ATPSProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSProjectGameModeBase);
	ATPSProjectGameModeBase::~ATPSProjectGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_My_TPS_Project_Source_My_TPS_Project_public_TPSProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_TPS_Project_Source_My_TPS_Project_public_TPSProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATPSProjectGameModeBase, ATPSProjectGameModeBase::StaticClass, TEXT("ATPSProjectGameModeBase"), &Z_Registration_Info_UClass_ATPSProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSProjectGameModeBase), 3970905449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_My_TPS_Project_Source_My_TPS_Project_public_TPSProjectGameModeBase_h_130183136(TEXT("/Script/My_TPS_Project"),
		Z_CompiledInDeferFile_FID_My_TPS_Project_Source_My_TPS_Project_public_TPSProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_My_TPS_Project_Source_My_TPS_Project_public_TPSProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
