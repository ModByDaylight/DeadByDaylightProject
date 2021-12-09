#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkPS4AdvancedInitializationSettings.h"
#include "AkCommonInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkPS4InitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkPS4InitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkPS4AdvancedInitializationSettings AdvancedSettings;
    
    UFUNCTION()
    void MigrateMultiCoreRendering(bool NewValue);
    
    UAkPS4InitializationSettings();
};

