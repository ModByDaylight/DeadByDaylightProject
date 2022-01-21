#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EndOfGameQEEvaluator.h"
#include "GameEventData.h"
#include "PreventExitGateOpenQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UPreventExitGateOpenQEEvaluator : public UEndOfGameQEEvaluator {
    GENERATED_BODY()
public:
    UPreventExitGateOpenQEEvaluator();
    UFUNCTION()
    void OnExitGateOpened(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

