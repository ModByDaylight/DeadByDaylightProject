#pragma once
#include "CoreMinimal.h"
#include "BaseIsPlayerPerformingInteraction.h"
#include "IsPlayerPerformingItemInteraction.generated.h"

class ADBDPlayer;

UCLASS()
class UIsPlayerPerformingItemInteraction : public UBaseIsPlayerPerformingInteraction {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnCollectablePickedUp(ADBDPlayer* player);
    
    UFUNCTION()
    void OnCollectableDropped();
    
    UFUNCTION()
    void OnCollectableChargeStateChange(bool empty);
    
public:
    UIsPlayerPerformingItemInteraction();
};

