#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_StateMonitor.generated.h"

UCLASS()
class DBDBOTS_API UBTService_StateMonitor : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBIsIntroCompleted;
    
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBDifficultyLevel;
    
    UBTService_StateMonitor();
};

