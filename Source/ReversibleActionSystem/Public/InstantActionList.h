#pragma once
#include "CoreMinimal.h"
#include "InstantActionList.generated.h"

class UBaseReversibleInstantActionHandler;

USTRUCT(BlueprintType)
struct FInstantActionList {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UBaseReversibleInstantActionHandler*> Actions;
    
    REVERSIBLEACTIONSYSTEM_API FInstantActionList();
};

