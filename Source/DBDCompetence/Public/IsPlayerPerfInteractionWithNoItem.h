#pragma once
#include "CoreMinimal.h"
#include "BaseIsPlayerPerformingInteraction.h"
#include "GameplayTagContainer.h"
#include "ELoadoutItemType.h"
#include "IsPlayerPerfInteractionWithNoItem.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UIsPlayerPerfInteractionWithNoItem : public UBaseIsPlayerPerformingInteraction {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FGameplayTagContainer _useItemInteractionSemantics;
    
    UPROPERTY(EditDefaultsOnly)
    ELoadoutItemType _itemType;
    
public:
    UIsPlayerPerfInteractionWithNoItem();
private:
    UFUNCTION()
    void OnCollectableChargeStateChange(bool empty);
    
};

