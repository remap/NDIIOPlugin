// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNDIMediaSender;
#ifdef NDIIO_NDIMediaSender_generated_h
#error "NDIMediaSender.generated.h already included, missing '#pragma once' in NDIMediaSender.h"
#endif
#define NDIIO_NDIMediaSender_generated_h

#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_25_DELEGATE \
struct _Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms \
{ \
	UNDIMediaSender* Sender; \
}; \
static inline void FNDIMediaSenderPropertyChanged_DelegateWrapper(const FMulticastScriptDelegate& NDIMediaSenderPropertyChanged, UNDIMediaSender* Sender) \
{ \
	_Script_NDIIO_eventNDIMediaSenderPropertyChanged_Parms Parms; \
	Parms.Sender=Sender; \
	NDIMediaSenderPropertyChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_SPARSE_DATA
#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_RPC_WRAPPERS
#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNDIMediaSender(); \
	friend struct Z_Construct_UClass_UNDIMediaSender_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaSender, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaSender)


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUNDIMediaSender(); \
	friend struct Z_Construct_UClass_UNDIMediaSender_Statics; \
public: \
	DECLARE_CLASS(UNDIMediaSender, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDIIO"), NO_API) \
	DECLARE_SERIALIZER(UNDIMediaSender)


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaSender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaSender); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaSender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaSender(UNDIMediaSender&&); \
	NO_API UNDIMediaSender(const UNDIMediaSender&); \
public:


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNDIMediaSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNDIMediaSender(UNDIMediaSender&&); \
	NO_API UNDIMediaSender(const UNDIMediaSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNDIMediaSender); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNDIMediaSender); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNDIMediaSender)


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SourceName() { return STRUCT_OFFSET(UNDIMediaSender, SourceName); } \
	FORCEINLINE static uint32 __PPO__FrameSize() { return STRUCT_OFFSET(UNDIMediaSender, FrameSize); } \
	FORCEINLINE static uint32 __PPO__FrameRate() { return STRUCT_OFFSET(UNDIMediaSender, FrameRate); } \
	FORCEINLINE static uint32 __PPO__RenderTarget() { return STRUCT_OFFSET(UNDIMediaSender, RenderTarget); } \
	FORCEINLINE static uint32 __PPO__bPerformsRGBtoLinear() { return STRUCT_OFFSET(UNDIMediaSender, bPerformsRGBtoLinear); }


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_31_PROLOG
#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_PRIVATE_PROPERTY_OFFSET \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_SPARSE_DATA \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_RPC_WRAPPERS \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_INCLASS \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_PRIVATE_PROPERTY_OFFSET \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_SPARSE_DATA \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_INCLASS_NO_PURE_DECLS \
	LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NDIMediaSender."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDIIO_API UClass* StaticClass<class UNDIMediaSender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LastDays_Plugins_NDIIOPlugin_Source_Core_Public_Objects_Media_NDIMediaSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
