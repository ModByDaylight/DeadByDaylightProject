using UnrealBuildTool;

public class Onboarding : ModuleRules {
    public Onboarding(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DBDSharedTypes",
            "DataTableUtilities",
            "Engine",
        });
    }
}
