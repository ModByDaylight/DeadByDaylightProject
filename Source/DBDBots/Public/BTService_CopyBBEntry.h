#pragma once
#include "CoreMinimal.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_CopyBBEntry.generated.h"

UCLASS()
class DBDBOTS_API UBTService_CopyBBEntry : public UBTService_OnRelevantBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBFrom;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBTo;
    
    UPROPERTY(EditInstanceOnly)
    bool CopyOnlyValidKeyValue;
    
    UBTService_CopyBBEntry();
};

