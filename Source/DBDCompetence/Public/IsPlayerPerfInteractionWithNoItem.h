#pragma once
#include "CoreMinimal.h"
#include "BaseIsPlayerPerformingInteraction.h"
#include "GameplayTagContainer.h"
#include "ELoadoutItemType.h"
#include "IsPlayerPerfInteractionWithNoItem.generated.h"

UCLASS()
class UIsPlayerPerfInteractionWithNoItem : public UBaseIsPlayerPerformingInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _useItemInteractionSemantics;
    
    UPROPERTY(EditDefaultsOnly)
    ELoadoutItemType _itemType;
    
    UFUNCTION()
    void OnCollectableChargeStateChange(bool empty);
    
public:
    UIsPlayerPerfInteractionWithNoItem();
};

