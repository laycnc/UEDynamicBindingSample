// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class DynamicBindingSampleEditor : ModuleRules
{
	public DynamicBindingSampleEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
			{ 
				"Core",
				"CoreUObject",
				"Engine"
			});
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"KismetCompiler",
				"DynamicBindingSample"
			});
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				
			});
	}
}
