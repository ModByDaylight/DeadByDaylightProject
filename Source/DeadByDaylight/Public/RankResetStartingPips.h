#pragma once
#include "CoreMinimal.h"
#include "RankResetStartingPips.generated.h"

USTRUCT()
struct FRankResetStartingPips {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NewPipAmount;
    
    DEADBYDAYLIGHT_API FRankResetStartingPips();
};

