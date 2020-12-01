// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/Public/Components/NDIBroadcastComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIBroadcastComponent() {}
// Cross Module References
	NDIIO_API UClass* Z_Construct_UClass_UNDIBroadcastComponent_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIBroadcastComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NDIIO();
	NDIIO_API UScriptStruct* Z_Construct_UScriptStruct_FNDIBroadcastConfiguration();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	NDIIO_API UClass* Z_Construct_UClass_UNDIMediaSender_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNDIBroadcastComponent::execStopBroadcasting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopBroadcasting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIBroadcastComponent::execGetNumberOfConnections)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNumberOfConnections(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIBroadcastComponent::execGetTallyInformation)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsOnPreview);
		P_GET_UBOOL_REF(Z_Param_Out_IsOnProgram);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTallyInformation(Z_Param_Out_IsOnPreview,Z_Param_Out_IsOnProgram);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIBroadcastComponent::execChangeBroadcastTexture)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_BroadcastTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBroadcastTexture(Z_Param_BroadcastTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIBroadcastComponent::execChangeBroadcastConfiguration)
	{
		P_GET_STRUCT_REF(FNDIBroadcastConfiguration,Z_Param_Out_InConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeBroadcastConfiguration(Z_Param_Out_InConfiguration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIBroadcastComponent::execChangeSourceName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeSourceName(Z_Param_InSourceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNDIBroadcastComponent::execStartBroadcasting)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartBroadcasting(Z_Param_Out_ErrorMessage);
		P_NATIVE_END;
	}
	void UNDIBroadcastComponent::StaticRegisterNativesUNDIBroadcastComponent()
	{
		UClass* Class = UNDIBroadcastComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeBroadcastConfiguration", &UNDIBroadcastComponent::execChangeBroadcastConfiguration },
			{ "ChangeBroadcastTexture", &UNDIBroadcastComponent::execChangeBroadcastTexture },
			{ "ChangeSourceName", &UNDIBroadcastComponent::execChangeSourceName },
			{ "GetNumberOfConnections", &UNDIBroadcastComponent::execGetNumberOfConnections },
			{ "GetTallyInformation", &UNDIBroadcastComponent::execGetTallyInformation },
			{ "StartBroadcasting", &UNDIBroadcastComponent::execStartBroadcasting },
			{ "StopBroadcasting", &UNDIBroadcastComponent::execStopBroadcasting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics
	{
		struct NDIBroadcastComponent_eventChangeBroadcastConfiguration_Parms
		{
			FNDIBroadcastConfiguration InConfiguration;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InConfiguration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration = { "InConfiguration", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIBroadcastComponent_eventChangeBroadcastConfiguration_Parms, InConfiguration), Z_Construct_UScriptStruct_FNDIBroadcastConfiguration, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::NewProp_InConfiguration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/** \n\x09\x09\x09""Attempts to change the Broadcast information associated with this media object\n\n\x09\x09\x09@param InConfiguration The new configuration to broadcast\n\x09\x09*/" },
		{ "DisplayName", "Change Broadcast Configuration" },
		{ "ModuleRelativePath", "Public/Components/NDIBroadcastComponent.h" },
		{ "ToolTip", "Attempts to change the Broadcast information associated with this media object\n\n@param InConfiguration The new configuration to broadcast" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIBroadcastComponent, nullptr, "ChangeBroadcastConfiguration", nullptr, nullptr, sizeof(NDIBroadcastComponent_eventChangeBroadcastConfiguration_Parms), Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics
	{
		struct NDIBroadcastComponent_eventChangeBroadcastTexture_Parms
		{
			UTextureRenderTarget2D* BroadcastTexture;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BroadcastTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::NewProp_BroadcastTexture = { "BroadcastTexture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIBroadcastComponent_eventChangeBroadcastTexture_Parms, BroadcastTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::NewProp_BroadcastTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09\x09""Attempts to change the RenderTarget used in sending video frames over NDI\n\n\x09\x09\x09@param BroadcastTexture The texture to use as video, while broadcasting over NDI\n\x09\x09*/" },
		{ "CPP_Default_BroadcastTexture", "None" },
		{ "DisplayName", "Change Broadcast Texture" },
		{ "ModuleRelativePath", "Public/Components/NDIBroadcastComponent.h" },
		{ "ToolTip", "Attempts to change the RenderTarget used in sending video frames over NDI\n\n@param BroadcastTexture The texture to use as video, while broadcasting over NDI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIBroadcastComponent, nullptr, "ChangeBroadcastTexture", nullptr, nullptr, sizeof(NDIBroadcastComponent_eventChangeBroadcastTexture_Parms), Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics
	{
		struct NDIBroadcastComponent_eventChangeSourceName_Parms
		{
			FString InSourceName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InSourceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::NewProp_InSourceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::NewProp_InSourceName = { "InSourceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIBroadcastComponent_eventChangeSourceName_Parms, InSourceName), METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::NewProp_InSourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::NewProp_InSourceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::NewProp_InSourceName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/** \n\x09\x09\x09""Changes the name of the sender object as seen on the network for remote connections\n\n\x09\x09\x09@param InSourceName The new name of the source to be identified as on the network\n\x09\x09*/" },
		{ "DisplayName", "Change Source Name" },
		{ "ModuleRelativePath", "Public/Components/NDIBroadcastComponent.h" },
		{ "ToolTip", "Changes the name of the sender object as seen on the network for remote connections\n\n@param InSourceName The new name of the source to be identified as on the network" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIBroadcastComponent, nullptr, "ChangeSourceName", nullptr, nullptr, sizeof(NDIBroadcastComponent_eventChangeSourceName_Parms), Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics
	{
		struct NDIBroadcastComponent_eventGetNumberOfConnections_Parms
		{
			int32 Result;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIBroadcastComponent_eventGetNumberOfConnections_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09\x09Gets the current number of receivers connected to this source. This can be used to avoid rendering\n\x09\x09\x09when nothing is connected to the video source. which can significantly improve the efficiency if \n\x09\x09\x09you want to make a lot of sources available on the network\n\n\x09\x09\x09@param Result The total number of connected receivers attached to the broadcast of this object\n\x09\x09*/" },
		{ "DisplayName", "Get Number of Connections" },
		{ "ModuleRelativePath", "Public/Components/NDIBroadcastComponent.h" },
		{ "ToolTip", "Gets the current number of receivers connected to this source. This can be used to avoid rendering\nwhen nothing is connected to the video source. which can significantly improve the efficiency if\nyou want to make a lot of sources available on the network\n\n@param Result The total number of connected receivers attached to the broadcast of this object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIBroadcastComponent, nullptr, "GetNumberOfConnections", nullptr, nullptr, sizeof(NDIBroadcastComponent_eventGetNumberOfConnections_Parms), Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics
	{
		struct NDIBroadcastComponent_eventGetTallyInformation_Parms
		{
			bool IsOnPreview;
			bool IsOnProgram;
		};
		static void NewProp_IsOnProgram_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOnProgram;
		static void NewProp_IsOnPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOnPreview;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::NewProp_IsOnProgram_SetBit(void* Obj)
	{
		((NDIBroadcastComponent_eventGetTallyInformation_Parms*)Obj)->IsOnProgram = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::NewProp_IsOnProgram = { "IsOnProgram", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIBroadcastComponent_eventGetTallyInformation_Parms), &Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::NewProp_IsOnProgram_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::NewProp_IsOnPreview_SetBit(void* Obj)
	{
		((NDIBroadcastComponent_eventGetTallyInformation_Parms*)Obj)->IsOnPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::NewProp_IsOnPreview = { "IsOnPreview", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIBroadcastComponent_eventGetTallyInformation_Parms), &Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::NewProp_IsOnPreview_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::NewProp_IsOnProgram,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::NewProp_IsOnPreview,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/**\n\x09\x09\x09""Determines the current tally information.\n\n\x09\x09\x09@param IsOnPreview - A state indicating whether this source in on preview of a receiver\n\x09\x09\x09@param IsOnProgram - A state indicating whether this source is on program of a receiver\x09\x09\x09\n\x09\x09*/" },
		{ "DisplayName", "Get Tally Information" },
		{ "ModuleRelativePath", "Public/Components/NDIBroadcastComponent.h" },
		{ "ToolTip", "Determines the current tally information.\n\n@param IsOnPreview - A state indicating whether this source in on preview of a receiver\n@param IsOnProgram - A state indicating whether this source is on program of a receiver" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIBroadcastComponent, nullptr, "GetTallyInformation", nullptr, nullptr, sizeof(NDIBroadcastComponent_eventGetTallyInformation_Parms), Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics
	{
		struct NDIBroadcastComponent_eventStartBroadcasting_Parms
		{
			FString ErrorMessage;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NDIBroadcastComponent_eventStartBroadcasting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NDIBroadcastComponent_eventStartBroadcasting_Parms), &Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDIBroadcastComponent_eventStartBroadcasting_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/** \n\x09\x09\x09""Attempts to start broadcasting audio, video, and metadata via the 'NDIMediaSource' associated with this object\n\n\x09\x09\x09@param ErrorMessage The error message received when the media source is unable to start broadcasting\n\x09\x09\x09@result Indicates whether this object successfully started broadcasting\n\x09\x09*/" },
		{ "DisplayName", "Start Broadcasting" },
		{ "ModuleRelativePath", "Public/Components/NDIBroadcastComponent.h" },
		{ "ToolTip", "Attempts to start broadcasting audio, video, and metadata via the 'NDIMediaSource' associated with this object\n\n@param ErrorMessage The error message received when the media source is unable to start broadcasting\n@result Indicates whether this object successfully started broadcasting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIBroadcastComponent, nullptr, "StartBroadcasting", nullptr, nullptr, sizeof(NDIBroadcastComponent_eventStartBroadcasting_Parms), Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNDIBroadcastComponent_StopBroadcasting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDIBroadcastComponent_StopBroadcasting_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDI IO" },
		{ "Comment", "/** \n\x09\x09\x09""Attempts to immediately stop sending frames over NDI to any connected receivers \n\x09\x09*/" },
		{ "DisplayName", "Stop Broadcasting" },
		{ "ModuleRelativePath", "Public/Components/NDIBroadcastComponent.h" },
		{ "ToolTip", "Attempts to immediately stop sending frames over NDI to any connected receivers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDIBroadcastComponent_StopBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDIBroadcastComponent, nullptr, "StopBroadcasting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDIBroadcastComponent_StopBroadcasting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDIBroadcastComponent_StopBroadcasting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDIBroadcastComponent_StopBroadcasting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDIBroadcastComponent_StopBroadcasting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNDIBroadcastComponent_NoRegister()
	{
		return UNDIBroadcastComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNDIBroadcastComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NDIMediaSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NDIMediaSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIBroadcastComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NDIIO,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDIBroadcastComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastConfiguration, "ChangeBroadcastConfiguration" }, // 1125651070
		{ &Z_Construct_UFunction_UNDIBroadcastComponent_ChangeBroadcastTexture, "ChangeBroadcastTexture" }, // 879095731
		{ &Z_Construct_UFunction_UNDIBroadcastComponent_ChangeSourceName, "ChangeSourceName" }, // 2064797514
		{ &Z_Construct_UFunction_UNDIBroadcastComponent_GetNumberOfConnections, "GetNumberOfConnections" }, // 3047042370
		{ &Z_Construct_UFunction_UNDIBroadcastComponent_GetTallyInformation, "GetTallyInformation" }, // 1989448678
		{ &Z_Construct_UFunction_UNDIBroadcastComponent_StartBroadcasting, "StartBroadcasting" }, // 1039599250
		{ &Z_Construct_UFunction_UNDIBroadcastComponent_StopBroadcasting, "StopBroadcasting" }, // 3775981182
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIBroadcastComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Category", "NDI IO" },
		{ "Comment", "/** \n\x09Provides a wrapper to allow you to modify  an NDI Media Sender object from blueprints and perform broadcasting\n\x09""functionality\n*/" },
		{ "DisplayName", "NDI Broadcast Component" },
		{ "IncludePath", "Components/NDIBroadcastComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/NDIBroadcastComponent.h" },
		{ "ToolTip", "Provides a wrapper to allow you to modify  an NDI Media Sender object from blueprints and perform broadcasting\nfunctionality" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIBroadcastComponent_Statics::NewProp_NDIMediaSource_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Properties" },
		{ "Comment", "/** The NDI Media Sender representing the configuration of the network source to send audio, video, and metadata */" },
		{ "DisplayName", "NDI Media Source" },
		{ "ModuleRelativePath", "Public/Components/NDIBroadcastComponent.h" },
		{ "ToolTip", "The NDI Media Sender representing the configuration of the network source to send audio, video, and metadata" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNDIBroadcastComponent_Statics::NewProp_NDIMediaSource = { "NDIMediaSource", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNDIBroadcastComponent, NDIMediaSource), Z_Construct_UClass_UNDIMediaSender_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNDIBroadcastComponent_Statics::NewProp_NDIMediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIBroadcastComponent_Statics::NewProp_NDIMediaSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIBroadcastComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIBroadcastComponent_Statics::NewProp_NDIMediaSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIBroadcastComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIBroadcastComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNDIBroadcastComponent_Statics::ClassParams = {
		&UNDIBroadcastComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNDIBroadcastComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDIBroadcastComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIBroadcastComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIBroadcastComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIBroadcastComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNDIBroadcastComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNDIBroadcastComponent, 2701913724);
	template<> NDIIO_API UClass* StaticClass<UNDIBroadcastComponent>()
	{
		return UNDIBroadcastComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNDIBroadcastComponent(Z_Construct_UClass_UNDIBroadcastComponent, &UNDIBroadcastComponent::StaticClass, TEXT("/Script/NDIIO"), TEXT("UNDIBroadcastComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIBroadcastComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif