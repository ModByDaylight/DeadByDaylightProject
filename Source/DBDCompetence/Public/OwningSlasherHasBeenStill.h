#pragma once
#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "OwningSlasherHasBeenStill.generated.h"

UCLASS()
class UOwningSlasherHasBeenStill : public UGameplayModifierCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float _secondsOfStillnessRequired;
    
public:
    UOwningSlasherHasBeenStill();
};

