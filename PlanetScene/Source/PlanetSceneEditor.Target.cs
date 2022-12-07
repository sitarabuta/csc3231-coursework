

using UnrealBuildTool;
using System.Collections.Generic;

public class PlanetSceneEditorTarget : TargetRules
{
	public PlanetSceneEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "PlanetScene" } );
	}
}
