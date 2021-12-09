#pragma once
#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "GameplayTagContainer.h"
#include "QuestEventDefinition.generated.h"

class UQuestEventEvaluatorBase;

USTRUCT(BlueprintType)
struct FQuestEventDefinition : public FDBDTableRowBaseWithId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGameplayTag> TrackedGameEvents;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UQuestEventEvaluatorBase> QuestEventEvaluator;
    
    DEADBYDAYLIGHT_API FQuestEventDefinition();
};

