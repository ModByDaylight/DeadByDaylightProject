using UnrealBuildTool;

public class StatSystem : ModuleRules {
    public StatSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DataTableUtilities",
            "Engine",
            "GameplayTags",
        });
    }
}
