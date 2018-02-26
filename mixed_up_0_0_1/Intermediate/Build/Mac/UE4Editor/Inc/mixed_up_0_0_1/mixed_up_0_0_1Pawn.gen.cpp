// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "mixed_up_0_0_1Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemixed_up_0_0_1Pawn() {}
// Cross Module References
	MIXED_UP_0_0_1_API UClass* Z_Construct_UClass_Amixed_up_0_0_1Pawn_NoRegister();
	MIXED_UP_0_0_1_API UClass* Z_Construct_UClass_Amixed_up_0_0_1Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_mixed_up_0_0_1();
	MIXED_UP_0_0_1_API UClass* Z_Construct_UClass_Amixed_up_0_0_1Block_NoRegister();
// End Cross Module References
	void Amixed_up_0_0_1Pawn::StaticRegisterNativesAmixed_up_0_0_1Pawn()
	{
	}
	UClass* Z_Construct_UClass_Amixed_up_0_0_1Pawn_NoRegister()
	{
		return Amixed_up_0_0_1Pawn::StaticClass();
	}
	UClass* Z_Construct_UClass_Amixed_up_0_0_1Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_mixed_up_0_0_1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "mixed_up_0_0_1Pawn.h" },
				{ "ModuleRelativePath", "mixed_up_0_0_1Pawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockFocus_MetaData[] = {
				{ "Category", "mixed_up_0_0_1Pawn" },
				{ "ModuleRelativePath", "mixed_up_0_0_1Pawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBlockFocus = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentBlockFocus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000805, 1, nullptr, STRUCT_OFFSET(Amixed_up_0_0_1Pawn, CurrentBlockFocus), Z_Construct_UClass_Amixed_up_0_0_1Block_NoRegister, METADATA_PARAMS(NewProp_CurrentBlockFocus_MetaData, ARRAY_COUNT(NewProp_CurrentBlockFocus_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentBlockFocus,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Amixed_up_0_0_1Pawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Amixed_up_0_0_1Pawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Amixed_up_0_0_1Pawn, 1291329220);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Amixed_up_0_0_1Pawn(Z_Construct_UClass_Amixed_up_0_0_1Pawn, &Amixed_up_0_0_1Pawn::StaticClass, TEXT("/Script/mixed_up_0_0_1"), TEXT("Amixed_up_0_0_1Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amixed_up_0_0_1Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
