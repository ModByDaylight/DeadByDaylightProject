#pragma once
#include "CoreMinimal.h"
#include "HitValidatorInstigatorParams.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYUTILITIES_API FHitValidatorInstigatorParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* Instigator;
    
    UPROPERTY(Export)
    UPrimitiveComponent* HitPrimitive;
    
    FHitValidatorInstigatorParams();
};

