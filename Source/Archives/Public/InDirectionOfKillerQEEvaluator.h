#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "InDirectionOfKillerQEEvaluator.generated.h"

class ADBDPlayer;

UCLASS()
class UInDirectionOfKillerQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    ADBDPlayer* _killer;
    
public:
    UInDirectionOfKillerQEEvaluator();
};

