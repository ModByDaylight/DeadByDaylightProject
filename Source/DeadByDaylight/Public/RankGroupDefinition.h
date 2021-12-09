#pragma once
#include "CoreMinimal.h"
#include "RankGroupDefinition.generated.h"

USTRUCT(BlueprintType)
struct FRankGroupDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RankThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    TArray<float> PipThresholds;
    
    DEADBYDAYLIGHT_API FRankGroupDefinition();
};

