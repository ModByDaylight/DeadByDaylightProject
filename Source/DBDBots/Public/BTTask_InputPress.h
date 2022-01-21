#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EPawnInputPressTypes.h"
#include "ETaskInputPressModes.h"
#include "AITunableParameter.h"
#include "BTTask_InputPress.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_InputPress : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    EPawnInputPressTypes Input;
    
    UPROPERTY(EditInstanceOnly)
    ETaskInputPressModes InputMode;
    
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter InputPressLoopInterval;
    
    UBTTask_InputPress();
};

