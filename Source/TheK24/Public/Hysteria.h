#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "Hysteria.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHysteria : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _obliviousEffectDuration[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _perkCooldownDuration[3];
    
public:
    UHysteria();
};

