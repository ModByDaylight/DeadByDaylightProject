#pragma once
#include "CoreMinimal.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "UObject/Object.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkWinGDKAdvancedInitializationSettings.h"
#include "AkWinGDKInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkWinGDKInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettingsWithSampleRate CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkWinGDKAdvancedInitializationSettings AdvancedSettings;
    
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    UAkWinGDKInitializationSettings();
};

