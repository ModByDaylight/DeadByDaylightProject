#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AIDisplayDebugInterface.h"
#include "AIGoal.h"
#include "AIGoalWeightContainer.h"
#include "DBDAIGoalComponent.generated.h"

class UObject;

UCLASS()
class DBDBOTS_API UDBDAIGoalComponent : public UActorComponent, public IAIDisplayDebugInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<UObject*, FAIGoal> _activeGoals;
    
    UPROPERTY(Transient)
    TMap<UObject*, FAIGoalWeightContainer> _foundWeightedGoals;
    
public:
    UDBDAIGoalComponent();
};

