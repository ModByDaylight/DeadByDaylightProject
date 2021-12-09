#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsNearestThan.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsNearestThan : public UBTDecorator_TickableBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBFrom;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBThan;
    
    UPROPERTY(EditInstanceOnly)
    float AddDistanceBuffer;
    
    UBTDecorator_IsNearestThan();
};

