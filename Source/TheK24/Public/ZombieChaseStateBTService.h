#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "ZombieChaseStateBTService.generated.h"

UCLASS()
class UZombieChaseStateBTService : public UBTService_BlueprintBase {
    GENERATED_BODY()
public:
    UZombieChaseStateBTService();
};

