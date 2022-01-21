#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "UObject/Object.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.generated.h"

class ADBDPlayer;
class UEvaluatorCondition;

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
    
public:
    UQuestEventEvaluatorBase();
protected:
    UFUNCTION()
    void OnGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData);
    
};

