#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "IncreaseZombiesSpeedStatusEffect.generated.h"

UCLASS()
class UIncreaseZombiesSpeedStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _zombieSpeedAdditive;
    
public:
    UIncreaseZombiesSpeedStatusEffect();
};

