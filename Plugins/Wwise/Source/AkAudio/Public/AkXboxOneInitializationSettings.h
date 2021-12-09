#pragma once
#include "CoreMinimal.h"
#include "AkXboxOneAdvancedInitializationSettings.h"
#include "AkXboxOneApuHeapInitializationSettings.h"
#include "UObject/Object.h"
#include "AkCommonInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkXboxOneInitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkXboxOneInitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkXboxOneAdvancedInitializationSettings AdvancedSettings;
    
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    UAkXboxOneInitializationSettings();
};

