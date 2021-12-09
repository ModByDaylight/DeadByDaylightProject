#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DDoSDetectionAnalytics.generated.h"

USTRUCT()
struct FDDoSDetectionAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString Severity;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 NonConnPacketCounter;
    
    UPROPERTY()
    int32 NetConnPacketCounter;
    
    UPROPERTY()
    int32 DisconnPacketCounter;
    
    UPROPERTY()
    int32 BadPacketCounter;
    
    UPROPERTY()
    int32 ErrorPacketCounter;
    
    UPROPERTY()
    int32 DroppedPacketCounter;
    
    DBDANALYTICS_API FDDoSDetectionAnalytics();
};

