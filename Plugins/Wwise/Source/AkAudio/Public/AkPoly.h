#pragma once
#include "CoreMinimal.h"
#include "AkPoly.generated.h"

class UAkAcousticTexture;

USTRUCT(BlueprintType)
struct FAkPoly {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAcousticTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Occlusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EnableSurface;
    
    AKAUDIO_API FAkPoly();
};

