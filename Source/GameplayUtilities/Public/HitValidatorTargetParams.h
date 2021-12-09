#pragma once
#include "CoreMinimal.h"
#include "HitValidatorTargetParams.generated.h"

class ACharacter;
class UCapsuleComponent;

USTRUCT(BlueprintType)
struct GAMEPLAYUTILITIES_API FHitValidatorTargetParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    ACharacter* Target;
    
    UPROPERTY(Export)
    UCapsuleComponent* HittableCapsule;
    
    UPROPERTY()
    float TargetLocationTimestamp;
    
    FHitValidatorTargetParams();
};

