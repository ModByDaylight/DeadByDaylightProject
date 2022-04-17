#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PendingInstantAction.generated.h"

class UBaseReversibleInstantActionHandler;

USTRUCT(BlueprintType)
struct FPendingInstantAction {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBaseReversibleInstantActionHandler* Handler;
    
    UPROPERTY()
    FTimerHandle TimerHandle;
    
    REVERSIBLEACTIONSYSTEM_API FPendingInstantAction();
};

