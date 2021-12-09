#pragma once
#include "CoreMinimal.h"
#include "BTService_Patrol.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_Patrol_PointOfInterest.generated.h"

UCLASS()
class DBDBOTS_API UBTService_Patrol_PointOfInterest : public UBTService_Patrol {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    float OnEnterPatrolRefreshPointsDelay;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBMoveAroundPatrolLocation;
    
    UPROPERTY(EditInstanceOnly)
    float MoveAroundPatrolPointAboveStimulusStrength;
    
    UBTService_Patrol_PointOfInterest();
};

