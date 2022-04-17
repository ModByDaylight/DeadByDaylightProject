#pragma once
#include "CoreMinimal.h"
#include "PendingInstantAction.h"
#include "PendingInstantActionList.generated.h"

USTRUCT(BlueprintType)
struct FPendingInstantActionList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPendingInstantAction> Actions;
    
    REVERSIBLEACTIONSYSTEM_API FPendingInstantActionList();
};

