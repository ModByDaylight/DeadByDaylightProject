#pragma once
#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Addon_K22Power_11.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_11 : public USpawnEffectsOnAllSurvivorsBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _increaseRemoveTwinTime;
    
public:
    UAddon_K22Power_11();
};

