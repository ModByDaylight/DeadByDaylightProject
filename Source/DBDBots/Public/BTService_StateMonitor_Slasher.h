#pragma once
#include "CoreMinimal.h"
#include "BTService_StateMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_StateMonitor_Slasher.generated.h"

UCLASS()
class DBDBOTS_API UBTService_StateMonitor_Slasher : public UBTService_StateMonitor {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsCarrying;
    
    UBTService_StateMonitor_Slasher();
};

