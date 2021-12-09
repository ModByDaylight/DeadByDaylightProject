#pragma once
#include "CoreMinimal.h"
#include "CloudInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FCloudInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 DefinitionId;
    
    UPROPERTY()
    uint64 InstanceId;
    
    DEADBYDAYLIGHT_API FCloudInventoryItem();
};

