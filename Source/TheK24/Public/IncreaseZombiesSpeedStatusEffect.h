#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "IncreaseZombiesSpeedStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIncreaseZombiesSpeedStatusEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _zombieSpeedAdditive;
    
public:
    UIncreaseZombiesSpeedStatusEffect();
};

