#pragma once
#include "CoreMinimal.h"
#include "WeightedItem.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FWeightedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<AActor> Element;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    DEADBYDAYLIGHT_API FWeightedItem();
};

