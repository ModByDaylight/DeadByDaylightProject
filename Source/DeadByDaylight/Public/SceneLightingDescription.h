#pragma once
#include "CoreMinimal.h"
#include "LightingSpecifics.h"
#include "SceneLightingDescription.generated.h"

class UTextureCube;

USTRUCT(BlueprintType)
struct DEADBYDAYLIGHT_API FSceneLightingDescription {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName ThemeName;
    
    UPROPERTY(EditAnywhere)
    FLightingSpecifics LightingDetailsLowMedium;
    
    UPROPERTY(EditAnywhere)
    FLightingSpecifics LightingDetailsHighUltra;
    
    UPROPERTY(EditAnywhere)
    FLightingSpecifics LightingAtlanta;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTextureCube> TextureCube;
    
    FSceneLightingDescription();
};

