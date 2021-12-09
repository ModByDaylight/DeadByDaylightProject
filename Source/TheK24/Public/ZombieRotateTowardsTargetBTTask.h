#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "ZombieRotateTowardsTargetBTTask.generated.h"

UCLASS()
class UZombieRotateTowardsTargetBTTask : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
    UZombieRotateTowardsTargetBTTask();
};

