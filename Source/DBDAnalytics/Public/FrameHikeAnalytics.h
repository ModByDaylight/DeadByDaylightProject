#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FrameHikeAnalytics.generated.h"

USTRUCT()
struct FFrameHikeAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FrameDeltaTime;
    
    UPROPERTY()
    float TimeSinceApplicationStarted;
    
    UPROPERTY()
    float CurrentTimeoutThreshold;
    
    UPROPERTY()
    bool IsOverConnectionTimeLimit;
    
    UPROPERTY()
    FString CurrentMap;
    
    UPROPERTY()
    FString CurrentGameMap;
    
    UPROPERTY()
    FString GameFlowStep;
    
    UPROPERTY()
    FString CurrentGameFlowContext;
    
    UPROPERTY()
    FString PreviousGameFlowContext;
    
    UPROPERTY()
    FString NavigationContext;
    
    UPROPERTY()
    FString PreviousNavigationContext;
    
    UPROPERTY()
    FString RecentLogs;
    
    UPROPERTY()
    FString KrakenMatchId;
    
    UPROPERTY()
    float FlushAsyncLoadingTime;
    
    UPROPERTY()
    int32 FlushAsyncLoadingCount;
    
    UPROPERTY()
    int32 SyncLoadCount;
    
    UPROPERTY()
    FString GameType;
    
    UPROPERTY()
    FString NetMode;
    
    DBDANALYTICS_API FFrameHikeAnalytics();
};

