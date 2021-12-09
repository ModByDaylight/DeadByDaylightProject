#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DedicatedServerStatusAnalytics.generated.h"

USTRUCT()
struct FDedicatedServerStatusAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString DSSessionProvider;
    
    UPROPERTY()
    FString ServerStatus;
    
    UPROPERTY()
    FString GameLiftSessionId;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString SessionEndReason;
    
    UPROPERTY()
    FString FleetId;
    
    UPROPERTY()
    FString IpAddress;
    
    UPROPERTY()
    int32 Port;
    
    UPROPERTY()
    FString DnsName;
    
    DBDANALYTICS_API FDedicatedServerStatusAnalytics();
};

