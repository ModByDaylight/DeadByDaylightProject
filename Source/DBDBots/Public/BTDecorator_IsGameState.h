#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_IsGameState.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsGameState : public UBTDecorator_TickableBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<EArithmeticKeyOperation::Type> RemainingObjectiveOp;
    
    UPROPERTY(EditInstanceOnly)
    int32 NbRemainingObjectives;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<EArithmeticKeyOperation::Type> SurvivorsLeftOp;
    
    UPROPERTY(EditInstanceOnly)
    int32 NbSurvivorsLeft;
    
    UBTDecorator_IsGameState();
};

