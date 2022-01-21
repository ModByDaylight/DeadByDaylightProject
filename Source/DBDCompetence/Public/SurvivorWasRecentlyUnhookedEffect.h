#pragma once
#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "SurvivorWasRecentlyUnhookedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorWasRecentlyUnhookedEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _survivorWasRecentlyUnhookedDuration;
    
public:
    USurvivorWasRecentlyUnhookedEffect();
};

