#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FrameTravelTimeAnalytics.generated.h"

USTRUCT()
struct FFrameTravelTimeAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString DynamicRange;
    
    UPROPERTY()
    FString PixelDensity;
    
    UPROPERTY()
    FString RenderResolution;
    
    UPROPERTY()
    float FrameIssuedToClientArrivalTotalTime;
    
    UPROPERTY()
    float FrameIssuedToBeginRenderingTime;
    
    UPROPERTY()
    float FrameRenderingTime;
    
    UPROPERTY()
    float FrameEncodingTime;
    
    UPROPERTY()
    float FrameFinishedEncodingToClientArrivalTime;
    
    DBDANALYTICS_API FFrameTravelTimeAnalytics();
};

