#pragma once
#include "CoreMinimal.h"
#include "Interactable.h"
#include "InteractionEndedEventDelegate.h"
#include "IsInteractingChangedEventDelegate.h"
#include "RespawnableInteractable.generated.h"

UCLASS()
class SPECIALEVENTUTILITIES_API ARespawnableInteractable : public AInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractionEndedEvent OnInteractionEnded;
    
    UPROPERTY(BlueprintAssignable)
    FIsInteractingChangedEvent OnIsInteractingChanged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsHidden)
    bool _isHidden;
    
public:
    ARespawnableInteractable();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
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
    
};

