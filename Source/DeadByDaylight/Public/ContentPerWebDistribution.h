#pragma once
#include "CoreMinimal.h"
#include "ContentPerWebDistribution.generated.h"

USTRUCT(BlueprintType)
struct FContentPerWebDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 CumulativeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxCount;
    
    DEADBYDAYLIGHT_API FContentPerWebDistribution();
};

