#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AkCommonInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkPS5AdvancedInitializationSettings.h"
#include "AkPS5InitializationSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class AKAUDIO_API UAkPS5InitializationSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FAkCommonInitializationSettings CommonSettings;
    
    UPROPERTY(Config, EditAnywhere)
    FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    FAkPS5AdvancedInitializationSettings AdvancedSettings;
    
    UAkPS5InitializationSettings();
};

