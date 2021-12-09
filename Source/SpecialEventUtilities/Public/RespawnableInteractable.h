#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "RespawnableInteractable.generated.h"

class ARespawnableInteractable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRespawnableInteractableOnInteractionEnded, ARespawnableInteractable*, respawnableInteractable);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRespawnableInteractableOnIsInteractingChanged, ARespawnableInteractable*, respawnableInteractable, bool, isInteracting);

UCLASS()
class SPECIALEVENTUTILITIES_API ARespawnableInteractable : public AInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRespawnableInteractableOnInteractionEnded OnInteractionEnded;
    
    UPROPERTY(BlueprintAssignable)
    FRespawnableInteractableOnIsInteractingChanged OnIsInteractingChanged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsHidden)
    bool _isHidden;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUnhidden();
    
private:
    UFUNCTION()
    void OnRep_IsHidden();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHidden();
    
private:
    UFUNCTION(BlueprintPure)
    bool IsHidden() const;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ARespawnableInteractable();
};

