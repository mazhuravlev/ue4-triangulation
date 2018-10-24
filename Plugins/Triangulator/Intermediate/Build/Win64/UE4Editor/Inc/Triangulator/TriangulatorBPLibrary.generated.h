// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPolyline;
#ifdef TRIANGULATOR_TriangulatorBPLibrary_generated_h
#error "TriangulatorBPLibrary.generated.h already included, missing '#pragma once' in TriangulatorBPLibrary.h"
#endif
#define TRIANGULATOR_TriangulatorBPLibrary_generated_h

#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPolyline_Statics; \
	TRIANGULATOR_API static class UScriptStruct* StaticStruct();


#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriangulatorSampleFunction) \
	{ \
		P_GET_TARRAY_REF(FPolyline,Z_Param_Out_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=UTriangulatorBPLibrary::TriangulatorSampleFunction(Z_Param_Out_Param); \
		P_NATIVE_END; \
	}


#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriangulatorSampleFunction) \
	{ \
		P_GET_TARRAY_REF(FPolyline,Z_Param_Out_Param); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=UTriangulatorBPLibrary::TriangulatorSampleFunction(Z_Param_Out_Param); \
		P_NATIVE_END; \
	}


#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriangulatorBPLibrary(); \
	friend struct Z_Construct_UClass_UTriangulatorBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTriangulatorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Triangulator"), NO_API) \
	DECLARE_SERIALIZER(UTriangulatorBPLibrary)


#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUTriangulatorBPLibrary(); \
	friend struct Z_Construct_UClass_UTriangulatorBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UTriangulatorBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Triangulator"), NO_API) \
	DECLARE_SERIALIZER(UTriangulatorBPLibrary)


#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriangulatorBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriangulatorBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriangulatorBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriangulatorBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriangulatorBPLibrary(UTriangulatorBPLibrary&&); \
	NO_API UTriangulatorBPLibrary(const UTriangulatorBPLibrary&); \
public:


#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriangulatorBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriangulatorBPLibrary(UTriangulatorBPLibrary&&); \
	NO_API UTriangulatorBPLibrary(const UTriangulatorBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriangulatorBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriangulatorBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriangulatorBPLibrary)


#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_PRIVATE_PROPERTY_OFFSET
#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_35_PROLOG
#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_PRIVATE_PROPERTY_OFFSET \
	Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_RPC_WRAPPERS \
	Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_INCLASS \
	Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_PRIVATE_PROPERTY_OFFSET \
	Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_INCLASS_NO_PURE_DECLS \
	Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriangulatorBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Triongulation_Plugins_Triangulator_Source_Triangulator_Public_TriangulatorBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
