#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RespawningEventComponent.generated.h"

class URespawnableStrategy;
class URespawnablePositioner;
class ARespawnableInteractable;

UCLASS()
class SPECIALEVENTUTILITIES_API URespawningEventComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    URespawnableStrategy* _respawnableStrategy;
    
private:
    UPROPERTY(Export, Transient)
    URespawnablePositioner* _respawnablePositioner;
    
    UFUNCTION(Exec)
    void DBD_ForceRespawnSpecialEventObject();
    
protected:
    UFUNCTION()
    void Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(ARespawnableInteractable* respawnableInteractable, bool isInteracting);
    
public:
    URespawningEventComponent();
};

