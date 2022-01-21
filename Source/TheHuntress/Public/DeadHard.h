#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "DeadHard.generated.h"

class UActivatableExhaustedEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeadHard : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _deadHardIconCooldownDuration;
    
    UPROPERTY(Export, Transient)
    UActivatableExhaustedEffect* _exhaustedEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float _exhaustedCooldownPerLevel[3];
    
public:
    UDeadHard();
};

