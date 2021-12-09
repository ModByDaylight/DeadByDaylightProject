#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "AIGoalWeightContainer.h"
#include "BTService_GoalCoordinator.generated.h"

class UObject;

UCLASS()
class DBDBOTS_API UBTService_GoalCoordinator : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<UObject*, FAIGoalWeightContainer> _managedGoals;
    
public:
    UBTService_GoalCoordinator();
};

