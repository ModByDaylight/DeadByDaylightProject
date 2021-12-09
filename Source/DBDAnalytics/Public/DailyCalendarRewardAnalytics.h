#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "DailyCalendarRewardAnalytics.generated.h"

USTRUCT()
struct FDailyCalendarRewardAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ItemId;
    
    UPROPERTY()
    int32 NumberOfRewards;
    
    UPROPERTY()
    int32 RewardIndex;
    
    UPROPERTY()
    int32 ItemAmount;
    
    DBDANALYTICS_API FDailyCalendarRewardAnalytics();
};

