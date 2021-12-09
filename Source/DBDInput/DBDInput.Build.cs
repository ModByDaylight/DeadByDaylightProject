using UnrealBuildTool;

public class DBDInput : ModuleRules {
    public DBDInput(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DBDSharedTypes",
            "DataTableUtilities",
            "Engine",
            "InputCore",
            "InputUtilities",
            "SlateCore",
        });
    }
}
