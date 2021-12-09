#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FeaturedBrowsingAnalytics.generated.h"

USTRUCT()
struct FFeaturedBrowsingAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString itemID;
    
    UPROPERTY()
    FString price;
    
    UPROPERTY()
    FString contentGroupID;
    
    UPROPERTY()
    FString startDate;
    
    UPROPERTY()
    FString endDate;
    
    UPROPERTY()
    FString stringID;
    
    DBDANALYTICS_API FFeaturedBrowsingAnalytics();
};

