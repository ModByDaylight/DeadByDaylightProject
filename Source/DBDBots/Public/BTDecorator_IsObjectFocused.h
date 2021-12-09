#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EDecoratorIsObjFocusedFilter.h"
#include "BTDecorator_IsObjectFocused.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_IsObjectFocused : public UBTDecorator_TickableBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBObj;
    
    UPROPERTY(EditInstanceOnly)
    EDecoratorIsObjFocusedFilter Filter;
    
    UBTDecorator_IsObjectFocused();
};

