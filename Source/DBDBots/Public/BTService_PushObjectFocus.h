#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_PushObjectFocus.generated.h"

UCLASS()
class DBDBOTS_API UBTService_PushObjectFocus : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBFocusObj;
    
    UBTService_PushObjectFocus();
};

