#pragma once
#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Addon_TormentMode_17.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TormentMode_17 : public USpawnEffectsOnAllSurvivorsBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _obliviousDuration;
    
public:
    UAddon_TormentMode_17();
};

