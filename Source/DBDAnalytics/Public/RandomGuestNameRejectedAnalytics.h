#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "RandomGuestNameRejectedAnalytics.generated.h"

USTRUCT()
struct FRandomGuestNameRejectedAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString PlayerName;
    
    UPROPERTY()
    int32 RandomGuestNameRetryCount;
    
    DBDANALYTICS_API FRandomGuestNameRejectedAnalytics();
};

