// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "mixed_up_0_0_1BlockGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemixed_up_0_0_1BlockGrid() {}
// Cross Module References
	MIXED_UP_0_0_1_API UClass* Z_Construct_UClass_Amixed_up_0_0_1BlockGrid_NoRegister();
	MIXED_UP_0_0_1_API UClass* Z_Construct_UClass_Amixed_up_0_0_1BlockGrid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_mixed_up_0_0_1();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void Amixed_up_0_0_1BlockGrid::StaticRegisterNativesAmixed_up_0_0_1BlockGrid()
	{
	}
	UClass* Z_Construct_UClass_Amixed_up_0_0_1BlockGrid_NoRegister()
	{
		return Amixed_up_0_0_1BlockGrid::StaticClass();
	}
	UClass* Z_Construct_UClass_Amixed_up_0_0_1BlockGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_mixed_up_0_0_1,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "mixed_up_0_0_1BlockGrid.h" },
				{ "ModuleRelativePath", "mixed_up_0_0_1BlockGrid.h" },
				{ "ToolTip", "Class used to spawn blocks and manage score" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockSpacing_MetaData[] = {
				{ "Category", "Grid" },
				{ "ModuleRelativePath", "mixed_up_0_0_1BlockGrid.h" },
				{ "ToolTip", "Spacing of blocks" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlockSpacing = { UE4CodeGen_Private::EPropertyClass::Float, "BlockSpacing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(Amixed_up_0_0_1BlockGrid, BlockSpacing), METADATA_PARAMS(NewProp_BlockSpacing_MetaData, ARRAY_COUNT(NewProp_BlockSpacing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "Category", "Grid" },
				{ "ModuleRelativePath", "mixed_up_0_0_1BlockGrid.h" },
				{ "ToolTip", "Number of blocks along each side of grid" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Int, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(Amixed_up_0_0_1BlockGrid, Size), METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreText_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Grid" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "mixed_up_0_0_1BlockGrid.h" },
				{ "ToolTip", "Text component for the score" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScoreText = { UE4CodeGen_Private::EPropertyClass::Object, "ScoreText", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(Amixed_up_0_0_1BlockGrid, ScoreText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(NewProp_ScoreText_MetaData, ARRAY_COUNT(NewProp_ScoreText_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DummyRoot_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Grid" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "mixed_up_0_0_1BlockGrid.h" },
				{ "ToolTip", "Dummy root component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DummyRoot = { UE4CodeGen_Private::EPropertyClass::Object, "DummyRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(Amixed_up_0_0_1BlockGrid, DummyRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_DummyRoot_MetaData, ARRAY_COUNT(NewProp_DummyRoot_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlockSpacing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScoreText,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DummyRoot,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Amixed_up_0_0_1BlockGrid>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Amixed_up_0_0_1BlockGrid::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(Amixed_up_0_0_1BlockGrid, 1061337686);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Amixed_up_0_0_1BlockGrid(Z_Construct_UClass_Amixed_up_0_0_1BlockGrid, &Amixed_up_0_0_1BlockGrid::StaticClass, TEXT("/Script/mixed_up_0_0_1"), TEXT("Amixed_up_0_0_1BlockGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Amixed_up_0_0_1BlockGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
