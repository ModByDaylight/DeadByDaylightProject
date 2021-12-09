#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DetailedHitAnalytics.generated.h"

USTRUCT()
struct FDetailedHitAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    FString InstigatorMirrorsId;
    
    UPROPERTY()
    FString TargetMirrorsId;
    
    UPROPERTY()
    float Ping;
    
    UPROPERTY()
    float HitTimestamp;
    
    UPROPERTY()
    bool IsValidHit;
    
    UPROPERTY()
    bool IsValidDistance;
    
    UPROPERTY()
    bool IsValidCollision;
    
    UPROPERTY()
    float RecorderCacheTimespan;
    
    UPROPERTY()
    float MaximumDistance;
    
    UPROPERTY()
    float CapsuleInflation;
    
    UPROPERTY()
    FString InstigatorName;
    
    UPROPERTY()
    FString HitPrimitiveName;
    
    UPROPERTY()
    float InstigatorCoordinateX;
    
    UPROPERTY()
    float InstigatorCoordinateY;
    
    UPROPERTY()
    float InstigatorCoordinateZ;
    
    UPROPERTY()
    float InstigatorRotationX;
    
    UPROPERTY()
    float InstigatorRotationY;
    
    UPROPERTY()
    float InstigatorRotationZ;
    
    UPROPERTY()
    float TargetLocationInstigatorTimestamp;
    
    UPROPERTY()
    float TargetCoordinateX;
    
    UPROPERTY()
    float TargetCoordinateY;
    
    UPROPERTY()
    float TargetCoordinateZ;
    
    UPROPERTY()
    float Distance;
    
    DBDANALYTICS_API FDetailedHitAnalytics();
};

