// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EchoTree : ModuleRules
{
	public EchoTree(ReadOnlyTargetRules Target) : base(Target)
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
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"EchoTree",
			"EchoTree/Variant_Platforming",
			"EchoTree/Variant_Platforming/Animation",
			"EchoTree/Variant_Combat",
			"EchoTree/Variant_Combat/AI",
			"EchoTree/Variant_Combat/Animation",
			"EchoTree/Variant_Combat/Gameplay",
			"EchoTree/Variant_Combat/Interfaces",
			"EchoTree/Variant_Combat/UI",
			"EchoTree/Variant_SideScrolling",
			"EchoTree/Variant_SideScrolling/AI",
			"EchoTree/Variant_SideScrolling/Gameplay",
			"EchoTree/Variant_SideScrolling/Interfaces",
			"EchoTree/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
