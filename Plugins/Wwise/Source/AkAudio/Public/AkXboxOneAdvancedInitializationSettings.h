#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkXboxOneAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 MaximumNumberOfXMAVoices;
    
    UPROPERTY(EditAnywhere)
    bool UseHardwareCodecLowLatencyMode;
    
    AKAUDIO_API FAkXboxOneAdvancedInitializationSettings();
};

