#pragma once
#include "CoreMinimal.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "DBDTunableRowHandle.h"
#include "Addon_K22Power_17.generated.h"

class AConjoinedTwin;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_17 : public USpawnEffectsOnAllSurvivorsBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _lingerDuration;
    
public:
    UAddon_K22Power_17();
private:
    UFUNCTION()
    void Authority_OnTwinSet(AConjoinedTwin* twin);
    
};

