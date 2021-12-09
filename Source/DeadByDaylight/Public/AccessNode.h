#pragma once
#include "CoreMinimal.h"
#include "AccessNode.generated.h"

USTRUCT()
struct FAccessNode {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Id;
    
    UPROPERTY()
    int32 AccessCost;
    
    DEADBYDAYLIGHT_API FAccessNode();
};

