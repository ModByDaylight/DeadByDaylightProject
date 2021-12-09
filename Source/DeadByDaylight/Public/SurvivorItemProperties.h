#pragma once
#include "CoreMinimal.h"
#include "ECollectableCategory.h"
#include "SurvivorItemProperties.generated.h"

USTRUCT(BlueprintType)
struct FSurvivorItemProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECollectableCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxPopulation;
    
    DEADBYDAYLIGHT_API FSurvivorItemProperties();
};

