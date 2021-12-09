using UnrealBuildTool;

public class DBDUIManagers : ModuleRules {
    public DBDUIManagers(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DBDSharedTypes",
            "DataTableUtilities",
            "Engine",
            "SlateCore",
        });
    }
}
