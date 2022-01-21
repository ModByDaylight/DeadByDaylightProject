#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "HellshireIronAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHellshireIronAddon : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _undetectableDurationPostHarpoon;
    
    UPROPERTY(Export, Transient)
    UStatusEffect* _statusEffect;
    
public:
    UHellshireIronAddon();
};

