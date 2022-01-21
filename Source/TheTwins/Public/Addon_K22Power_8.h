#pragma once
#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Addon_K22Power_8.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_8 : public USpawnEffectsOnAllSurvivorsBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _increaseDestroyTwinTime;
    
public:
    UAddon_K22Power_8();
};

