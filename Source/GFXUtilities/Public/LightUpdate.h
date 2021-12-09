#pragma once
#include "CoreMinimal.h"
#include "LightUpdate.generated.h"

class ULightComponent;

USTRUCT(BlueprintType)
struct GFXUTILITIES_API FLightUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export)
    ULightComponent* light;
    
    UPROPERTY(EditAnywhere)
    float multiplier;
    
    FLightUpdate();
};

