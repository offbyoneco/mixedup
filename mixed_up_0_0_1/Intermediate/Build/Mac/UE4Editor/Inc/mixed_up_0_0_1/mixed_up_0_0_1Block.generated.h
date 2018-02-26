// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef MIXED_UP_0_0_1_mixed_up_0_0_1Block_generated_h
#error "mixed_up_0_0_1Block.generated.h already included, missing '#pragma once' in mixed_up_0_0_1Block.h"
#endif
#define MIXED_UP_0_0_1_mixed_up_0_0_1Block_generated_h

#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFingerPressedBlock) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_FingerIndex); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_TouchedComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnFingerPressedBlock(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_TouchedComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBlockClicked) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_ClickedComp); \
		P_GET_STRUCT(FKey,Z_Param_ButtonClicked); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->BlockClicked(Z_Param_ClickedComp,Z_Param_ButtonClicked); \
		P_NATIVE_END; \
	}


#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAmixed_up_0_0_1Block(); \
	friend MIXED_UP_0_0_1_API class UClass* Z_Construct_UClass_Amixed_up_0_0_1Block(); \
public: \
	DECLARE_CLASS(Amixed_up_0_0_1Block, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/mixed_up_0_0_1"), MIXED_UP_0_0_1_API) \
	DECLARE_SERIALIZER(Amixed_up_0_0_1Block) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAmixed_up_0_0_1Block(); \
	friend MIXED_UP_0_0_1_API class UClass* Z_Construct_UClass_Amixed_up_0_0_1Block(); \
public: \
	DECLARE_CLASS(Amixed_up_0_0_1Block, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/mixed_up_0_0_1"), MIXED_UP_0_0_1_API) \
	DECLARE_SERIALIZER(Amixed_up_0_0_1Block) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MIXED_UP_0_0_1_API Amixed_up_0_0_1Block(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Amixed_up_0_0_1Block) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MIXED_UP_0_0_1_API, Amixed_up_0_0_1Block); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Amixed_up_0_0_1Block); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MIXED_UP_0_0_1_API Amixed_up_0_0_1Block(Amixed_up_0_0_1Block&&); \
	MIXED_UP_0_0_1_API Amixed_up_0_0_1Block(const Amixed_up_0_0_1Block&); \
public:


#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MIXED_UP_0_0_1_API Amixed_up_0_0_1Block(Amixed_up_0_0_1Block&&); \
	MIXED_UP_0_0_1_API Amixed_up_0_0_1Block(const Amixed_up_0_0_1Block&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MIXED_UP_0_0_1_API, Amixed_up_0_0_1Block); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Amixed_up_0_0_1Block); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Amixed_up_0_0_1Block)


#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DummyRoot() { return STRUCT_OFFSET(Amixed_up_0_0_1Block, DummyRoot); } \
	FORCEINLINE static uint32 __PPO__BlockMesh() { return STRUCT_OFFSET(Amixed_up_0_0_1Block, BlockMesh); }


#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_10_PROLOG
#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_PRIVATE_PROPERTY_OFFSET \
	mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_RPC_WRAPPERS \
	mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_INCLASS \
	mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_PRIVATE_PROPERTY_OFFSET \
	mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_INCLASS_NO_PURE_DECLS \
	mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID mixed_up_0_0_1_Source_mixed_up_0_0_1_mixed_up_0_0_1Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
