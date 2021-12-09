#pragma once
#include "CoreMinimal.h"
#include "DistanceTrackerCase.generated.h"

USTRUCT(BlueprintType)
struct QUERYSERVICE_API FDistanceTrackerCase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    float _distanceToTrackSquared;
    
    UPROPERTY()
    bool _inRange;
    
public:
    FDistanceTrackerCase();
};

