#pragma once
#include "CoreMinimal.h"
#include "ActorsInRangeBool.generated.h"

class UActorPairQueryEvaluatorComponent;
class AActor;

USTRUCT()
struct QUERYSERVICE_API FActorsInRangeBool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UActorPairQueryEvaluatorComponent* _actorPairQueryComponent;
    
    UPROPERTY()
    AActor* _sourceActor;
    
    UPROPERTY()
    AActor* _otherActor;
    
    UPROPERTY()
    float _range;
    
    UPROPERTY()
    bool _inRange;
    
public:
    FActorsInRangeBool();
};

