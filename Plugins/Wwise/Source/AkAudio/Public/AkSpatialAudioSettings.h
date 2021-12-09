#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkSpatialAudioSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 MaxSoundPropagationDepth;
    
    UPROPERTY(EditAnywhere)
    uint32 DiffractionFlags;
    
    UPROPERTY(EditAnywhere)
    float MovementThreshold;
    
    UPROPERTY(EditAnywhere)
    uint32 NumberOfPrimaryRays;
    
    UPROPERTY(EditAnywhere)
    uint32 ReflectionOrder;
    
    UPROPERTY(EditAnywhere)
    bool EnableDiffractionOnReflections;
    
    UPROPERTY(EditAnywhere)
    bool EnableDirectPathDiffraction;
    
    UPROPERTY(EditAnywhere)
    float MaximumPathLength;
    
    UPROPERTY(EditAnywhere)
    bool EnableTransmission;
    
    AKAUDIO_API FAkSpatialAudioSettings();
};

