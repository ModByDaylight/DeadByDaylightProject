#pragma once
#include "CoreMinimal.h"
#include "RespawningEventComponent.h"
#include "Anniversary2021EventComponent.generated.h"

class UInteractionRespawnableTrigger;
class UTimedRespawnableTrigger;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAnniversary2021EventComponent : public URespawningEventComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UInteractionRespawnableTrigger* _interactionRespawnableTrigger;
    
    UPROPERTY(Export, Transient)
    UTimedRespawnableTrigger* _timedRespawnableTrigger;
    
public:
    UAnniversary2021EventComponent();
private:
    UFUNCTION()
    void Authority_OnIntroComplete();
    
};

