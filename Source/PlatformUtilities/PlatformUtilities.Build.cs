using UnrealBuildTool;

public class PlatformUtilities : ModuleRules {
    public PlatformUtilities(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DataTableUtilities",
            "Engine",
        });
    }
}
