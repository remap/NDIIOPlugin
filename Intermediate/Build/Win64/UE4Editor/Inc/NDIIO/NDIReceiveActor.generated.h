// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NDIIO_NDIReceiveActor_generated_h
#error "NDIReceiveActor.generated.h already included, missing '#pragma once' in NDIReceiveActor.h"
#endif
#define NDIIO_NDIReceiveActor_generated_h

#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_SPARSE_DATA
#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateAudioPlayback); \
	DECLARE_FUNCTION(execSetFrameWidth); \
	DECLARE_FUNCTION(execSetFrameHeight);


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateAudioPlayback); \
	DECLARE_FUNCTION(execSetFrameWidth); \
	DECLARE_FUNCTION(execSetFrameHeight);


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANDIReceiveActor(); \
	friend struct Z_Construct_UClass_ANDIReceiveActor_Statics; \
public: \
	DECLARE_CLASS(ANDIReceiveActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(ANDIReceiveActor)


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesANDIReceiveActor(); \
	friend struct Z_Construct_UClass_ANDIReceiveActor_Statics; \
public: \
	DECLARE_CLASS(ANDIReceiveActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(ANDIReceiveActor)


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANDIReceiveActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANDIReceiveActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANDIReceiveActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANDIReceiveActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANDIReceiveActor(ANDIReceiveActor&&); \
	NO_API ANDIReceiveActor(const ANDIReceiveActor&); \
public:


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANDIReceiveActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANDIReceiveActor(ANDIReceiveActor&&); \
	NO_API ANDIReceiveActor(const ANDIReceiveActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANDIReceiveActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANDIReceiveActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANDIReceiveActor)


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FrameHeight() { return STRUCT_OFFSET(ANDIReceiveActor, FrameHeight); } \
	FORCEINLINE static uint32 __PPO__FrameWidth() { return STRUCT_OFFSET(ANDIReceiveActor, FrameWidth); } \
	FORCEINLINE static uint32 __PPO__bEnableAudioPlayback() { return STRUCT_OFFSET(ANDIReceiveActor, bEnableAudioPlayback); } \
	FORCEINLINE static uint32 __PPO__NDIMediaSource() { return STRUCT_OFFSET(ANDIReceiveActor, NDIMediaSource); } \
	FORCEINLINE static uint32 __PPO__VideoMeshComponent() { return STRUCT_OFFSET(ANDIReceiveActor, VideoMeshComponent); } \
	FORCEINLINE static uint32 __PPO__AudioComponent() { return STRUCT_OFFSET(ANDIReceiveActor, AudioComponent); } \
	FORCEINLINE static uint32 __PPO__AudioSoundWave() { return STRUCT_OFFSET(ANDIReceiveActor, AudioSoundWave); } \
	FORCEINLINE static uint32 __PPO__VideoMaterialInstance() { return STRUCT_OFFSET(ANDIReceiveActor, VideoMaterialInstance); }


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_18_PROLOG
#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_PRIVATE_PROPERTY_OFFSET \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_SPARSE_DATA \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_RPC_WRAPPERS \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_INCLASS \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_PRIVATE_PROPERTY_OFFSET \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_SPARSE_DATA \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_INCLASS_NO_PURE_DECLS \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDIReceiveActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class ANDIReceiveActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Actors_NDIReceiveActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
