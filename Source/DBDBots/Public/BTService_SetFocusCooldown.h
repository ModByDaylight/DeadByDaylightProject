#pragma once
#include "CoreMinimal.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SetFocusCooldown.generated.h"

UCLASS()
class DBDBOTS_API UBTService_SetFocusCooldown : public UBTService_OnRelevantBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly)
    FBlackboardKeySelector BBOnObject;
    
    UPROPERTY(EditInstanceOnly)
    FName ContextName;
    
    UPROPERTY(EditInstanceOnly)
    bool InfiniteDuration;
    
    UPROPERTY(EditInstanceOnly)
    float Duration;
    
    UBTService_SetFocusCooldown();
};

