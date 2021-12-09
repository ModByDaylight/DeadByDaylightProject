#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClaimStatus.generated.h"

USTRUCT()
struct RETENTIONREWARDSUTILITIES_API FClaimStatus {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool isSet;
    
    UPROPERTY(Transient)
    int32 LastClaimedIndex;
    
    UPROPERTY(Transient)
    FDateTime NextClaimTime;
    
    FClaimStatus();
};

