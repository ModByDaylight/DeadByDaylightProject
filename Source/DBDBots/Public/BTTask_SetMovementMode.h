#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ECharacterMovementTypes.h"
#include "BTTask_SetMovementMode.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_SetMovementMode : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    ECharacterMovementTypes MovementMode;
    
    UBTTask_SetMovementMode();
};

