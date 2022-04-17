#pragma once
#include "CoreMinimal.h"
#include "RespawnableTrigger.h"
#include "InteractionRespawnableTrigger.generated.h"

class ARespawnableInteractable;
class URespawningEventComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API UInteractionRespawnableTrigger : public URespawnableTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    URespawningEventComponent* _respawningEventComponent;
    
public:
    UInteractionRespawnableTrigger();
    UFUNCTION()
    void Authority_OnNewRespawnableSubscribed(ARespawnableInteractable* newRespawnableInteractable);
    
    UFUNCTION()
    void Authority_OnInteractionEnded(ARespawnableInteractable* respawnableInteractable);
    
};

