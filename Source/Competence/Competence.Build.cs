using UnrealBuildTool;

public class Competence : ModuleRules {
    public Competence(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTagUtilities",
            "GameplayTags",
            "NetworkUtilities",
        });
    }
}
