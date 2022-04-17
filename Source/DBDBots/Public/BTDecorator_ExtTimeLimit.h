#pragma once
#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BehaviorTree/Decorators/BTDecorator_TimeLimit.h"
#include "AIDisplayDebugInterface.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_ExtTimeLimit.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_ExtTimeLimit : public UBTDecorator_TimeLimit, public IAIDisplayDebugInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FAITunableParameter MaxTimeLimit;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBFilterKey;
    
    UPROPERTY(EditInstanceOnly)
    TEnumAsByte<EBasicKeyOperation::Type> FilterOperation;
    
    UBTDecorator_ExtTimeLimit();
    
    // Fix for true pure virtual functions not being implemented
};

