#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkXSXAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkXSXAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 MaximumNumberOfXMAVoices;
    
    UPROPERTY(EditAnywhere)
    bool UseHardwareCodecLowLatencyMode;
    
    AKAUDIO_API FAkXSXAdvancedInitializationSettings();
};

