#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_IsExitOpened.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsExitOpened : public UBTDecorator_TickableBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBExitObj;
    
    UBTDecorator_IsExitOpened();
};

