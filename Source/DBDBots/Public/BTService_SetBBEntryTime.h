#pragma once
#include "CoreMinimal.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SetBBEntryTime.generated.h"

UCLASS()
class DBDBOTS_API UBTService_SetBBEntryTime : public UBTService_OnRelevantBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBToSetKey;
    
    UBTService_SetBBEntryTime();
};

