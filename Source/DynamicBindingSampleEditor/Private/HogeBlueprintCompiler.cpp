// Copyright Epic Games, Inc. All Rights Reserved.

#include "HogeBlueprintCompiler.h"
#include "HogeBlueprint.h"
#include "HogeScript.h"

//////////////////////////////////////////////////////////////////////////
// FHogeBlueprintCompiler
FHogeBlueprintCompiler::FHogeBlueprintCompiler()
{

}

bool FHogeBlueprintCompiler::CanCompile(const UBlueprint* Blueprint)
{
	return Cast<UHogeBlueprint>(Blueprint) != nullptr;
}


void FHogeBlueprintCompiler::PreCompile(UBlueprint* Blueprint, const FKismetCompilerOptions& CompileOptions)
{
}

void FHogeBlueprintCompiler::Compile(UBlueprint * Blueprint, const FKismetCompilerOptions & CompileOptions, FCompilerResultsLog & Results)
{
}

void FHogeBlueprintCompiler::PostCompile(UBlueprint* Blueprint, const FKismetCompilerOptions& CompileOptions)
{
}

bool FHogeBlueprintCompiler::GetBlueprintTypesForClass(UClass* ParentClass, UClass*& OutBlueprintClass, UClass*& OutBlueprintGeneratedClass) const
{
	if (ParentClass == UHogeScript::StaticClass() || ParentClass->IsChildOf(UHogeScript::StaticClass()))
	{
		OutBlueprintClass = UHogeBlueprint::StaticClass();
		OutBlueprintGeneratedClass = UBlueprintGeneratedClass::StaticClass();
		return true;
	}

	return false;
}
