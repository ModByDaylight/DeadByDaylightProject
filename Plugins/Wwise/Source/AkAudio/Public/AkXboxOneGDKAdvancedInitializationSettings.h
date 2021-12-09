#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkXboxOneGDKAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 MaximumNumberOfXMAVoices;
    
    UPROPERTY(EditAnywhere)
    bool UseHardwareCodecLowLatencyMode;
    
    AKAUDIO_API FAkXboxOneGDKAdvancedInitializationSettings();
};

