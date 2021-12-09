#pragma once
#include "CoreMinimal.h"
#include "EndOfGameQEEvaluator.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "PreventExitGateOpenQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UPreventExitGateOpenQEEvaluator : public UEndOfGameQEEvaluator {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnExitGateOpened(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
    UPreventExitGateOpenQEEvaluator();
};

