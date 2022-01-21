#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "CoupDeGrace.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoupDeGrace : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _lungeAttackAddDurationMultiplier[3];
    
    UPROPERTY(Transient)
    TArray<AGenerator*> _completedGenerators;
    
public:
    UCoupDeGrace();
};

