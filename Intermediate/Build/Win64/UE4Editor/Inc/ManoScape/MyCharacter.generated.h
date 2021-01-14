// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMyCharacterMovementComponent;
#ifdef MANOSCAPE_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define MANOSCAPE_MyCharacter_generated_h

#define ManoScape_Source_ManoScape_MyCharacter_h_13_SPARSE_DATA
#define ManoScape_Source_ManoScape_MyCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMyMovementComponent);


#define ManoScape_Source_ManoScape_MyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMyMovementComponent);


#define ManoScape_Source_ManoScape_MyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ManoScape"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define ManoScape_Source_ManoScape_MyCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ManoScape"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define ManoScape_Source_ManoScape_MyCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define ManoScape_Source_ManoScape_MyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter)


#define ManoScape_Source_ManoScape_MyCharacter_h_13_PRIVATE_PROPERTY_OFFSET
#define ManoScape_Source_ManoScape_MyCharacter_h_10_PROLOG
#define ManoScape_Source_ManoScape_MyCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ManoScape_Source_ManoScape_MyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ManoScape_Source_ManoScape_MyCharacter_h_13_SPARSE_DATA \
	ManoScape_Source_ManoScape_MyCharacter_h_13_RPC_WRAPPERS \
	ManoScape_Source_ManoScape_MyCharacter_h_13_INCLASS \
	ManoScape_Source_ManoScape_MyCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ManoScape_Source_ManoScape_MyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ManoScape_Source_ManoScape_MyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	ManoScape_Source_ManoScape_MyCharacter_h_13_SPARSE_DATA \
	ManoScape_Source_ManoScape_MyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ManoScape_Source_ManoScape_MyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	ManoScape_Source_ManoScape_MyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANOSCAPE_API UClass* StaticClass<class AMyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ManoScape_Source_ManoScape_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
