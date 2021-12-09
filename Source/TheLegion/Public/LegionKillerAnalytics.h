#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "LegionKillerAnalytics.generated.h"

USTRUCT()
struct FLegionKillerAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MatchId;
    
    UPROPERTY()
    int32 Pallet;
    
    THELEGION_API FLegionKillerAnalytics();
};

