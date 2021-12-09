#pragma once
#include "CoreMinimal.h"
#include "RespawningEventComponent.h"
#include "Anniversary2021EventComponent.generated.h"

class UInteractionRespawnableTrigger;
class UTimedRespawnableTrigger;

UCLASS()
class UAnniversary2021EventComponent : public URespawningEventComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UInteractionRespawnableTrigger* _interactionRespawnableTrigger;
    
    UPROPERTY(Export, Transient)
    UTimedRespawnableTrigger* _timedRespawnableTrigger;
    
    UFUNCTION()
    void Authority_OnIntroComplete();
    
public:
    UAnniversary2021EventComponent();
};

