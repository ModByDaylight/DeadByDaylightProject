#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetRandomNavPoint.generated.h"

class UNavigationQueryFilter;

UCLASS()
class DBDBOTS_API UBTTask_SetRandomNavPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBFromLocation;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBToLocation;
    
    UPROPERTY(EditInstanceOnly)
    float MinAroundRadius;
    
    UPROPERTY(EditInstanceOnly)
    float MaxAroundRadius;
    
    UPROPERTY(EditInstanceOnly)
    int32 MaxNbAttempts;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UBTTask_SetRandomNavPoint();
};

