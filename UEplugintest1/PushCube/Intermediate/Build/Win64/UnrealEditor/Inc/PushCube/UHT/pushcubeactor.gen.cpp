// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PushCube/Public/pushcubeactor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodepushcubeactor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	PUSHCUBE_API UClass* Z_Construct_UClass_Upushcubeactor();
	PUSHCUBE_API UClass* Z_Construct_UClass_Upushcubeactor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PushCube();
// End Cross Module References
	DEFINE_FUNCTION(Upushcubeactor::execStartPushing)
	{
		P_GET_UBOOL(Z_Param_spawnCube);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPushing(Z_Param_spawnCube);
		P_NATIVE_END;
	}
	void Upushcubeactor::StaticRegisterNativesUpushcubeactor()
	{
		UClass* Class = Upushcubeactor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartPushing", &Upushcubeactor::execStartPushing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics
	{
		struct pushcubeactor_eventStartPushing_Parms
		{
			bool spawnCube;
		};
		static void NewProp_spawnCube_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_spawnCube;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::NewProp_spawnCube_SetBit(void* Obj)
	{
		((pushcubeactor_eventStartPushing_Parms*)Obj)->spawnCube = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::NewProp_spawnCube = { "spawnCube", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(pushcubeactor_eventStartPushing_Parms), &Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::NewProp_spawnCube_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::NewProp_spawnCube,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Presets" },
		{ "Comment", "// Called every frame\n//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override; //\xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc3\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "ModuleRelativePath", "Public/pushcubeactor.h" },
		{ "ToolTip", "Called every frame\nvirtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override; \xef\xbf\xbd\xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc3\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Upushcubeactor, nullptr, "StartPushing", nullptr, nullptr, sizeof(Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::pushcubeactor_eventStartPushing_Parms), Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Upushcubeactor_StartPushing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Upushcubeactor_StartPushing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Upushcubeactor);
	UClass* Z_Construct_UClass_Upushcubeactor_NoRegister()
	{
		return Upushcubeactor::StaticClass();
	}
	struct Z_Construct_UClass_Upushcubeactor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCube_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnedCube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceLenth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceLenth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Upushcubeactor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PushCube,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Upushcubeactor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Upushcubeactor_StartPushing, "StartPushing" }, // 2618899033
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Upushcubeactor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "pushcubeactor.h" },
		{ "ModuleRelativePath", "Public/pushcubeactor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Upushcubeactor_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Presets" },
		{ "ModuleRelativePath", "Public/pushcubeactor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Upushcubeactor_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Upushcubeactor, Force), METADATA_PARAMS(Z_Construct_UClass_Upushcubeactor_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Upushcubeactor_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Upushcubeactor_Statics::NewProp_SpawnedCube_MetaData[] = {
		{ "Category", "Presets" },
		{ "ModuleRelativePath", "Public/pushcubeactor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_Upushcubeactor_Statics::NewProp_SpawnedCube = { "SpawnedCube", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Upushcubeactor, SpawnedCube), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Upushcubeactor_Statics::NewProp_SpawnedCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Upushcubeactor_Statics::NewProp_SpawnedCube_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Upushcubeactor_Statics::NewProp_ForceLenth_MetaData[] = {
		{ "Category", "Presets" },
		{ "ModuleRelativePath", "Public/pushcubeactor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Upushcubeactor_Statics::NewProp_ForceLenth = { "ForceLenth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Upushcubeactor, ForceLenth), METADATA_PARAMS(Z_Construct_UClass_Upushcubeactor_Statics::NewProp_ForceLenth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Upushcubeactor_Statics::NewProp_ForceLenth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Upushcubeactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Upushcubeactor_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Upushcubeactor_Statics::NewProp_SpawnedCube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Upushcubeactor_Statics::NewProp_ForceLenth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Upushcubeactor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Upushcubeactor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Upushcubeactor_Statics::ClassParams = {
		&Upushcubeactor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Upushcubeactor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Upushcubeactor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Upushcubeactor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Upushcubeactor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Upushcubeactor()
	{
		if (!Z_Registration_Info_UClass_Upushcubeactor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Upushcubeactor.OuterSingleton, Z_Construct_UClass_Upushcubeactor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Upushcubeactor.OuterSingleton;
	}
	template<> PUSHCUBE_API UClass* StaticClass<Upushcubeactor>()
	{
		return Upushcubeactor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Upushcubeactor);
	Upushcubeactor::~Upushcubeactor() {}
	struct Z_CompiledInDeferFile_FID_test_UEplugintest1_PushCube_HostProject_Plugins_PushCube_Source_PushCube_Public_pushcubeactor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_UEplugintest1_PushCube_HostProject_Plugins_PushCube_Source_PushCube_Public_pushcubeactor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Upushcubeactor, Upushcubeactor::StaticClass, TEXT("Upushcubeactor"), &Z_Registration_Info_UClass_Upushcubeactor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Upushcubeactor), 3689887025U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_UEplugintest1_PushCube_HostProject_Plugins_PushCube_Source_PushCube_Public_pushcubeactor_h_2194307313(TEXT("/Script/PushCube"),
		Z_CompiledInDeferFile_FID_test_UEplugintest1_PushCube_HostProject_Plugins_PushCube_Source_PushCube_Public_pushcubeactor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_UEplugintest1_PushCube_HostProject_Plugins_PushCube_Source_PushCube_Public_pushcubeactor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
