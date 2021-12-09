#pragma once
#include "CoreMinimal.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_ClearBBEntry.generated.h"

UCLASS()
class DBDBOTS_API UBTService_ClearBBEntry : public UBTService_OnRelevantBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBToResetKey;
    
    UBTService_ClearBBEntry();
};

