#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetIsChased.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_SetIsChased : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    bool ToSetValue;
    
    UBTTask_SetIsChased();
};

