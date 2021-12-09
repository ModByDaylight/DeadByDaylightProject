#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorPairQueryEvaluatorSubscriberTest.generated.h"

UCLASS()
class QUERYSERVICE_API AActorPairQueryEvaluatorSubscriberTest : public AActor {
    GENERATED_BODY()
public:
    UFUNCTION()
    void OnRangeChanged(const bool inRange);
    
    AActorPairQueryEvaluatorSubscriberTest();
};

