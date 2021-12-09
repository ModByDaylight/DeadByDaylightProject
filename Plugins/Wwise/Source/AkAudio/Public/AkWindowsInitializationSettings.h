#pragma once
#include "CoreMinimal.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "UObject/Object.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkWindowsAdvancedInitializationSettings.h"
#include "AkWindowsInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkWindowsInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkWindowsAdvancedInitializationSettings AdvancedSettings;
    
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    UAkWindowsInitializationSettings();
};

