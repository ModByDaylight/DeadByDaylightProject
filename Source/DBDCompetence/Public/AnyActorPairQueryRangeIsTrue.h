#pragma once
#include "CoreMinimal.h"
#include "RangeBasedCondition.h"
#include "AnyActorPairQueryRangeIsTrue.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UAnyActorPairQueryRangeIsTrue : public URangeBasedCondition {
    GENERATED_BODY()
public:
    UAnyActorPairQueryRangeIsTrue();
private:
    UFUNCTION()
    void OnInRangeChanged(const bool inRange);
    
};

