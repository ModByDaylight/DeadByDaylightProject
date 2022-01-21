#pragma once
#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Addon_TormentMode_16.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TormentMode_16 : public USpawnEffectsOnAllSurvivorsBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _blindnessDuration;
    
public:
    UAddon_TormentMode_16();
};

