#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "SpasmodicBreathAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API USpasmodicBreathAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UStatusEffect* _speedEffect;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _indicatorEffect;
    
    UPROPERTY(EditDefaultsOnly)
    float _speedModifier;
    
    UPROPERTY(EditDefaultsOnly)
    float _activationDuration;
    
public:
    USpasmodicBreathAddon();
};

