// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TD_OverwhelmingNums : ModuleRules
{
	public TD_OverwhelmingNums(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
