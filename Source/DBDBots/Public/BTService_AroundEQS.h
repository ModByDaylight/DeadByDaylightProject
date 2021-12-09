#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_RunEQS.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_AroundEQS.generated.h"

UCLASS()
class DBDBOTS_API UBTService_AroundEQS : public UBTService_RunEQS {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBAroundObj;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBAroundLocation;
    
    UPROPERTY(EditInstanceOnly)
    float ValidLocationRefreshInterval;
    
    UPROPERTY(EditInstanceOnly)
    float InvalidLocationRefreshInterval;
    
    UPROPERTY(EditInstanceOnly)
    float InvalidateLocationUnderTargetDistance;
    
    UBTService_AroundEQS();
};

