#pragma once
#include "CoreMinimal.h"
#include "BeingPossessedInteraction.h"
#include "KillerBeingPossessedInteraction.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UKillerBeingPossessedInteraction : public UBeingPossessedInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UCurveFloat* _wakeUpSpeedCurve;
    
public:
    UKillerBeingPossessedInteraction();
};

