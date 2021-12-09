using UnrealBuildTool;

public class DBDUIViewsCore : ModuleRules {
    public DBDUIViewsCore(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AkAudio",
            "Core",
            "CoreUObject",
            "DBDInput",
            "DBDSharedTypes",
            "DBDUIManagers",
            "DBDUIViewInterfaces",
            "DataTableUtilities",
            "Engine",
            "GameplayTags",
            "InputCore",
            "InputUtilities",
            "MovieScene",
            "MovieSceneTracks",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UITween",
            "UMG",
        });
    }
}
