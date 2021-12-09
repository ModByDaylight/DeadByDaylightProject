using UnrealBuildTool;

public class Projectile : ModuleRules {
    public Projectile(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Activation",
            "Core",
            "CoreUObject",
            "CoreUtilities",
            "Engine",
            "GameplayTagUtilities",
            "GameplayTags",
            "GameplayUtilities",
        });
    }
}
