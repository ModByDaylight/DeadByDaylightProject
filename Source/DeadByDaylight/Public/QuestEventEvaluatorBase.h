#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.generated.h"

class UEvaluatorCondition;
class ADBDPlayer;

UCLASS()
class DEADBYDAYLIGHT_API UQuestEventEvaluatorBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ADBDPlayer* _dbdPlayer;
    
private:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UEvaluatorCondition>> _evaluatorConditionsClass;
    
    UPROPERTY(Transient)
    TArray<UEvaluatorCondition*> _evaluatorConditions;
    
protected:
    UFUNCTION()
    void OnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
public:
    UQuestEventEvaluatorBase();
};

