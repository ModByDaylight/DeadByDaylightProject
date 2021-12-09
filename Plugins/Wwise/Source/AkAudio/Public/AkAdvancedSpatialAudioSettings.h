#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedSpatialAudioSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkAdvancedSpatialAudioSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DiffractionShadowAttenuationFactor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float DiffractionShadowDegrees;
    
    AKAUDIO_API FAkAdvancedSpatialAudioSettings();
};

