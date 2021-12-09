#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FeaturedPurchaseAnalytics.generated.h"

USTRUCT()
struct FFeaturedPurchaseAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString itemID;
    
    UPROPERTY()
    FString price;
    
    DBDANALYTICS_API FFeaturedPurchaseAnalytics();
};

