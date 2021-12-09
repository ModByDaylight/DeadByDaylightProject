#pragma once
#include "CoreMinimal.h"
#include "AkGeometrySurfaceOverride.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkGeometrySurfaceOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAcousticTexture* AcousticTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableOcclusionOverride: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OcclusionValue;
    
    AKAUDIO_API FAkGeometrySurfaceOverride();
};

