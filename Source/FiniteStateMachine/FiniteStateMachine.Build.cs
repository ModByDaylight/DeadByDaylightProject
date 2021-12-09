using UnrealBuildTool;

public class FiniteStateMachine : ModuleRules {
    public FiniteStateMachine(ReadOnlyTargetRules Target) : base(Target) {
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
