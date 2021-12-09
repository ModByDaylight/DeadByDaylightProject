#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EPlayerRole.h"
#include "ReportAnalytics.generated.h"

USTRUCT()
struct FReportAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ClientIdTransmitter;
    
    UPROPERTY()
    FString ClientIdReceiver;
    
    UPROPERTY()
    FString MirrorsIdTransmitter;
    
    UPROPERTY()
    FString MirrorsIdReceiver;
    
    UPROPERTY()
    EPlayerRole RoleTransmitter;
    
    UPROPERTY()
    EPlayerRole RoleReceiver;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString GameMode;
    
    UPROPERTY()
    FString ReportType;
    
    UPROPERTY()
    FString ReportCategory;
    
    UPROPERTY()
    FString Comments;
    
    DBDANALYTICS_API FReportAnalytics();
};

