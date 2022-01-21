#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SprintBurst.generated.h"

class UActivatableExhaustedEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class USprintBurst : public UPerk {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly, EditFixedSize)
    float _exhaustionDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _sprintDuration;
    
private:
    UPROPERTY(Export, Transient)
    UActivatableExhaustedEffect* _exhaustedEffect;
    
public:
    USprintBurst();
private:
    UFUNCTION()
    void Authority_OnIsRunningAndMovingChanged(const bool isRunningAndMoving);
    
};

