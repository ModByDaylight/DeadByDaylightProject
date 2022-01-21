#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetBBEntryTime.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_SetBBEntryTime : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBToSetKey;
    
    UBTTask_SetBBEntryTime();
};

