// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GO2019_Go2019Character_generated_h
#error "Go2019Character.generated.h already included, missing '#pragma once' in Go2019Character.h"
#endif
#define GO2019_Go2019Character_generated_h

#define Go2019_Source_Go2019_Go2019Character_h_14_RPC_WRAPPERS
#define Go2019_Source_Go2019_Go2019Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Go2019_Source_Go2019_Go2019Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGo2019Character(); \
	friend struct Z_Construct_UClass_AGo2019Character_Statics; \
public: \
	DECLARE_CLASS(AGo2019Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Go2019"), NO_API) \
	DECLARE_SERIALIZER(AGo2019Character)


#define Go2019_Source_Go2019_Go2019Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGo2019Character(); \
	friend struct Z_Construct_UClass_AGo2019Character_Statics; \
public: \
	DECLARE_CLASS(AGo2019Character, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Go2019"), NO_API) \
	DECLARE_SERIALIZER(AGo2019Character)


#define Go2019_Source_Go2019_Go2019Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGo2019Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGo2019Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGo2019Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGo2019Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGo2019Character(AGo2019Character&&); \
	NO_API AGo2019Character(const AGo2019Character&); \
public:


#define Go2019_Source_Go2019_Go2019Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGo2019Character(AGo2019Character&&); \
	NO_API AGo2019Character(const AGo2019Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGo2019Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGo2019Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGo2019Character)


#define Go2019_Source_Go2019_Go2019Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AGo2019Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AGo2019Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AGo2019Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AGo2019Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AGo2019Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGo2019Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AGo2019Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AGo2019Character, L_MotionController); }


#define Go2019_Source_Go2019_Go2019Character_h_11_PROLOG
#define Go2019_Source_Go2019_Go2019Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Go2019_Source_Go2019_Go2019Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Go2019_Source_Go2019_Go2019Character_h_14_RPC_WRAPPERS \
	Go2019_Source_Go2019_Go2019Character_h_14_INCLASS \
	Go2019_Source_Go2019_Go2019Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Go2019_Source_Go2019_Go2019Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Go2019_Source_Go2019_Go2019Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Go2019_Source_Go2019_Go2019Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Go2019_Source_Go2019_Go2019Character_h_14_INCLASS_NO_PURE_DECLS \
	Go2019_Source_Go2019_Go2019Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GO2019_API UClass* StaticClass<class AGo2019Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Go2019_Source_Go2019_Go2019Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
