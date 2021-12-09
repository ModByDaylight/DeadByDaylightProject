#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DetailedScoreAnalytics.generated.h"

USTRUCT()
struct FDetailedScoreAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ScorerMirrorsId;
    
    UPROPERTY()
    FString TargetMirrorsId;
    
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FName ScoreTypeId;
    
    UPROPERTY()
    int32 ScoreExperience;
    
    UPROPERTY()
    float ElapsedMatchTime;
    
    UPROPERTY()
    float InstigatorCoordinateX;
    
    UPROPERTY()
    float InstigatorCoordinateY;
    
    UPROPERTY()
    float InstigatorCoordinateZ;
    
    UPROPERTY()
    float TargetCoordinateX;
    
    UPROPERTY()
    float TargetCoordinateY;
    
    UPROPERTY()
    float TargetCoordinateZ;
    
    DBDANALYTICS_API FDetailedScoreAnalytics();
};

