#pragma once
#include "CoreMinimal.h"
#include "RarityPerWebDistribution.generated.h"

USTRUCT(BlueprintType)
struct FRarityPerWebDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCount;
    
    DEADBYDAYLIGHT_API FRarityPerWebDistribution();
};

