#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AkGeometrySurfacePropertiesToMap.h"
#include "Engine/EngineTypes.h"
#include "AkSettings.generated.h"

class UPhysicalMaterial;

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    uint8 MaxSimultaneousReverbVolumes;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseProjectPath;
    
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WwiseSoundDataFolder;
    
    UPROPERTY(Config, EditAnywhere)
    bool bAutoConnectToWAAPI;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel;
    
    UPROPERTY(Config, EditAnywhere, EditFixedSize)
    TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap;
    
    UPROPERTY(Config, EditAnywhere)
    bool SplitSwitchContainerMedia;
    
    UPROPERTY(Config, EditAnywhere)
    bool UseEventBasedPackaging;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableAutomaticAssetSynchronization;
    
    UPROPERTY(Config, EditAnywhere)
    FString CommandletCommitMessage;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FString, FString> UnrealCultureToWwiseCulture;
    
    UPROPERTY(Config)
    bool AskedToUseNewAssetManagement;
    
    UPROPERTY(Config)
    bool bEnableMultiCoreRendering;
    
    UPROPERTY(Config)
    bool MigratedEnableMultiCoreRendering;
    
    UPROPERTY(Config)
    bool FixupRedirectorsDuringMigration;
    
    UPROPERTY(Config)
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(Config)
    FFilePath WwiseMacInstallationPath;
    
    UAkSettings();
};

