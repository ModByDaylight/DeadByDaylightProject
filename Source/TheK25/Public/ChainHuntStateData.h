#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EChainHuntState.h"
#include "ChainHuntStateData.generated.h"

USTRUCT(BlueprintType)
struct FChainHuntStateData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FDateTime StartTime;
    
    UPROPERTY()
    EChainHuntState ChainHuntState;
    
    THEK25_API FChainHuntStateData();
};

