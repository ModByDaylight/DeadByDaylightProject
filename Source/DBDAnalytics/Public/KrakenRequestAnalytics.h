#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "KrakenRequestAnalytics.generated.h"

USTRUCT()
struct FKrakenRequestAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString KrakenUrl;
    
    UPROPERTY()
    FString Method;
    
    UPROPERTY()
    FString Route;
    
    UPROPERTY()
    FString Status;
    
    UPROPERTY()
    int32 ResponseCode;
    
    UPROPERTY()
    int32 ProviderError;
    
    UPROPERTY()
    uint32 AttemptCount;
    
    UPROPERTY()
    bool Success;
    
    UPROPERTY()
    bool CanRetry;
    
    UPROPERTY()
    bool WillRetry;
    
    UPROPERTY()
    FString Country;
    
    UPROPERTY()
    float AttemptElapsedTime;
    
    UPROPERTY()
    float TotalElapsedTime;
    
    UPROPERTY()
    float TotalElapsedTimeCapped;
    
    DBDANALYTICS_API FKrakenRequestAnalytics();
};

