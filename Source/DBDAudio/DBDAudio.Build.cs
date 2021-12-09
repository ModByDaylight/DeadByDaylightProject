using UnrealBuildTool;

public class DBDAudio : ModuleRules {
    public DBDAudio(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "DataTableUtilities",
            "Engine",
            "GameplayTags",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "StatSystem",
            "UMG",
        });
    }
}
