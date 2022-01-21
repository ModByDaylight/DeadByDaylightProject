#pragma once
#include "CoreMinimal.h"
#include "Perk.h"
#include "SelfPreservation.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USelfPreservation : public UPerk {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float _hitDistanceToTriggerPerkEffect[3];
    
    UPROPERTY(EditDefaultsOnly)
    float _selfPreservationEffectDuration[3];
    
public:
    USelfPreservation();
};

