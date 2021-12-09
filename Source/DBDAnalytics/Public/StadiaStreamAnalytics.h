#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "StadiaStreamAnalytics.generated.h"

USTRUCT()
struct FStadiaStreamAnalytics : public FUniquelyIdentifiedAnalytic {
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
    float NetworkDelayForInputTime;
    
    UPROPERTY()
    float NetworkDelayForVideoTime;
    
    UPROPERTY()
    float PercentFramesAbove60FPS;
    
    UPROPERTY()
    float PercentFramesBelow60FPS;
    
    UPROPERTY()
    float PercentFramesBelow45FPS;
    
    UPROPERTY()
    float PercentFramesBelow30FPS;
    
    UPROPERTY()
    float PercentFramesBelow20FPS;
    
    DBDANALYTICS_API FStadiaStreamAnalytics();
};

