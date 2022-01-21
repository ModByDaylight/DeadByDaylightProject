#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetFocusCooldown.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_SetFocusCooldown : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBOnObject;
    
    UPROPERTY(EditInstanceOnly)
    FName ContextName;
    
    UPROPERTY(EditInstanceOnly)
    bool InfiniteDuration;
    
    UPROPERTY(EditInstanceOnly)
    float Duration;
    
    UBTTask_SetFocusCooldown();
};

