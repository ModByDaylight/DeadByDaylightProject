#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RetentionReward.h"
#include "EClaimType.h"
#include "RetentionCalendar.generated.h"

USTRUCT()
struct RETENTIONREWARDSUTILITIES_API FRetentionCalendar {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FString Id;
    
    UPROPERTY(Transient)
    FDateTime StartTime;
    
    UPROPERTY(Transient)
    FDateTime EndTime;
    
    UPROPERTY(Transient)
    EClaimType ClaimType;
    
    UPROPERTY(Transient)
    TArray<FRetentionReward> Rewards;
    
    FRetentionCalendar();
};

