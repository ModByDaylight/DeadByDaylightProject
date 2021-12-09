#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Addon_K22Power_17.generated.h"

class AConjoinedTwin;

UCLASS()
class UAddon_K22Power_17 : public USpawnEffectsOnAllSurvivorsBaseAddon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _lingerDuration;
    
    UFUNCTION()
    void Authority_OnTwinSet(AConjoinedTwin* twin);
    
public:
    UAddon_K22Power_17();
};

