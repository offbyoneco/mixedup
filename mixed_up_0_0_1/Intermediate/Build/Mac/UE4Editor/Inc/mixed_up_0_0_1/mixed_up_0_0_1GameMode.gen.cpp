// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "mixed_up_0_0_1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemixed_up_0_0_1GameMode() {}
// Cross Module References
	MIXED_UP_0_0_1_API UClass* Z_Construct_UClass_Amixed_up_0_0_1GameMode_NoRegister();
	MIXED_UP_0_0_1_API UClass* Z_Construct_UClass_Amixed_up_0_0_1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_mixed_up_0_0_1();
// End Cross Module References
	void Amixed_up_0_0_1GameMode::StaticRegisterNativesAmixed_up_0_0_1GameMode()
	{
	}
	UClass* Z_Construct_UClass_Amixed_up_0_0_1GameMode_NoRegister()
	{
		return Amixed_up_0_0_1GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_Amixed_up_0_0_1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_mixed_up_0_0_1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "mixed_up_0_0_1GameMode.h" },
				{ "ModuleRelativePath", "mixed_up_0_0_1GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "GameMode class to specify pawn and playercontroller" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Amixed_up_0_0_1GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Amixed_up_0_0_1GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Amixed_up_0_0_1GameMode, 1627393828);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Amixed_up_0_0_1GameMode(Z_Construct_UClass_Amixed_up_0_0_1GameMode, &Amixed_up_0_0_1GameMode::StaticClass, TEXT("/Script/mixed_up_0_0_1"), TEXT("Amixed_up_0_0_1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amixed_up_0_0_1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
