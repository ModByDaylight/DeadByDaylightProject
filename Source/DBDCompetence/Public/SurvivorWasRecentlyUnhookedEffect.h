#pragma once
#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "StatusEffect.h"
#include "SurvivorWasRecentlyUnhookedEffect.generated.h"

UCLASS()
class USurvivorWasRecentlyUnhookedEffect : public UStatusEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FDBDTunableRowHandle _survivorWasRecentlyUnhookedDuration;
    
public:
    USurvivorWasRecentlyUnhookedEffect();
};

