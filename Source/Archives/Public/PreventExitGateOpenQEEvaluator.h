#pragma once
#include "CoreMinimal.h"
#include "EndOfGameQEEvaluator.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "PreventExitGateOpenQEEvaluator.generated.h"

class ACamperPlayer;

UCLASS()
class ARCHIVES_API UPreventExitGateOpenQEEvaluator : public UEndOfGameQEEvaluator {
    GENERATED_BODY()
public:
    UPreventExitGateOpenQEEvaluator();
private:
    UFUNCTION()
    void OnSurvivorLeftMatch(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);
    
    UFUNCTION()
    void OnSurvivorAdded(ACamperPlayer* survivorAdded);
    
public:
    UFUNCTION()
    void OnExitGateOpened(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

