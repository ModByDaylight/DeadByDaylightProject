#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemRarityQEEvaluator.h"
#include "GameEventData.h"
#include "SearchItemRarityQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API USearchItemRarityQEEvaluator : public UItemRarityQEEvaluator {
    GENERATED_BODY()
public:
    USearchItemRarityQEEvaluator();
    UFUNCTION()
    void OnItemSpawnedFromChest(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

