using UnrealBuildTool;

public class DBDSharedTypes : ModuleRules {
    public DBDSharedTypes(ReadOnlyTargetRules Target) : base(Target) {
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
