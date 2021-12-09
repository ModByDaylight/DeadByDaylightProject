#pragma once
#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "FeaturedPurchaseOptionAnalytics.generated.h"

USTRUCT()
struct FFeaturedPurchaseOptionAnalytics : public FUniquelyIdentifiedAnalytic {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString itemID;
    
    UPROPERTY()
    FString price;
    
    DBDANALYTICS_API FFeaturedPurchaseOptionAnalytics();
};

