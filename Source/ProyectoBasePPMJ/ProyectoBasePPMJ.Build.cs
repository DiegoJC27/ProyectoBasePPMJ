// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProyectoBasePPMJ : ModuleRules
{
	public ProyectoBasePPMJ(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
			"Niagara"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"ProyectoBasePPMJ",
			"ProyectoBasePPMJ/Variant_Platforming",
			"ProyectoBasePPMJ/Variant_Platforming/Animation",
			"ProyectoBasePPMJ/Variant_Combat",
			"ProyectoBasePPMJ/Variant_Combat/AI",
			"ProyectoBasePPMJ/Variant_Combat/Animation",
			"ProyectoBasePPMJ/Variant_Combat/Gameplay",
			"ProyectoBasePPMJ/Variant_Combat/Interfaces",
			"ProyectoBasePPMJ/Variant_Combat/UI",
			"ProyectoBasePPMJ/Variant_SideScrolling",
			"ProyectoBasePPMJ/Variant_SideScrolling/AI",
			"ProyectoBasePPMJ/Variant_SideScrolling/Gameplay",
			"ProyectoBasePPMJ/Variant_SideScrolling/Interfaces",
			"ProyectoBasePPMJ/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
