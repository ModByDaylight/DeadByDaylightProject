#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetBBEntry.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_SetBBEntry : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBToSetKey;
    
    UPROPERTY(EditInstanceOnly)
    FString ToSetValue;
    
    UBTTask_SetBBEntry();
};

