#pragma once
#include "CoreMinimal.h"
#include "RelevantNodeMemory.generated.h"

class UBTNode;

USTRUCT(BlueprintType)
struct FRelevantNodeMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    UBTNode* Node;
    
    DBDBOTS_API FRelevantNodeMemory();
};

