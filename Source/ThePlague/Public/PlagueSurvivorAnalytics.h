#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PlagueSurvivorAnalytics.generated.h"

USTRUCT()
struct FPlagueSurvivorAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 BecomeInfectCount;
    
    UPROPERTY()
    int32 RegularVomitHits;
    
    UPROPERTY()
    int32 SuperVomitHits;
    
    UPROPERTY()
    int32 CleanSicknessCount;
    
    UPROPERTY()
    float TimeWithSickness;
    
    UPROPERTY()
    float TimeWithMaximumSickness;
    
    UPROPERTY()
    float TimeInSuperMode;
    
    THEPLAGUE_API FPlagueSurvivorAnalytics();
};

