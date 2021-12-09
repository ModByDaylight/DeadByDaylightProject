#pragma once
#include "CoreMinimal.h"
#include "ItemRarityQEEvaluator.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "SearchItemRarityQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API USearchItemRarityQEEvaluator : public UItemRarityQEEvaluator {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnItemSpawnedFromChest(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    USearchItemRarityQEEvaluator();
};

