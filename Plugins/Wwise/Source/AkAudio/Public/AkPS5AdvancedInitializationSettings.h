#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkPS5AdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool UseHardwareCodecLowLatencyMode;
    
    AKAUDIO_API FAkPS5AdvancedInitializationSettings();
};

