// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "mixed_up_0_0_1PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemixed_up_0_0_1PlayerController() {}
// Cross Module References
	MIXED_UP_0_0_1_API UClass* Z_Construct_UClass_Amixed_up_0_0_1PlayerController_NoRegister();
	MIXED_UP_0_0_1_API UClass* Z_Construct_UClass_Amixed_up_0_0_1PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_mixed_up_0_0_1();
// End Cross Module References
	void Amixed_up_0_0_1PlayerController::StaticRegisterNativesAmixed_up_0_0_1PlayerController()
	{
	}
	UClass* Z_Construct_UClass_Amixed_up_0_0_1PlayerController_NoRegister()
	{
		return Amixed_up_0_0_1PlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_Amixed_up_0_0_1PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_mixed_up_0_0_1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "mixed_up_0_0_1PlayerController.h" },
				{ "ModuleRelativePath", "mixed_up_0_0_1PlayerController.h" },
				{ "ToolTip", "PlayerController class used to enable cursor" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Amixed_up_0_0_1PlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Amixed_up_0_0_1PlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Amixed_up_0_0_1PlayerController, 119005712);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Amixed_up_0_0_1PlayerController(Z_Construct_UClass_Amixed_up_0_0_1PlayerController, &Amixed_up_0_0_1PlayerController::StaticClass, TEXT("/Script/mixed_up_0_0_1"), TEXT("Amixed_up_0_0_1PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amixed_up_0_0_1PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
