#pragma once
#include "CoreMinimal.h"
#include "NearKillerQEEvaluator.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "InLockerNearKillerQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UInLockerNearKillerQEEvaluator : public UNearKillerQEEvaluator {
    GENERATED_BODY()
public:
    UInLockerNearKillerQEEvaluator();
private:
    UFUNCTION()
    void OnClosetHideExit(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnClosetHideEnter(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

