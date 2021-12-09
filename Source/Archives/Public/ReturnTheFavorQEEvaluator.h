#pragma once
#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "ReturnTheFavorQEEvaluator.generated.h"

class ADBDPlayer;

UCLASS(Abstract)
class UReturnTheFavorQEEvaluator : public UQuestEventEvaluatorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSet<FGameplayTag> _favorToReturnEvents;
    
    UPROPERTY(Transient)
    TSet<TWeakObjectPtr<ADBDPlayer>> _instigatorList;
    
public:
    UReturnTheFavorQEEvaluator();
};

