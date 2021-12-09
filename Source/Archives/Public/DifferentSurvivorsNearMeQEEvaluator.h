#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "DifferentSurvivorsNearMeQEEvaluator.generated.h"

class ADBDPlayer;

UCLASS()
class ARCHIVES_API UDifferentSurvivorsNearMeQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TSet<ADBDPlayer*> _foundSurvivors;
    
public:
    UDifferentSurvivorsNearMeQEEvaluator();
};

