#pragma once
#include "CoreMinimal.h"
#include "DailyRewardData.h"
#include "UObject/NoExportTypes.h"
#include "DailyRewardCalendarData.generated.h"

USTRUCT()
struct FDailyRewardCalendarData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FDailyRewardData> DailyRewardList;
    
    UPROPERTY(Transient)
    int32 CurrentlyActiveDailyRewardIndex;
    
    UPROPERTY(Transient)
    FDateTime CalendarStartDate;
    
    UPROPERTY(Transient)
    FDateTime CalendarExpirationDate;
    
    UPROPERTY(Transient)
    bool IsSet;
    
    DEADBYDAYLIGHT_API FDailyRewardCalendarData();
};

