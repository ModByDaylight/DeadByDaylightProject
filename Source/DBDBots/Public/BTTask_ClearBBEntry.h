#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ClearBBEntry.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_ClearBBEntry : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBToResetKey;
    
    UBTTask_ClearBBEntry();
};

