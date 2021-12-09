#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AkSettingsPerUser.generated.h"

UCLASS(Config=EditorPerProjectUserSettings)
class AKAUDIO_API UAkSettingsPerUser : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FDirectoryPath WwiseWindowsInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FFilePath WwiseMacInstallationPath;
    
    UPROPERTY(Config, EditAnywhere)
    FString WaapiIPAddress;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 WaapiPort;
    
    UPROPERTY(Config, EditAnywhere)
    bool AutoSyncSelection;
    
    UPROPERTY(Config)
    bool SoundDataGenerationSkipLanguage;
    
    UAkSettingsPerUser();
};

