#pragma once
#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "KatsumoriTalisman.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UKatsumoriTalisman : public UItemAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _explosionRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float _blockDuration;
    
public:
    UKatsumoriTalisman();
};

