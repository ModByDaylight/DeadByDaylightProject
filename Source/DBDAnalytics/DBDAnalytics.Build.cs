using UnrealBuildTool;

public class DBDAnalytics : ModuleRules {
    public DBDAnalytics(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Activation",
            "AkAudio",
            "AnimationUtilities",
            "AtlantaFreeTickets",
            "AudioExtensions",
            "AudioMixer",
            "BHVRAnalytics",
            "Competence",
            "Core",
            "CoreUObject",
            "CoreUtilities",
            "Customization",
            "DBDAudio",
            "DBDInput",
            "DBDSharedTypes",
            "DBDUIViewInterfaces",
            "DBDUIViewsMobile",
            "DataTableUtilities",
            "DeadByDaylight",
            "Engine",
            "Foliage",
            "GFXUtilities",
            "GameSessionDS",
            "GameflowNotifications",
            "GameplayTagUtilities",
            "GameplayTags",
            "GameplayTasks",
            "GameplayUtilities",
            "InputCore",
            "InputUtilities",
            "Interaction",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "NetworkUtilities",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "OnlineMessagesUtilities",
            "OnlinePresence",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "OnlineTransactions",
            "Paper2D",
            "Penalty",
            "PhysicsUtilities",
            "PlatformsProviders",
            "Projectile",
            "PropertyPath",
            "QueryService",
            "RewardUtilities",
            "ScaleformUI",
            "SharedAuthenticationUtilities",
            "Slate",
            "SlateCore",
            "SocialParty",
            "StatSystem",
            "SystemUtilities",
            "TimeUtilities",
            "Toasts",
            "UMG",
            "VFXUtilities",
        });
    }
}