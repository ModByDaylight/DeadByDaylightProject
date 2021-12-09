#pragma once
#include "CoreMinimal.h"
#include "AnyActorPairQueryRangeIsTrue.h"
#include "TestAnyActorPairQueryRangeIsTrue.generated.h"

class UActorPairQueryEvaluatorComponent;

UCLASS()
class UTestAnyActorPairQueryRangeIsTrue : public UAnyActorPairQueryRangeIsTrue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UActorPairQueryEvaluatorComponent* _actorPairQueryEvaluatorComponent;
    
public:
    UTestAnyActorPairQueryRangeIsTrue();
};

