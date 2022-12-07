

using UnrealBuildTool;
using System.Collections.Generic;

public class PlanetSceneTarget : TargetRules
{
	public PlanetSceneTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "PlanetScene" } );
	}
}
