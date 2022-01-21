#pragma once
#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddonParams.h"
#include "SimpleSpawnEffectsOnAllSurvivorsAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API USimpleSpawnEffectsOnAllSurvivorsAddon : public USpawnEffectsOnAllSurvivorsBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FSimpleSpawnEffectsOnAllSurvivorsAddonParams> _statusEffectsSpawnParams;
    
public:
    USimpleSpawnEffectsOnAllSurvivorsAddon();
};

