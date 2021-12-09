#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BTTask_MoveToAbortIfStuck.generated.h"

UCLASS()
class UBTTask_MoveToAbortIfStuck : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float _deltaConsideredStuck;
    
    UPROPERTY(EditAnywhere)
    float _maxTimeStuck;
    
public:
    UBTTask_MoveToAbortIfStuck();
};

