#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IsInteractingWithAnyRespawnableInteractableChangedEventDelegate.h"
#include "RespawnablePositioner.generated.h"

class ARespawnableInteractable;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API URespawnablePositioner : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIsInteractingWithAnyRespawnableInteractableChangedEvent OnIsInteractingWithAnyRespawnableInteractableChangedEvent;
    
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARespawnableInteractable*> _respawnableInteractables;
    
public:
    URespawnablePositioner();
private:
    UFUNCTION()
    void Authority_OnIsInteractingChangedEvent(ARespawnableInteractable* respawnableInteractable, bool isInteracting);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<ARespawnableInteractable*> Authority_GetRespawnables() const;
    
};

