#pragma once
#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "AnyActorPairQueryRangeIsTrue.generated.h"

UCLASS()
class DBDCOMPETENCE_API UAnyActorPairQueryRangeIsTrue : public URangeBasedCondition {
    GENERATED_BODY()
public:
private:
    UFUNCTION()
    void OnInRangeChanged(const bool inRange);
    
public:
    UAnyActorPairQueryRangeIsTrue();
};

