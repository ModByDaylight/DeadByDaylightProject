#pragma once
#include "CoreMinimal.h"
#include "BaseSingleStructIndexAnalytics.h"
#include "FreeTicketAnalytics.generated.h"

USTRUCT()
struct FFreeTicketAnalytics : public FBaseSingleStructIndexAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TicketId;
    
    UPROPERTY()
    FString TicketTransactionType;
    
    UPROPERTY()
    FString TicketSource;
    
    UPROPERTY()
    int32 DurationInSeconds;
    
    UPROPERTY()
    FString CharacterUsed;
    
    DBDANALYTICS_API FFreeTicketAnalytics();
};

