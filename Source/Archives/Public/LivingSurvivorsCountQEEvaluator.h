#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "LivingSurvivorsCountQEEvaluator.generated.h"

class ACamperPlayer;

UCLASS()
class ULivingSurvivorsCountQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
    ULivingSurvivorsCountQEEvaluator();
private:
    UFUNCTION()
    void OnSurvivorRemoved(ACamperPlayer* survivorRemoved);
    
    UFUNCTION()
    void OnSurvivorAdded(ACamperPlayer* survivorAdded);
    
};

