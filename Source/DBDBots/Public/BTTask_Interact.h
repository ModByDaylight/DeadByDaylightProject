#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EPawnInputPressTypes.h"
#include "BTTask_Interact.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_Interact : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBInteractorObj;
    
    UPROPERTY(EditInstanceOnly)
    EPawnInputPressTypes Input;
    
    UPROPERTY(EditInstanceOnly)
    float OnFailFocusCooldownDuration;
    
    UPROPERTY(EditInstanceOnly)
    bool PropagateCooldownOnInteractable;
    
    UPROPERTY(EditInstanceOnly)
    float FailStartInteractTimeLimit;
    
    UBTTask_Interact();
};

