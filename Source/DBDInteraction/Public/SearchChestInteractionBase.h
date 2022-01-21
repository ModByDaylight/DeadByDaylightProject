#pragma once
#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "GameplayTagContainer.h"
#include "SearchChestInteractionBase.generated.h"

class ASearchable;
class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
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
    
public:
    USearchChestInteractionBase();
private:
    UFUNCTION(BlueprintCallable)
    void FireChestScoreEvent(const ADBDPlayer* player);
    
};

