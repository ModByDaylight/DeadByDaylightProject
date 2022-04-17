#pragma once
#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "MaxEventCountQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UMaxEventCountQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _incrementEventCount;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _decrementEventCount;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGameplayTag> _stopEventCount;
    
public:
    UMaxEventCountQEEvaluator();
private:
    UFUNCTION()
    void OnStopEventCount(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnIncrementEventCount(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnDecrementEventCount(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

