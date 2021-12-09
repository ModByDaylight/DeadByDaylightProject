#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ChargeableInteractionDefinition.h"
#include "SearchChestInteractionBase.generated.h"

class ASearchable;
class ADBDPlayer;

UCLASS(EditInlineNew)
class USearchChestInteractionBase : public UChargeableInteractionDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool _handleCompletionScoreEvents;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTag _searchableCompleteContributionPercentTag;
    
    UPROPERTY(Transient)
    bool _scoreEventFired;
    
    UPROPERTY(Transient)
    ASearchable* _owningChest;
    
    UPROPERTY(Transient)
    bool _onLastInteractionWasComplete;
    
    UFUNCTION(BlueprintCallable)
    void FireChestScoreEvent(const ADBDPlayer* player);
    
public:
    USearchChestInteractionBase();
};

