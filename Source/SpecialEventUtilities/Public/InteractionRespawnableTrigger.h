#pragma once
#include "CoreMinimal.h"
#include "RespawnableTrigger.h"
#include "InteractionRespawnableTrigger.generated.h"

class URespawningEventComponent;
class ARespawnableInteractable;

UCLASS()
class SPECIALEVENTUTILITIES_API UInteractionRespawnableTrigger : public URespawnableTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    URespawningEventComponent* _respawningEventComponent;
    
public:
    UFUNCTION()
    void Authority_OnNewRespawnableSubscribed(ARespawnableInteractable* newRespawnableInteractable);
    
    UFUNCTION()
    void Authority_OnInteractionEnded(ARespawnableInteractable* respawnableInteractable);
    
    UInteractionRespawnableTrigger();
};

