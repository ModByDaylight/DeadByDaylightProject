#pragma once
#include "CoreMinimal.h"
#include "RankDefinition.generated.h"

USTRUCT(BlueprintType)
struct FRankDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 PipsRequired;
    
    DEADBYDAYLIGHT_API FRankDefinition();
};

