#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTService_Patrol.generated.h"

UCLASS()
class DBDBOTS_API UBTService_Patrol : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBFilterKey;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<EBasicKeyOperation::Type> FilterOperation;
    
    UPROPERTY(EditInstanceOnly)
    FVector NavMeshFindLocationExtents;
    
    UPROPERTY(EditInstanceOnly)
    float MinPatrolInvestigationDistance;
    
    UPROPERTY(EditInstanceOnly)
    float PatrolPointsValidityCheckInterval;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBPatrolPointOwner;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBPatrolLocation;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBGoToNextPatrolLocation;
    
    UBTService_Patrol();
};

