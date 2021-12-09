#pragma once
#include "CoreMinimal.h"
#include "WeightedWishedObjectMapContainer.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FWeightedWishedObjectMapContainer {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<UObject*, float> WeightedWishedObjectMap;
    
    DBDBOTS_API FWeightedWishedObjectMapContainer();
};

