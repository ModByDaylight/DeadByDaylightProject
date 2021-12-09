#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RespawnablePositioner.generated.h"

class ARespawnableInteractable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRespawnablePositionerOnIsInteractingWithAnyRespawnableInteractableChangedEvent, ARespawnableInteractable*, respawnableInteractable, bool, isInteracting);

UCLASS(BlueprintType)
class SPECIALEVENTUTILITIES_API URespawnablePositioner : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRespawnablePositionerOnIsInteractingWithAnyRespawnableInteractableChangedEvent OnIsInteractingWithAnyRespawnableInteractableChangedEvent;
    
private:
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARespawnableInteractable*> _respawnableInteractables;
    
    UFUNCTION()
    void Authority_OnIsInteractingChangedEvent(ARespawnableInteractable* respawnableInteractable, bool isInteracting);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<ARespawnableInteractable*> Authority_GetRespawnables() const;
    
    URespawnablePositioner();
};

