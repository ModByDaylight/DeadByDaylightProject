#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "BadMansLastBreathAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBadMansLastBreathAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _activationDuration;
    
    UPROPERTY(EditDefaultsOnly)
    float _cooldownDuration;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _cooldownIndicator;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _undetectableEffect;
    
public:
    UBadMansLastBreathAddon();
};

