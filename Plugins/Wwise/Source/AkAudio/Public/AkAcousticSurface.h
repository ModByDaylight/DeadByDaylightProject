#pragma once
#include "CoreMinimal.h"
#include "AkAcousticSurface.generated.h"

USTRUCT(BlueprintType)
struct FAkAcousticSurface {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 Texture;
    
    UPROPERTY()
    float Occlusion;
    
    UPROPERTY()
    FString Name;
    
    AKAUDIO_API FAkAcousticSurface();
};

