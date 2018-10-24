// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Triangulator/Public/TriangulatorBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangulatorBPLibrary() {}
// Cross Module References
	TRIANGULATOR_API UScriptStruct* Z_Construct_UScriptStruct_FPolyline();
	UPackage* Z_Construct_UPackage__Script_Triangulator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TRIANGULATOR_API UClass* Z_Construct_UClass_UTriangulatorBPLibrary_NoRegister();
	TRIANGULATOR_API UClass* Z_Construct_UClass_UTriangulatorBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TRIANGULATOR_API UFunction* Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction();
// End Cross Module References
class UScriptStruct* FPolyline::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIANGULATOR_API uint32 Get_Z_Construct_UScriptStruct_FPolyline_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolyline, Z_Construct_UPackage__Script_Triangulator(), TEXT("Polyline"), sizeof(FPolyline), Get_Z_Construct_UScriptStruct_FPolyline_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPolyline(FPolyline::StaticStruct, TEXT("/Script/Triangulator"), TEXT("Polyline"), false, nullptr, nullptr);
static struct FScriptStruct_Triangulator_StaticRegisterNativesFPolyline
{
	FScriptStruct_Triangulator_StaticRegisterNativesFPolyline()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Polyline")),new UScriptStruct::TCppStructOps<FPolyline>);
	}
} ScriptStruct_Triangulator_StaticRegisterNativesFPolyline;
	struct Z_Construct_UScriptStruct_FPolyline_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolyline_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriangulatorBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolyline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolyline>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolyline_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Triangulation" },
		{ "ModuleRelativePath", "Public/TriangulatorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPolyline_Statics::NewProp_Points = { UE4CodeGen_Private::EPropertyClass::Array, "Points", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPolyline, Points), METADATA_PARAMS(Z_Construct_UScriptStruct_FPolyline_Statics::NewProp_Points_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPolyline_Statics::NewProp_Points_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPolyline_Statics::NewProp_Points_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Points", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPolyline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolyline_Statics::NewProp_Points,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPolyline_Statics::NewProp_Points_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolyline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Triangulator,
		nullptr,
		&NewStructOps,
		"Polyline",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPolyline),
		alignof(FPolyline),
		Z_Construct_UScriptStruct_FPolyline_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPolyline_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolyline_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPolyline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolyline()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPolyline_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Triangulator();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Polyline"), sizeof(FPolyline), Get_Z_Construct_UScriptStruct_FPolyline_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPolyline_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPolyline_CRC() { return 1642415824U; }
	void UTriangulatorBPLibrary::StaticRegisterNativesUTriangulatorBPLibrary()
	{
		UClass* Class = UTriangulatorBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriangulatorSampleFunction", &UTriangulatorBPLibrary::execTriangulatorSampleFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics
	{
		struct TriangulatorBPLibrary_eventTriangulatorSampleFunction_Parms
		{
			TArray<FPolyline> Param;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(TriangulatorBPLibrary_eventTriangulatorSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_Param = { UE4CodeGen_Private::EPropertyClass::Array, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(TriangulatorBPLibrary_eventTriangulatorSampleFunction_Parms, Param), METADATA_PARAMS(Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_Param_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_Param_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Param", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPolyline, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::NewProp_Param_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriangulatorTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "Triangulator sample test testing" },
		{ "ModuleRelativePath", "Public/TriangulatorBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriangulatorBPLibrary, "TriangulatorSampleFunction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(TriangulatorBPLibrary_eventTriangulatorSampleFunction_Parms), Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriangulatorBPLibrary_NoRegister()
	{
		return UTriangulatorBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTriangulatorBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriangulatorBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Triangulator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriangulatorBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriangulatorBPLibrary_TriangulatorSampleFunction, "TriangulatorSampleFunction" }, // 1023295750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriangulatorBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriangulatorBPLibrary.h" },
		{ "ModuleRelativePath", "Public/TriangulatorBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriangulatorBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriangulatorBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriangulatorBPLibrary_Statics::ClassParams = {
		&UTriangulatorBPLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UTriangulatorBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTriangulatorBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriangulatorBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriangulatorBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriangulatorBPLibrary, 2495328705);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriangulatorBPLibrary(Z_Construct_UClass_UTriangulatorBPLibrary, &UTriangulatorBPLibrary::StaticClass, TEXT("/Script/Triangulator"), TEXT("UTriangulatorBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriangulatorBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
