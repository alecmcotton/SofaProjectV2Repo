// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SofaProjectV2 : ModuleRules
{
	public SofaProjectV2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
