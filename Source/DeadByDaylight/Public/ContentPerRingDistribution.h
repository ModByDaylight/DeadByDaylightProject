#pragma once
#include "CoreMinimal.h"
#include "ContentPerRingDistribution.generated.h"

USTRUCT(BlueprintType)
struct FContentPerRingDistribution {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> WeightList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> MinCountList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<int32> MaxCountList;
    
    DEADBYDAYLIGHT_API FContentPerRingDistribution();
};

