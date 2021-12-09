#pragma once
#include "CoreMinimal.h"
#include "AkGeometrySurfacePropertiesToMap.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkGeometrySurfacePropertiesToMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAcousticTexture> AcousticTexture;
    
    UPROPERTY(EditAnywhere)
    float OcclusionValue;
    
    AKAUDIO_API FAkGeometrySurfacePropertiesToMap();
};

